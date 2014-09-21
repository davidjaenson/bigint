/**
* An implementation of immutable arbitrarily large integers.
* Rounds towards negative inf
**/

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "bigint.h"

#define BIGINT_BLOCK_BIT_SIZE (sizeof(unsigned int) * 8)

struct bigint_t {
	signed char sign;
	size_t size;
	unsigned int *data;
};


/*
* Allocates a new bigint with the value of <n>.
*
* @param n		The number to initialize the bigint to.
*/
bigint_t *bigint(int n) {
	void *tmp;
	bigint_t *dst;
	tmp = calloc(1, sizeof(bigint_t));
	if(tmp == NULL) {
		perror("memory allocation failure in bigint");
		return NULL;
	}	
	dst = tmp;
	tmp = calloc(1, sizeof(unsigned int));
	if(tmp == NULL) {
		perror("memory allocation failure in bigint");
		return NULL;
	}
	dst->data = tmp;
	dst->data[0] = n < 0 ? ~(unsigned int)n + 1 : n;
	dst->size = 1;
	dst->sign = n < 0 ? '-' : '+';
	return dst;
}

/*
* Frees <a>.
*
* @param a			The number to deallocate.
*/
void bigint_free(bigint_t *a) {
	free(a->data);
	free(a);
}

/*
* Creates a deep copy of <a>.
* @param a 	The number to be cloned
* @return 	A deep copy (clone) of <a>
*/
bigint_t *bigint_clone(bigint_t *a) {
	void *tmp;
	bigint_t *dst;
	dst = calloc(1, sizeof(bigint_t));
	if(dst == NULL) {
		perror("memory allocation failure in bigint_clone");
		return NULL;
	}
	tmp = calloc(1, sizeof(unsigned int)  *a->size);
	if(tmp == NULL) {
		perror("memory allocation failure in bigint_clone");
		return NULL;
	}
	dst->data = tmp;
	memcpy(dst->data, a->data, sizeof(unsigned int)  *a->size);
	dst->size = a->size;
	dst->sign = a->sign;
	return dst;	
}

/*
* Sets the bit of <dst> at <bit_index> to the value of <bit_value>.
*
* @param a			The number to set a bit of.
* @param bit_index	The bit to set.
* @param bit_value	The bit value to set the bit to.
*/
void bigint_set_bit(bigint_t *dst, unsigned int bit_index, unsigned int bit_value) {
	unsigned int block_index;
	unsigned int sub_bit_index;
	block_index = bit_index / BIGINT_BLOCK_BIT_SIZE;
	sub_bit_index = bit_index % BIGINT_BLOCK_BIT_SIZE;
	while(dst->size <= block_index) {
		bigint_allocate_block(dst, 0);
	}

	if(bit_value) dst->data[block_index] |= 1 << sub_bit_index;
	else dst->data[block_index] ^= (bigint_get_bit(dst, bit_index) ? 1 : 0) << sub_bit_index;
}

/*
* Finds the bitwise XOR of <a> and <b> (a ^ b).
*
* @param a			The number to XOR with <b>.
* @param b			The number to XOR with <a>.
* @return  			The bitwise XOR of <a> and <b>.
*/
bigint_t *bigint_xor(bigint_t *a, bigint_t *b) {
	return bigint_apply_bitwise_function(a, b, bigint_xor_callback);
}

/*
* Finds the bitwise AND of <a> and <b> (a & b).
*
* @param a			The number to AND with <b>.
* @param b			The number to AND with <a>.
* @return  			The bitwise AND of <a> and <b>.
*/
bigint_t *bigint_and(bigint_t *a, bigint_t *b) {
	return bigint_apply_bitwise_function(a, b, bigint_and_callback);
}

/*
* Finds the bitwise OR of <a> and <b> (a | b).
*
* @param a			The number to OR with <b>.
* @param b			The number to OR with <a>.
* @return  			The bitwise OR of <a> and <b>.
*/
bigint_t *bigint_or(bigint_t *a, bigint_t *b) {
	return bigint_apply_bitwise_function(a, b, bigint_or_callback);
}

/*
* Finds the complement of <a> (~a).
*
* @param a			The number to NOT.
* @return  			The complement of <a>.
*/
bigint_t *bigint_not(bigint_t *a) {
	unsigned int i;
	unsigned int a_degree;
	bigint_t *dst;

	dst = bigint(0);
	a_degree = bigint_degree(a);
	for(i = 0;i <= a_degree;i++) {
		bigint_set_bit(dst, i, bigint_get_bit(a, i) ? 0 : 1);
	}
	dst->sign = a->sign;
	return dst;
}

/*
* Finds value of <a> shifted <n_shifts> left (a << n_shifts).
*
* @param a			The number to shift left.
* @param bit_index	The number of bits to shift left.
* @return  			<a> shifted <n_shifts> left.
*/
bigint_t *bigint_shift_left(bigint_t *a, unsigned int n_shifts) {
	bigint_t *dst;
	size_t i;

	if(n_shifts == 0) {
		return bigint_clone(a);
	}

	if(n_shifts < BIGINT_BLOCK_BIT_SIZE) {
		return bigint_shift_left_fast(a, n_shifts);
	}

	dst = bigint(0);
	for(i = 0;i < a->size * BIGINT_BLOCK_BIT_SIZE;i++) {
		if(bigint_get_bit(a, i)) {
			bigint_xor_bit_mutable(dst, (i + n_shifts), 1);
		}
	}

	dst->sign = a->sign;
	return dst;	
}

/*
* Finds value of <a> shifted <n_shifts> right (a >> n_shifts). 
*
* @param a			The number to shift right.
* @param bit_index	The number of bits to shift right.
* @return  			<a> shifted <n_shifts> right.
*/
bigint_t *bigint_shift_right(bigint_t *a, unsigned int n_shifts) {
	bigint_t *dst;
	int i;

	if(n_shifts == 0) {
		return bigint_clone(a);
	}

	if(n_shifts < BIGINT_BLOCK_BIT_SIZE) {
		return bigint_shift_right_fast(a, n_shifts);
	}

	dst = bigint(0);
	for(i = a->size * BIGINT_BLOCK_BIT_SIZE;i >= n_shifts;i--) {
		if(bigint_get_bit(a, i)) {
			bigint_xor_bit_mutable(dst, (i - n_shifts), 1);
		}
	}

	dst->sign = a->sign;
	return dst;
}

/*
* Gets the bit of <a> at position <bit_index> (a >> bit_index & 1).
*
* @param a			The number to find a bit value of.
* @param bit_index	The bit position to return the value of.
* @return  			The value of bit <bit_index> of a.
*/
unsigned int bigint_get_bit(bigint_t *a, unsigned int bit_index) {
	unsigned int block_index = bit_index / BIGINT_BLOCK_BIT_SIZE;
	unsigned int sub_bit_index = bit_index % BIGINT_BLOCK_BIT_SIZE;

	if(a->size <= block_index) return 0;
	return ((a->data[block_index] >> sub_bit_index) & 1) ? 1 : 0;	
}

/*
* Finds the degree of <a>. That is, the most significant non-zero bit.
*
* @param a	The number to find the degree of.
* @return  	The degree of <a>.
*/
unsigned int bigint_degree(bigint_t *a) {
	int i;

	for(i = a->size * BIGINT_BLOCK_BIT_SIZE;i >= 0;i--) {
		if(bigint_get_bit(a, i)) {
			return i;
		}
	}
	return 0;
}

/*
* Compares <a> with <b>.
*
* @param a	The number to be compared with <b>.
* @param b	The number to be compared with <a>.
* @return  	1 if a > b; 0 if a == b; -1 if a < b
*/
int bigint_compare(bigint_t *a, bigint_t *b) {
	int i;
	unsigned int a_degree, b_degree;

	a_degree = bigint_degree(a);
	b_degree = bigint_degree(b);

	if(a->sign != b->sign) {
		if(a_degree == 0 && b_degree == 0) {
			return 0;
		} else {	
			return a->sign == '+' ? 1 : -1;
		}
	}

	if(a_degree > b_degree) {
		return 1;
	} else if(b_degree > a_degree) {
		return -1;
	}

	for(i = a->size * BIGINT_BLOCK_BIT_SIZE;i >= 0;i--) {
		if(bigint_get_bit(a, i) && !bigint_get_bit(b, i)) {
			return 1;
		} else if(bigint_get_bit(b, i) && !bigint_get_bit(a, i)) {
			return -1;
		}
	}
	return 0;
}

/*
* Compare the absolute values of <a> and <b>.
*
* @param a	The number to be compared with <b>.
* @param b	The number to be compared with <a>.
* @return  	1 if a > b; 0 if a == b; -1 if a < b
*/
int bigint_compare_abs(bigint_t *a, bigint_t *b) {
	bigint_t *a_abs;
	bigint_t *b_abs;
	int ret_val;

	a_abs = bigint_clone(a);
	b_abs = bigint_clone(b);
	a_abs->sign = '+';
	b_abs->sign = '+';
	ret_val = bigint_compare(a_abs, b_abs);
	bigint_free(a_abs);
	bigint_free(b_abs);
	return ret_val;
}

/*
* Finds the product of <a> and <b> (a  *b).
*
* @param a	The number multiply with <b>.
* @param b	The number multiply with <a>.
* @return  	a  *b
*/
bigint_t *bigint_mul(bigint_t *a, bigint_t *b) {
	unsigned int a_i;
	unsigned int b_i;
	unsigned int c_i;
	bigint_t *dst;

	dst = bigint(0);

	for(b_i = 0;b_i < b->size * BIGINT_BLOCK_BIT_SIZE;b_i++) {
		if(!bigint_get_bit(b, b_i)) continue;
		for(a_i = 0;a_i < a->size * BIGINT_BLOCK_BIT_SIZE;a_i++) {
			if(!bigint_get_bit(a, a_i)) continue;
			c_i = b_i + a_i;

			/* set all "1" bits to "0" until we find a "0" */
			for(c_i = b_i + a_i;c_i < dst->size * BIGINT_BLOCK_BIT_SIZE && bigint_get_bit(dst, c_i);c_i++) {
				bigint_xor_bit_mutable(dst, c_i, 1);
			}
			/* set the "0" to "1" (our carry...) */
			bigint_xor_bit_mutable(dst, c_i, 1);
		}
	}

	if(a->sign != b->sign) {
		dst->sign = '-';
	}

	return dst;
}

/*
* Subtracts <b> from <a> (a - b).
*
* @param a	The number subtract from.
* @param b	The number subtract with.
* @return  	a - b
*/
bigint_t *bigint_sub(bigint_t *a, bigint_t *b) {
	int i;
	bigint_t *dst;
	bigint_t *a_clone;
	bigint_t *b_clone;
	bigint_t *tmp;
	int borrow = 0;
	int sum = 0;

	if(a->sign == '-' || b->sign == '-') {
		a_clone = bigint_clone(a);
		a_clone->sign = '+';
		b_clone = bigint_clone(b);
		b_clone->sign = '+';
		if(a->sign == b->sign) {
			dst = bigint_sub(b_clone, a_clone);
		} else {
			dst = bigint_add(b_clone, a_clone);
			dst->sign = a->sign;
		}
		bigint_free(a_clone);
		bigint_free(b_clone);
		return dst;
	}

	dst = bigint(0);
	/* 
	*	We always want to subtract from the largest argument.
	*	Therefore, if b > a -> calculate -(b - a) instead.
	*/
	if(bigint_compare_abs(a, b) == -1) {
		dst->sign = '-';
		tmp = a;
		a = b;
		b = tmp;
	}

	for(i = 0;i < a->size  *BIGINT_BLOCK_BIT_SIZE;i++) {
		sum = bigint_get_bit(a, i) - bigint_get_bit(b, i) - borrow;
		if(sum < 0) {
			sum += 2;
			borrow = 1;
		} else {
			borrow = 0;
		}

		if(sum > 0) bigint_xor_bit_mutable(dst, i, 1);
	}
	return dst;
}

/*
* Divides <dividend> with <divisor>.
*
* @param dividend	The number to be divided by <divisor>.
* @param divisor	The number to divide <dividend>.
* @param remainder 	Where the remainder shall be stored.
* @return  			a + b
*/
bigint_t *bigint_divrem(bigint_t *dividend, bigint_t *divisor, bigint_t* *remainder) {
	bigint_t *quotient;
	bigint_t *tmp;
	bigint_t *shifted_divisor;
	bigint_t *zero;
	bigint_t *one;
	int shift = 0;

	quotient = bigint(0);
	zero = bigint(0);
	one = bigint(1);

	if(bigint_compare(divisor, zero) == 0) {
		/* division by zero! what should we do!?*/
		return NULL;
	}

	(*remainder) = bigint_clone(dividend);
	(*remainder)->sign = '+';

	if(bigint_compare(*remainder, divisor) < 0) {
		return dividend->sign != divisor->sign ? bigint(-1) : bigint(0);
	}

	shift = bigint_degree(dividend) - bigint_degree(divisor);
	shifted_divisor = bigint_shift_left(divisor, shift);
	shifted_divisor->sign = '+';

	while(bigint_compare_abs(*remainder, divisor) >= 0) {
		if(bigint_compare_abs(*remainder, shifted_divisor) >= 0) {
			tmp = bigint_sub(*remainder, shifted_divisor);
			bigint_free(*remainder);
			*remainder = tmp;
			bigint_xor_bit_mutable(quotient, 0, 1);
		} else {
			tmp = bigint_shift_left(quotient, 1);
			bigint_free(quotient);
			quotient = tmp;

			tmp = bigint_shift_right(shifted_divisor, 1);
			bigint_free(shifted_divisor);
			shifted_divisor = tmp;
			shift--;
		}
	}

	tmp = bigint_shift_left(quotient, shift);
	bigint_free(quotient);
	quotient = tmp;
	bigint_free(shifted_divisor);
	
	quotient->sign = dividend->sign != divisor->sign ? '-' : '+';
	(*remainder)->sign = dividend->sign == '-' || divisor->sign == '-' ? '-' : '+';
	if(bigint_compare(*remainder, zero) != 0 && dividend->sign != divisor->sign) {
		tmp = bigint_sub(quotient, one);
		bigint_free(quotient);
		quotient = tmp;

		tmp = divisor->sign == '+' ? bigint_add(*remainder, divisor) : bigint_sub(*remainder, divisor);
		bigint_free(*remainder);
		*remainder = tmp;
	}
	
	return quotient;
}

/*
* Finds the sum of a and b (a + b).
*
* @param a 			The number to be added together with b.
* @param b 			The number to be added together with a.
* @return  			a + b
*/
bigint_t *bigint_add(bigint_t *a, bigint_t *b) {
	int i;
	bigint_t *dst;
	bigint_t *a_clone;
	bigint_t *b_clone;
	unsigned int carry;

	carry = 0;
	if(a->sign != b->sign) {
		a_clone = bigint_clone(a);
		a_clone->sign = '+';
		b_clone = bigint_clone(b);
		b_clone->sign = '+';
		dst = bigint_sub(a->sign == '-' ? b_clone : a_clone, b->sign == '-' ? b_clone : a_clone);
		bigint_free(a_clone);
		bigint_free(b_clone);
		return dst;
	}

	dst = bigint(0);
	dst->sign = a->sign;

	for(i = 0;i < (a->size > b->size ? a->size : b->size)  *BIGINT_BLOCK_BIT_SIZE;i++) {
		if(carry > 0) carry /= 2;
		if(bigint_get_bit(a, i)) carry++;
		if(bigint_get_bit(b, i)) carry++;

		if(carry % 2 == 1) {
			bigint_xor_bit_mutable(dst, i, 1);
			carry--;
		}
	}

	while(carry-- > 0) bigint_xor_bit_mutable(dst, i, 1);

	return dst;
}

/*
* Finds the factorial of a.
*
* @param a 			The number of which the factorial shall be calculated for.
* @return  			a!
*/
bigint_t *bigint_factorial(bigint_t *a) {
	bigint_t *one;
	bigint_t *tmp;
	bigint_t *dst;
	bigint_t *cpy_a;

	one = bigint(1);
	dst = bigint(1);
	cpy_a = bigint_clone(a);
	cpy_a->sign = '+';
	while(bigint_compare(one, cpy_a) < 0) {
		tmp = bigint_mul(dst, cpy_a);
		bigint_free(dst);
		dst = tmp;

		tmp = bigint_sub(cpy_a, one);
		bigint_free(cpy_a);
		cpy_a = tmp;
	}

	bigint_free(one);
	bigint_free(cpy_a);

	if(a->sign == '-' && a->data[0] & 1) dst->sign = '-';

	return dst;
}

/*
* Finds the power of <a> with exponent <exponent> modulo <mod> using square and multiply (a^exponent % mod).
*
* @param a 			The base of which the power of shall be calculated.
* @param exponent  	The exponent.
* @param mod 		The modulo, if NULL no modulo is used.
* @return  			a^exponent % mod
*/
bigint_t *bigint_powmod(bigint_t *a, bigint_t *exponent, bigint_t *mod) {
	bigint_t *tmp;
	bigint_t *dst;
	bigint_t *exponent_multiple;
	unsigned int i;
	unsigned int exponent_degree;

	dst = bigint(1);
	exponent_multiple = bigint_clone(a);
	exponent_degree = bigint_degree(exponent);

	for(i = 0;i <= exponent_degree;i++) {
		if(bigint_get_bit(exponent, i)) {
			tmp = bigint_mul(dst, exponent_multiple);
			bigint_free(dst);
			dst = tmp;

			if(mod != NULL) {
				bigint_free(bigint_divrem(dst, mod, &tmp));
				bigint_free(dst);
				dst = tmp;
			}
		}

		tmp = bigint_mul(exponent_multiple, exponent_multiple);
		bigint_free(exponent_multiple);
		exponent_multiple = tmp; 

		if(mod != NULL) {
			bigint_free(bigint_divrem(exponent_multiple, mod, &tmp));
			bigint_free(exponent_multiple);
			exponent_multiple = tmp;
		}
	}

	bigint_free(exponent_multiple);
	return dst;
}

/*
* Converts <a> to its <base> base string representation and stores the result in dst.
* NOTE: you have to make sure that dst has enough room for the string representation of a.
*
* @param a 		An integer to be converted to its string representation
* @param base  	The base of the string
* @param dst 	Location of the resulting string
*/
void bigint_to_string(bigint_t *a, unsigned int base, char *dst) {
	char *span = "0123456789abcdefghijklmnopqrstuvxyz";
	char *cpy_dst;
	bigint_t *tmp;
	bigint_t *remainder;
	bigint_t *zero;
	bigint_t *dividend;
	bigint_t *divisor;
	
	zero = bigint(0);

	if(bigint_compare(a, zero) == 0) {
		bigint_free(zero);
		*dst = '0';
		*(dst + 1) = '\0';
		return;
	}


	dividend = bigint_clone(a);
	dividend->sign = '+';
	divisor = bigint(base);
	divisor->sign = '+';
	if(a->sign == '-') (*dst++) = '-';
	cpy_dst = dst;
	int i = 0;
	while(bigint_compare_abs(dividend, zero) != 0) {
		tmp = bigint_divrem(dividend, divisor, &remainder);
		bigint_free(dividend);
		dividend = tmp;
		*(cpy_dst++) = span[remainder->data[0]];
		bigint_free(remainder);
	}

	/* reverse the string */
	*(cpy_dst) = '\0';
	while(--cpy_dst > dst) {
		*dst ^= *cpy_dst;
		*cpy_dst ^= *dst;
		*dst ^= *cpy_dst;

		dst++;
	}

	bigint_free(dividend);
	bigint_free(divisor);
	bigint_free(zero);
}


/*
* Converts <a> to its <base> base int representation.
*
* @param a 		An string to be converted to its int representation
* @param base  	The base of the string
*/
bigint_t *bigint_from_string(char *a, unsigned int base) {
	int i;

	int a_length;
	bigint_t *tmp;
	bigint_t *tmp_number;
	bigint_t *dst;
	bigint_t *multiplicator;

	multiplicator = bigint(base);
	dst = bigint(0);
	a_length = strlen(a);
	i = (a[0] == '-' ? 1 : 0);

	for(i;i < a_length;i++) {
		tmp = bigint_mul(dst, multiplicator);
		bigint_free(dst);
		dst = tmp;

		if('0' <= a[i] && a[i] <= '9') tmp_number = bigint(a[i] - '0');
		else tmp_number = bigint(tolower(a[i]) - 'a' + 10);

		tmp = bigint_add(dst, tmp_number);
		bigint_free(tmp_number);
		bigint_free(dst);
		dst = tmp;
	}

	bigint_free(multiplicator);

	dst->sign = a[0] == '-' ? '-' : '+';
	return dst;
}

bigint_t *bigint_mod(bigint_t *a, bigint_t *mod) {
	bigint_t *remainder;
	bigint_free(bigint_divrem(a, mod, &remainder));
	return remainder;
}

bigint_t *bigint_rem(bigint_t *a, bigint_t *mod) {
	bigint_t *remainder;
	bigint_free(bigint_divrem(a, mod, &remainder));
	return remainder;
}

bigint_t *bigint_div(bigint_t *dividend, bigint_t *divisor) {
	bigint_t *remainder;
	bigint_t *quotient;
	
	quotient = bigint_divrem(dividend, divisor, &remainder);
	bigint_free(remainder);
	return quotient;
}

bigint_t *bigint_pow(bigint_t *a, bigint_t *exponent) {
	return bigint_powmod(a, exponent, NULL);
}


/******************************/
/* PRIVATE INTERNAL FUNCTIONS */
/******************************/


static void bigint_xor_bit_mutable(bigint_t *dst, unsigned int bit_index, unsigned int bit_value) {
	unsigned int block_index;
	unsigned int sub_bit_index;

	block_index = bit_index / BIGINT_BLOCK_BIT_SIZE;
	sub_bit_index = bit_index % BIGINT_BLOCK_BIT_SIZE;
	while(dst->size <= block_index) {
		bigint_allocate_block(dst, 0);
	}
	dst->data[block_index] ^= bit_value << sub_bit_index;
}

static void bigint_allocate_block(bigint_t *dst, unsigned int n) {
	void *tmp;

	tmp = realloc(dst->data, (dst->size + 1)  *sizeof(unsigned int));
	if(tmp == NULL) {
		perror("memory allocation failure in bigint_allocate_block");
		return;
	}
	dst->data = tmp;
	dst->data[dst->size] = n;
	dst->size++;
}

static bigint_t *bigint_apply_bitwise_function(bigint_t *a, bigint_t *b, bigint_bitwise_callback_t callback) {
	unsigned int a_degree;
	unsigned int b_degree;
	unsigned int max_degree;
	int i;
	bigint_t *dst;

	dst = bigint(0);
	a_degree = bigint_degree(a);
	b_degree = bigint_degree(b);
	max_degree = a_degree > b_degree ? a_degree : b_degree;
	for(i = 0;i <= max_degree;i++) {
		callback(dst, a, b, i);
	}
	dst->sign = a->sign;
	return dst;
}

static inline void bigint_xor_callback(bigint_t *dst, bigint_t *a, bigint_t *b, unsigned int bit_index) {
	bigint_set_bit(dst, bit_index, bigint_get_bit(a, bit_index) ^ bigint_get_bit(b, bit_index));
}

static inline void bigint_and_callback(bigint_t *dst, bigint_t *a, bigint_t *b, unsigned int bit_index) {
	bigint_set_bit(dst, bit_index, bigint_get_bit(a, bit_index) & bigint_get_bit(b, bit_index));
}

static inline void bigint_or_callback(bigint_t *dst, bigint_t *a, bigint_t *b, unsigned int bit_index) {
	bigint_set_bit(dst, bit_index, bigint_get_bit(a, bit_index) | bigint_get_bit(b, bit_index));
}

static bigint_t *bigint_shift_left_fast(bigint_t *a, unsigned int n_shifts) {
	int i;
	unsigned int old_block;
	bigint_t *dst;

	dst = bigint(0);
	old_block = 0;
	for(i = 0;i < a->size;i++) {
		if(dst->size <= i) bigint_allocate_block(dst, 0);

		dst->data[i] = a->data[i] << n_shifts;
		dst->data[i] ^= old_block;
		old_block = a->data[i] >> (BIGINT_BLOCK_BIT_SIZE - n_shifts);
	}
	if(old_block > 0) {
		bigint_allocate_block(dst, old_block);
	}
	dst->sign = a->sign;
	return dst;
}

static bigint_t *bigint_shift_right_fast(bigint_t *a, unsigned int n_shifts) {
	int i;
	unsigned int old_block;
	bigint_t *dst;

	dst = bigint(0);
	while(dst->size < a->size) {
		bigint_allocate_block(dst, 0);
	}

	old_block = 0;
	for(i = a->size - 1;i >= 0;i--) {
		dst->data[i] = a->data[i] >> n_shifts;
		dst->data[i] ^= old_block;
		old_block = a->data[i] << (BIGINT_BLOCK_BIT_SIZE - n_shifts);
	}
	dst->sign = a->sign;
	return dst;
}