
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include "bigint.h"

int main(int argc, char **argv) {
	char buffer[4096] = "";


		bigint_t* _4711523074869216706589;
		bigint_t* _3676055865858261704820 = bigint(112);
		bigint_t* _975028823908379294409 = bigint(11813544);
		bigint_t* _1600985127783773745305 = bigint_mul(_3676055865858261704820, _975028823908379294409 );
		bigint_to_string(_1600985127783773745305, 10, buffer);
		printf("trying ");
		puts("mul(112, 11813544)");
		puts(buffer);
		assert(strcmp(buffer, "1323116928") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3676055865858261704820);
		bigint_free(_975028823908379294409);
		bigint_free(_1600985127783773745305);

	

		bigint_t* _1117026354066471377995;
		bigint_t* _1389552108588827451274 = bigint(112);
		bigint_t* _3549063701471084490436 = bigint(11813544);
		bigint_t* _2051297485444129222672 = bigint_add(_1389552108588827451274, _3549063701471084490436 );
		bigint_to_string(_2051297485444129222672, 10, buffer);
		printf("trying ");
		puts("add(112, 11813544)");
		puts(buffer);
		assert(strcmp(buffer, "11813656") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1389552108588827451274);
		bigint_free(_3549063701471084490436);
		bigint_free(_2051297485444129222672);

	

		bigint_t* _2148197665172877330154;
		bigint_t* _3545423070519660353100 = bigint(112);
		bigint_t* _3561579793249932070801 = bigint(11813544);
		bigint_t* _2922434988959323639614 = bigint_sub(_3545423070519660353100, _3561579793249932070801 );
		bigint_to_string(_2922434988959323639614, 10, buffer);
		printf("trying ");
		puts("sub(112, 11813544)");
		puts(buffer);
		assert(strcmp(buffer, "-11813432") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3545423070519660353100);
		bigint_free(_3561579793249932070801);
		bigint_free(_2922434988959323639614);

	

		bigint_t* _3779142895616216896541;
		bigint_t* _3108403063607562456341 = bigint(28);
		bigint_t* _3383192238929775732401 = bigint(-15968517);
		bigint_t* _1827746707570735226895 = bigint_mul(_3108403063607562456341, _3383192238929775732401 );
		bigint_to_string(_1827746707570735226895, 10, buffer);
		printf("trying ");
		puts("mul(28, -15968517)");
		puts(buffer);
		assert(strcmp(buffer, "-447118476") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3108403063607562456341);
		bigint_free(_3383192238929775732401);
		bigint_free(_1827746707570735226895);

	

		bigint_t* _743172073024632120433;
		bigint_t* _3094450512410102888206 = bigint(28);
		bigint_t* _1141060205199676354216 = bigint(-15968517);
		bigint_t* _3926369609572801110857 = bigint_add(_3094450512410102888206, _1141060205199676354216 );
		bigint_to_string(_3926369609572801110857, 10, buffer);
		printf("trying ");
		puts("add(28, -15968517)");
		puts(buffer);
		assert(strcmp(buffer, "-15968489") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3094450512410102888206);
		bigint_free(_1141060205199676354216);
		bigint_free(_3926369609572801110857);

	

		bigint_t* _3857489567716688626185;
		bigint_t* _1490043862790097735834 = bigint(28);
		bigint_t* _2701829355879949753878 = bigint(-15968517);
		bigint_t* _4020228488664876472866 = bigint_sub(_1490043862790097735834, _2701829355879949753878 );
		bigint_to_string(_4020228488664876472866, 10, buffer);
		printf("trying ");
		puts("sub(28, -15968517)");
		puts(buffer);
		assert(strcmp(buffer, "15968545") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1490043862790097735834);
		bigint_free(_2701829355879949753878);
		bigint_free(_4020228488664876472866);

	

		bigint_t* _2111091174466090727502;
		bigint_t* _2419069746136729119190 = bigint(142);
		bigint_t* _719515360409109761222 = bigint(-2666173);
		bigint_t* _2457107194019482093321 = bigint_mul(_2419069746136729119190, _719515360409109761222 );
		bigint_to_string(_2457107194019482093321, 10, buffer);
		printf("trying ");
		puts("mul(142, -2666173)");
		puts(buffer);
		assert(strcmp(buffer, "-378596566") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2419069746136729119190);
		bigint_free(_719515360409109761222);
		bigint_free(_2457107194019482093321);

	

		bigint_t* _1408016314780318325451;
		bigint_t* _4166331250434648937019 = bigint(142);
		bigint_t* _3087440115078031963697 = bigint(-2666173);
		bigint_t* _1728082226153770159401 = bigint_add(_4166331250434648937019, _3087440115078031963697 );
		bigint_to_string(_1728082226153770159401, 10, buffer);
		printf("trying ");
		puts("add(142, -2666173)");
		puts(buffer);
		assert(strcmp(buffer, "-2666031") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4166331250434648937019);
		bigint_free(_3087440115078031963697);
		bigint_free(_1728082226153770159401);

	

		bigint_t* _2313955372442875901668;
		bigint_t* _3058871868787870417699 = bigint(142);
		bigint_t* _504372933673119568604 = bigint(-2666173);
		bigint_t* _3843158520583477709404 = bigint_sub(_3058871868787870417699, _504372933673119568604 );
		bigint_to_string(_3843158520583477709404, 10, buffer);
		printf("trying ");
		puts("sub(142, -2666173)");
		puts(buffer);
		assert(strcmp(buffer, "2666315") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3058871868787870417699);
		bigint_free(_504372933673119568604);
		bigint_free(_3843158520583477709404);

	

		bigint_t* _2550447777219735943503;
		bigint_t* _1913350795940978642548 = bigint(-184);
		bigint_t* _2894377057528351416157 = bigint(-2851349);
		bigint_t* _946664748896807961533 = bigint_mul(_1913350795940978642548, _2894377057528351416157 );
		bigint_to_string(_946664748896807961533, 10, buffer);
		printf("trying ");
		puts("mul(-184, -2851349)");
		puts(buffer);
		assert(strcmp(buffer, "524648216") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1913350795940978642548);
		bigint_free(_2894377057528351416157);
		bigint_free(_946664748896807961533);

	

		bigint_t* _3665172468047844348140;
		bigint_t* _3901419027798795723446 = bigint(-184);
		bigint_t* _2719689965256184807547 = bigint(-2851349);
		bigint_t* _1126482566452604254579 = bigint_add(_3901419027798795723446, _2719689965256184807547 );
		bigint_to_string(_1126482566452604254579, 10, buffer);
		printf("trying ");
		puts("add(-184, -2851349)");
		puts(buffer);
		assert(strcmp(buffer, "-2851533") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3901419027798795723446);
		bigint_free(_2719689965256184807547);
		bigint_free(_1126482566452604254579);

	

		bigint_t* _2135407597635751232331;
		bigint_t* _2174789250124857620188 = bigint(-184);
		bigint_t* _2726258045098422546547 = bigint(-2851349);
		bigint_t* _185564562949469342469 = bigint_sub(_2174789250124857620188, _2726258045098422546547 );
		bigint_to_string(_185564562949469342469, 10, buffer);
		printf("trying ");
		puts("sub(-184, -2851349)");
		puts(buffer);
		assert(strcmp(buffer, "2851165") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2174789250124857620188);
		bigint_free(_2726258045098422546547);
		bigint_free(_185564562949469342469);

	

		bigint_t* _2965459567278078013736;
		bigint_t* _3382660065681813260816 = bigint(104);
		bigint_t* _633270040017276615179 = bigint(6708023);
		bigint_t* _4206519686004444645078 = bigint_mul(_3382660065681813260816, _633270040017276615179 );
		bigint_to_string(_4206519686004444645078, 10, buffer);
		printf("trying ");
		puts("mul(104, 6708023)");
		puts(buffer);
		assert(strcmp(buffer, "697634392") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3382660065681813260816);
		bigint_free(_633270040017276615179);
		bigint_free(_4206519686004444645078);

	

		bigint_t* _2807601663425705335712;
		bigint_t* _3830098199166488984266 = bigint(104);
		bigint_t* _1284355812204241155624 = bigint(6708023);
		bigint_t* _4476198335122159104978 = bigint_add(_3830098199166488984266, _1284355812204241155624 );
		bigint_to_string(_4476198335122159104978, 10, buffer);
		printf("trying ");
		puts("add(104, 6708023)");
		puts(buffer);
		assert(strcmp(buffer, "6708127") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3830098199166488984266);
		bigint_free(_1284355812204241155624);
		bigint_free(_4476198335122159104978);

	

		bigint_t* _131059536733353752500;
		bigint_t* _3765182714078769849573 = bigint(104);
		bigint_t* _2814173337953003985581 = bigint(6708023);
		bigint_t* _481745459663226896483 = bigint_sub(_3765182714078769849573, _2814173337953003985581 );
		bigint_to_string(_481745459663226896483, 10, buffer);
		printf("trying ");
		puts("sub(104, 6708023)");
		puts(buffer);
		assert(strcmp(buffer, "-6707919") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3765182714078769849573);
		bigint_free(_2814173337953003985581);
		bigint_free(_481745459663226896483);

	

		bigint_t* _585985636961838048569;
		bigint_t* _3394860873805990936813 = bigint(70);
		bigint_t* _1934543570883014768642 = bigint(6909048);
		bigint_t* _1692075670231630040476 = bigint_mul(_3394860873805990936813, _1934543570883014768642 );
		bigint_to_string(_1692075670231630040476, 10, buffer);
		printf("trying ");
		puts("mul(70, 6909048)");
		puts(buffer);
		assert(strcmp(buffer, "483633360") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3394860873805990936813);
		bigint_free(_1934543570883014768642);
		bigint_free(_1692075670231630040476);

	

		bigint_t* _727229583771664188148;
		bigint_t* _3806145115944616914076 = bigint(70);
		bigint_t* _3017883396975574282018 = bigint(6909048);
		bigint_t* _3482070350337892423591 = bigint_add(_3806145115944616914076, _3017883396975574282018 );
		bigint_to_string(_3482070350337892423591, 10, buffer);
		printf("trying ");
		puts("add(70, 6909048)");
		puts(buffer);
		assert(strcmp(buffer, "6909118") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3806145115944616914076);
		bigint_free(_3017883396975574282018);
		bigint_free(_3482070350337892423591);

	

		bigint_t* _1130188641212230013169;
		bigint_t* _2260586538522080641083 = bigint(70);
		bigint_t* _2409586098346898088301 = bigint(6909048);
		bigint_t* _3769899826484283625343 = bigint_sub(_2260586538522080641083, _2409586098346898088301 );
		bigint_to_string(_3769899826484283625343, 10, buffer);
		printf("trying ");
		puts("sub(70, 6909048)");
		puts(buffer);
		assert(strcmp(buffer, "-6908978") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2260586538522080641083);
		bigint_free(_2409586098346898088301);
		bigint_free(_3769899826484283625343);

	

		bigint_t* _3985874361692865806173;
		bigint_t* _3512211939807736962016 = bigint(-72);
		bigint_t* _1210852974778618881490 = bigint(6036719);
		bigint_t* _922865917259444489713 = bigint_mul(_3512211939807736962016, _1210852974778618881490 );
		bigint_to_string(_922865917259444489713, 10, buffer);
		printf("trying ");
		puts("mul(-72, 6036719)");
		puts(buffer);
		assert(strcmp(buffer, "-434643768") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3512211939807736962016);
		bigint_free(_1210852974778618881490);
		bigint_free(_922865917259444489713);

	

		bigint_t* _3841163893618366290931;
		bigint_t* _4057283895463232384336 = bigint(-72);
		bigint_t* _4679794337135966543205 = bigint(6036719);
		bigint_t* _326922873443782651630 = bigint_add(_4057283895463232384336, _4679794337135966543205 );
		bigint_to_string(_326922873443782651630, 10, buffer);
		printf("trying ");
		puts("add(-72, 6036719)");
		puts(buffer);
		assert(strcmp(buffer, "6036647") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4057283895463232384336);
		bigint_free(_4679794337135966543205);
		bigint_free(_326922873443782651630);

	

		bigint_t* _3528507767144337704475;
		bigint_t* _4028484010373622112256 = bigint(-72);
		bigint_t* _755458788507146308084 = bigint(6036719);
		bigint_t* _4336623061230507562992 = bigint_sub(_4028484010373622112256, _755458788507146308084 );
		bigint_to_string(_4336623061230507562992, 10, buffer);
		printf("trying ");
		puts("sub(-72, 6036719)");
		puts(buffer);
		assert(strcmp(buffer, "-6036791") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4028484010373622112256);
		bigint_free(_755458788507146308084);
		bigint_free(_4336623061230507562992);

	

		bigint_t* _1280384053940879466328;
		bigint_t* _2026052075152948521266 = bigint(-241);
		bigint_t* _2899174082342003560402 = bigint(4008682);
		bigint_t* _2841466648873400905269 = bigint_mul(_2026052075152948521266, _2899174082342003560402 );
		bigint_to_string(_2841466648873400905269, 10, buffer);
		printf("trying ");
		puts("mul(-241, 4008682)");
		puts(buffer);
		assert(strcmp(buffer, "-966092362") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2026052075152948521266);
		bigint_free(_2899174082342003560402);
		bigint_free(_2841466648873400905269);

	

		bigint_t* _3857215745524699403192;
		bigint_t* _2317278040247921094539 = bigint(-241);
		bigint_t* _3279875667180231595857 = bigint(4008682);
		bigint_t* _3269108001554042373746 = bigint_add(_2317278040247921094539, _3279875667180231595857 );
		bigint_to_string(_3269108001554042373746, 10, buffer);
		printf("trying ");
		puts("add(-241, 4008682)");
		puts(buffer);
		assert(strcmp(buffer, "4008441") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2317278040247921094539);
		bigint_free(_3279875667180231595857);
		bigint_free(_3269108001554042373746);

	

		bigint_t* _2036495655975186408412;
		bigint_t* _3163603937757585774098 = bigint(-241);
		bigint_t* _4503658950356622422708 = bigint(4008682);
		bigint_t* _1650931223060543855959 = bigint_sub(_3163603937757585774098, _4503658950356622422708 );
		bigint_to_string(_1650931223060543855959, 10, buffer);
		printf("trying ");
		puts("sub(-241, 4008682)");
		puts(buffer);
		assert(strcmp(buffer, "-4008923") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3163603937757585774098);
		bigint_free(_4503658950356622422708);
		bigint_free(_1650931223060543855959);

	

		bigint_t* _4020589396443034455812;
		bigint_t* _883810997464252592138 = bigint(179);
		bigint_t* _410536496624378257961 = bigint(-15894687);
		bigint_t* _2300160946564337812484 = bigint_mul(_883810997464252592138, _410536496624378257961 );
		bigint_to_string(_2300160946564337812484, 10, buffer);
		printf("trying ");
		puts("mul(179, -15894687)");
		puts(buffer);
		assert(strcmp(buffer, "-2845148973") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_883810997464252592138);
		bigint_free(_410536496624378257961);
		bigint_free(_2300160946564337812484);

	

		bigint_t* _1363369952375089152245;
		bigint_t* _468017605297601150124 = bigint(179);
		bigint_t* _1387982411802955908815 = bigint(-15894687);
		bigint_t* _1106532123535548483911 = bigint_add(_468017605297601150124, _1387982411802955908815 );
		bigint_to_string(_1106532123535548483911, 10, buffer);
		printf("trying ");
		puts("add(179, -15894687)");
		puts(buffer);
		assert(strcmp(buffer, "-15894508") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_468017605297601150124);
		bigint_free(_1387982411802955908815);
		bigint_free(_1106532123535548483911);

	

		bigint_t* _4266141866103483412072;
		bigint_t* _2433858671456551142177 = bigint(179);
		bigint_t* _2380776111138474876847 = bigint(-15894687);
		bigint_t* _1925365468810524760861 = bigint_sub(_2433858671456551142177, _2380776111138474876847 );
		bigint_to_string(_1925365468810524760861, 10, buffer);
		printf("trying ");
		puts("sub(179, -15894687)");
		puts(buffer);
		assert(strcmp(buffer, "15894866") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2433858671456551142177);
		bigint_free(_2380776111138474876847);
		bigint_free(_1925365468810524760861);

	

		bigint_t* _3974680041998611696618;
		bigint_t* _871489858554240555574 = bigint(137);
		bigint_t* _356670507469409712262 = bigint(-417465);
		bigint_t* _291902207556833305727 = bigint_mul(_871489858554240555574, _356670507469409712262 );
		bigint_to_string(_291902207556833305727, 10, buffer);
		printf("trying ");
		puts("mul(137, -417465)");
		puts(buffer);
		assert(strcmp(buffer, "-57192705") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_871489858554240555574);
		bigint_free(_356670507469409712262);
		bigint_free(_291902207556833305727);

	

		bigint_t* _2423697413652519161722;
		bigint_t* _3103031439263496833133 = bigint(137);
		bigint_t* _4267918615777864367313 = bigint(-417465);
		bigint_t* _58730829190814976684 = bigint_add(_3103031439263496833133, _4267918615777864367313 );
		bigint_to_string(_58730829190814976684, 10, buffer);
		printf("trying ");
		puts("add(137, -417465)");
		puts(buffer);
		assert(strcmp(buffer, "-417328") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3103031439263496833133);
		bigint_free(_4267918615777864367313);
		bigint_free(_58730829190814976684);

	

		bigint_t* _3916053604537575677949;
		bigint_t* _3619350734479938324863 = bigint(137);
		bigint_t* _538411052144154727484 = bigint(-417465);
		bigint_t* _344788782778837729691 = bigint_sub(_3619350734479938324863, _538411052144154727484 );
		bigint_to_string(_344788782778837729691, 10, buffer);
		printf("trying ");
		puts("sub(137, -417465)");
		puts(buffer);
		assert(strcmp(buffer, "417602") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3619350734479938324863);
		bigint_free(_538411052144154727484);
		bigint_free(_344788782778837729691);

	

		bigint_t* _3740649306357600231138;
		bigint_t* _851025367404177290962 = bigint(-46);
		bigint_t* _1484003476297652926094 = bigint(8754620);
		bigint_t* _697509835835167440456 = bigint_mul(_851025367404177290962, _1484003476297652926094 );
		bigint_to_string(_697509835835167440456, 10, buffer);
		printf("trying ");
		puts("mul(-46, 8754620)");
		puts(buffer);
		assert(strcmp(buffer, "-402712520") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_851025367404177290962);
		bigint_free(_1484003476297652926094);
		bigint_free(_697509835835167440456);

	

		bigint_t* _3032503346199801781995;
		bigint_t* _3133795191975158730120 = bigint(-46);
		bigint_t* _1646281253454059133015 = bigint(8754620);
		bigint_t* _3931008207194665462511 = bigint_add(_3133795191975158730120, _1646281253454059133015 );
		bigint_to_string(_3931008207194665462511, 10, buffer);
		printf("trying ");
		puts("add(-46, 8754620)");
		puts(buffer);
		assert(strcmp(buffer, "8754574") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3133795191975158730120);
		bigint_free(_1646281253454059133015);
		bigint_free(_3931008207194665462511);

	

		bigint_t* _4644702104983619608716;
		bigint_t* _4339521992931236911723 = bigint(-46);
		bigint_t* _29594165414876620736 = bigint(8754620);
		bigint_t* _898093317669624843078 = bigint_sub(_4339521992931236911723, _29594165414876620736 );
		bigint_to_string(_898093317669624843078, 10, buffer);
		printf("trying ");
		puts("sub(-46, 8754620)");
		puts(buffer);
		assert(strcmp(buffer, "-8754666") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4339521992931236911723);
		bigint_free(_29594165414876620736);
		bigint_free(_898093317669624843078);

	

		bigint_t* _3554196418045945678179;
		bigint_t* _4329714212044097703685 = bigint(201);
		bigint_t* _2254380279668858192867 = bigint(-11851145);
		bigint_t* _109857068792149797376 = bigint_mul(_4329714212044097703685, _2254380279668858192867 );
		bigint_to_string(_109857068792149797376, 10, buffer);
		printf("trying ");
		puts("mul(201, -11851145)");
		puts(buffer);
		assert(strcmp(buffer, "-2382080145") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4329714212044097703685);
		bigint_free(_2254380279668858192867);
		bigint_free(_109857068792149797376);

	

		bigint_t* _4311170797973691685127;
		bigint_t* _2456374277961409408800 = bigint(201);
		bigint_t* _370177868050476900679 = bigint(-11851145);
		bigint_t* _4121420175617698203889 = bigint_add(_2456374277961409408800, _370177868050476900679 );
		bigint_to_string(_4121420175617698203889, 10, buffer);
		printf("trying ");
		puts("add(201, -11851145)");
		puts(buffer);
		assert(strcmp(buffer, "-11850944") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2456374277961409408800);
		bigint_free(_370177868050476900679);
		bigint_free(_4121420175617698203889);

	

		bigint_t* _1329814833849141424323;
		bigint_t* _214922199047098287161 = bigint(201);
		bigint_t* _1213608026318509598223 = bigint(-11851145);
		bigint_t* _2001735716422788456171 = bigint_sub(_214922199047098287161, _1213608026318509598223 );
		bigint_to_string(_2001735716422788456171, 10, buffer);
		printf("trying ");
		puts("sub(201, -11851145)");
		puts(buffer);
		assert(strcmp(buffer, "11851346") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_214922199047098287161);
		bigint_free(_1213608026318509598223);
		bigint_free(_2001735716422788456171);

	

		bigint_t* _3938882996019540811553;
		bigint_t* _440433948212620701790 = bigint(105);
		bigint_t* _2006773232532130961034 = bigint(-7085874);
		bigint_t* _2768029528916325350998 = bigint_mul(_440433948212620701790, _2006773232532130961034 );
		bigint_to_string(_2768029528916325350998, 10, buffer);
		printf("trying ");
		puts("mul(105, -7085874)");
		puts(buffer);
		assert(strcmp(buffer, "-744016770") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_440433948212620701790);
		bigint_free(_2006773232532130961034);
		bigint_free(_2768029528916325350998);

	

		bigint_t* _182831917206300245841;
		bigint_t* _1360523036131417805271 = bigint(105);
		bigint_t* _3597563594927405112487 = bigint(-7085874);
		bigint_t* _2708294081271180008517 = bigint_add(_1360523036131417805271, _3597563594927405112487 );
		bigint_to_string(_2708294081271180008517, 10, buffer);
		printf("trying ");
		puts("add(105, -7085874)");
		puts(buffer);
		assert(strcmp(buffer, "-7085769") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1360523036131417805271);
		bigint_free(_3597563594927405112487);
		bigint_free(_2708294081271180008517);

	

		bigint_t* _1349953204299248300135;
		bigint_t* _1343769547771566175917 = bigint(105);
		bigint_t* _406690163968833447693 = bigint(-7085874);
		bigint_t* _2799825245092679294450 = bigint_sub(_1343769547771566175917, _406690163968833447693 );
		bigint_to_string(_2799825245092679294450, 10, buffer);
		printf("trying ");
		puts("sub(105, -7085874)");
		puts(buffer);
		assert(strcmp(buffer, "7085979") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1343769547771566175917);
		bigint_free(_406690163968833447693);
		bigint_free(_2799825245092679294450);

	

		bigint_t* _3743575478383840467402;
		bigint_t* _4230782799439934297568 = bigint(-207);
		bigint_t* _3901744454172851533359 = bigint(9611395);
		bigint_t* _339527303508894690080 = bigint_mul(_4230782799439934297568, _3901744454172851533359 );
		bigint_to_string(_339527303508894690080, 10, buffer);
		printf("trying ");
		puts("mul(-207, 9611395)");
		puts(buffer);
		assert(strcmp(buffer, "-1989558765") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4230782799439934297568);
		bigint_free(_3901744454172851533359);
		bigint_free(_339527303508894690080);

	

		bigint_t* _21845005015460415443;
		bigint_t* _2030182037409155800870 = bigint(-207);
		bigint_t* _3557607751854841745264 = bigint(9611395);
		bigint_t* _324730944990586142236 = bigint_add(_2030182037409155800870, _3557607751854841745264 );
		bigint_to_string(_324730944990586142236, 10, buffer);
		printf("trying ");
		puts("add(-207, 9611395)");
		puts(buffer);
		assert(strcmp(buffer, "9611188") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2030182037409155800870);
		bigint_free(_3557607751854841745264);
		bigint_free(_324730944990586142236);

	

		bigint_t* _3251988313219429625411;
		bigint_t* _3396622361042067485905 = bigint(-207);
		bigint_t* _2543337804724136431604 = bigint(9611395);
		bigint_t* _2748686605606348784138 = bigint_sub(_3396622361042067485905, _2543337804724136431604 );
		bigint_to_string(_2748686605606348784138, 10, buffer);
		printf("trying ");
		puts("sub(-207, 9611395)");
		puts(buffer);
		assert(strcmp(buffer, "-9611602") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3396622361042067485905);
		bigint_free(_2543337804724136431604);
		bigint_free(_2748686605606348784138);

	

		bigint_t* _1616584237540409291102;
		bigint_t* _3458089795298298423903 = bigint(-1);
		bigint_t* _3988564500052481065655 = bigint(-7383559);
		bigint_t* _640449900540042639682 = bigint_mul(_3458089795298298423903, _3988564500052481065655 );
		bigint_to_string(_640449900540042639682, 10, buffer);
		printf("trying ");
		puts("mul(-1, -7383559)");
		puts(buffer);
		assert(strcmp(buffer, "7383559") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3458089795298298423903);
		bigint_free(_3988564500052481065655);
		bigint_free(_640449900540042639682);

	

		bigint_t* _2683726118899014343656;
		bigint_t* _4070414708521829191066 = bigint(-1);
		bigint_t* _4202801483887290993035 = bigint(-7383559);
		bigint_t* _2364554436624138247884 = bigint_add(_4070414708521829191066, _4202801483887290993035 );
		bigint_to_string(_2364554436624138247884, 10, buffer);
		printf("trying ");
		puts("add(-1, -7383559)");
		puts(buffer);
		assert(strcmp(buffer, "-7383560") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4070414708521829191066);
		bigint_free(_4202801483887290993035);
		bigint_free(_2364554436624138247884);

	

		bigint_t* _1364146073194214701130;
		bigint_t* _2831836179505858591229 = bigint(-1);
		bigint_t* _2875799252291983359600 = bigint(-7383559);
		bigint_t* _1761027837829973431795 = bigint_sub(_2831836179505858591229, _2875799252291983359600 );
		bigint_to_string(_1761027837829973431795, 10, buffer);
		printf("trying ");
		puts("sub(-1, -7383559)");
		puts(buffer);
		assert(strcmp(buffer, "7383558") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2831836179505858591229);
		bigint_free(_2875799252291983359600);
		bigint_free(_1761027837829973431795);

	

		bigint_t* _18014295700476797340;
		bigint_t* _2532518159453349102768 = bigint(191);
		bigint_t* _444488559466681335404 = bigint(-2956235);
		bigint_t* _1961796456368430216348 = bigint_mul(_2532518159453349102768, _444488559466681335404 );
		bigint_to_string(_1961796456368430216348, 10, buffer);
		printf("trying ");
		puts("mul(191, -2956235)");
		puts(buffer);
		assert(strcmp(buffer, "-564640885") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2532518159453349102768);
		bigint_free(_444488559466681335404);
		bigint_free(_1961796456368430216348);

	

		bigint_t* _2863084435131147585325;
		bigint_t* _888939439979201099469 = bigint(191);
		bigint_t* _3669415257982952124568 = bigint(-2956235);
		bigint_t* _2608066762539145547008 = bigint_add(_888939439979201099469, _3669415257982952124568 );
		bigint_to_string(_2608066762539145547008, 10, buffer);
		printf("trying ");
		puts("add(191, -2956235)");
		puts(buffer);
		assert(strcmp(buffer, "-2956044") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_888939439979201099469);
		bigint_free(_3669415257982952124568);
		bigint_free(_2608066762539145547008);

	

		bigint_t* _2324840773931120431316;
		bigint_t* _939847443477599588081 = bigint(191);
		bigint_t* _996809985838999578140 = bigint(-2956235);
		bigint_t* _975595408936415138420 = bigint_sub(_939847443477599588081, _996809985838999578140 );
		bigint_to_string(_975595408936415138420, 10, buffer);
		printf("trying ");
		puts("sub(191, -2956235)");
		puts(buffer);
		assert(strcmp(buffer, "2956426") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_939847443477599588081);
		bigint_free(_996809985838999578140);
		bigint_free(_975595408936415138420);

	

		bigint_t* _3020278882248412818106;
		bigint_t* _668664235710549450070 = bigint(230);
		bigint_t* _2417209597425186442590 = bigint(-8317838);
		bigint_t* _219779999729265488680 = bigint_mul(_668664235710549450070, _2417209597425186442590 );
		bigint_to_string(_219779999729265488680, 10, buffer);
		printf("trying ");
		puts("mul(230, -8317838)");
		puts(buffer);
		assert(strcmp(buffer, "-1913102740") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_668664235710549450070);
		bigint_free(_2417209597425186442590);
		bigint_free(_219779999729265488680);

	

		bigint_t* _555503814324822869149;
		bigint_t* _4577145779398776141703 = bigint(230);
		bigint_t* _1509253112274693687361 = bigint(-8317838);
		bigint_t* _4557551160870122815423 = bigint_add(_4577145779398776141703, _1509253112274693687361 );
		bigint_to_string(_4557551160870122815423, 10, buffer);
		printf("trying ");
		puts("add(230, -8317838)");
		puts(buffer);
		assert(strcmp(buffer, "-8317608") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4577145779398776141703);
		bigint_free(_1509253112274693687361);
		bigint_free(_4557551160870122815423);

	

		bigint_t* _3116676062646870585648;
		bigint_t* _1271500567876009261688 = bigint(230);
		bigint_t* _26533985945034873092 = bigint(-8317838);
		bigint_t* _1817861863875187312755 = bigint_sub(_1271500567876009261688, _26533985945034873092 );
		bigint_to_string(_1817861863875187312755, 10, buffer);
		printf("trying ");
		puts("sub(230, -8317838)");
		puts(buffer);
		assert(strcmp(buffer, "8318068") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1271500567876009261688);
		bigint_free(_26533985945034873092);
		bigint_free(_1817861863875187312755);

	

		bigint_t* _1514398801006258057433;
		bigint_t* _4558885215744614467529 = bigint(73);
		bigint_t* _1524376621125155566421 = bigint(-84275);
		bigint_t* _3710910563389645099636 = bigint_mul(_4558885215744614467529, _1524376621125155566421 );
		bigint_to_string(_3710910563389645099636, 10, buffer);
		printf("trying ");
		puts("mul(73, -84275)");
		puts(buffer);
		assert(strcmp(buffer, "-6152075") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4558885215744614467529);
		bigint_free(_1524376621125155566421);
		bigint_free(_3710910563389645099636);

	

		bigint_t* _2824137377957631765004;
		bigint_t* _3548823656778800935607 = bigint(73);
		bigint_t* _3458294295852800279331 = bigint(-84275);
		bigint_t* _4272036723886041930765 = bigint_add(_3548823656778800935607, _3458294295852800279331 );
		bigint_to_string(_4272036723886041930765, 10, buffer);
		printf("trying ");
		puts("add(73, -84275)");
		puts(buffer);
		assert(strcmp(buffer, "-84202") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3548823656778800935607);
		bigint_free(_3458294295852800279331);
		bigint_free(_4272036723886041930765);

	

		bigint_t* _4410503426037788533211;
		bigint_t* _758319972972130750775 = bigint(73);
		bigint_t* _215398846716391300861 = bigint(-84275);
		bigint_t* _1177084353293267898142 = bigint_sub(_758319972972130750775, _215398846716391300861 );
		bigint_to_string(_1177084353293267898142, 10, buffer);
		printf("trying ");
		puts("sub(73, -84275)");
		puts(buffer);
		assert(strcmp(buffer, "84348") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_758319972972130750775);
		bigint_free(_215398846716391300861);
		bigint_free(_1177084353293267898142);

	

		bigint_t* _3823942043804598704696;
		bigint_t* _3322702515872866837102 = bigint(209);
		bigint_t* _921238944267952607849 = bigint(1379347);
		bigint_t* _696962540909731826121 = bigint_mul(_3322702515872866837102, _921238944267952607849 );
		bigint_to_string(_696962540909731826121, 10, buffer);
		printf("trying ");
		puts("mul(209, 1379347)");
		puts(buffer);
		assert(strcmp(buffer, "288283523") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3322702515872866837102);
		bigint_free(_921238944267952607849);
		bigint_free(_696962540909731826121);

	

		bigint_t* _3623258912632989972364;
		bigint_t* _1867246011907622381371 = bigint(209);
		bigint_t* _616847551166195065531 = bigint(1379347);
		bigint_t* _3200614161587423360412 = bigint_add(_1867246011907622381371, _616847551166195065531 );
		bigint_to_string(_3200614161587423360412, 10, buffer);
		printf("trying ");
		puts("add(209, 1379347)");
		puts(buffer);
		assert(strcmp(buffer, "1379556") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1867246011907622381371);
		bigint_free(_616847551166195065531);
		bigint_free(_3200614161587423360412);

	

		bigint_t* _2586660975283495397887;
		bigint_t* _1102888619201002882228 = bigint(209);
		bigint_t* _956598278946419564521 = bigint(1379347);
		bigint_t* _1423766162008263181933 = bigint_sub(_1102888619201002882228, _956598278946419564521 );
		bigint_to_string(_1423766162008263181933, 10, buffer);
		printf("trying ");
		puts("sub(209, 1379347)");
		puts(buffer);
		assert(strcmp(buffer, "-1379138") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1102888619201002882228);
		bigint_free(_956598278946419564521);
		bigint_free(_1423766162008263181933);

	

		bigint_t* _3231019262412849632191;
		bigint_t* _1833088238778404860393 = bigint(-153);
		bigint_t* _2245081317272596784093 = bigint(-9860374);
		bigint_t* _1173413824157564515928 = bigint_mul(_1833088238778404860393, _2245081317272596784093 );
		bigint_to_string(_1173413824157564515928, 10, buffer);
		printf("trying ");
		puts("mul(-153, -9860374)");
		puts(buffer);
		assert(strcmp(buffer, "1508637222") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1833088238778404860393);
		bigint_free(_2245081317272596784093);
		bigint_free(_1173413824157564515928);

	

		bigint_t* _3344478513012697084412;
		bigint_t* _2990212878858270794935 = bigint(-153);
		bigint_t* _2270930091817196951945 = bigint(-9860374);
		bigint_t* _441040023015132578042 = bigint_add(_2990212878858270794935, _2270930091817196951945 );
		bigint_to_string(_441040023015132578042, 10, buffer);
		printf("trying ");
		puts("add(-153, -9860374)");
		puts(buffer);
		assert(strcmp(buffer, "-9860527") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2990212878858270794935);
		bigint_free(_2270930091817196951945);
		bigint_free(_441040023015132578042);

	

		bigint_t* _166018972463854397426;
		bigint_t* _2820030995367837645168 = bigint(-153);
		bigint_t* _1052404345797240683613 = bigint(-9860374);
		bigint_t* _2772278517734273465745 = bigint_sub(_2820030995367837645168, _1052404345797240683613 );
		bigint_to_string(_2772278517734273465745, 10, buffer);
		printf("trying ");
		puts("sub(-153, -9860374)");
		puts(buffer);
		assert(strcmp(buffer, "9860221") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2820030995367837645168);
		bigint_free(_1052404345797240683613);
		bigint_free(_2772278517734273465745);

	

		bigint_t* _3678087289455407391106;
		bigint_t* _2389256921250775961186 = bigint(-42);
		bigint_t* _3782154686240744966866 = bigint(-5034275);
		bigint_t* _3062744598982810679517 = bigint_mul(_2389256921250775961186, _3782154686240744966866 );
		bigint_to_string(_3062744598982810679517, 10, buffer);
		printf("trying ");
		puts("mul(-42, -5034275)");
		puts(buffer);
		assert(strcmp(buffer, "211439550") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2389256921250775961186);
		bigint_free(_3782154686240744966866);
		bigint_free(_3062744598982810679517);

	

		bigint_t* _4364726119728803760240;
		bigint_t* _4644935481735641404693 = bigint(-42);
		bigint_t* _2044313418155010305996 = bigint(-5034275);
		bigint_t* _431307233744799593784 = bigint_add(_4644935481735641404693, _2044313418155010305996 );
		bigint_to_string(_431307233744799593784, 10, buffer);
		printf("trying ");
		puts("add(-42, -5034275)");
		puts(buffer);
		assert(strcmp(buffer, "-5034317") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4644935481735641404693);
		bigint_free(_2044313418155010305996);
		bigint_free(_431307233744799593784);

	

		bigint_t* _2435836052265531603601;
		bigint_t* _2368464129889430015876 = bigint(-42);
		bigint_t* _3583270197388559941898 = bigint(-5034275);
		bigint_t* _119633189662313289042 = bigint_sub(_2368464129889430015876, _3583270197388559941898 );
		bigint_to_string(_119633189662313289042, 10, buffer);
		printf("trying ");
		puts("sub(-42, -5034275)");
		puts(buffer);
		assert(strcmp(buffer, "5034233") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2368464129889430015876);
		bigint_free(_3583270197388559941898);
		bigint_free(_119633189662313289042);

	

		bigint_t* _4212168549756727431582;
		bigint_t* _566140405280996590078 = bigint(51);
		bigint_t* _2760900609962741686543 = bigint(1727088);
		bigint_t* _4657719547678582116949 = bigint_mul(_566140405280996590078, _2760900609962741686543 );
		bigint_to_string(_4657719547678582116949, 10, buffer);
		printf("trying ");
		puts("mul(51, 1727088)");
		puts(buffer);
		assert(strcmp(buffer, "88081488") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_566140405280996590078);
		bigint_free(_2760900609962741686543);
		bigint_free(_4657719547678582116949);

	

		bigint_t* _2846409885328726636414;
		bigint_t* _4672178132327244895384 = bigint(51);
		bigint_t* _3900927384593323710967 = bigint(1727088);
		bigint_t* _4258721334671579441301 = bigint_add(_4672178132327244895384, _3900927384593323710967 );
		bigint_to_string(_4258721334671579441301, 10, buffer);
		printf("trying ");
		puts("add(51, 1727088)");
		puts(buffer);
		assert(strcmp(buffer, "1727139") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4672178132327244895384);
		bigint_free(_3900927384593323710967);
		bigint_free(_4258721334671579441301);

	

		bigint_t* _983714277422137079148;
		bigint_t* _358003395657151515157 = bigint(51);
		bigint_t* _3970639275710548694370 = bigint(1727088);
		bigint_t* _408885394958443728143 = bigint_sub(_358003395657151515157, _3970639275710548694370 );
		bigint_to_string(_408885394958443728143, 10, buffer);
		printf("trying ");
		puts("sub(51, 1727088)");
		puts(buffer);
		assert(strcmp(buffer, "-1727037") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_358003395657151515157);
		bigint_free(_3970639275710548694370);
		bigint_free(_408885394958443728143);

	

		bigint_t* _3623757258842771259514;
		bigint_t* _2439243586947560290784 = bigint(-44);
		bigint_t* _771859958749855103617 = bigint(-2081943);
		bigint_t* _2384944691501928758476 = bigint_mul(_2439243586947560290784, _771859958749855103617 );
		bigint_to_string(_2384944691501928758476, 10, buffer);
		printf("trying ");
		puts("mul(-44, -2081943)");
		puts(buffer);
		assert(strcmp(buffer, "91605492") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2439243586947560290784);
		bigint_free(_771859958749855103617);
		bigint_free(_2384944691501928758476);

	

		bigint_t* _3543777252237002902914;
		bigint_t* _1803214338623775282981 = bigint(-44);
		bigint_t* _3748875963416353398218 = bigint(-2081943);
		bigint_t* _1594684589333078950344 = bigint_add(_1803214338623775282981, _3748875963416353398218 );
		bigint_to_string(_1594684589333078950344, 10, buffer);
		printf("trying ");
		puts("add(-44, -2081943)");
		puts(buffer);
		assert(strcmp(buffer, "-2081987") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1803214338623775282981);
		bigint_free(_3748875963416353398218);
		bigint_free(_1594684589333078950344);

	

		bigint_t* _849547760525579398403;
		bigint_t* _4152414601978812808574 = bigint(-44);
		bigint_t* _3525774653308247594776 = bigint(-2081943);
		bigint_t* _37817671697252886025 = bigint_sub(_4152414601978812808574, _3525774653308247594776 );
		bigint_to_string(_37817671697252886025, 10, buffer);
		printf("trying ");
		puts("sub(-44, -2081943)");
		puts(buffer);
		assert(strcmp(buffer, "2081899") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4152414601978812808574);
		bigint_free(_3525774653308247594776);
		bigint_free(_37817671697252886025);

	

		bigint_t* _2694166243925267338295;
		bigint_t* _3826483266074648636876 = bigint(190);
		bigint_t* _1851384303406963290304 = bigint(7959640);
		bigint_t* _1688242662882295064170 = bigint_mul(_3826483266074648636876, _1851384303406963290304 );
		bigint_to_string(_1688242662882295064170, 10, buffer);
		printf("trying ");
		puts("mul(190, 7959640)");
		puts(buffer);
		assert(strcmp(buffer, "1512331600") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3826483266074648636876);
		bigint_free(_1851384303406963290304);
		bigint_free(_1688242662882295064170);

	

		bigint_t* _697370050369544079691;
		bigint_t* _2525478762279959373662 = bigint(190);
		bigint_t* _500331278940995307215 = bigint(7959640);
		bigint_t* _1656326605497490501962 = bigint_add(_2525478762279959373662, _500331278940995307215 );
		bigint_to_string(_1656326605497490501962, 10, buffer);
		printf("trying ");
		puts("add(190, 7959640)");
		puts(buffer);
		assert(strcmp(buffer, "7959830") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2525478762279959373662);
		bigint_free(_500331278940995307215);
		bigint_free(_1656326605497490501962);

	

		bigint_t* _2544339428477903880507;
		bigint_t* _2804079602816360134932 = bigint(190);
		bigint_t* _1764104730420276110867 = bigint(7959640);
		bigint_t* _3900616023013927569150 = bigint_sub(_2804079602816360134932, _1764104730420276110867 );
		bigint_to_string(_3900616023013927569150, 10, buffer);
		printf("trying ");
		puts("sub(190, 7959640)");
		puts(buffer);
		assert(strcmp(buffer, "-7959450") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2804079602816360134932);
		bigint_free(_1764104730420276110867);
		bigint_free(_3900616023013927569150);

	

		bigint_t* _3114864000180490295870;
		bigint_t* _1931522060434924413956 = bigint(108);
		bigint_t* _702963771531085333656 = bigint(-7211753);
		bigint_t* _3207802678303475624325 = bigint_mul(_1931522060434924413956, _702963771531085333656 );
		bigint_to_string(_3207802678303475624325, 10, buffer);
		printf("trying ");
		puts("mul(108, -7211753)");
		puts(buffer);
		assert(strcmp(buffer, "-778869324") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1931522060434924413956);
		bigint_free(_702963771531085333656);
		bigint_free(_3207802678303475624325);

	

		bigint_t* _3157111338481698131806;
		bigint_t* _3744040721413417444003 = bigint(108);
		bigint_t* _3521775300272714725571 = bigint(-7211753);
		bigint_t* _1498307951270834189419 = bigint_add(_3744040721413417444003, _3521775300272714725571 );
		bigint_to_string(_1498307951270834189419, 10, buffer);
		printf("trying ");
		puts("add(108, -7211753)");
		puts(buffer);
		assert(strcmp(buffer, "-7211645") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3744040721413417444003);
		bigint_free(_3521775300272714725571);
		bigint_free(_1498307951270834189419);

	

		bigint_t* _425042572655477657049;
		bigint_t* _4421935279667699405986 = bigint(108);
		bigint_t* _4094666832856184549000 = bigint(-7211753);
		bigint_t* _2258375866862498841276 = bigint_sub(_4421935279667699405986, _4094666832856184549000 );
		bigint_to_string(_2258375866862498841276, 10, buffer);
		printf("trying ");
		puts("sub(108, -7211753)");
		puts(buffer);
		assert(strcmp(buffer, "7211861") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4421935279667699405986);
		bigint_free(_4094666832856184549000);
		bigint_free(_2258375866862498841276);

	

		bigint_t* _2965919052300055973935;
		bigint_t* _3259618369073255654768 = bigint(-6);
		bigint_t* _277084908929974557440 = bigint(-3925789);
		bigint_t* _882327604195115804787 = bigint_mul(_3259618369073255654768, _277084908929974557440 );
		bigint_to_string(_882327604195115804787, 10, buffer);
		printf("trying ");
		puts("mul(-6, -3925789)");
		puts(buffer);
		assert(strcmp(buffer, "23554734") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3259618369073255654768);
		bigint_free(_277084908929974557440);
		bigint_free(_882327604195115804787);

	

		bigint_t* _2679545737770422797525;
		bigint_t* _1024692424247369797510 = bigint(-6);
		bigint_t* _3289601549853235487171 = bigint(-3925789);
		bigint_t* _3152915337526049554590 = bigint_add(_1024692424247369797510, _3289601549853235487171 );
		bigint_to_string(_3152915337526049554590, 10, buffer);
		printf("trying ");
		puts("add(-6, -3925789)");
		puts(buffer);
		assert(strcmp(buffer, "-3925795") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1024692424247369797510);
		bigint_free(_3289601549853235487171);
		bigint_free(_3152915337526049554590);

	

		bigint_t* _1860865449119255723017;
		bigint_t* _77459428703596031032 = bigint(-6);
		bigint_t* _2636921892610514745144 = bigint(-3925789);
		bigint_t* _630599142267722517894 = bigint_sub(_77459428703596031032, _2636921892610514745144 );
		bigint_to_string(_630599142267722517894, 10, buffer);
		printf("trying ");
		puts("sub(-6, -3925789)");
		puts(buffer);
		assert(strcmp(buffer, "3925783") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_77459428703596031032);
		bigint_free(_2636921892610514745144);
		bigint_free(_630599142267722517894);

	

		bigint_t* _823563805061093971560;
		bigint_t* _1396237467457298891820 = bigint(-129);
		bigint_t* _401624915240363524959 = bigint(-10359820);
		bigint_t* _3550803213244585068402 = bigint_mul(_1396237467457298891820, _401624915240363524959 );
		bigint_to_string(_3550803213244585068402, 10, buffer);
		printf("trying ");
		puts("mul(-129, -10359820)");
		puts(buffer);
		assert(strcmp(buffer, "1336416780") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1396237467457298891820);
		bigint_free(_401624915240363524959);
		bigint_free(_3550803213244585068402);

	

		bigint_t* _1667333527552519391514;
		bigint_t* _2888911025560850553577 = bigint(-129);
		bigint_t* _3065252793705518800290 = bigint(-10359820);
		bigint_t* _4374277056538226083453 = bigint_add(_2888911025560850553577, _3065252793705518800290 );
		bigint_to_string(_4374277056538226083453, 10, buffer);
		printf("trying ");
		puts("add(-129, -10359820)");
		puts(buffer);
		assert(strcmp(buffer, "-10359949") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2888911025560850553577);
		bigint_free(_3065252793705518800290);
		bigint_free(_4374277056538226083453);

	

		bigint_t* _1768572196018553060896;
		bigint_t* _3276914031474831109142 = bigint(-129);
		bigint_t* _2107776503871523563303 = bigint(-10359820);
		bigint_t* _2620501167206069230489 = bigint_sub(_3276914031474831109142, _2107776503871523563303 );
		bigint_to_string(_2620501167206069230489, 10, buffer);
		printf("trying ");
		puts("sub(-129, -10359820)");
		puts(buffer);
		assert(strcmp(buffer, "10359691") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3276914031474831109142);
		bigint_free(_2107776503871523563303);
		bigint_free(_2620501167206069230489);

	

		bigint_t* _3693808616655818337607;
		bigint_t* _1519350726373547952077 = bigint(180);
		bigint_t* _3342842545775712217899 = bigint(-6222815);
		bigint_t* _236993533704028898172 = bigint_mul(_1519350726373547952077, _3342842545775712217899 );
		bigint_to_string(_236993533704028898172, 10, buffer);
		printf("trying ");
		puts("mul(180, -6222815)");
		puts(buffer);
		assert(strcmp(buffer, "-1120106700") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1519350726373547952077);
		bigint_free(_3342842545775712217899);
		bigint_free(_236993533704028898172);

	

		bigint_t* _279859815363593731707;
		bigint_t* _209281705459362843062 = bigint(180);
		bigint_t* _4179838077601476233291 = bigint(-6222815);
		bigint_t* _3271425276253717918960 = bigint_add(_209281705459362843062, _4179838077601476233291 );
		bigint_to_string(_3271425276253717918960, 10, buffer);
		printf("trying ");
		puts("add(180, -6222815)");
		puts(buffer);
		assert(strcmp(buffer, "-6222635") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_209281705459362843062);
		bigint_free(_4179838077601476233291);
		bigint_free(_3271425276253717918960);

	

		bigint_t* _587147605341404007523;
		bigint_t* _3290912181679752861103 = bigint(180);
		bigint_t* _1636207703307583268569 = bigint(-6222815);
		bigint_t* _3589778289642775572706 = bigint_sub(_3290912181679752861103, _1636207703307583268569 );
		bigint_to_string(_3589778289642775572706, 10, buffer);
		printf("trying ");
		puts("sub(180, -6222815)");
		puts(buffer);
		assert(strcmp(buffer, "6222995") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3290912181679752861103);
		bigint_free(_1636207703307583268569);
		bigint_free(_3589778289642775572706);

	

		bigint_t* _3241204498487885091636;
		bigint_t* _397442483117268550953 = bigint(219);
		bigint_t* _490600763398678068573 = bigint(-15938595);
		bigint_t* _3184965209872322572060 = bigint_mul(_397442483117268550953, _490600763398678068573 );
		bigint_to_string(_3184965209872322572060, 10, buffer);
		printf("trying ");
		puts("mul(219, -15938595)");
		puts(buffer);
		assert(strcmp(buffer, "-3490552305") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_397442483117268550953);
		bigint_free(_490600763398678068573);
		bigint_free(_3184965209872322572060);

	

		bigint_t* _4717928769021819327794;
		bigint_t* _4185094453025010983379 = bigint(219);
		bigint_t* _2857005494137941984065 = bigint(-15938595);
		bigint_t* _4067930766759156175803 = bigint_add(_4185094453025010983379, _2857005494137941984065 );
		bigint_to_string(_4067930766759156175803, 10, buffer);
		printf("trying ");
		puts("add(219, -15938595)");
		puts(buffer);
		assert(strcmp(buffer, "-15938376") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4185094453025010983379);
		bigint_free(_2857005494137941984065);
		bigint_free(_4067930766759156175803);

	

		bigint_t* _2019473350685065214424;
		bigint_t* _773918445244165498498 = bigint(219);
		bigint_t* _1840456289136757766722 = bigint(-15938595);
		bigint_t* _744438193949887755907 = bigint_sub(_773918445244165498498, _1840456289136757766722 );
		bigint_to_string(_744438193949887755907, 10, buffer);
		printf("trying ");
		puts("sub(219, -15938595)");
		puts(buffer);
		assert(strcmp(buffer, "15938814") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_773918445244165498498);
		bigint_free(_1840456289136757766722);
		bigint_free(_744438193949887755907);

	

		bigint_t* _3963109745199512023291;
		bigint_t* _865301492181103731861 = bigint(187);
		bigint_t* _1014817099507384074134 = bigint(-3151693);
		bigint_t* _733498960404470226002 = bigint_mul(_865301492181103731861, _1014817099507384074134 );
		bigint_to_string(_733498960404470226002, 10, buffer);
		printf("trying ");
		puts("mul(187, -3151693)");
		puts(buffer);
		assert(strcmp(buffer, "-589366591") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_865301492181103731861);
		bigint_free(_1014817099507384074134);
		bigint_free(_733498960404470226002);

	

		bigint_t* _1583425074189047456267;
		bigint_t* _3586382671468718809598 = bigint(187);
		bigint_t* _3475615726076931441171 = bigint(-3151693);
		bigint_t* _480934158772460423885 = bigint_add(_3586382671468718809598, _3475615726076931441171 );
		bigint_to_string(_480934158772460423885, 10, buffer);
		printf("trying ");
		puts("add(187, -3151693)");
		puts(buffer);
		assert(strcmp(buffer, "-3151506") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3586382671468718809598);
		bigint_free(_3475615726076931441171);
		bigint_free(_480934158772460423885);

	

		bigint_t* _3347706499215276336709;
		bigint_t* _2437662105367909943618 = bigint(187);
		bigint_t* _2501922237420441528951 = bigint(-3151693);
		bigint_t* _4003463051295953729926 = bigint_sub(_2437662105367909943618, _2501922237420441528951 );
		bigint_to_string(_4003463051295953729926, 10, buffer);
		printf("trying ");
		puts("sub(187, -3151693)");
		puts(buffer);
		assert(strcmp(buffer, "3151880") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2437662105367909943618);
		bigint_free(_2501922237420441528951);
		bigint_free(_4003463051295953729926);

	

		bigint_t* _722103634250743655547;
		bigint_t* _1512787572929681533157 = bigint(123);
		bigint_t* _2661839758076446043070 = bigint(13079433);
		bigint_t* _4078281466870430431896 = bigint_mul(_1512787572929681533157, _2661839758076446043070 );
		bigint_to_string(_4078281466870430431896, 10, buffer);
		printf("trying ");
		puts("mul(123, 13079433)");
		puts(buffer);
		assert(strcmp(buffer, "1608770259") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1512787572929681533157);
		bigint_free(_2661839758076446043070);
		bigint_free(_4078281466870430431896);

	

		bigint_t* _2503740833270425582396;
		bigint_t* _428188160023715668066 = bigint(123);
		bigint_t* _2773078408102486781107 = bigint(13079433);
		bigint_t* _335679779110841607883 = bigint_add(_428188160023715668066, _2773078408102486781107 );
		bigint_to_string(_335679779110841607883, 10, buffer);
		printf("trying ");
		puts("add(123, 13079433)");
		puts(buffer);
		assert(strcmp(buffer, "13079556") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_428188160023715668066);
		bigint_free(_2773078408102486781107);
		bigint_free(_335679779110841607883);

	

		bigint_t* _4473118623120877482507;
		bigint_t* _3681750053233539103693 = bigint(123);
		bigint_t* _3817218017019627297376 = bigint(13079433);
		bigint_t* _2832377120785951101493 = bigint_sub(_3681750053233539103693, _3817218017019627297376 );
		bigint_to_string(_2832377120785951101493, 10, buffer);
		printf("trying ");
		puts("sub(123, 13079433)");
		puts(buffer);
		assert(strcmp(buffer, "-13079310") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3681750053233539103693);
		bigint_free(_3817218017019627297376);
		bigint_free(_2832377120785951101493);

	

		bigint_t* _4510113983371982706925;
		bigint_t* _3658138774223267361675 = bigint(-87);
		bigint_t* _445461527926267086236 = bigint(-563618);
		bigint_t* _3004602031917781036056 = bigint_mul(_3658138774223267361675, _445461527926267086236 );
		bigint_to_string(_3004602031917781036056, 10, buffer);
		printf("trying ");
		puts("mul(-87, -563618)");
		puts(buffer);
		assert(strcmp(buffer, "49034766") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3658138774223267361675);
		bigint_free(_445461527926267086236);
		bigint_free(_3004602031917781036056);

	

		bigint_t* _2181217058178028358790;
		bigint_t* _4024317877977911927539 = bigint(-87);
		bigint_t* _2249509776484825443462 = bigint(-563618);
		bigint_t* _2358699214853629027693 = bigint_add(_4024317877977911927539, _2249509776484825443462 );
		bigint_to_string(_2358699214853629027693, 10, buffer);
		printf("trying ");
		puts("add(-87, -563618)");
		puts(buffer);
		assert(strcmp(buffer, "-563705") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4024317877977911927539);
		bigint_free(_2249509776484825443462);
		bigint_free(_2358699214853629027693);

	

		bigint_t* _3887774015388924445003;
		bigint_t* _4657090121077844588677 = bigint(-87);
		bigint_t* _1788745904420063382224 = bigint(-563618);
		bigint_t* _2035427306490137368328 = bigint_sub(_4657090121077844588677, _1788745904420063382224 );
		bigint_to_string(_2035427306490137368328, 10, buffer);
		printf("trying ");
		puts("sub(-87, -563618)");
		puts(buffer);
		assert(strcmp(buffer, "563531") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4657090121077844588677);
		bigint_free(_1788745904420063382224);
		bigint_free(_2035427306490137368328);

	

		bigint_t* _2534567601500553381895;
		bigint_t* _2733392064930380819295 = bigint(-71);
		bigint_t* _2909750834346684880659 = bigint(-1428383);
		bigint_t* _3218385151306728872277 = bigint_mul(_2733392064930380819295, _2909750834346684880659 );
		bigint_to_string(_3218385151306728872277, 10, buffer);
		printf("trying ");
		puts("mul(-71, -1428383)");
		puts(buffer);
		assert(strcmp(buffer, "101415193") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2733392064930380819295);
		bigint_free(_2909750834346684880659);
		bigint_free(_3218385151306728872277);

	

		bigint_t* _1394469728356723962974;
		bigint_t* _4432713878141519172905 = bigint(-71);
		bigint_t* _2447629703575736131417 = bigint(-1428383);
		bigint_t* _2194843126301162963050 = bigint_add(_4432713878141519172905, _2447629703575736131417 );
		bigint_to_string(_2194843126301162963050, 10, buffer);
		printf("trying ");
		puts("add(-71, -1428383)");
		puts(buffer);
		assert(strcmp(buffer, "-1428454") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4432713878141519172905);
		bigint_free(_2447629703575736131417);
		bigint_free(_2194843126301162963050);

	

		bigint_t* _807310689082598710624;
		bigint_t* _2013010213911819879610 = bigint(-71);
		bigint_t* _3082666291524659790463 = bigint(-1428383);
		bigint_t* _318380533711182168569 = bigint_sub(_2013010213911819879610, _3082666291524659790463 );
		bigint_to_string(_318380533711182168569, 10, buffer);
		printf("trying ");
		puts("sub(-71, -1428383)");
		puts(buffer);
		assert(strcmp(buffer, "1428312") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2013010213911819879610);
		bigint_free(_3082666291524659790463);
		bigint_free(_318380533711182168569);

	

		bigint_t* _2841182980196281250203;
		bigint_t* _1523299471654819353488 = bigint(144);
		bigint_t* _2115516561034101463383 = bigint(-3092150);
		bigint_t* _1353927518763285076964 = bigint_mul(_1523299471654819353488, _2115516561034101463383 );
		bigint_to_string(_1353927518763285076964, 10, buffer);
		printf("trying ");
		puts("mul(144, -3092150)");
		puts(buffer);
		assert(strcmp(buffer, "-445269600") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1523299471654819353488);
		bigint_free(_2115516561034101463383);
		bigint_free(_1353927518763285076964);

	

		bigint_t* _262015371465314360499;
		bigint_t* _4240581517967612357379 = bigint(144);
		bigint_t* _1018851390821294590125 = bigint(-3092150);
		bigint_t* _1009957350878984679063 = bigint_add(_4240581517967612357379, _1018851390821294590125 );
		bigint_to_string(_1009957350878984679063, 10, buffer);
		printf("trying ");
		puts("add(144, -3092150)");
		puts(buffer);
		assert(strcmp(buffer, "-3092006") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4240581517967612357379);
		bigint_free(_1018851390821294590125);
		bigint_free(_1009957350878984679063);

	

		bigint_t* _3549262456621991690604;
		bigint_t* _3677016894223595715428 = bigint(144);
		bigint_t* _3807029376277184743024 = bigint(-3092150);
		bigint_t* _1831032467592285185752 = bigint_sub(_3677016894223595715428, _3807029376277184743024 );
		bigint_to_string(_1831032467592285185752, 10, buffer);
		printf("trying ");
		puts("sub(144, -3092150)");
		puts(buffer);
		assert(strcmp(buffer, "3092294") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3677016894223595715428);
		bigint_free(_3807029376277184743024);
		bigint_free(_1831032467592285185752);

	

		bigint_t* _3209157651206506403850;
		bigint_t* _768820883150668239358 = bigint(155);
		bigint_t* _2407414785565846395362 = bigint(14849492);
		bigint_t* _2144582982679035061932 = bigint_mul(_768820883150668239358, _2407414785565846395362 );
		bigint_to_string(_2144582982679035061932, 10, buffer);
		printf("trying ");
		puts("mul(155, 14849492)");
		puts(buffer);
		assert(strcmp(buffer, "2301671260") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_768820883150668239358);
		bigint_free(_2407414785565846395362);
		bigint_free(_2144582982679035061932);

	

		bigint_t* _2847490646757115916785;
		bigint_t* _1482219393780073935541 = bigint(155);
		bigint_t* _515238557296747428884 = bigint(14849492);
		bigint_t* _1997285638007095271955 = bigint_add(_1482219393780073935541, _515238557296747428884 );
		bigint_to_string(_1997285638007095271955, 10, buffer);
		printf("trying ");
		puts("add(155, 14849492)");
		puts(buffer);
		assert(strcmp(buffer, "14849647") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1482219393780073935541);
		bigint_free(_515238557296747428884);
		bigint_free(_1997285638007095271955);

	

		bigint_t* _2479131055269911757328;
		bigint_t* _2405160531974334656338 = bigint(155);
		bigint_t* _1798148243254154215622 = bigint(14849492);
		bigint_t* _180209934842170997660 = bigint_sub(_2405160531974334656338, _1798148243254154215622 );
		bigint_to_string(_180209934842170997660, 10, buffer);
		printf("trying ");
		puts("sub(155, 14849492)");
		puts(buffer);
		assert(strcmp(buffer, "-14849337") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2405160531974334656338);
		bigint_free(_1798148243254154215622);
		bigint_free(_180209934842170997660);

	

		bigint_t* _1648718459285900023366;
		bigint_t* _4526130381023684031295 = bigint(-142);
		bigint_t* _2520671531504683459236 = bigint(-13752863);
		bigint_t* _4070369845223719113634 = bigint_mul(_4526130381023684031295, _2520671531504683459236 );
		bigint_to_string(_4070369845223719113634, 10, buffer);
		printf("trying ");
		puts("mul(-142, -13752863)");
		puts(buffer);
		assert(strcmp(buffer, "1952906546") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4526130381023684031295);
		bigint_free(_2520671531504683459236);
		bigint_free(_4070369845223719113634);

	

		bigint_t* _1149123364343329869520;
		bigint_t* _3716864398252975019065 = bigint(-142);
		bigint_t* _620024292267009697712 = bigint(-13752863);
		bigint_t* _3586385751346220153594 = bigint_add(_3716864398252975019065, _620024292267009697712 );
		bigint_to_string(_3586385751346220153594, 10, buffer);
		printf("trying ");
		puts("add(-142, -13752863)");
		puts(buffer);
		assert(strcmp(buffer, "-13753005") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3716864398252975019065);
		bigint_free(_620024292267009697712);
		bigint_free(_3586385751346220153594);

	

		bigint_t* _1071512909193683005119;
		bigint_t* _839414903406087941896 = bigint(-142);
		bigint_t* _963863603496615676390 = bigint(-13752863);
		bigint_t* _94011858289335589997 = bigint_sub(_839414903406087941896, _963863603496615676390 );
		bigint_to_string(_94011858289335589997, 10, buffer);
		printf("trying ");
		puts("sub(-142, -13752863)");
		puts(buffer);
		assert(strcmp(buffer, "13752721") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_839414903406087941896);
		bigint_free(_963863603496615676390);
		bigint_free(_94011858289335589997);

	

		bigint_t* _1114518840982167283028;
		bigint_t* _138739725819120214585 = bigint(-101);
		bigint_t* _4243454489498430147455 = bigint(-9719464);
		bigint_t* _3044714482703810219898 = bigint_mul(_138739725819120214585, _4243454489498430147455 );
		bigint_to_string(_3044714482703810219898, 10, buffer);
		printf("trying ");
		puts("mul(-101, -9719464)");
		puts(buffer);
		assert(strcmp(buffer, "981665864") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_138739725819120214585);
		bigint_free(_4243454489498430147455);
		bigint_free(_3044714482703810219898);

	

		bigint_t* _1869595957820927892507;
		bigint_t* _4469699392736072529045 = bigint(-101);
		bigint_t* _1227610426318619327814 = bigint(-9719464);
		bigint_t* _420052819980612754697 = bigint_add(_4469699392736072529045, _1227610426318619327814 );
		bigint_to_string(_420052819980612754697, 10, buffer);
		printf("trying ");
		puts("add(-101, -9719464)");
		puts(buffer);
		assert(strcmp(buffer, "-9719565") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4469699392736072529045);
		bigint_free(_1227610426318619327814);
		bigint_free(_420052819980612754697);

	

		bigint_t* _2313303828965195148936;
		bigint_t* _3895605899703058722897 = bigint(-101);
		bigint_t* _4432906574171884687266 = bigint(-9719464);
		bigint_t* _2321482567131350309711 = bigint_sub(_3895605899703058722897, _4432906574171884687266 );
		bigint_to_string(_2321482567131350309711, 10, buffer);
		printf("trying ");
		puts("sub(-101, -9719464)");
		puts(buffer);
		assert(strcmp(buffer, "9719363") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3895605899703058722897);
		bigint_free(_4432906574171884687266);
		bigint_free(_2321482567131350309711);

	

		bigint_t* _4318359155562614197691;
		bigint_t* _1830445736005383850927 = bigint(0);
		bigint_t* _4396670710419654938530 = bigint(-296651);
		bigint_t* _2561403259230022389160 = bigint_mul(_1830445736005383850927, _4396670710419654938530 );
		bigint_to_string(_2561403259230022389160, 10, buffer);
		printf("trying ");
		puts("mul(0, -296651)");
		puts(buffer);
		assert(strcmp(buffer, "0") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1830445736005383850927);
		bigint_free(_4396670710419654938530);
		bigint_free(_2561403259230022389160);

	

		bigint_t* _2243080082862381014367;
		bigint_t* _2133341963079991100051 = bigint(0);
		bigint_t* _556543057518767667264 = bigint(-296651);
		bigint_t* _1261236108071947894880 = bigint_add(_2133341963079991100051, _556543057518767667264 );
		bigint_to_string(_1261236108071947894880, 10, buffer);
		printf("trying ");
		puts("add(0, -296651)");
		puts(buffer);
		assert(strcmp(buffer, "-296651") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2133341963079991100051);
		bigint_free(_556543057518767667264);
		bigint_free(_1261236108071947894880);

	

		bigint_t* _4294875989042941039006;
		bigint_t* _3789122974203287836811 = bigint(0);
		bigint_t* _2454999907710608641422 = bigint(-296651);
		bigint_t* _4381208573997178502528 = bigint_sub(_3789122974203287836811, _2454999907710608641422 );
		bigint_to_string(_4381208573997178502528, 10, buffer);
		printf("trying ");
		puts("sub(0, -296651)");
		puts(buffer);
		assert(strcmp(buffer, "296651") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3789122974203287836811);
		bigint_free(_2454999907710608641422);
		bigint_free(_4381208573997178502528);

	

		bigint_t* _3288863798027486049135;
		bigint_t* _3196468037300092160894 = bigint(-103);
		bigint_t* _409756759820456437215 = bigint(-14232686);
		bigint_t* _3693622926252738954924 = bigint_mul(_3196468037300092160894, _409756759820456437215 );
		bigint_to_string(_3693622926252738954924, 10, buffer);
		printf("trying ");
		puts("mul(-103, -14232686)");
		puts(buffer);
		assert(strcmp(buffer, "1465966658") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3196468037300092160894);
		bigint_free(_409756759820456437215);
		bigint_free(_3693622926252738954924);

	

		bigint_t* _3484048315145375036337;
		bigint_t* _554922721022403947326 = bigint(-103);
		bigint_t* _561386734560352061347 = bigint(-14232686);
		bigint_t* _2124867557208812747550 = bigint_add(_554922721022403947326, _561386734560352061347 );
		bigint_to_string(_2124867557208812747550, 10, buffer);
		printf("trying ");
		puts("add(-103, -14232686)");
		puts(buffer);
		assert(strcmp(buffer, "-14232789") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_554922721022403947326);
		bigint_free(_561386734560352061347);
		bigint_free(_2124867557208812747550);

	

		bigint_t* _273761062057863175749;
		bigint_t* _4126542757096222730748 = bigint(-103);
		bigint_t* _4350758871322177817911 = bigint(-14232686);
		bigint_t* _3189933379809738645051 = bigint_sub(_4126542757096222730748, _4350758871322177817911 );
		bigint_to_string(_3189933379809738645051, 10, buffer);
		printf("trying ");
		puts("sub(-103, -14232686)");
		puts(buffer);
		assert(strcmp(buffer, "14232583") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4126542757096222730748);
		bigint_free(_4350758871322177817911);
		bigint_free(_3189933379809738645051);

	

		bigint_t* _37806754824677964189;
		bigint_t* _3979196158215143595272 = bigint(41);
		bigint_t* _1668993038533296379867 = bigint(-16095539);
		bigint_t* _140965936987505117864 = bigint_mul(_3979196158215143595272, _1668993038533296379867 );
		bigint_to_string(_140965936987505117864, 10, buffer);
		printf("trying ");
		puts("mul(41, -16095539)");
		puts(buffer);
		assert(strcmp(buffer, "-659917099") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3979196158215143595272);
		bigint_free(_1668993038533296379867);
		bigint_free(_140965936987505117864);

	

		bigint_t* _4116764576232056919956;
		bigint_t* _792760271174128756940 = bigint(41);
		bigint_t* _485806394610289963473 = bigint(-16095539);
		bigint_t* _3871304346598361952357 = bigint_add(_792760271174128756940, _485806394610289963473 );
		bigint_to_string(_3871304346598361952357, 10, buffer);
		printf("trying ");
		puts("add(41, -16095539)");
		puts(buffer);
		assert(strcmp(buffer, "-16095498") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_792760271174128756940);
		bigint_free(_485806394610289963473);
		bigint_free(_3871304346598361952357);

	

		bigint_t* _520462920168087121336;
		bigint_t* _1291293959454800428319 = bigint(41);
		bigint_t* _2883384743970331943832 = bigint(-16095539);
		bigint_t* _4666402756150795346535 = bigint_sub(_1291293959454800428319, _2883384743970331943832 );
		bigint_to_string(_4666402756150795346535, 10, buffer);
		printf("trying ");
		puts("sub(41, -16095539)");
		puts(buffer);
		assert(strcmp(buffer, "16095580") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1291293959454800428319);
		bigint_free(_2883384743970331943832);
		bigint_free(_4666402756150795346535);

	

		bigint_t* _875230055731522127360;
		bigint_t* _3545917588976295428058 = bigint(185);
		bigint_t* _2129870014452621493918 = bigint(-12434108);
		bigint_t* _2132640234660948836249 = bigint_mul(_3545917588976295428058, _2129870014452621493918 );
		bigint_to_string(_2132640234660948836249, 10, buffer);
		printf("trying ");
		puts("mul(185, -12434108)");
		puts(buffer);
		assert(strcmp(buffer, "-2300309980") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3545917588976295428058);
		bigint_free(_2129870014452621493918);
		bigint_free(_2132640234660948836249);

	

		bigint_t* _318767322471013142076;
		bigint_t* _3453517334971920189900 = bigint(185);
		bigint_t* _3400544825868250825365 = bigint(-12434108);
		bigint_t* _654353097470269388322 = bigint_add(_3453517334971920189900, _3400544825868250825365 );
		bigint_to_string(_654353097470269388322, 10, buffer);
		printf("trying ");
		puts("add(185, -12434108)");
		puts(buffer);
		assert(strcmp(buffer, "-12433923") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3453517334971920189900);
		bigint_free(_3400544825868250825365);
		bigint_free(_654353097470269388322);

	

		bigint_t* _179834968987863850636;
		bigint_t* _1998104902897322813957 = bigint(185);
		bigint_t* _3601928766251995490105 = bigint(-12434108);
		bigint_t* _2705524844404907957115 = bigint_sub(_1998104902897322813957, _3601928766251995490105 );
		bigint_to_string(_2705524844404907957115, 10, buffer);
		printf("trying ");
		puts("sub(185, -12434108)");
		puts(buffer);
		assert(strcmp(buffer, "12434293") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1998104902897322813957);
		bigint_free(_3601928766251995490105);
		bigint_free(_2705524844404907957115);

	

		bigint_t* _994688478115643884044;
		bigint_t* _2846906938869780286001 = bigint(125);
		bigint_t* _4086883533679419886527 = bigint(5947291);
		bigint_t* _281659263845538192126 = bigint_mul(_2846906938869780286001, _4086883533679419886527 );
		bigint_to_string(_281659263845538192126, 10, buffer);
		printf("trying ");
		puts("mul(125, 5947291)");
		puts(buffer);
		assert(strcmp(buffer, "743411375") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2846906938869780286001);
		bigint_free(_4086883533679419886527);
		bigint_free(_281659263845538192126);

	

		bigint_t* _4703589903762534271157;
		bigint_t* _718536755909620700085 = bigint(125);
		bigint_t* _1297035707652161243946 = bigint(5947291);
		bigint_t* _1825248540038072182821 = bigint_add(_718536755909620700085, _1297035707652161243946 );
		bigint_to_string(_1825248540038072182821, 10, buffer);
		printf("trying ");
		puts("add(125, 5947291)");
		puts(buffer);
		assert(strcmp(buffer, "5947416") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_718536755909620700085);
		bigint_free(_1297035707652161243946);
		bigint_free(_1825248540038072182821);

	

		bigint_t* _4177668943848189919837;
		bigint_t* _984704835131103654139 = bigint(125);
		bigint_t* _2076991333525831624227 = bigint(5947291);
		bigint_t* _2045511355677576927859 = bigint_sub(_984704835131103654139, _2076991333525831624227 );
		bigint_to_string(_2045511355677576927859, 10, buffer);
		printf("trying ");
		puts("sub(125, 5947291)");
		puts(buffer);
		assert(strcmp(buffer, "-5947166") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_984704835131103654139);
		bigint_free(_2076991333525831624227);
		bigint_free(_2045511355677576927859);

	

		bigint_t* _4302799697738070402935;
		bigint_t* _246767031012723685021 = bigint(115);
		bigint_t* _4406866981551203423776 = bigint(-1320443);
		bigint_t* _280938499960099006991 = bigint_mul(_246767031012723685021, _4406866981551203423776 );
		bigint_to_string(_280938499960099006991, 10, buffer);
		printf("trying ");
		puts("mul(115, -1320443)");
		puts(buffer);
		assert(strcmp(buffer, "-151850945") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_246767031012723685021);
		bigint_free(_4406866981551203423776);
		bigint_free(_280938499960099006991);

	

		bigint_t* _2942182650489169518145;
		bigint_t* _1656462884214969975634 = bigint(115);
		bigint_t* _3574056397622617185355 = bigint(-1320443);
		bigint_t* _759457395804954728963 = bigint_add(_1656462884214969975634, _3574056397622617185355 );
		bigint_to_string(_759457395804954728963, 10, buffer);
		printf("trying ");
		puts("add(115, -1320443)");
		puts(buffer);
		assert(strcmp(buffer, "-1320328") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1656462884214969975634);
		bigint_free(_3574056397622617185355);
		bigint_free(_759457395804954728963);

	

		bigint_t* _1459930800395116737524;
		bigint_t* _2928557777213346000118 = bigint(115);
		bigint_t* _201850474699452742336 = bigint(-1320443);
		bigint_t* _90388749617894698160 = bigint_sub(_2928557777213346000118, _201850474699452742336 );
		bigint_to_string(_90388749617894698160, 10, buffer);
		printf("trying ");
		puts("sub(115, -1320443)");
		puts(buffer);
		assert(strcmp(buffer, "1320558") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2928557777213346000118);
		bigint_free(_201850474699452742336);
		bigint_free(_90388749617894698160);

	

		bigint_t* _3768461177545592487429;
		bigint_t* _840412681452113129564 = bigint(88);
		bigint_t* _1931751831776774172649 = bigint(-6797477);
		bigint_t* _1351822302086838547527 = bigint_mul(_840412681452113129564, _1931751831776774172649 );
		bigint_to_string(_1351822302086838547527, 10, buffer);
		printf("trying ");
		puts("mul(88, -6797477)");
		puts(buffer);
		assert(strcmp(buffer, "-598177976") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_840412681452113129564);
		bigint_free(_1931751831776774172649);
		bigint_free(_1351822302086838547527);

	

		bigint_t* _4442943974146690228461;
		bigint_t* _2090629996684404257442 = bigint(88);
		bigint_t* _3338988483585565355993 = bigint(-6797477);
		bigint_t* _935220620501680710061 = bigint_add(_2090629996684404257442, _3338988483585565355993 );
		bigint_to_string(_935220620501680710061, 10, buffer);
		printf("trying ");
		puts("add(88, -6797477)");
		puts(buffer);
		assert(strcmp(buffer, "-6797389") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2090629996684404257442);
		bigint_free(_3338988483585565355993);
		bigint_free(_935220620501680710061);

	

		bigint_t* _1038850244946297345960;
		bigint_t* _775048670195520554421 = bigint(88);
		bigint_t* _1511434206237383155859 = bigint(-6797477);
		bigint_t* _1099769211030085605773 = bigint_sub(_775048670195520554421, _1511434206237383155859 );
		bigint_to_string(_1099769211030085605773, 10, buffer);
		printf("trying ");
		puts("sub(88, -6797477)");
		puts(buffer);
		assert(strcmp(buffer, "6797565") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_775048670195520554421);
		bigint_free(_1511434206237383155859);
		bigint_free(_1099769211030085605773);

	

		bigint_t* _2960881619368404214867;
		bigint_t* _73060593143091761793 = bigint(-225);
		bigint_t* _1526182208301028918270 = bigint(-4838796);
		bigint_t* _3238856570758545761739 = bigint_mul(_73060593143091761793, _1526182208301028918270 );
		bigint_to_string(_3238856570758545761739, 10, buffer);
		printf("trying ");
		puts("mul(-225, -4838796)");
		puts(buffer);
		assert(strcmp(buffer, "1088729100") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_73060593143091761793);
		bigint_free(_1526182208301028918270);
		bigint_free(_3238856570758545761739);

	

		bigint_t* _491153786422311693395;
		bigint_t* _98713481802698124840 = bigint(-225);
		bigint_t* _1295568244943492626226 = bigint(-4838796);
		bigint_t* _4568672369199667709371 = bigint_add(_98713481802698124840, _1295568244943492626226 );
		bigint_to_string(_4568672369199667709371, 10, buffer);
		printf("trying ");
		puts("add(-225, -4838796)");
		puts(buffer);
		assert(strcmp(buffer, "-4839021") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_98713481802698124840);
		bigint_free(_1295568244943492626226);
		bigint_free(_4568672369199667709371);

	

		bigint_t* _1241429026749552309442;
		bigint_t* _3353779283641193715226 = bigint(-225);
		bigint_t* _4026707893786999936992 = bigint(-4838796);
		bigint_t* _1792325155779815179275 = bigint_sub(_3353779283641193715226, _4026707893786999936992 );
		bigint_to_string(_1792325155779815179275, 10, buffer);
		printf("trying ");
		puts("sub(-225, -4838796)");
		puts(buffer);
		assert(strcmp(buffer, "4838571") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3353779283641193715226);
		bigint_free(_4026707893786999936992);
		bigint_free(_1792325155779815179275);

	

		bigint_t* _2658486848616137940158;
		bigint_t* _4590552256330372167040 = bigint(147);
		bigint_t* _3195543866658297807003 = bigint(10879933);
		bigint_t* _3508399508484658745937 = bigint_mul(_4590552256330372167040, _3195543866658297807003 );
		bigint_to_string(_3508399508484658745937, 10, buffer);
		printf("trying ");
		puts("mul(147, 10879933)");
		puts(buffer);
		assert(strcmp(buffer, "1599350151") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4590552256330372167040);
		bigint_free(_3195543866658297807003);
		bigint_free(_3508399508484658745937);

	

		bigint_t* _4111414744608645475197;
		bigint_t* _4613034052165581778149 = bigint(147);
		bigint_t* _3398642642537211020482 = bigint(10879933);
		bigint_t* _3771727006916895991980 = bigint_add(_4613034052165581778149, _3398642642537211020482 );
		bigint_to_string(_3771727006916895991980, 10, buffer);
		printf("trying ");
		puts("add(147, 10879933)");
		puts(buffer);
		assert(strcmp(buffer, "10880080") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4613034052165581778149);
		bigint_free(_3398642642537211020482);
		bigint_free(_3771727006916895991980);

	

		bigint_t* _3570046962116410430901;
		bigint_t* _3721286027180323837849 = bigint(147);
		bigint_t* _980275791292666826506 = bigint(10879933);
		bigint_t* _3892995197491922471914 = bigint_sub(_3721286027180323837849, _980275791292666826506 );
		bigint_to_string(_3892995197491922471914, 10, buffer);
		printf("trying ");
		puts("sub(147, 10879933)");
		puts(buffer);
		assert(strcmp(buffer, "-10879786") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3721286027180323837849);
		bigint_free(_980275791292666826506);
		bigint_free(_3892995197491922471914);

	

		bigint_t* _791929740484990485850;
		bigint_t* _4488766377338297234949 = bigint(-140);
		bigint_t* _1877013379079662454493 = bigint(-13175514);
		bigint_t* _565889236566354582977 = bigint_mul(_4488766377338297234949, _1877013379079662454493 );
		bigint_to_string(_565889236566354582977, 10, buffer);
		printf("trying ");
		puts("mul(-140, -13175514)");
		puts(buffer);
		assert(strcmp(buffer, "1844571960") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4488766377338297234949);
		bigint_free(_1877013379079662454493);
		bigint_free(_565889236566354582977);

	

		bigint_t* _4226432669288098846883;
		bigint_t* _3119985508384869071087 = bigint(-140);
		bigint_t* _2256135821524920191830 = bigint(-13175514);
		bigint_t* _2430615579715821279751 = bigint_add(_3119985508384869071087, _2256135821524920191830 );
		bigint_to_string(_2430615579715821279751, 10, buffer);
		printf("trying ");
		puts("add(-140, -13175514)");
		puts(buffer);
		assert(strcmp(buffer, "-13175654") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3119985508384869071087);
		bigint_free(_2256135821524920191830);
		bigint_free(_2430615579715821279751);

	

		bigint_t* _2178766504594405251501;
		bigint_t* _2406957530112713187798 = bigint(-140);
		bigint_t* _658640856898574754557 = bigint(-13175514);
		bigint_t* _3728343290518712394368 = bigint_sub(_2406957530112713187798, _658640856898574754557 );
		bigint_to_string(_3728343290518712394368, 10, buffer);
		printf("trying ");
		puts("sub(-140, -13175514)");
		puts(buffer);
		assert(strcmp(buffer, "13175374") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2406957530112713187798);
		bigint_free(_658640856898574754557);
		bigint_free(_3728343290518712394368);

	

		bigint_t* _68801029929882628337;
		bigint_t* _868953006213717505058 = bigint(-72);
		bigint_t* _3490108277929552380796 = bigint(-9041416);
		bigint_t* _687501820030672702668 = bigint_mul(_868953006213717505058, _3490108277929552380796 );
		bigint_to_string(_687501820030672702668, 10, buffer);
		printf("trying ");
		puts("mul(-72, -9041416)");
		puts(buffer);
		assert(strcmp(buffer, "650981952") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_868953006213717505058);
		bigint_free(_3490108277929552380796);
		bigint_free(_687501820030672702668);

	

		bigint_t* _3257547846409360726292;
		bigint_t* _455770075777984459121 = bigint(-72);
		bigint_t* _1086644169173334907269 = bigint(-9041416);
		bigint_t* _4616491298849310077528 = bigint_add(_455770075777984459121, _1086644169173334907269 );
		bigint_to_string(_4616491298849310077528, 10, buffer);
		printf("trying ");
		puts("add(-72, -9041416)");
		puts(buffer);
		assert(strcmp(buffer, "-9041488") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_455770075777984459121);
		bigint_free(_1086644169173334907269);
		bigint_free(_4616491298849310077528);

	

		bigint_t* _3304943077976910609210;
		bigint_t* _4391957894321955010809 = bigint(-72);
		bigint_t* _3853817949501761217010 = bigint(-9041416);
		bigint_t* _848754890926853004226 = bigint_sub(_4391957894321955010809, _3853817949501761217010 );
		bigint_to_string(_848754890926853004226, 10, buffer);
		printf("trying ");
		puts("sub(-72, -9041416)");
		puts(buffer);
		assert(strcmp(buffer, "9041344") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4391957894321955010809);
		bigint_free(_3853817949501761217010);
		bigint_free(_848754890926853004226);

	

		bigint_t* _376689481022569485421;
		bigint_t* _4325832456780116697349 = bigint(-141);
		bigint_t* _561134096284909648899 = bigint(14140206);
		bigint_t* _3131645439373881970672 = bigint_mul(_4325832456780116697349, _561134096284909648899 );
		bigint_to_string(_3131645439373881970672, 10, buffer);
		printf("trying ");
		puts("mul(-141, 14140206)");
		puts(buffer);
		assert(strcmp(buffer, "-1993769046") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4325832456780116697349);
		bigint_free(_561134096284909648899);
		bigint_free(_3131645439373881970672);

	

		bigint_t* _3508102115416466434460;
		bigint_t* _4710114708240612350433 = bigint(-141);
		bigint_t* _1780720066052683359494 = bigint(14140206);
		bigint_t* _2064270519124726029318 = bigint_add(_4710114708240612350433, _1780720066052683359494 );
		bigint_to_string(_2064270519124726029318, 10, buffer);
		printf("trying ");
		puts("add(-141, 14140206)");
		puts(buffer);
		assert(strcmp(buffer, "14140065") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4710114708240612350433);
		bigint_free(_1780720066052683359494);
		bigint_free(_2064270519124726029318);

	

		bigint_t* _2745622798827703966382;
		bigint_t* _951597139911158084438 = bigint(-141);
		bigint_t* _4670000693980299244520 = bigint(14140206);
		bigint_t* _1784847835839553709853 = bigint_sub(_951597139911158084438, _4670000693980299244520 );
		bigint_to_string(_1784847835839553709853, 10, buffer);
		printf("trying ");
		puts("sub(-141, 14140206)");
		puts(buffer);
		assert(strcmp(buffer, "-14140347") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_951597139911158084438);
		bigint_free(_4670000693980299244520);
		bigint_free(_1784847835839553709853);

	

		bigint_t* _3104713446900781131600;
		bigint_t* _2972973918996099640330 = bigint(181);
		bigint_t* _971782023374569230623 = bigint(3315488);
		bigint_t* _539236898290884802859 = bigint_mul(_2972973918996099640330, _971782023374569230623 );
		bigint_to_string(_539236898290884802859, 10, buffer);
		printf("trying ");
		puts("mul(181, 3315488)");
		puts(buffer);
		assert(strcmp(buffer, "600103328") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2972973918996099640330);
		bigint_free(_971782023374569230623);
		bigint_free(_539236898290884802859);

	

		bigint_t* _1087488980490892160261;
		bigint_t* _1636754627243491979112 = bigint(181);
		bigint_t* _4183965442054975904843 = bigint(3315488);
		bigint_t* _528726917884148608944 = bigint_add(_1636754627243491979112, _4183965442054975904843 );
		bigint_to_string(_528726917884148608944, 10, buffer);
		printf("trying ");
		puts("add(181, 3315488)");
		puts(buffer);
		assert(strcmp(buffer, "3315669") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1636754627243491979112);
		bigint_free(_4183965442054975904843);
		bigint_free(_528726917884148608944);

	

		bigint_t* _564277874826195905665;
		bigint_t* _2859992954137989287952 = bigint(181);
		bigint_t* _4313442251444070776543 = bigint(3315488);
		bigint_t* _442263746930810106919 = bigint_sub(_2859992954137989287952, _4313442251444070776543 );
		bigint_to_string(_442263746930810106919, 10, buffer);
		printf("trying ");
		puts("sub(181, 3315488)");
		puts(buffer);
		assert(strcmp(buffer, "-3315307") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2859992954137989287952);
		bigint_free(_4313442251444070776543);
		bigint_free(_442263746930810106919);

	

		bigint_t* _3686565464335172845965;
		bigint_t* _2420111135934493464706 = bigint(-233);
		bigint_t* _3405448414130857912399 = bigint(7327929);
		bigint_t* _2507188333915307410739 = bigint_mul(_2420111135934493464706, _3405448414130857912399 );
		bigint_to_string(_2507188333915307410739, 10, buffer);
		printf("trying ");
		puts("mul(-233, 7327929)");
		puts(buffer);
		assert(strcmp(buffer, "-1707407457") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2420111135934493464706);
		bigint_free(_3405448414130857912399);
		bigint_free(_2507188333915307410739);

	

		bigint_t* _3033009105718840693620;
		bigint_t* _1988429558907121475407 = bigint(-233);
		bigint_t* _4309065498851422986101 = bigint(7327929);
		bigint_t* _2393875308222799066408 = bigint_add(_1988429558907121475407, _4309065498851422986101 );
		bigint_to_string(_2393875308222799066408, 10, buffer);
		printf("trying ");
		puts("add(-233, 7327929)");
		puts(buffer);
		assert(strcmp(buffer, "7327696") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1988429558907121475407);
		bigint_free(_4309065498851422986101);
		bigint_free(_2393875308222799066408);

	

		bigint_t* _1427688610858127397658;
		bigint_t* _2847136539874071228802 = bigint(-233);
		bigint_t* _914676445576993294359 = bigint(7327929);
		bigint_t* _3081400999186551764295 = bigint_sub(_2847136539874071228802, _914676445576993294359 );
		bigint_to_string(_3081400999186551764295, 10, buffer);
		printf("trying ");
		puts("sub(-233, 7327929)");
		puts(buffer);
		assert(strcmp(buffer, "-7328162") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2847136539874071228802);
		bigint_free(_914676445576993294359);
		bigint_free(_3081400999186551764295);

	

		bigint_t* _3146254704764025411391;
		bigint_t* _4346441190335863505561 = bigint(250);
		bigint_t* _466372672540958232547 = bigint(-6040741);
		bigint_t* _653488133452323406924 = bigint_mul(_4346441190335863505561, _466372672540958232547 );
		bigint_to_string(_653488133452323406924, 10, buffer);
		printf("trying ");
		puts("mul(250, -6040741)");
		puts(buffer);
		assert(strcmp(buffer, "-1510185250") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4346441190335863505561);
		bigint_free(_466372672540958232547);
		bigint_free(_653488133452323406924);

	

		bigint_t* _2533786358757788778183;
		bigint_t* _3203454897708492450418 = bigint(250);
		bigint_t* _1331857974594908397585 = bigint(-6040741);
		bigint_t* _4619618658364288043565 = bigint_add(_3203454897708492450418, _1331857974594908397585 );
		bigint_to_string(_4619618658364288043565, 10, buffer);
		printf("trying ");
		puts("add(250, -6040741)");
		puts(buffer);
		assert(strcmp(buffer, "-6040491") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3203454897708492450418);
		bigint_free(_1331857974594908397585);
		bigint_free(_4619618658364288043565);

	

		bigint_t* _1979486972472509684790;
		bigint_t* _946593271814847998889 = bigint(250);
		bigint_t* _2882649086123676658635 = bigint(-6040741);
		bigint_t* _2237946581072227334973 = bigint_sub(_946593271814847998889, _2882649086123676658635 );
		bigint_to_string(_2237946581072227334973, 10, buffer);
		printf("trying ");
		puts("sub(250, -6040741)");
		puts(buffer);
		assert(strcmp(buffer, "6040991") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_946593271814847998889);
		bigint_free(_2882649086123676658635);
		bigint_free(_2237946581072227334973);

	

		bigint_t* _841524136312136372831;
		bigint_t* _3053176351344937271704 = bigint(-226);
		bigint_t* _4719737772177656135203 = bigint(-15425210);
		bigint_t* _2911612960921385994629 = bigint_mul(_3053176351344937271704, _4719737772177656135203 );
		bigint_to_string(_2911612960921385994629, 10, buffer);
		printf("trying ");
		puts("mul(-226, -15425210)");
		puts(buffer);
		assert(strcmp(buffer, "3486097460") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3053176351344937271704);
		bigint_free(_4719737772177656135203);
		bigint_free(_2911612960921385994629);

	

		bigint_t* _2575712978194147047294;
		bigint_t* _938755683301352792669 = bigint(-226);
		bigint_t* _3953869883597246443804 = bigint(-15425210);
		bigint_t* _4296373512184005845397 = bigint_add(_938755683301352792669, _3953869883597246443804 );
		bigint_to_string(_4296373512184005845397, 10, buffer);
		printf("trying ");
		puts("add(-226, -15425210)");
		puts(buffer);
		assert(strcmp(buffer, "-15425436") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_938755683301352792669);
		bigint_free(_3953869883597246443804);
		bigint_free(_4296373512184005845397);

	

		bigint_t* _2739654019502372885668;
		bigint_t* _2419398760467857147912 = bigint(-226);
		bigint_t* _2999450294740790787643 = bigint(-15425210);
		bigint_t* _4607817477613121715550 = bigint_sub(_2419398760467857147912, _2999450294740790787643 );
		bigint_to_string(_4607817477613121715550, 10, buffer);
		printf("trying ");
		puts("sub(-226, -15425210)");
		puts(buffer);
		assert(strcmp(buffer, "15424984") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2419398760467857147912);
		bigint_free(_2999450294740790787643);
		bigint_free(_4607817477613121715550);

	

		bigint_t* _3727763035958749538174;
		bigint_t* _4320121602529774302744 = bigint(154);
		bigint_t* _312215337642551959214 = bigint(-9636628);
		bigint_t* _3642667286284270938073 = bigint_mul(_4320121602529774302744, _312215337642551959214 );
		bigint_to_string(_3642667286284270938073, 10, buffer);
		printf("trying ");
		puts("mul(154, -9636628)");
		puts(buffer);
		assert(strcmp(buffer, "-1484040712") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4320121602529774302744);
		bigint_free(_312215337642551959214);
		bigint_free(_3642667286284270938073);

	

		bigint_t* _3047969530682010418301;
		bigint_t* _3443972842714220169199 = bigint(154);
		bigint_t* _4202932714984921945950 = bigint(-9636628);
		bigint_t* _532608791926862136205 = bigint_add(_3443972842714220169199, _4202932714984921945950 );
		bigint_to_string(_532608791926862136205, 10, buffer);
		printf("trying ");
		puts("add(154, -9636628)");
		puts(buffer);
		assert(strcmp(buffer, "-9636474") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3443972842714220169199);
		bigint_free(_4202932714984921945950);
		bigint_free(_532608791926862136205);

	

		bigint_t* _3981945848163051708198;
		bigint_t* _1055763065551097220708 = bigint(154);
		bigint_t* _2260176905694750770799 = bigint(-9636628);
		bigint_t* _758341766928413917861 = bigint_sub(_1055763065551097220708, _2260176905694750770799 );
		bigint_to_string(_758341766928413917861, 10, buffer);
		printf("trying ");
		puts("sub(154, -9636628)");
		puts(buffer);
		assert(strcmp(buffer, "9636782") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1055763065551097220708);
		bigint_free(_2260176905694750770799);
		bigint_free(_758341766928413917861);

	

		bigint_t* _2730730217415192856447;
		bigint_t* _4172205907740755349186 = bigint(12);
		bigint_t* _3821383100983232591593 = bigint(12232333);
		bigint_t* _2280612996350042873394 = bigint_mul(_4172205907740755349186, _3821383100983232591593 );
		bigint_to_string(_2280612996350042873394, 10, buffer);
		printf("trying ");
		puts("mul(12, 12232333)");
		puts(buffer);
		assert(strcmp(buffer, "146787996") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4172205907740755349186);
		bigint_free(_3821383100983232591593);
		bigint_free(_2280612996350042873394);

	

		bigint_t* _3303984763553487764786;
		bigint_t* _1249838866437893350006 = bigint(12);
		bigint_t* _4719301902506565775359 = bigint(12232333);
		bigint_t* _2708612484301873440992 = bigint_add(_1249838866437893350006, _4719301902506565775359 );
		bigint_to_string(_2708612484301873440992, 10, buffer);
		printf("trying ");
		puts("add(12, 12232333)");
		puts(buffer);
		assert(strcmp(buffer, "12232345") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1249838866437893350006);
		bigint_free(_4719301902506565775359);
		bigint_free(_2708612484301873440992);

	

		bigint_t* _4613336495055830971321;
		bigint_t* _1770496308848328660055 = bigint(12);
		bigint_t* _1567476243694771496229 = bigint(12232333);
		bigint_t* _1430722650228718504099 = bigint_sub(_1770496308848328660055, _1567476243694771496229 );
		bigint_to_string(_1430722650228718504099, 10, buffer);
		printf("trying ");
		puts("sub(12, 12232333)");
		puts(buffer);
		assert(strcmp(buffer, "-12232321") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1770496308848328660055);
		bigint_free(_1567476243694771496229);
		bigint_free(_1430722650228718504099);

	

		bigint_t* _861702019672213153319;
		bigint_t* _2694827387102783885231 = bigint(-83);
		bigint_t* _2525947270540235550337 = bigint(7262062);
		bigint_t* _4339729765511633229080 = bigint_mul(_2694827387102783885231, _2525947270540235550337 );
		bigint_to_string(_4339729765511633229080, 10, buffer);
		printf("trying ");
		puts("mul(-83, 7262062)");
		puts(buffer);
		assert(strcmp(buffer, "-602751146") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2694827387102783885231);
		bigint_free(_2525947270540235550337);
		bigint_free(_4339729765511633229080);

	

		bigint_t* _1632611869274195590819;
		bigint_t* _2093315438110194885585 = bigint(-83);
		bigint_t* _1308659038192476772776 = bigint(7262062);
		bigint_t* _3363905912284700913585 = bigint_add(_2093315438110194885585, _1308659038192476772776 );
		bigint_to_string(_3363905912284700913585, 10, buffer);
		printf("trying ");
		puts("add(-83, 7262062)");
		puts(buffer);
		assert(strcmp(buffer, "7261979") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2093315438110194885585);
		bigint_free(_1308659038192476772776);
		bigint_free(_3363905912284700913585);

	

		bigint_t* _1883105759341638707123;
		bigint_t* _785148501907798599155 = bigint(-83);
		bigint_t* _26135899429460416023 = bigint(7262062);
		bigint_t* _565035274446289798708 = bigint_sub(_785148501907798599155, _26135899429460416023 );
		bigint_to_string(_565035274446289798708, 10, buffer);
		printf("trying ");
		puts("sub(-83, 7262062)");
		puts(buffer);
		assert(strcmp(buffer, "-7262145") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_785148501907798599155);
		bigint_free(_26135899429460416023);
		bigint_free(_565035274446289798708);

	

		bigint_t* _4360759579756622323866;
		bigint_t* _1514579450694089219181 = bigint(212);
		bigint_t* _3545007279926842210631 = bigint(-6302568);
		bigint_t* _759483525608681561797 = bigint_mul(_1514579450694089219181, _3545007279926842210631 );
		bigint_to_string(_759483525608681561797, 10, buffer);
		printf("trying ");
		puts("mul(212, -6302568)");
		puts(buffer);
		assert(strcmp(buffer, "-1336144416") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1514579450694089219181);
		bigint_free(_3545007279926842210631);
		bigint_free(_759483525608681561797);

	

		bigint_t* _2140251704202548526838;
		bigint_t* _3780625302315247522682 = bigint(212);
		bigint_t* _2181807067360068311283 = bigint(-6302568);
		bigint_t* _4334259429683539361486 = bigint_add(_3780625302315247522682, _2181807067360068311283 );
		bigint_to_string(_4334259429683539361486, 10, buffer);
		printf("trying ");
		puts("add(212, -6302568)");
		puts(buffer);
		assert(strcmp(buffer, "-6302356") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3780625302315247522682);
		bigint_free(_2181807067360068311283);
		bigint_free(_4334259429683539361486);

	

		bigint_t* _4257299810495453765898;
		bigint_t* _1360157762196862651823 = bigint(212);
		bigint_t* _807083518022423500329 = bigint(-6302568);
		bigint_t* _2419634717648175987099 = bigint_sub(_1360157762196862651823, _807083518022423500329 );
		bigint_to_string(_2419634717648175987099, 10, buffer);
		printf("trying ");
		puts("sub(212, -6302568)");
		puts(buffer);
		assert(strcmp(buffer, "6302780") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1360157762196862651823);
		bigint_free(_807083518022423500329);
		bigint_free(_2419634717648175987099);

	

		bigint_t* _3300317650272207914677;
		bigint_t* _3579966648497200363864 = bigint(243);
		bigint_t* _2081349958606382848153 = bigint(-13962120);
		bigint_t* _3608016674256616021254 = bigint_mul(_3579966648497200363864, _2081349958606382848153 );
		bigint_to_string(_3608016674256616021254, 10, buffer);
		printf("trying ");
		puts("mul(243, -13962120)");
		puts(buffer);
		assert(strcmp(buffer, "-3392795160") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3579966648497200363864);
		bigint_free(_2081349958606382848153);
		bigint_free(_3608016674256616021254);

	

		bigint_t* _3094083586541411275525;
		bigint_t* _4563164923665172520282 = bigint(243);
		bigint_t* _1853852585312063800958 = bigint(-13962120);
		bigint_t* _2912100795009786874113 = bigint_add(_4563164923665172520282, _1853852585312063800958 );
		bigint_to_string(_2912100795009786874113, 10, buffer);
		printf("trying ");
		puts("add(243, -13962120)");
		puts(buffer);
		assert(strcmp(buffer, "-13961877") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4563164923665172520282);
		bigint_free(_1853852585312063800958);
		bigint_free(_2912100795009786874113);

	

		bigint_t* _1691963644315431812322;
		bigint_t* _953511994877511314977 = bigint(243);
		bigint_t* _3486342921677864048843 = bigint(-13962120);
		bigint_t* _2545899531036134988739 = bigint_sub(_953511994877511314977, _3486342921677864048843 );
		bigint_to_string(_2545899531036134988739, 10, buffer);
		printf("trying ");
		puts("sub(243, -13962120)");
		puts(buffer);
		assert(strcmp(buffer, "13962363") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_953511994877511314977);
		bigint_free(_3486342921677864048843);
		bigint_free(_2545899531036134988739);

	

		bigint_t* _821493218202701181403;
		bigint_t* _2464607766477437365402 = bigint(202);
		bigint_t* _2687653712339041073072 = bigint(3931932);
		bigint_t* _3439531540091982444776 = bigint_mul(_2464607766477437365402, _2687653712339041073072 );
		bigint_to_string(_3439531540091982444776, 10, buffer);
		printf("trying ");
		puts("mul(202, 3931932)");
		puts(buffer);
		assert(strcmp(buffer, "794250264") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2464607766477437365402);
		bigint_free(_2687653712339041073072);
		bigint_free(_3439531540091982444776);

	

		bigint_t* _677090981283929313047;
		bigint_t* _2959029636448817890138 = bigint(202);
		bigint_t* _1763265400632487399301 = bigint(3931932);
		bigint_t* _773954097032403379179 = bigint_add(_2959029636448817890138, _1763265400632487399301 );
		bigint_to_string(_773954097032403379179, 10, buffer);
		printf("trying ");
		puts("add(202, 3931932)");
		puts(buffer);
		assert(strcmp(buffer, "3932134") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2959029636448817890138);
		bigint_free(_1763265400632487399301);
		bigint_free(_773954097032403379179);

	

		bigint_t* _2031716729471537513384;
		bigint_t* _3882491950342359553289 = bigint(202);
		bigint_t* _3372028463385969847251 = bigint(3931932);
		bigint_t* _666539770960449922313 = bigint_sub(_3882491950342359553289, _3372028463385969847251 );
		bigint_to_string(_666539770960449922313, 10, buffer);
		printf("trying ");
		puts("sub(202, 3931932)");
		puts(buffer);
		assert(strcmp(buffer, "-3931730") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3882491950342359553289);
		bigint_free(_3372028463385969847251);
		bigint_free(_666539770960449922313);

	

		bigint_t* _1390209746256865826792;
		bigint_t* _2118310146376062240333 = bigint(54);
		bigint_t* _2890512835882932905949 = bigint(-11855592);
		bigint_t* _1821141216895593012907 = bigint_mul(_2118310146376062240333, _2890512835882932905949 );
		bigint_to_string(_1821141216895593012907, 10, buffer);
		printf("trying ");
		puts("mul(54, -11855592)");
		puts(buffer);
		assert(strcmp(buffer, "-640201968") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2118310146376062240333);
		bigint_free(_2890512835882932905949);
		bigint_free(_1821141216895593012907);

	

		bigint_t* _945567159954101721824;
		bigint_t* _3643425150481572254188 = bigint(54);
		bigint_t* _3609008224601719892124 = bigint(-11855592);
		bigint_t* _3453939288845666451180 = bigint_add(_3643425150481572254188, _3609008224601719892124 );
		bigint_to_string(_3453939288845666451180, 10, buffer);
		printf("trying ");
		puts("add(54, -11855592)");
		puts(buffer);
		assert(strcmp(buffer, "-11855538") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3643425150481572254188);
		bigint_free(_3609008224601719892124);
		bigint_free(_3453939288845666451180);

	

		bigint_t* _4532107844070948049193;
		bigint_t* _3119435227295566016641 = bigint(54);
		bigint_t* _943070246715369237935 = bigint(-11855592);
		bigint_t* _2777555015446637030385 = bigint_sub(_3119435227295566016641, _943070246715369237935 );
		bigint_to_string(_2777555015446637030385, 10, buffer);
		printf("trying ");
		puts("sub(54, -11855592)");
		puts(buffer);
		assert(strcmp(buffer, "11855646") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3119435227295566016641);
		bigint_free(_943070246715369237935);
		bigint_free(_2777555015446637030385);

	

		bigint_t* _1781914272719781402053;
		bigint_t* _4475312987018620024972 = bigint(157);
		bigint_t* _1725186692283568733692 = bigint(-12225919);
		bigint_t* _997099759224828916095 = bigint_mul(_4475312987018620024972, _1725186692283568733692 );
		bigint_to_string(_997099759224828916095, 10, buffer);
		printf("trying ");
		puts("mul(157, -12225919)");
		puts(buffer);
		assert(strcmp(buffer, "-1919469283") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4475312987018620024972);
		bigint_free(_1725186692283568733692);
		bigint_free(_997099759224828916095);

	

		bigint_t* _2720030040823825944203;
		bigint_t* _871568681472661877329 = bigint(157);
		bigint_t* _2811175167224633876669 = bigint(-12225919);
		bigint_t* _4606607157593770923934 = bigint_add(_871568681472661877329, _2811175167224633876669 );
		bigint_to_string(_4606607157593770923934, 10, buffer);
		printf("trying ");
		puts("add(157, -12225919)");
		puts(buffer);
		assert(strcmp(buffer, "-12225762") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_871568681472661877329);
		bigint_free(_2811175167224633876669);
		bigint_free(_4606607157593770923934);

	

		bigint_t* _1009660835696607406366;
		bigint_t* _3014048518191376615877 = bigint(157);
		bigint_t* _3451876405665701834777 = bigint(-12225919);
		bigint_t* _2590660058928451683676 = bigint_sub(_3014048518191376615877, _3451876405665701834777 );
		bigint_to_string(_2590660058928451683676, 10, buffer);
		printf("trying ");
		puts("sub(157, -12225919)");
		puts(buffer);
		assert(strcmp(buffer, "12226076") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3014048518191376615877);
		bigint_free(_3451876405665701834777);
		bigint_free(_2590660058928451683676);

	

		bigint_t* _1533245922061275937144;
		bigint_t* _4302823132287906628436 = bigint(-238);
		bigint_t* _3336535555448642674400 = bigint(-14968908);
		bigint_t* _4249922294092948019711 = bigint_mul(_4302823132287906628436, _3336535555448642674400 );
		bigint_to_string(_4249922294092948019711, 10, buffer);
		printf("trying ");
		puts("mul(-238, -14968908)");
		puts(buffer);
		assert(strcmp(buffer, "3562600104") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4302823132287906628436);
		bigint_free(_3336535555448642674400);
		bigint_free(_4249922294092948019711);

	

		bigint_t* _4497647878332470403555;
		bigint_t* _4483923246253666497888 = bigint(-238);
		bigint_t* _2857461675041495032893 = bigint(-14968908);
		bigint_t* _4700361217642020622306 = bigint_add(_4483923246253666497888, _2857461675041495032893 );
		bigint_to_string(_4700361217642020622306, 10, buffer);
		printf("trying ");
		puts("add(-238, -14968908)");
		puts(buffer);
		assert(strcmp(buffer, "-14969146") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4483923246253666497888);
		bigint_free(_2857461675041495032893);
		bigint_free(_4700361217642020622306);

	

		bigint_t* _3864395430700698739795;
		bigint_t* _2950704775938380631826 = bigint(-238);
		bigint_t* _460904009722706551507 = bigint(-14968908);
		bigint_t* _4313483279000776123453 = bigint_sub(_2950704775938380631826, _460904009722706551507 );
		bigint_to_string(_4313483279000776123453, 10, buffer);
		printf("trying ");
		puts("sub(-238, -14968908)");
		puts(buffer);
		assert(strcmp(buffer, "14968670") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2950704775938380631826);
		bigint_free(_460904009722706551507);
		bigint_free(_4313483279000776123453);

	

		bigint_t* _2376865031379959796073;
		bigint_t* _1608419621307122788578 = bigint(-182);
		bigint_t* _3908887482112225190946 = bigint(16597299);
		bigint_t* _3332860772946784500920 = bigint_mul(_1608419621307122788578, _3908887482112225190946 );
		bigint_to_string(_3332860772946784500920, 10, buffer);
		printf("trying ");
		puts("mul(-182, 16597299)");
		puts(buffer);
		assert(strcmp(buffer, "-3020708418") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1608419621307122788578);
		bigint_free(_3908887482112225190946);
		bigint_free(_3332860772946784500920);

	

		bigint_t* _1006313369285388955407;
		bigint_t* _3972499592506758130432 = bigint(-182);
		bigint_t* _3872246008928956628527 = bigint(16597299);
		bigint_t* _1660327063044551948793 = bigint_add(_3972499592506758130432, _3872246008928956628527 );
		bigint_to_string(_1660327063044551948793, 10, buffer);
		printf("trying ");
		puts("add(-182, 16597299)");
		puts(buffer);
		assert(strcmp(buffer, "16597117") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3972499592506758130432);
		bigint_free(_3872246008928956628527);
		bigint_free(_1660327063044551948793);

	

		bigint_t* _2597951601933108510214;
		bigint_t* _1778504891799557290659 = bigint(-182);
		bigint_t* _2459179833775801232027 = bigint(16597299);
		bigint_t* _324738583892749783576 = bigint_sub(_1778504891799557290659, _2459179833775801232027 );
		bigint_to_string(_324738583892749783576, 10, buffer);
		printf("trying ");
		puts("sub(-182, 16597299)");
		puts(buffer);
		assert(strcmp(buffer, "-16597481") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1778504891799557290659);
		bigint_free(_2459179833775801232027);
		bigint_free(_324738583892749783576);

	

		bigint_t* _4209582090485519499017;
		bigint_t* _3585518321809926390903 = bigint(55);
		bigint_t* _1613224480810796898415 = bigint(6489119);
		bigint_t* _940762260834094725495 = bigint_mul(_3585518321809926390903, _1613224480810796898415 );
		bigint_to_string(_940762260834094725495, 10, buffer);
		printf("trying ");
		puts("mul(55, 6489119)");
		puts(buffer);
		assert(strcmp(buffer, "356901545") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3585518321809926390903);
		bigint_free(_1613224480810796898415);
		bigint_free(_940762260834094725495);

	

		bigint_t* _4146145958648034809824;
		bigint_t* _2643951017786753360666 = bigint(55);
		bigint_t* _4144692050547591760387 = bigint(6489119);
		bigint_t* _4193197768565839058971 = bigint_add(_2643951017786753360666, _4144692050547591760387 );
		bigint_to_string(_4193197768565839058971, 10, buffer);
		printf("trying ");
		puts("add(55, 6489119)");
		puts(buffer);
		assert(strcmp(buffer, "6489174") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2643951017786753360666);
		bigint_free(_4144692050547591760387);
		bigint_free(_4193197768565839058971);

	

		bigint_t* _2802772838327485041375;
		bigint_t* _4579738710048873019687 = bigint(55);
		bigint_t* _3120778618600495344418 = bigint(6489119);
		bigint_t* _4546037908201914935176 = bigint_sub(_4579738710048873019687, _3120778618600495344418 );
		bigint_to_string(_4546037908201914935176, 10, buffer);
		printf("trying ");
		puts("sub(55, 6489119)");
		puts(buffer);
		assert(strcmp(buffer, "-6489064") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4579738710048873019687);
		bigint_free(_3120778618600495344418);
		bigint_free(_4546037908201914935176);

	

		bigint_t* _4656608572105699198599;
		bigint_t* _1716176767038704086132 = bigint(-230);
		bigint_t* _1740325499539473717086 = bigint(12882218);
		bigint_t* _1717217523048334911234 = bigint_mul(_1716176767038704086132, _1740325499539473717086 );
		bigint_to_string(_1717217523048334911234, 10, buffer);
		printf("trying ");
		puts("mul(-230, 12882218)");
		puts(buffer);
		assert(strcmp(buffer, "-2962910140") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1716176767038704086132);
		bigint_free(_1740325499539473717086);
		bigint_free(_1717217523048334911234);

	

		bigint_t* _1552040300040791811081;
		bigint_t* _1819083685903934514546 = bigint(-230);
		bigint_t* _3619328925513538315441 = bigint(12882218);
		bigint_t* _2685550703801365252164 = bigint_add(_1819083685903934514546, _3619328925513538315441 );
		bigint_to_string(_2685550703801365252164, 10, buffer);
		printf("trying ");
		puts("add(-230, 12882218)");
		puts(buffer);
		assert(strcmp(buffer, "12881988") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1819083685903934514546);
		bigint_free(_3619328925513538315441);
		bigint_free(_2685550703801365252164);

	

		bigint_t* _1818796222484413857336;
		bigint_t* _409386319512173119475 = bigint(-230);
		bigint_t* _1510606677130591359641 = bigint(12882218);
		bigint_t* _453698513235159937316 = bigint_sub(_409386319512173119475, _1510606677130591359641 );
		bigint_to_string(_453698513235159937316, 10, buffer);
		printf("trying ");
		puts("sub(-230, 12882218)");
		puts(buffer);
		assert(strcmp(buffer, "-12882448") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_409386319512173119475);
		bigint_free(_1510606677130591359641);
		bigint_free(_453698513235159937316);

	

		bigint_t* _1667669149672794845434;
		bigint_t* _1825170954396293064062 = bigint(-54);
		bigint_t* _3065396586223150375337 = bigint(13951204);
		bigint_t* _2526626635387798327063 = bigint_mul(_1825170954396293064062, _3065396586223150375337 );
		bigint_to_string(_2526626635387798327063, 10, buffer);
		printf("trying ");
		puts("mul(-54, 13951204)");
		puts(buffer);
		assert(strcmp(buffer, "-753365016") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1825170954396293064062);
		bigint_free(_3065396586223150375337);
		bigint_free(_2526626635387798327063);

	

		bigint_t* _2027125882540318943960;
		bigint_t* _1441697797971069681439 = bigint(-54);
		bigint_t* _390149114879406796994 = bigint(13951204);
		bigint_t* _1295701144731413123544 = bigint_add(_1441697797971069681439, _390149114879406796994 );
		bigint_to_string(_1295701144731413123544, 10, buffer);
		printf("trying ");
		puts("add(-54, 13951204)");
		puts(buffer);
		assert(strcmp(buffer, "13951150") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1441697797971069681439);
		bigint_free(_390149114879406796994);
		bigint_free(_1295701144731413123544);

	

		bigint_t* _728332217848556630596;
		bigint_t* _1976807011422137218126 = bigint(-54);
		bigint_t* _3850923479812159091648 = bigint(13951204);
		bigint_t* _3675379032013143795487 = bigint_sub(_1976807011422137218126, _3850923479812159091648 );
		bigint_to_string(_3675379032013143795487, 10, buffer);
		printf("trying ");
		puts("sub(-54, 13951204)");
		puts(buffer);
		assert(strcmp(buffer, "-13951258") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1976807011422137218126);
		bigint_free(_3850923479812159091648);
		bigint_free(_3675379032013143795487);

	

		bigint_t* _1322527602180830397137;
		bigint_t* _2819405394418303022059 = bigint(13);
		bigint_t* _4491887626467601189805 = bigint(-13418953);
		bigint_t* _2415413039829402121427 = bigint_mul(_2819405394418303022059, _4491887626467601189805 );
		bigint_to_string(_2415413039829402121427, 10, buffer);
		printf("trying ");
		puts("mul(13, -13418953)");
		puts(buffer);
		assert(strcmp(buffer, "-174446389") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2819405394418303022059);
		bigint_free(_4491887626467601189805);
		bigint_free(_2415413039829402121427);

	

		bigint_t* _1998530925530371657513;
		bigint_t* _2003701243262925383713 = bigint(13);
		bigint_t* _1742902052333902780811 = bigint(-13418953);
		bigint_t* _3978362642065094788799 = bigint_add(_2003701243262925383713, _1742902052333902780811 );
		bigint_to_string(_3978362642065094788799, 10, buffer);
		printf("trying ");
		puts("add(13, -13418953)");
		puts(buffer);
		assert(strcmp(buffer, "-13418940") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2003701243262925383713);
		bigint_free(_1742902052333902780811);
		bigint_free(_3978362642065094788799);

	

		bigint_t* _1885189883887052468983;
		bigint_t* _2383372926301539967103 = bigint(13);
		bigint_t* _3596938171043842973253 = bigint(-13418953);
		bigint_t* _1507159370692982685681 = bigint_sub(_2383372926301539967103, _3596938171043842973253 );
		bigint_to_string(_1507159370692982685681, 10, buffer);
		printf("trying ");
		puts("sub(13, -13418953)");
		puts(buffer);
		assert(strcmp(buffer, "13418966") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2383372926301539967103);
		bigint_free(_3596938171043842973253);
		bigint_free(_1507159370692982685681);

	

		bigint_t* _349430096937695137206;
		bigint_t* _2798397499845514325495 = bigint(-113);
		bigint_t* _2675096009198079213638 = bigint(-9850835);
		bigint_t* _4682502020852187912059 = bigint_mul(_2798397499845514325495, _2675096009198079213638 );
		bigint_to_string(_4682502020852187912059, 10, buffer);
		printf("trying ");
		puts("mul(-113, -9850835)");
		puts(buffer);
		assert(strcmp(buffer, "1113144355") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2798397499845514325495);
		bigint_free(_2675096009198079213638);
		bigint_free(_4682502020852187912059);

	

		bigint_t* _1202091227629211729164;
		bigint_t* _3006889451431755744635 = bigint(-113);
		bigint_t* _3756129237149128484830 = bigint(-9850835);
		bigint_t* _1870165388359034429810 = bigint_add(_3006889451431755744635, _3756129237149128484830 );
		bigint_to_string(_1870165388359034429810, 10, buffer);
		printf("trying ");
		puts("add(-113, -9850835)");
		puts(buffer);
		assert(strcmp(buffer, "-9850948") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3006889451431755744635);
		bigint_free(_3756129237149128484830);
		bigint_free(_1870165388359034429810);

	

		bigint_t* _1217670398701976997024;
		bigint_t* _2875099791792031578055 = bigint(-113);
		bigint_t* _2052714030453187020251 = bigint(-9850835);
		bigint_t* _1362772809579252307854 = bigint_sub(_2875099791792031578055, _2052714030453187020251 );
		bigint_to_string(_1362772809579252307854, 10, buffer);
		printf("trying ");
		puts("sub(-113, -9850835)");
		puts(buffer);
		assert(strcmp(buffer, "9850722") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2875099791792031578055);
		bigint_free(_2052714030453187020251);
		bigint_free(_1362772809579252307854);

	

		bigint_t* _3297436296053770526914;
		bigint_t* _1431459008815655136548 = bigint(-228);
		bigint_t* _2113559666747635401444 = bigint(10311691);
		bigint_t* _1418942334908836204034 = bigint_mul(_1431459008815655136548, _2113559666747635401444 );
		bigint_to_string(_1418942334908836204034, 10, buffer);
		printf("trying ");
		puts("mul(-228, 10311691)");
		puts(buffer);
		assert(strcmp(buffer, "-2351065548") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1431459008815655136548);
		bigint_free(_2113559666747635401444);
		bigint_free(_1418942334908836204034);

	

		bigint_t* _635971628017247379741;
		bigint_t* _1030611470456005813955 = bigint(-228);
		bigint_t* _2370455916144730498951 = bigint(10311691);
		bigint_t* _4654573267253978637695 = bigint_add(_1030611470456005813955, _2370455916144730498951 );
		bigint_to_string(_4654573267253978637695, 10, buffer);
		printf("trying ");
		puts("add(-228, 10311691)");
		puts(buffer);
		assert(strcmp(buffer, "10311463") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1030611470456005813955);
		bigint_free(_2370455916144730498951);
		bigint_free(_4654573267253978637695);

	

		bigint_t* _696980066220816656037;
		bigint_t* _2137450195016104437874 = bigint(-228);
		bigint_t* _3941617615096820487183 = bigint(10311691);
		bigint_t* _204353267050525930559 = bigint_sub(_2137450195016104437874, _3941617615096820487183 );
		bigint_to_string(_204353267050525930559, 10, buffer);
		printf("trying ");
		puts("sub(-228, 10311691)");
		puts(buffer);
		assert(strcmp(buffer, "-10311919") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2137450195016104437874);
		bigint_free(_3941617615096820487183);
		bigint_free(_204353267050525930559);

	

		bigint_t* _3151237803501499865840;
		bigint_t* _2324388036969535002717 = bigint(166);
		bigint_t* _2517841893479270543483 = bigint(-14436419);
		bigint_t* _418290304537648531169 = bigint_mul(_2324388036969535002717, _2517841893479270543483 );
		bigint_to_string(_418290304537648531169, 10, buffer);
		printf("trying ");
		puts("mul(166, -14436419)");
		puts(buffer);
		assert(strcmp(buffer, "-2396445554") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2324388036969535002717);
		bigint_free(_2517841893479270543483);
		bigint_free(_418290304537648531169);

	

		bigint_t* _4565590490655632264749;
		bigint_t* _4159701158735989128515 = bigint(166);
		bigint_t* _3735531852129291242086 = bigint(-14436419);
		bigint_t* _1972794878518001926766 = bigint_add(_4159701158735989128515, _3735531852129291242086 );
		bigint_to_string(_1972794878518001926766, 10, buffer);
		printf("trying ");
		puts("add(166, -14436419)");
		puts(buffer);
		assert(strcmp(buffer, "-14436253") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4159701158735989128515);
		bigint_free(_3735531852129291242086);
		bigint_free(_1972794878518001926766);

	

		bigint_t* _2501034510349099187454;
		bigint_t* _3026430466216076262157 = bigint(166);
		bigint_t* _4584045510326933915733 = bigint(-14436419);
		bigint_t* _1887638022188316835760 = bigint_sub(_3026430466216076262157, _4584045510326933915733 );
		bigint_to_string(_1887638022188316835760, 10, buffer);
		printf("trying ");
		puts("sub(166, -14436419)");
		puts(buffer);
		assert(strcmp(buffer, "14436585") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3026430466216076262157);
		bigint_free(_4584045510326933915733);
		bigint_free(_1887638022188316835760);

	

		bigint_t* _502124400421821084052;
		bigint_t* _1334714296853949625106 = bigint(8);
		bigint_t* _4610630639610688282348 = bigint(13789412);
		bigint_t* _2516507324409759457504 = bigint_mul(_1334714296853949625106, _4610630639610688282348 );
		bigint_to_string(_2516507324409759457504, 10, buffer);
		printf("trying ");
		puts("mul(8, 13789412)");
		puts(buffer);
		assert(strcmp(buffer, "110315296") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1334714296853949625106);
		bigint_free(_4610630639610688282348);
		bigint_free(_2516507324409759457504);

	

		bigint_t* _656410146105479592281;
		bigint_t* _4283492845390283884684 = bigint(8);
		bigint_t* _4538958486380896942128 = bigint(13789412);
		bigint_t* _4422234127741721797809 = bigint_add(_4283492845390283884684, _4538958486380896942128 );
		bigint_to_string(_4422234127741721797809, 10, buffer);
		printf("trying ");
		puts("add(8, 13789412)");
		puts(buffer);
		assert(strcmp(buffer, "13789420") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4283492845390283884684);
		bigint_free(_4538958486380896942128);
		bigint_free(_4422234127741721797809);

	

		bigint_t* _2866974312891842044744;
		bigint_t* _4240957524050361159876 = bigint(8);
		bigint_t* _126964373059404193569 = bigint(13789412);
		bigint_t* _4118534051998241666908 = bigint_sub(_4240957524050361159876, _126964373059404193569 );
		bigint_to_string(_4118534051998241666908, 10, buffer);
		printf("trying ");
		puts("sub(8, 13789412)");
		puts(buffer);
		assert(strcmp(buffer, "-13789404") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4240957524050361159876);
		bigint_free(_126964373059404193569);
		bigint_free(_4118534051998241666908);

	

		bigint_t* _1818441388721016101468;
		bigint_t* _2564860085501713979370 = bigint(228);
		bigint_t* _2984967587728930127674 = bigint(2523945);
		bigint_t* _2955800066090843308698 = bigint_mul(_2564860085501713979370, _2984967587728930127674 );
		bigint_to_string(_2955800066090843308698, 10, buffer);
		printf("trying ");
		puts("mul(228, 2523945)");
		puts(buffer);
		assert(strcmp(buffer, "575459460") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2564860085501713979370);
		bigint_free(_2984967587728930127674);
		bigint_free(_2955800066090843308698);

	

		bigint_t* _4613696008318561751176;
		bigint_t* _3571336819916237231658 = bigint(228);
		bigint_t* _3952274460629851300381 = bigint(2523945);
		bigint_t* _4656721719576359336216 = bigint_add(_3571336819916237231658, _3952274460629851300381 );
		bigint_to_string(_4656721719576359336216, 10, buffer);
		printf("trying ");
		puts("add(228, 2523945)");
		puts(buffer);
		assert(strcmp(buffer, "2524173") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3571336819916237231658);
		bigint_free(_3952274460629851300381);
		bigint_free(_4656721719576359336216);

	

		bigint_t* _3897492658528768100586;
		bigint_t* _2940012808313377273729 = bigint(228);
		bigint_t* _4236963918558135469476 = bigint(2523945);
		bigint_t* _1675634452825870207856 = bigint_sub(_2940012808313377273729, _4236963918558135469476 );
		bigint_to_string(_1675634452825870207856, 10, buffer);
		printf("trying ");
		puts("sub(228, 2523945)");
		puts(buffer);
		assert(strcmp(buffer, "-2523717") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2940012808313377273729);
		bigint_free(_4236963918558135469476);
		bigint_free(_1675634452825870207856);

	

		bigint_t* _3180912995191852432670;
		bigint_t* _2641935410396209712646 = bigint(-128);
		bigint_t* _2665437950538191034200 = bigint(6741697);
		bigint_t* _2079889479952855277160 = bigint_mul(_2641935410396209712646, _2665437950538191034200 );
		bigint_to_string(_2079889479952855277160, 10, buffer);
		printf("trying ");
		puts("mul(-128, 6741697)");
		puts(buffer);
		assert(strcmp(buffer, "-862937216") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2641935410396209712646);
		bigint_free(_2665437950538191034200);
		bigint_free(_2079889479952855277160);

	

		bigint_t* _1055760155932802275935;
		bigint_t* _544030015886215288834 = bigint(-128);
		bigint_t* _3016248220149330615209 = bigint(6741697);
		bigint_t* _4519590280910033559453 = bigint_add(_544030015886215288834, _3016248220149330615209 );
		bigint_to_string(_4519590280910033559453, 10, buffer);
		printf("trying ");
		puts("add(-128, 6741697)");
		puts(buffer);
		assert(strcmp(buffer, "6741569") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_544030015886215288834);
		bigint_free(_3016248220149330615209);
		bigint_free(_4519590280910033559453);

	

		bigint_t* _2479365630318371971262;
		bigint_t* _2168127709296327510899 = bigint(-128);
		bigint_t* _3943502678226557589142 = bigint(6741697);
		bigint_t* _375367769545167751384 = bigint_sub(_2168127709296327510899, _3943502678226557589142 );
		bigint_to_string(_375367769545167751384, 10, buffer);
		printf("trying ");
		puts("sub(-128, 6741697)");
		puts(buffer);
		assert(strcmp(buffer, "-6741825") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2168127709296327510899);
		bigint_free(_3943502678226557589142);
		bigint_free(_375367769545167751384);

	

		bigint_t* _841987267833864982936;
		bigint_t* _471902420826576117258 = bigint(225);
		bigint_t* _1095878072703908867708 = bigint(-10184616);
		bigint_t* _596179771408902843048 = bigint_mul(_471902420826576117258, _1095878072703908867708 );
		bigint_to_string(_596179771408902843048, 10, buffer);
		printf("trying ");
		puts("mul(225, -10184616)");
		puts(buffer);
		assert(strcmp(buffer, "-2291538600") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_471902420826576117258);
		bigint_free(_1095878072703908867708);
		bigint_free(_596179771408902843048);

	

		bigint_t* _2688387014314838043483;
		bigint_t* _2566026527624809628757 = bigint(225);
		bigint_t* _1291020852106960876168 = bigint(-10184616);
		bigint_t* _141063087161532481637 = bigint_add(_2566026527624809628757, _1291020852106960876168 );
		bigint_to_string(_141063087161532481637, 10, buffer);
		printf("trying ");
		puts("add(225, -10184616)");
		puts(buffer);
		assert(strcmp(buffer, "-10184391") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2566026527624809628757);
		bigint_free(_1291020852106960876168);
		bigint_free(_141063087161532481637);

	

		bigint_t* _3141555892700126331847;
		bigint_t* _1219950014314266638138 = bigint(225);
		bigint_t* _3868992099913769777884 = bigint(-10184616);
		bigint_t* _13189292010013368089 = bigint_sub(_1219950014314266638138, _3868992099913769777884 );
		bigint_to_string(_13189292010013368089, 10, buffer);
		printf("trying ");
		puts("sub(225, -10184616)");
		puts(buffer);
		assert(strcmp(buffer, "10184841") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1219950014314266638138);
		bigint_free(_3868992099913769777884);
		bigint_free(_13189292010013368089);

	

		bigint_t* _955302927969262878198;
		bigint_t* _2031533555071072405147 = bigint(65);
		bigint_t* _987659756752535723708 = bigint(12694497);
		bigint_t* _4661545088818025456069 = bigint_mul(_2031533555071072405147, _987659756752535723708 );
		bigint_to_string(_4661545088818025456069, 10, buffer);
		printf("trying ");
		puts("mul(65, 12694497)");
		puts(buffer);
		assert(strcmp(buffer, "825142305") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2031533555071072405147);
		bigint_free(_987659756752535723708);
		bigint_free(_4661545088818025456069);

	

		bigint_t* _4227076680917357325886;
		bigint_t* _3404335038539344615384 = bigint(65);
		bigint_t* _2746217691263305840663 = bigint(12694497);
		bigint_t* _2107055722176218348208 = bigint_add(_3404335038539344615384, _2746217691263305840663 );
		bigint_to_string(_2107055722176218348208, 10, buffer);
		printf("trying ");
		puts("add(65, 12694497)");
		puts(buffer);
		assert(strcmp(buffer, "12694562") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3404335038539344615384);
		bigint_free(_2746217691263305840663);
		bigint_free(_2107055722176218348208);

	

		bigint_t* _661206271619908767282;
		bigint_t* _2329885348686256358175 = bigint(65);
		bigint_t* _837800901810644662142 = bigint(12694497);
		bigint_t* _3165232378275164719948 = bigint_sub(_2329885348686256358175, _837800901810644662142 );
		bigint_to_string(_3165232378275164719948, 10, buffer);
		printf("trying ");
		puts("sub(65, 12694497)");
		puts(buffer);
		assert(strcmp(buffer, "-12694432") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2329885348686256358175);
		bigint_free(_837800901810644662142);
		bigint_free(_3165232378275164719948);

	

		bigint_t* _3968545707405094519237;
		bigint_t* _3906549894269600928060 = bigint(-162);
		bigint_t* _530694693702442355315 = bigint(4087391);
		bigint_t* _214559965571912417406 = bigint_mul(_3906549894269600928060, _530694693702442355315 );
		bigint_to_string(_214559965571912417406, 10, buffer);
		printf("trying ");
		puts("mul(-162, 4087391)");
		puts(buffer);
		assert(strcmp(buffer, "-662157342") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3906549894269600928060);
		bigint_free(_530694693702442355315);
		bigint_free(_214559965571912417406);

	

		bigint_t* _223527186133953925706;
		bigint_t* _2230102326740237557073 = bigint(-162);
		bigint_t* _178051721165853800615 = bigint(4087391);
		bigint_t* _4483333255717017952912 = bigint_add(_2230102326740237557073, _178051721165853800615 );
		bigint_to_string(_4483333255717017952912, 10, buffer);
		printf("trying ");
		puts("add(-162, 4087391)");
		puts(buffer);
		assert(strcmp(buffer, "4087229") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2230102326740237557073);
		bigint_free(_178051721165853800615);
		bigint_free(_4483333255717017952912);

	

		bigint_t* _4044557407591689080676;
		bigint_t* _4529845233886759982656 = bigint(-162);
		bigint_t* _2808458817994225500699 = bigint(4087391);
		bigint_t* _3023342287432248719992 = bigint_sub(_4529845233886759982656, _2808458817994225500699 );
		bigint_to_string(_3023342287432248719992, 10, buffer);
		printf("trying ");
		puts("sub(-162, 4087391)");
		puts(buffer);
		assert(strcmp(buffer, "-4087553") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4529845233886759982656);
		bigint_free(_2808458817994225500699);
		bigint_free(_3023342287432248719992);

	

		bigint_t* _447198162398401661159;
		bigint_t* _4238920643708939466972 = bigint(168);
		bigint_t* _588694952576169830317 = bigint(14186560);
		bigint_t* _2622370668679210240355 = bigint_mul(_4238920643708939466972, _588694952576169830317 );
		bigint_to_string(_2622370668679210240355, 10, buffer);
		printf("trying ");
		puts("mul(168, 14186560)");
		puts(buffer);
		assert(strcmp(buffer, "2383342080") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4238920643708939466972);
		bigint_free(_588694952576169830317);
		bigint_free(_2622370668679210240355);

	

		bigint_t* _4262197358133317132448;
		bigint_t* _1946221319335283997321 = bigint(168);
		bigint_t* _2215632944998875465785 = bigint(14186560);
		bigint_t* _2327092855534485754769 = bigint_add(_1946221319335283997321, _2215632944998875465785 );
		bigint_to_string(_2327092855534485754769, 10, buffer);
		printf("trying ");
		puts("add(168, 14186560)");
		puts(buffer);
		assert(strcmp(buffer, "14186728") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1946221319335283997321);
		bigint_free(_2215632944998875465785);
		bigint_free(_2327092855534485754769);

	

		bigint_t* _3589881669737708256034;
		bigint_t* _4564701775191533851519 = bigint(168);
		bigint_t* _333826591633313190877 = bigint(14186560);
		bigint_t* _3825413971164892532992 = bigint_sub(_4564701775191533851519, _333826591633313190877 );
		bigint_to_string(_3825413971164892532992, 10, buffer);
		printf("trying ");
		puts("sub(168, 14186560)");
		puts(buffer);
		assert(strcmp(buffer, "-14186392") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4564701775191533851519);
		bigint_free(_333826591633313190877);
		bigint_free(_3825413971164892532992);

	

		bigint_t* _3090095077707327999;
		bigint_t* _1661651997436128130557 = bigint(71);
		bigint_t* _2168734483502831800370 = bigint(-12058979);
		bigint_t* _4632311778492716408870 = bigint_mul(_1661651997436128130557, _2168734483502831800370 );
		bigint_to_string(_4632311778492716408870, 10, buffer);
		printf("trying ");
		puts("mul(71, -12058979)");
		puts(buffer);
		assert(strcmp(buffer, "-856187509") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1661651997436128130557);
		bigint_free(_2168734483502831800370);
		bigint_free(_4632311778492716408870);

	

		bigint_t* _1076686815251368987390;
		bigint_t* _4622533268498469330888 = bigint(71);
		bigint_t* _4600710829925233810504 = bigint(-12058979);
		bigint_t* _4548745521120029163122 = bigint_add(_4622533268498469330888, _4600710829925233810504 );
		bigint_to_string(_4548745521120029163122, 10, buffer);
		printf("trying ");
		puts("add(71, -12058979)");
		puts(buffer);
		assert(strcmp(buffer, "-12058908") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4622533268498469330888);
		bigint_free(_4600710829925233810504);
		bigint_free(_4548745521120029163122);

	

		bigint_t* _3875477488775488983133;
		bigint_t* _277810367881167421491 = bigint(71);
		bigint_t* _1865012362099975942171 = bigint(-12058979);
		bigint_t* _4537144056219993653272 = bigint_sub(_277810367881167421491, _1865012362099975942171 );
		bigint_to_string(_4537144056219993653272, 10, buffer);
		printf("trying ");
		puts("sub(71, -12058979)");
		puts(buffer);
		assert(strcmp(buffer, "12059050") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_277810367881167421491);
		bigint_free(_1865012362099975942171);
		bigint_free(_4537144056219993653272);

	

		bigint_t* _2041637889348471124576;
		bigint_t* _4440396803159448779847 = bigint(91);
		bigint_t* _740411409506373982386 = bigint(-331989);
		bigint_t* _1961822247512842910257 = bigint_mul(_4440396803159448779847, _740411409506373982386 );
		bigint_to_string(_1961822247512842910257, 10, buffer);
		printf("trying ");
		puts("mul(91, -331989)");
		puts(buffer);
		assert(strcmp(buffer, "-30210999") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4440396803159448779847);
		bigint_free(_740411409506373982386);
		bigint_free(_1961822247512842910257);

	

		bigint_t* _3394042259594339807635;
		bigint_t* _2462556217615420203681 = bigint(91);
		bigint_t* _1157118491764691817228 = bigint(-331989);
		bigint_t* _4233581148134313985249 = bigint_add(_2462556217615420203681, _1157118491764691817228 );
		bigint_to_string(_4233581148134313985249, 10, buffer);
		printf("trying ");
		puts("add(91, -331989)");
		puts(buffer);
		assert(strcmp(buffer, "-331898") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2462556217615420203681);
		bigint_free(_1157118491764691817228);
		bigint_free(_4233581148134313985249);

	

		bigint_t* _1632984457437896572645;
		bigint_t* _1677555771843125535933 = bigint(91);
		bigint_t* _4318981317319529831909 = bigint(-331989);
		bigint_t* _2384623343473965849174 = bigint_sub(_1677555771843125535933, _4318981317319529831909 );
		bigint_to_string(_2384623343473965849174, 10, buffer);
		printf("trying ");
		puts("sub(91, -331989)");
		puts(buffer);
		assert(strcmp(buffer, "332080") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1677555771843125535933);
		bigint_free(_4318981317319529831909);
		bigint_free(_2384623343473965849174);

	

		bigint_t* _937129638088853873472;
		bigint_t* _3736472452428620635904 = bigint(-124);
		bigint_t* _962579733612673963079 = bigint(-16169764);
		bigint_t* _596125144229059870705 = bigint_mul(_3736472452428620635904, _962579733612673963079 );
		bigint_to_string(_596125144229059870705, 10, buffer);
		printf("trying ");
		puts("mul(-124, -16169764)");
		puts(buffer);
		assert(strcmp(buffer, "2005050736") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3736472452428620635904);
		bigint_free(_962579733612673963079);
		bigint_free(_596125144229059870705);

	

		bigint_t* _961432495761320829093;
		bigint_t* _260289682383302846713 = bigint(-124);
		bigint_t* _2084697674738341709247 = bigint(-16169764);
		bigint_t* _2313799068458404030250 = bigint_add(_260289682383302846713, _2084697674738341709247 );
		bigint_to_string(_2313799068458404030250, 10, buffer);
		printf("trying ");
		puts("add(-124, -16169764)");
		puts(buffer);
		assert(strcmp(buffer, "-16169888") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_260289682383302846713);
		bigint_free(_2084697674738341709247);
		bigint_free(_2313799068458404030250);

	

		bigint_t* _2567917970784448758997;
		bigint_t* _1446414625612246399932 = bigint(-124);
		bigint_t* _810761769396590391939 = bigint(-16169764);
		bigint_t* _525369481339862304271 = bigint_sub(_1446414625612246399932, _810761769396590391939 );
		bigint_to_string(_525369481339862304271, 10, buffer);
		printf("trying ");
		puts("sub(-124, -16169764)");
		puts(buffer);
		assert(strcmp(buffer, "16169640") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1446414625612246399932);
		bigint_free(_810761769396590391939);
		bigint_free(_525369481339862304271);

	

		bigint_t* _1332692320465498720754;
		bigint_t* _2700920300767164849765 = bigint(-133);
		bigint_t* _3292932582958669632840 = bigint(-11139687);
		bigint_t* _1936125460733219436101 = bigint_mul(_2700920300767164849765, _3292932582958669632840 );
		bigint_to_string(_1936125460733219436101, 10, buffer);
		printf("trying ");
		puts("mul(-133, -11139687)");
		puts(buffer);
		assert(strcmp(buffer, "1481578371") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2700920300767164849765);
		bigint_free(_3292932582958669632840);
		bigint_free(_1936125460733219436101);

	

		bigint_t* _623419146152647486728;
		bigint_t* _2309215552055081948827 = bigint(-133);
		bigint_t* _4010982806715116216356 = bigint(-11139687);
		bigint_t* _271900723686075773308 = bigint_add(_2309215552055081948827, _4010982806715116216356 );
		bigint_to_string(_271900723686075773308, 10, buffer);
		printf("trying ");
		puts("add(-133, -11139687)");
		puts(buffer);
		assert(strcmp(buffer, "-11139820") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2309215552055081948827);
		bigint_free(_4010982806715116216356);
		bigint_free(_271900723686075773308);

	

		bigint_t* _4285624501670106172708;
		bigint_t* _1912335063690211786872 = bigint(-133);
		bigint_t* _2763445945347053091932 = bigint(-11139687);
		bigint_t* _3020250852258746251072 = bigint_sub(_1912335063690211786872, _2763445945347053091932 );
		bigint_to_string(_3020250852258746251072, 10, buffer);
		printf("trying ");
		puts("sub(-133, -11139687)");
		puts(buffer);
		assert(strcmp(buffer, "11139554") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1912335063690211786872);
		bigint_free(_2763445945347053091932);
		bigint_free(_3020250852258746251072);

	

		bigint_t* _4172364924857102922191;
		bigint_t* _4643899660175476463540 = bigint(139);
		bigint_t* _2361142715052441878634 = bigint(-14667237);
		bigint_t* _911474139630097638830 = bigint_mul(_4643899660175476463540, _2361142715052441878634 );
		bigint_to_string(_911474139630097638830, 10, buffer);
		printf("trying ");
		puts("mul(139, -14667237)");
		puts(buffer);
		assert(strcmp(buffer, "-2038745943") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4643899660175476463540);
		bigint_free(_2361142715052441878634);
		bigint_free(_911474139630097638830);

	

		bigint_t* _4617843595672806101707;
		bigint_t* _1698916670102630933044 = bigint(139);
		bigint_t* _2613882824961252234481 = bigint(-14667237);
		bigint_t* _1889481338021556875455 = bigint_add(_1698916670102630933044, _2613882824961252234481 );
		bigint_to_string(_1889481338021556875455, 10, buffer);
		printf("trying ");
		puts("add(139, -14667237)");
		puts(buffer);
		assert(strcmp(buffer, "-14667098") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1698916670102630933044);
		bigint_free(_2613882824961252234481);
		bigint_free(_1889481338021556875455);

	

		bigint_t* _2200707405220602214359;
		bigint_t* _2893507709821094383777 = bigint(139);
		bigint_t* _1380400772888183158024 = bigint(-14667237);
		bigint_t* _2306270240071386592402 = bigint_sub(_2893507709821094383777, _1380400772888183158024 );
		bigint_to_string(_2306270240071386592402, 10, buffer);
		printf("trying ");
		puts("sub(139, -14667237)");
		puts(buffer);
		assert(strcmp(buffer, "14667376") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2893507709821094383777);
		bigint_free(_1380400772888183158024);
		bigint_free(_2306270240071386592402);

	

		bigint_t* _3497480147530074234719;
		bigint_t* _2810551387279583228526 = bigint(-219);
		bigint_t* _4583326678482151468276 = bigint(-14244493);
		bigint_t* _1537337915346103909488 = bigint_mul(_2810551387279583228526, _4583326678482151468276 );
		bigint_to_string(_1537337915346103909488, 10, buffer);
		printf("trying ");
		puts("mul(-219, -14244493)");
		puts(buffer);
		assert(strcmp(buffer, "3119543967") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2810551387279583228526);
		bigint_free(_4583326678482151468276);
		bigint_free(_1537337915346103909488);

	

		bigint_t* _460081254806361271367;
		bigint_t* _3176440135988816334602 = bigint(-219);
		bigint_t* _1759595115772212436266 = bigint(-14244493);
		bigint_t* _4480625502780567306813 = bigint_add(_3176440135988816334602, _1759595115772212436266 );
		bigint_to_string(_4480625502780567306813, 10, buffer);
		printf("trying ");
		puts("add(-219, -14244493)");
		puts(buffer);
		assert(strcmp(buffer, "-14244712") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3176440135988816334602);
		bigint_free(_1759595115772212436266);
		bigint_free(_4480625502780567306813);

	

		bigint_t* _4230001241328815765046;
		bigint_t* _2062416665534209488107 = bigint(-219);
		bigint_t* _2286095466821837148353 = bigint(-14244493);
		bigint_t* _1674321640239877462717 = bigint_sub(_2062416665534209488107, _2286095466821837148353 );
		bigint_to_string(_1674321640239877462717, 10, buffer);
		printf("trying ");
		puts("sub(-219, -14244493)");
		puts(buffer);
		assert(strcmp(buffer, "14244274") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2062416665534209488107);
		bigint_free(_2286095466821837148353);
		bigint_free(_1674321640239877462717);

	

		bigint_t* _2526973958115726741253;
		bigint_t* _1410298032052982259402 = bigint(-29);
		bigint_t* _2398952720816539637745 = bigint(-11000160);
		bigint_t* _3273199733196725365723 = bigint_mul(_1410298032052982259402, _2398952720816539637745 );
		bigint_to_string(_3273199733196725365723, 10, buffer);
		printf("trying ");
		puts("mul(-29, -11000160)");
		puts(buffer);
		assert(strcmp(buffer, "319004640") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1410298032052982259402);
		bigint_free(_2398952720816539637745);
		bigint_free(_3273199733196725365723);

	

		bigint_t* _4045600751449628441764;
		bigint_t* _20049424086529165005 = bigint(-29);
		bigint_t* _4631990362197005540710 = bigint(-11000160);
		bigint_t* _2040663687705144470308 = bigint_add(_20049424086529165005, _4631990362197005540710 );
		bigint_to_string(_2040663687705144470308, 10, buffer);
		printf("trying ");
		puts("add(-29, -11000160)");
		puts(buffer);
		assert(strcmp(buffer, "-11000189") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_20049424086529165005);
		bigint_free(_4631990362197005540710);
		bigint_free(_2040663687705144470308);

	

		bigint_t* _2080326063794755558244;
		bigint_t* _3411033289476298508971 = bigint(-29);
		bigint_t* _4269880691836152215415 = bigint(-11000160);
		bigint_t* _4616369312696432614753 = bigint_sub(_3411033289476298508971, _4269880691836152215415 );
		bigint_to_string(_4616369312696432614753, 10, buffer);
		printf("trying ");
		puts("sub(-29, -11000160)");
		puts(buffer);
		assert(strcmp(buffer, "11000131") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3411033289476298508971);
		bigint_free(_4269880691836152215415);
		bigint_free(_4616369312696432614753);

	

		bigint_t* _2809841903977407916925;
		bigint_t* _2268533263125049220231 = bigint(-251);
		bigint_t* _185966744194668191359 = bigint(14910087);
		bigint_t* _4553222474624317878538 = bigint_mul(_2268533263125049220231, _185966744194668191359 );
		bigint_to_string(_4553222474624317878538, 10, buffer);
		printf("trying ");
		puts("mul(-251, 14910087)");
		puts(buffer);
		assert(strcmp(buffer, "-3742431837") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2268533263125049220231);
		bigint_free(_185966744194668191359);
		bigint_free(_4553222474624317878538);

	

		bigint_t* _2241135410746476926862;
		bigint_t* _637055692504905502055 = bigint(-251);
		bigint_t* _1471992977350017492089 = bigint(14910087);
		bigint_t* _2307798447944274310973 = bigint_add(_637055692504905502055, _1471992977350017492089 );
		bigint_to_string(_2307798447944274310973, 10, buffer);
		printf("trying ");
		puts("add(-251, 14910087)");
		puts(buffer);
		assert(strcmp(buffer, "14909836") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_637055692504905502055);
		bigint_free(_1471992977350017492089);
		bigint_free(_2307798447944274310973);

	

		bigint_t* _4188548509413430956169;
		bigint_t* _2433021985175964765697 = bigint(-251);
		bigint_t* _3834932976914599846279 = bigint(14910087);
		bigint_t* _823399627712192515088 = bigint_sub(_2433021985175964765697, _3834932976914599846279 );
		bigint_to_string(_823399627712192515088, 10, buffer);
		printf("trying ");
		puts("sub(-251, 14910087)");
		puts(buffer);
		assert(strcmp(buffer, "-14910338") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2433021985175964765697);
		bigint_free(_3834932976914599846279);
		bigint_free(_823399627712192515088);

	

		bigint_t* _3872163941668587239483;
		bigint_t* _2521077792821068834051 = bigint(105);
		bigint_t* _3667252017297748548863 = bigint(-2846613);
		bigint_t* _4495662840327318131790 = bigint_mul(_2521077792821068834051, _3667252017297748548863 );
		bigint_to_string(_4495662840327318131790, 10, buffer);
		printf("trying ");
		puts("mul(105, -2846613)");
		puts(buffer);
		assert(strcmp(buffer, "-298894365") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2521077792821068834051);
		bigint_free(_3667252017297748548863);
		bigint_free(_4495662840327318131790);

	

		bigint_t* _3549053428286481811528;
		bigint_t* _41249421037425635616 = bigint(105);
		bigint_t* _816781242882484623922 = bigint(-2846613);
		bigint_t* _1199287059599299558021 = bigint_add(_41249421037425635616, _816781242882484623922 );
		bigint_to_string(_1199287059599299558021, 10, buffer);
		printf("trying ");
		puts("add(105, -2846613)");
		puts(buffer);
		assert(strcmp(buffer, "-2846508") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_41249421037425635616);
		bigint_free(_816781242882484623922);
		bigint_free(_1199287059599299558021);

	

		bigint_t* _1874258054237294355113;
		bigint_t* _4316430774709489804757 = bigint(105);
		bigint_t* _144754027015841595587 = bigint(-2846613);
		bigint_t* _4376481533973599854867 = bigint_sub(_4316430774709489804757, _144754027015841595587 );
		bigint_to_string(_4376481533973599854867, 10, buffer);
		printf("trying ");
		puts("sub(105, -2846613)");
		puts(buffer);
		assert(strcmp(buffer, "2846718") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4316430774709489804757);
		bigint_free(_144754027015841595587);
		bigint_free(_4376481533973599854867);

	

		bigint_t* _298223272349079970362;
		bigint_t* _308733889819959519531 = bigint(-243);
		bigint_t* _77426710744435207998 = bigint(-2383166);
		bigint_t* _523687112735685807478 = bigint_mul(_308733889819959519531, _77426710744435207998 );
		bigint_to_string(_523687112735685807478, 10, buffer);
		printf("trying ");
		puts("mul(-243, -2383166)");
		puts(buffer);
		assert(strcmp(buffer, "579109338") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_308733889819959519531);
		bigint_free(_77426710744435207998);
		bigint_free(_523687112735685807478);

	

		bigint_t* _4252774625284098631595;
		bigint_t* _2233126484809113073171 = bigint(-243);
		bigint_t* _4122494337721934877111 = bigint(-2383166);
		bigint_t* _1015776809688863832204 = bigint_add(_2233126484809113073171, _4122494337721934877111 );
		bigint_to_string(_1015776809688863832204, 10, buffer);
		printf("trying ");
		puts("add(-243, -2383166)");
		puts(buffer);
		assert(strcmp(buffer, "-2383409") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2233126484809113073171);
		bigint_free(_4122494337721934877111);
		bigint_free(_1015776809688863832204);

	

		bigint_t* _4654335340331398631804;
		bigint_t* _2504554462653746509681 = bigint(-243);
		bigint_t* _1024433055323322151998 = bigint(-2383166);
		bigint_t* _4152131074165962057358 = bigint_sub(_2504554462653746509681, _1024433055323322151998 );
		bigint_to_string(_4152131074165962057358, 10, buffer);
		printf("trying ");
		puts("sub(-243, -2383166)");
		puts(buffer);
		assert(strcmp(buffer, "2382923") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2504554462653746509681);
		bigint_free(_1024433055323322151998);
		bigint_free(_4152131074165962057358);

	

		bigint_t* _2055415289953519433648;
		bigint_t* _4443913842828610838646 = bigint(208);
		bigint_t* _3718396617405801669813 = bigint(8217516);
		bigint_t* _2373988490456503370672 = bigint_mul(_4443913842828610838646, _3718396617405801669813 );
		bigint_to_string(_2373988490456503370672, 10, buffer);
		printf("trying ");
		puts("mul(208, 8217516)");
		puts(buffer);
		assert(strcmp(buffer, "1709243328") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4443913842828610838646);
		bigint_free(_3718396617405801669813);
		bigint_free(_2373988490456503370672);

	

		bigint_t* _3400612117422308960900;
		bigint_t* _3766538685547877618118 = bigint(208);
		bigint_t* _3690082328974049663382 = bigint(8217516);
		bigint_t* _2963932023486495027281 = bigint_add(_3766538685547877618118, _3690082328974049663382 );
		bigint_to_string(_2963932023486495027281, 10, buffer);
		printf("trying ");
		puts("add(208, 8217516)");
		puts(buffer);
		assert(strcmp(buffer, "8217724") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3766538685547877618118);
		bigint_free(_3690082328974049663382);
		bigint_free(_2963932023486495027281);

	

		bigint_t* _490190417607374504220;
		bigint_t* _2643168253677329933097 = bigint(208);
		bigint_t* _1778223960313341955156 = bigint(8217516);
		bigint_t* _1535721502019039503474 = bigint_sub(_2643168253677329933097, _1778223960313341955156 );
		bigint_to_string(_1535721502019039503474, 10, buffer);
		printf("trying ");
		puts("sub(208, 8217516)");
		puts(buffer);
		assert(strcmp(buffer, "-8217308") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2643168253677329933097);
		bigint_free(_1778223960313341955156);
		bigint_free(_1535721502019039503474);

	

		bigint_t* _1757940297309189001152;
		bigint_t* _4363610087576872881840 = bigint(-167);
		bigint_t* _4094676360110373185184 = bigint(-6394866);
		bigint_t* _2421217178074381149745 = bigint_mul(_4363610087576872881840, _4094676360110373185184 );
		bigint_to_string(_2421217178074381149745, 10, buffer);
		printf("trying ");
		puts("mul(-167, -6394866)");
		puts(buffer);
		assert(strcmp(buffer, "1067942622") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4363610087576872881840);
		bigint_free(_4094676360110373185184);
		bigint_free(_2421217178074381149745);

	

		bigint_t* _3642300228485027480178;
		bigint_t* _1409856747955407815957 = bigint(-167);
		bigint_t* _989703404838980708301 = bigint(-6394866);
		bigint_t* _4569603724286673876230 = bigint_add(_1409856747955407815957, _989703404838980708301 );
		bigint_to_string(_4569603724286673876230, 10, buffer);
		printf("trying ");
		puts("add(-167, -6394866)");
		puts(buffer);
		assert(strcmp(buffer, "-6395033") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1409856747955407815957);
		bigint_free(_989703404838980708301);
		bigint_free(_4569603724286673876230);

	

		bigint_t* _3885528735637641465190;
		bigint_t* _865604302172319994157 = bigint(-167);
		bigint_t* _2816774519467905235508 = bigint(-6394866);
		bigint_t* _4125055650661352496362 = bigint_sub(_865604302172319994157, _2816774519467905235508 );
		bigint_to_string(_4125055650661352496362, 10, buffer);
		printf("trying ");
		puts("sub(-167, -6394866)");
		puts(buffer);
		assert(strcmp(buffer, "6394699") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_865604302172319994157);
		bigint_free(_2816774519467905235508);
		bigint_free(_4125055650661352496362);

	

		bigint_t* _2556105369441864054824;
		bigint_t* _3741619133067414932572 = bigint(193);
		bigint_t* _3227346518959960322124 = bigint(1142086);
		bigint_t* _1561319234278613809750 = bigint_mul(_3741619133067414932572, _3227346518959960322124 );
		bigint_to_string(_1561319234278613809750, 10, buffer);
		printf("trying ");
		puts("mul(193, 1142086)");
		puts(buffer);
		assert(strcmp(buffer, "220422598") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3741619133067414932572);
		bigint_free(_3227346518959960322124);
		bigint_free(_1561319234278613809750);

	

		bigint_t* _1545127388887940147275;
		bigint_t* _373252891343988848993 = bigint(193);
		bigint_t* _799800986725912071631 = bigint(1142086);
		bigint_t* _458323660301898424668 = bigint_add(_373252891343988848993, _799800986725912071631 );
		bigint_to_string(_458323660301898424668, 10, buffer);
		printf("trying ");
		puts("add(193, 1142086)");
		puts(buffer);
		assert(strcmp(buffer, "1142279") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_373252891343988848993);
		bigint_free(_799800986725912071631);
		bigint_free(_458323660301898424668);

	

		bigint_t* _2957418965628271461080;
		bigint_t* _3705235037693042531978 = bigint(193);
		bigint_t* _356071144155329120744 = bigint(1142086);
		bigint_t* _3294318334054759173 = bigint_sub(_3705235037693042531978, _356071144155329120744 );
		bigint_to_string(_3294318334054759173, 10, buffer);
		printf("trying ");
		puts("sub(193, 1142086)");
		puts(buffer);
		assert(strcmp(buffer, "-1141893") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3705235037693042531978);
		bigint_free(_356071144155329120744);
		bigint_free(_3294318334054759173);

	

		bigint_t* _1969931520034014914695;
		bigint_t* _3943017607569708792617 = bigint(-141);
		bigint_t* _4280812024466761525101 = bigint(3401630);
		bigint_t* _4382498792749473562302 = bigint_mul(_3943017607569708792617, _4280812024466761525101 );
		bigint_to_string(_4382498792749473562302, 10, buffer);
		printf("trying ");
		puts("mul(-141, 3401630)");
		puts(buffer);
		assert(strcmp(buffer, "-479629830") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3943017607569708792617);
		bigint_free(_4280812024466761525101);
		bigint_free(_4382498792749473562302);

	

		bigint_t* _4090145580099541733366;
		bigint_t* _2502398389931172301614 = bigint(-141);
		bigint_t* _3663237640557275217155 = bigint(3401630);
		bigint_t* _213888124887878251193 = bigint_add(_2502398389931172301614, _3663237640557275217155 );
		bigint_to_string(_213888124887878251193, 10, buffer);
		printf("trying ");
		puts("add(-141, 3401630)");
		puts(buffer);
		assert(strcmp(buffer, "3401489") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2502398389931172301614);
		bigint_free(_3663237640557275217155);
		bigint_free(_213888124887878251193);

	

		bigint_t* _1031401215157411743341;
		bigint_t* _111855765593334613289 = bigint(-141);
		bigint_t* _32920512303385911189 = bigint(3401630);
		bigint_t* _3090579269501888768473 = bigint_sub(_111855765593334613289, _32920512303385911189 );
		bigint_to_string(_3090579269501888768473, 10, buffer);
		printf("trying ");
		puts("sub(-141, 3401630)");
		puts(buffer);
		assert(strcmp(buffer, "-3401771") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_111855765593334613289);
		bigint_free(_32920512303385911189);
		bigint_free(_3090579269501888768473);

	

		bigint_t* _2392667205458247503015;
		bigint_t* _371551389470708642231 = bigint(189);
		bigint_t* _1660792102931365480361 = bigint(7408874);
		bigint_t* _1812766712229380455751 = bigint_mul(_371551389470708642231, _1660792102931365480361 );
		bigint_to_string(_1812766712229380455751, 10, buffer);
		printf("trying ");
		puts("mul(189, 7408874)");
		puts(buffer);
		assert(strcmp(buffer, "1400277186") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_371551389470708642231);
		bigint_free(_1660792102931365480361);
		bigint_free(_1812766712229380455751);

	

		bigint_t* _2581352301119414345572;
		bigint_t* _4628813352595554459985 = bigint(189);
		bigint_t* _1176547538641668297057 = bigint(7408874);
		bigint_t* _388066426209603414092 = bigint_add(_4628813352595554459985, _1176547538641668297057 );
		bigint_to_string(_388066426209603414092, 10, buffer);
		printf("trying ");
		puts("add(189, 7408874)");
		puts(buffer);
		assert(strcmp(buffer, "7409063") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4628813352595554459985);
		bigint_free(_1176547538641668297057);
		bigint_free(_388066426209603414092);

	

		bigint_t* _149889441509898236099;
		bigint_t* _4475680314198490815154 = bigint(189);
		bigint_t* _1405098644715986651275 = bigint(7408874);
		bigint_t* _1989845789657650703099 = bigint_sub(_4475680314198490815154, _1405098644715986651275 );
		bigint_to_string(_1989845789657650703099, 10, buffer);
		printf("trying ");
		puts("sub(189, 7408874)");
		puts(buffer);
		assert(strcmp(buffer, "-7408685") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4475680314198490815154);
		bigint_free(_1405098644715986651275);
		bigint_free(_1989845789657650703099);

	

		bigint_t* _4237492120350363432231;
		bigint_t* _4064669997862568931295 = bigint(99);
		bigint_t* _1777702539233848175459 = bigint(-341068);
		bigint_t* _2238645128333022864964 = bigint_mul(_4064669997862568931295, _1777702539233848175459 );
		bigint_to_string(_2238645128333022864964, 10, buffer);
		printf("trying ");
		puts("mul(99, -341068)");
		puts(buffer);
		assert(strcmp(buffer, "-33765732") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4064669997862568931295);
		bigint_free(_1777702539233848175459);
		bigint_free(_2238645128333022864964);

	

		bigint_t* _4140176553483810695293;
		bigint_t* _3839715925694996621947 = bigint(99);
		bigint_t* _3374932245654870978657 = bigint(-341068);
		bigint_t* _139185702239628853056 = bigint_add(_3839715925694996621947, _3374932245654870978657 );
		bigint_to_string(_139185702239628853056, 10, buffer);
		printf("trying ");
		puts("add(99, -341068)");
		puts(buffer);
		assert(strcmp(buffer, "-340969") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3839715925694996621947);
		bigint_free(_3374932245654870978657);
		bigint_free(_139185702239628853056);

	

		bigint_t* _1057481761601721025343;
		bigint_t* _877451849214771926028 = bigint(99);
		bigint_t* _1069549228603975108443 = bigint(-341068);
		bigint_t* _3905913471230750497335 = bigint_sub(_877451849214771926028, _1069549228603975108443 );
		bigint_to_string(_3905913471230750497335, 10, buffer);
		printf("trying ");
		puts("sub(99, -341068)");
		puts(buffer);
		assert(strcmp(buffer, "341167") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_877451849214771926028);
		bigint_free(_1069549228603975108443);
		bigint_free(_3905913471230750497335);

	

		bigint_t* _2597369117713082336940;
		bigint_t* _1390930877097729877852 = bigint(26);
		bigint_t* _3860381721763846357811 = bigint(2888473);
		bigint_t* _1618774403468103391829 = bigint_mul(_1390930877097729877852, _3860381721763846357811 );
		bigint_to_string(_1618774403468103391829, 10, buffer);
		printf("trying ");
		puts("mul(26, 2888473)");
		puts(buffer);
		assert(strcmp(buffer, "75100298") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1390930877097729877852);
		bigint_free(_3860381721763846357811);
		bigint_free(_1618774403468103391829);

	

		bigint_t* _4648723380490077931011;
		bigint_t* _412496265255546045940 = bigint(26);
		bigint_t* _2650947309728877720751 = bigint(2888473);
		bigint_t* _4211155499353277667355 = bigint_add(_412496265255546045940, _2650947309728877720751 );
		bigint_to_string(_4211155499353277667355, 10, buffer);
		printf("trying ");
		puts("add(26, 2888473)");
		puts(buffer);
		assert(strcmp(buffer, "2888499") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_412496265255546045940);
		bigint_free(_2650947309728877720751);
		bigint_free(_4211155499353277667355);

	

		bigint_t* _2894210875348432956943;
		bigint_t* _2101724642040743093799 = bigint(26);
		bigint_t* _1050504028256401010356 = bigint(2888473);
		bigint_t* _1499192721637975655061 = bigint_sub(_2101724642040743093799, _1050504028256401010356 );
		bigint_to_string(_1499192721637975655061, 10, buffer);
		printf("trying ");
		puts("sub(26, 2888473)");
		puts(buffer);
		assert(strcmp(buffer, "-2888447") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2101724642040743093799);
		bigint_free(_1050504028256401010356);
		bigint_free(_1499192721637975655061);

	

		bigint_t* _3242187997044991563110;
		bigint_t* _1878490422410024590886 = bigint(157);
		bigint_t* _4717340839826506394090 = bigint(15651426);
		bigint_t* _1013199398547309839683 = bigint_mul(_1878490422410024590886, _4717340839826506394090 );
		bigint_to_string(_1013199398547309839683, 10, buffer);
		printf("trying ");
		puts("mul(157, 15651426)");
		puts(buffer);
		assert(strcmp(buffer, "2457273882") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1878490422410024590886);
		bigint_free(_4717340839826506394090);
		bigint_free(_1013199398547309839683);

	

		bigint_t* _201590349007152286482;
		bigint_t* _3888655858923161455308 = bigint(157);
		bigint_t* _4324401131391364316025 = bigint(15651426);
		bigint_t* _2499962212465039615966 = bigint_add(_3888655858923161455308, _4324401131391364316025 );
		bigint_to_string(_2499962212465039615966, 10, buffer);
		printf("trying ");
		puts("add(157, 15651426)");
		puts(buffer);
		assert(strcmp(buffer, "15651583") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3888655858923161455308);
		bigint_free(_4324401131391364316025);
		bigint_free(_2499962212465039615966);

	

		bigint_t* _3730824202648709156921;
		bigint_t* _1231996551341117357202 = bigint(157);
		bigint_t* _4691943398382278428991 = bigint(15651426);
		bigint_t* _597767798427107088073 = bigint_sub(_1231996551341117357202, _4691943398382278428991 );
		bigint_to_string(_597767798427107088073, 10, buffer);
		printf("trying ");
		puts("sub(157, 15651426)");
		puts(buffer);
		assert(strcmp(buffer, "-15651269") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1231996551341117357202);
		bigint_free(_4691943398382278428991);
		bigint_free(_597767798427107088073);

	

		bigint_t* _4059619814940582466448;
		bigint_t* _1171604912077946050462 = bigint(216);
		bigint_t* _468407377984486561206 = bigint(-16072393);
		bigint_t* _2374064712033625737304 = bigint_mul(_1171604912077946050462, _468407377984486561206 );
		bigint_to_string(_2374064712033625737304, 10, buffer);
		printf("trying ");
		puts("mul(216, -16072393)");
		puts(buffer);
		assert(strcmp(buffer, "-3471636888") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1171604912077946050462);
		bigint_free(_468407377984486561206);
		bigint_free(_2374064712033625737304);

	

		bigint_t* _1800052372072778465714;
		bigint_t* _3863032778014192181723 = bigint(216);
		bigint_t* _2774838661930076917497 = bigint(-16072393);
		bigint_t* _3009205972490085492728 = bigint_add(_3863032778014192181723, _2774838661930076917497 );
		bigint_to_string(_3009205972490085492728, 10, buffer);
		printf("trying ");
		puts("add(216, -16072393)");
		puts(buffer);
		assert(strcmp(buffer, "-16072177") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3863032778014192181723);
		bigint_free(_2774838661930076917497);
		bigint_free(_3009205972490085492728);

	

		bigint_t* _3537759571564494560881;
		bigint_t* _3057817434138924576289 = bigint(216);
		bigint_t* _175260507869658419504 = bigint(-16072393);
		bigint_t* _4202622580420170182512 = bigint_sub(_3057817434138924576289, _175260507869658419504 );
		bigint_to_string(_4202622580420170182512, 10, buffer);
		printf("trying ");
		puts("sub(216, -16072393)");
		puts(buffer);
		assert(strcmp(buffer, "16072609") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3057817434138924576289);
		bigint_free(_175260507869658419504);
		bigint_free(_4202622580420170182512);

	

		bigint_t* _3927152031693518667093;
		bigint_t* _4197441715340446130668 = bigint(115);
		bigint_t* _3488775106329694862625 = bigint(6742695);
		bigint_t* _634515660452382571958 = bigint_mul(_4197441715340446130668, _3488775106329694862625 );
		bigint_to_string(_634515660452382571958, 10, buffer);
		printf("trying ");
		puts("mul(115, 6742695)");
		puts(buffer);
		assert(strcmp(buffer, "775409925") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4197441715340446130668);
		bigint_free(_3488775106329694862625);
		bigint_free(_634515660452382571958);

	

		bigint_t* _3520050937764899252074;
		bigint_t* _116837858476366353699 = bigint(115);
		bigint_t* _3370443587174181450024 = bigint(6742695);
		bigint_t* _4407000206545718288292 = bigint_add(_116837858476366353699, _3370443587174181450024 );
		bigint_to_string(_4407000206545718288292, 10, buffer);
		printf("trying ");
		puts("add(115, 6742695)");
		puts(buffer);
		assert(strcmp(buffer, "6742810") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_116837858476366353699);
		bigint_free(_3370443587174181450024);
		bigint_free(_4407000206545718288292);

	

		bigint_t* _494825146746398347605;
		bigint_t* _4018239972654920169729 = bigint(115);
		bigint_t* _1826263091263314124163 = bigint(6742695);
		bigint_t* _481081896164499708095 = bigint_sub(_4018239972654920169729, _1826263091263314124163 );
		bigint_to_string(_481081896164499708095, 10, buffer);
		printf("trying ");
		puts("sub(115, 6742695)");
		puts(buffer);
		assert(strcmp(buffer, "-6742580") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4018239972654920169729);
		bigint_free(_1826263091263314124163);
		bigint_free(_481081896164499708095);

	

		bigint_t* _4267297158496028142060;
		bigint_t* _4210933020405538473513 = bigint(130);
		bigint_t* _1655823857568867455704 = bigint(-9208881);
		bigint_t* _143709410696541278071 = bigint_mul(_4210933020405538473513, _1655823857568867455704 );
		bigint_to_string(_143709410696541278071, 10, buffer);
		printf("trying ");
		puts("mul(130, -9208881)");
		puts(buffer);
		assert(strcmp(buffer, "-1197154530") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4210933020405538473513);
		bigint_free(_1655823857568867455704);
		bigint_free(_143709410696541278071);

	

		bigint_t* _2176856331801347022504;
		bigint_t* _1954684254697900526343 = bigint(130);
		bigint_t* _174773687013119762820 = bigint(-9208881);
		bigint_t* _1954672250271395592324 = bigint_add(_1954684254697900526343, _174773687013119762820 );
		bigint_to_string(_1954672250271395592324, 10, buffer);
		printf("trying ");
		puts("add(130, -9208881)");
		puts(buffer);
		assert(strcmp(buffer, "-9208751") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1954684254697900526343);
		bigint_free(_174773687013119762820);
		bigint_free(_1954672250271395592324);

	

		bigint_t* _4607237240150763634532;
		bigint_t* _529395864759137478218 = bigint(130);
		bigint_t* _3522184180277429104373 = bigint(-9208881);
		bigint_t* _2462530413522322153953 = bigint_sub(_529395864759137478218, _3522184180277429104373 );
		bigint_to_string(_2462530413522322153953, 10, buffer);
		printf("trying ");
		puts("sub(130, -9208881)");
		puts(buffer);
		assert(strcmp(buffer, "9209011") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_529395864759137478218);
		bigint_free(_3522184180277429104373);
		bigint_free(_2462530413522322153953);

	

		bigint_t* _3573253524807895747489;
		bigint_t* _649603337666742816232 = bigint(71);
		bigint_t* _3927694559122573537310 = bigint(-1329402);
		bigint_t* _4288324694568173719405 = bigint_mul(_649603337666742816232, _3927694559122573537310 );
		bigint_to_string(_4288324694568173719405, 10, buffer);
		printf("trying ");
		puts("mul(71, -1329402)");
		puts(buffer);
		assert(strcmp(buffer, "-94387542") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_649603337666742816232);
		bigint_free(_3927694559122573537310);
		bigint_free(_4288324694568173719405);

	

		bigint_t* _2713774410204262112936;
		bigint_t* _4715785031570868373373 = bigint(71);
		bigint_t* _3168075510486342788741 = bigint(-1329402);
		bigint_t* _539017599066539666789 = bigint_add(_4715785031570868373373, _3168075510486342788741 );
		bigint_to_string(_539017599066539666789, 10, buffer);
		printf("trying ");
		puts("add(71, -1329402)");
		puts(buffer);
		assert(strcmp(buffer, "-1329331") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4715785031570868373373);
		bigint_free(_3168075510486342788741);
		bigint_free(_539017599066539666789);

	

		bigint_t* _1210704394401728229285;
		bigint_t* _4646753588521251892120 = bigint(71);
		bigint_t* _3383926927386578371714 = bigint(-1329402);
		bigint_t* _2543975262932053594572 = bigint_sub(_4646753588521251892120, _3383926927386578371714 );
		bigint_to_string(_2543975262932053594572, 10, buffer);
		printf("trying ");
		puts("sub(71, -1329402)");
		puts(buffer);
		assert(strcmp(buffer, "1329473") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4646753588521251892120);
		bigint_free(_3383926927386578371714);
		bigint_free(_2543975262932053594572);

	

		bigint_t* _4578124979111055268795;
		bigint_t* _3396506374338475722746 = bigint(-55);
		bigint_t* _3541860462736927595592 = bigint(6304233);
		bigint_t* _2876756157930044260720 = bigint_mul(_3396506374338475722746, _3541860462736927595592 );
		bigint_to_string(_2876756157930044260720, 10, buffer);
		printf("trying ");
		puts("mul(-55, 6304233)");
		puts(buffer);
		assert(strcmp(buffer, "-346732815") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3396506374338475722746);
		bigint_free(_3541860462736927595592);
		bigint_free(_2876756157930044260720);

	

		bigint_t* _4475794692755733500115;
		bigint_t* _407004972660802453386 = bigint(-55);
		bigint_t* _2275017107202772860631 = bigint(6304233);
		bigint_t* _2707110854061413672993 = bigint_add(_407004972660802453386, _2275017107202772860631 );
		bigint_to_string(_2707110854061413672993, 10, buffer);
		printf("trying ");
		puts("add(-55, 6304233)");
		puts(buffer);
		assert(strcmp(buffer, "6304178") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_407004972660802453386);
		bigint_free(_2275017107202772860631);
		bigint_free(_2707110854061413672993);

	

		bigint_t* _499852221443211920165;
		bigint_t* _4644900744108340821546 = bigint(-55);
		bigint_t* _87763392794302389409 = bigint(6304233);
		bigint_t* _1507419653453700018018 = bigint_sub(_4644900744108340821546, _87763392794302389409 );
		bigint_to_string(_1507419653453700018018, 10, buffer);
		printf("trying ");
		puts("sub(-55, 6304233)");
		puts(buffer);
		assert(strcmp(buffer, "-6304288") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4644900744108340821546);
		bigint_free(_87763392794302389409);
		bigint_free(_1507419653453700018018);

	

		bigint_t* _4169434511834568650061;
		bigint_t* _2834370513486373322134 = bigint(-167);
		bigint_t* _4223947997541297373133 = bigint(5867843);
		bigint_t* _1361189992243082126759 = bigint_mul(_2834370513486373322134, _4223947997541297373133 );
		bigint_to_string(_1361189992243082126759, 10, buffer);
		printf("trying ");
		puts("mul(-167, 5867843)");
		puts(buffer);
		assert(strcmp(buffer, "-979929781") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2834370513486373322134);
		bigint_free(_4223947997541297373133);
		bigint_free(_1361189992243082126759);

	

		bigint_t* _2910152297904660377518;
		bigint_t* _1043341766337783730158 = bigint(-167);
		bigint_t* _2181275480978547111665 = bigint(5867843);
		bigint_t* _4714375399812936702885 = bigint_add(_1043341766337783730158, _2181275480978547111665 );
		bigint_to_string(_4714375399812936702885, 10, buffer);
		printf("trying ");
		puts("add(-167, 5867843)");
		puts(buffer);
		assert(strcmp(buffer, "5867676") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1043341766337783730158);
		bigint_free(_2181275480978547111665);
		bigint_free(_4714375399812936702885);

	

		bigint_t* _3598433579116446171327;
		bigint_t* _2697587061474219802803 = bigint(-167);
		bigint_t* _3634107425226926260647 = bigint(5867843);
		bigint_t* _305016389564607622807 = bigint_sub(_2697587061474219802803, _3634107425226926260647 );
		bigint_to_string(_305016389564607622807, 10, buffer);
		printf("trying ");
		puts("sub(-167, 5867843)");
		puts(buffer);
		assert(strcmp(buffer, "-5868010") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2697587061474219802803);
		bigint_free(_3634107425226926260647);
		bigint_free(_305016389564607622807);

	

		bigint_t* _3522229990476824896839;
		bigint_t* _1855223514033208075987 = bigint(-32);
		bigint_t* _264365843710140945211 = bigint(-13082537);
		bigint_t* _2863773699711528144736 = bigint_mul(_1855223514033208075987, _264365843710140945211 );
		bigint_to_string(_2863773699711528144736, 10, buffer);
		printf("trying ");
		puts("mul(-32, -13082537)");
		puts(buffer);
		assert(strcmp(buffer, "418641184") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1855223514033208075987);
		bigint_free(_264365843710140945211);
		bigint_free(_2863773699711528144736);

	

		bigint_t* _387766124191339953948;
		bigint_t* _3021351576736529959582 = bigint(-32);
		bigint_t* _4143849501419242112130 = bigint(-13082537);
		bigint_t* _1841186665484888486349 = bigint_add(_3021351576736529959582, _4143849501419242112130 );
		bigint_to_string(_1841186665484888486349, 10, buffer);
		printf("trying ");
		puts("add(-32, -13082537)");
		puts(buffer);
		assert(strcmp(buffer, "-13082569") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3021351576736529959582);
		bigint_free(_4143849501419242112130);
		bigint_free(_1841186665484888486349);

	

		bigint_t* _3176716507634044934641;
		bigint_t* _3990290308515955212148 = bigint(-32);
		bigint_t* _4250876771559793641404 = bigint(-13082537);
		bigint_t* _3336701325666150995605 = bigint_sub(_3990290308515955212148, _4250876771559793641404 );
		bigint_to_string(_3336701325666150995605, 10, buffer);
		printf("trying ");
		puts("sub(-32, -13082537)");
		puts(buffer);
		assert(strcmp(buffer, "13082505") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3990290308515955212148);
		bigint_free(_4250876771559793641404);
		bigint_free(_3336701325666150995605);

	

		bigint_t* _646888776442246480963;
		bigint_t* _4611900781301981580867 = bigint(-226);
		bigint_t* _317719192668969430283 = bigint(8466813);
		bigint_t* _4339460584297888111846 = bigint_mul(_4611900781301981580867, _317719192668969430283 );
		bigint_to_string(_4339460584297888111846, 10, buffer);
		printf("trying ");
		puts("mul(-226, 8466813)");
		puts(buffer);
		assert(strcmp(buffer, "-1913499738") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4611900781301981580867);
		bigint_free(_317719192668969430283);
		bigint_free(_4339460584297888111846);

	

		bigint_t* _4212850058990167562960;
		bigint_t* _497952895521754741232 = bigint(-226);
		bigint_t* _2105173329668234402553 = bigint(8466813);
		bigint_t* _3095976150911685765776 = bigint_add(_497952895521754741232, _2105173329668234402553 );
		bigint_to_string(_3095976150911685765776, 10, buffer);
		printf("trying ");
		puts("add(-226, 8466813)");
		puts(buffer);
		assert(strcmp(buffer, "8466587") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_497952895521754741232);
		bigint_free(_2105173329668234402553);
		bigint_free(_3095976150911685765776);

	

		bigint_t* _441735270287117792775;
		bigint_t* _4444573724116297710647 = bigint(-226);
		bigint_t* _959814136568714996252 = bigint(8466813);
		bigint_t* _2229559443209172476680 = bigint_sub(_4444573724116297710647, _959814136568714996252 );
		bigint_to_string(_2229559443209172476680, 10, buffer);
		printf("trying ");
		puts("sub(-226, 8466813)");
		puts(buffer);
		assert(strcmp(buffer, "-8467039") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4444573724116297710647);
		bigint_free(_959814136568714996252);
		bigint_free(_2229559443209172476680);

	

		bigint_t* _3435659552017889020679;
		bigint_t* _1806031182761729732205 = bigint(170);
		bigint_t* _1240373417284843996857 = bigint(-6529018);
		bigint_t* _662728396900650989709 = bigint_mul(_1806031182761729732205, _1240373417284843996857 );
		bigint_to_string(_662728396900650989709, 10, buffer);
		printf("trying ");
		puts("mul(170, -6529018)");
		puts(buffer);
		assert(strcmp(buffer, "-1109933060") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1806031182761729732205);
		bigint_free(_1240373417284843996857);
		bigint_free(_662728396900650989709);

	

		bigint_t* _4190883074281838277550;
		bigint_t* _1420361206492088747521 = bigint(170);
		bigint_t* _2690955884958932993629 = bigint(-6529018);
		bigint_t* _3273626593488073600364 = bigint_add(_1420361206492088747521, _2690955884958932993629 );
		bigint_to_string(_3273626593488073600364, 10, buffer);
		printf("trying ");
		puts("add(170, -6529018)");
		puts(buffer);
		assert(strcmp(buffer, "-6528848") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1420361206492088747521);
		bigint_free(_2690955884958932993629);
		bigint_free(_3273626593488073600364);

	

		bigint_t* _443890514658676637833;
		bigint_t* _707707729664833129767 = bigint(170);
		bigint_t* _2297800332681761529749 = bigint(-6529018);
		bigint_t* _432823297686333217710 = bigint_sub(_707707729664833129767, _2297800332681761529749 );
		bigint_to_string(_432823297686333217710, 10, buffer);
		printf("trying ");
		puts("sub(170, -6529018)");
		puts(buffer);
		assert(strcmp(buffer, "6529188") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_707707729664833129767);
		bigint_free(_2297800332681761529749);
		bigint_free(_432823297686333217710);

	

		bigint_t* _3595564014574871194758;
		bigint_t* _2822617735806562362810 = bigint(53);
		bigint_t* _18337325173833500872 = bigint(91880);
		bigint_t* _1226730008515216725956 = bigint_mul(_2822617735806562362810, _18337325173833500872 );
		bigint_to_string(_1226730008515216725956, 10, buffer);
		printf("trying ");
		puts("mul(53, 91880)");
		puts(buffer);
		assert(strcmp(buffer, "4869640") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2822617735806562362810);
		bigint_free(_18337325173833500872);
		bigint_free(_1226730008515216725956);

	

		bigint_t* _1521378402291121949945;
		bigint_t* _3416684163391882957504 = bigint(53);
		bigint_t* _4356767425568979227942 = bigint(91880);
		bigint_t* _3791758957539293654811 = bigint_add(_3416684163391882957504, _4356767425568979227942 );
		bigint_to_string(_3791758957539293654811, 10, buffer);
		printf("trying ");
		puts("add(53, 91880)");
		puts(buffer);
		assert(strcmp(buffer, "91933") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3416684163391882957504);
		bigint_free(_4356767425568979227942);
		bigint_free(_3791758957539293654811);

	

		bigint_t* _2432040106306178464449;
		bigint_t* _1434885560938805958569 = bigint(53);
		bigint_t* _2606382735578314714198 = bigint(91880);
		bigint_t* _4071326703602954938704 = bigint_sub(_1434885560938805958569, _2606382735578314714198 );
		bigint_to_string(_4071326703602954938704, 10, buffer);
		printf("trying ");
		puts("sub(53, 91880)");
		puts(buffer);
		assert(strcmp(buffer, "-91827") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1434885560938805958569);
		bigint_free(_2606382735578314714198);
		bigint_free(_4071326703602954938704);

	

		bigint_t* _3196857180343383640559;
		bigint_t* _1161330486943207531054 = bigint(-32);
		bigint_t* _801432490944172576331 = bigint(16157488);
		bigint_t* _4721409952342699344082 = bigint_mul(_1161330486943207531054, _801432490944172576331 );
		bigint_to_string(_4721409952342699344082, 10, buffer);
		printf("trying ");
		puts("mul(-32, 16157488)");
		puts(buffer);
		assert(strcmp(buffer, "-517039616") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1161330486943207531054);
		bigint_free(_801432490944172576331);
		bigint_free(_4721409952342699344082);

	

		bigint_t* _1261148889933305077771;
		bigint_t* _1679004263293612590075 = bigint(-32);
		bigint_t* _119873307845566838858 = bigint(16157488);
		bigint_t* _499296841809222412200 = bigint_add(_1679004263293612590075, _119873307845566838858 );
		bigint_to_string(_499296841809222412200, 10, buffer);
		printf("trying ");
		puts("add(-32, 16157488)");
		puts(buffer);
		assert(strcmp(buffer, "16157456") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1679004263293612590075);
		bigint_free(_119873307845566838858);
		bigint_free(_499296841809222412200);

	

		bigint_t* _2735819052664910761192;
		bigint_t* _664373565044622518819 = bigint(-32);
		bigint_t* _1655869927882323903687 = bigint(16157488);
		bigint_t* _683622701051014383250 = bigint_sub(_664373565044622518819, _1655869927882323903687 );
		bigint_to_string(_683622701051014383250, 10, buffer);
		printf("trying ");
		puts("sub(-32, 16157488)");
		puts(buffer);
		assert(strcmp(buffer, "-16157520") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_664373565044622518819);
		bigint_free(_1655869927882323903687);
		bigint_free(_683622701051014383250);

	

		bigint_t* _790369340529234514654;
		bigint_t* _1110376214899684039673 = bigint(-250);
		bigint_t* _315960704431038214880 = bigint(-11463615);
		bigint_t* _1342536445913435955356 = bigint_mul(_1110376214899684039673, _315960704431038214880 );
		bigint_to_string(_1342536445913435955356, 10, buffer);
		printf("trying ");
		puts("mul(-250, -11463615)");
		puts(buffer);
		assert(strcmp(buffer, "2865903750") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1110376214899684039673);
		bigint_free(_315960704431038214880);
		bigint_free(_1342536445913435955356);

	

		bigint_t* _4126388123427209382499;
		bigint_t* _351192475545702368480 = bigint(-250);
		bigint_t* _2383694754692456402415 = bigint(-11463615);
		bigint_t* _1810293052475015870779 = bigint_add(_351192475545702368480, _2383694754692456402415 );
		bigint_to_string(_1810293052475015870779, 10, buffer);
		printf("trying ");
		puts("add(-250, -11463615)");
		puts(buffer);
		assert(strcmp(buffer, "-11463865") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_351192475545702368480);
		bigint_free(_2383694754692456402415);
		bigint_free(_1810293052475015870779);

	

		bigint_t* _46973677109680500817;
		bigint_t* _3531006469789075964510 = bigint(-250);
		bigint_t* _4317833031214746502684 = bigint(-11463615);
		bigint_t* _2311585895882327668541 = bigint_sub(_3531006469789075964510, _4317833031214746502684 );
		bigint_to_string(_2311585895882327668541, 10, buffer);
		printf("trying ");
		puts("sub(-250, -11463615)");
		puts(buffer);
		assert(strcmp(buffer, "11463365") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3531006469789075964510);
		bigint_free(_4317833031214746502684);
		bigint_free(_2311585895882327668541);

	

		bigint_t* _1968403293977751461354;
		bigint_t* _4476310523977841344257 = bigint(-87);
		bigint_t* _1489456028898228582604 = bigint(10295735);
		bigint_t* _1162566267871174087518 = bigint_mul(_4476310523977841344257, _1489456028898228582604 );
		bigint_to_string(_1162566267871174087518, 10, buffer);
		printf("trying ");
		puts("mul(-87, 10295735)");
		puts(buffer);
		assert(strcmp(buffer, "-895728945") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4476310523977841344257);
		bigint_free(_1489456028898228582604);
		bigint_free(_1162566267871174087518);

	

		bigint_t* _1973833312987701104478;
		bigint_t* _3597534425993048300169 = bigint(-87);
		bigint_t* _3293069458485671656802 = bigint(10295735);
		bigint_t* _4240548649036811411381 = bigint_add(_3597534425993048300169, _3293069458485671656802 );
		bigint_to_string(_4240548649036811411381, 10, buffer);
		printf("trying ");
		puts("add(-87, 10295735)");
		puts(buffer);
		assert(strcmp(buffer, "10295648") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3597534425993048300169);
		bigint_free(_3293069458485671656802);
		bigint_free(_4240548649036811411381);

	

		bigint_t* _2870908763592981474980;
		bigint_t* _285770854818266199369 = bigint(-87);
		bigint_t* _3687306271617402392644 = bigint(10295735);
		bigint_t* _1915512565894953347846 = bigint_sub(_285770854818266199369, _3687306271617402392644 );
		bigint_to_string(_1915512565894953347846, 10, buffer);
		printf("trying ");
		puts("sub(-87, 10295735)");
		puts(buffer);
		assert(strcmp(buffer, "-10295822") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_285770854818266199369);
		bigint_free(_3687306271617402392644);
		bigint_free(_1915512565894953347846);

	

		bigint_t* _440270690345562640993;
		bigint_t* _4291947051209819348243 = bigint(-213);
		bigint_t* _4642251319806201131988 = bigint(-4002111);
		bigint_t* _4318854970228887368169 = bigint_mul(_4291947051209819348243, _4642251319806201131988 );
		bigint_to_string(_4318854970228887368169, 10, buffer);
		printf("trying ");
		puts("mul(-213, -4002111)");
		puts(buffer);
		assert(strcmp(buffer, "852449643") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4291947051209819348243);
		bigint_free(_4642251319806201131988);
		bigint_free(_4318854970228887368169);

	

		bigint_t* _4445740398235674002741;
		bigint_t* _2921612016961098220843 = bigint(-213);
		bigint_t* _3402603956571947339890 = bigint(-4002111);
		bigint_t* _3352216717997455025652 = bigint_add(_2921612016961098220843, _3402603956571947339890 );
		bigint_to_string(_3352216717997455025652, 10, buffer);
		printf("trying ");
		puts("add(-213, -4002111)");
		puts(buffer);
		assert(strcmp(buffer, "-4002324") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2921612016961098220843);
		bigint_free(_3402603956571947339890);
		bigint_free(_3352216717997455025652);

	

		bigint_t* _850426475114512880013;
		bigint_t* _4236842749680473262683 = bigint(-213);
		bigint_t* _1828335450779624071202 = bigint(-4002111);
		bigint_t* _4612879049511136952578 = bigint_sub(_4236842749680473262683, _1828335450779624071202 );
		bigint_to_string(_4612879049511136952578, 10, buffer);
		printf("trying ");
		puts("sub(-213, -4002111)");
		puts(buffer);
		assert(strcmp(buffer, "4001898") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4236842749680473262683);
		bigint_free(_1828335450779624071202);
		bigint_free(_4612879049511136952578);

	

		bigint_t* _2205769117632334622213;
		bigint_t* _1118658007269241748162 = bigint(-60);
		bigint_t* _2157672464353066240567 = bigint(-10426166);
		bigint_t* _3699564361189668902927 = bigint_mul(_1118658007269241748162, _2157672464353066240567 );
		bigint_to_string(_3699564361189668902927, 10, buffer);
		printf("trying ");
		puts("mul(-60, -10426166)");
		puts(buffer);
		assert(strcmp(buffer, "625569960") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1118658007269241748162);
		bigint_free(_2157672464353066240567);
		bigint_free(_3699564361189668902927);

	

		bigint_t* _2730532374145215723607;
		bigint_t* _4037520032725828321981 = bigint(-60);
		bigint_t* _2831695103474062741062 = bigint(-10426166);
		bigint_t* _2695535709795942473862 = bigint_add(_4037520032725828321981, _2831695103474062741062 );
		bigint_to_string(_2695535709795942473862, 10, buffer);
		printf("trying ");
		puts("add(-60, -10426166)");
		puts(buffer);
		assert(strcmp(buffer, "-10426226") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4037520032725828321981);
		bigint_free(_2831695103474062741062);
		bigint_free(_2695535709795942473862);

	

		bigint_t* _205035020116665337608;
		bigint_t* _1639641229953585053911 = bigint(-60);
		bigint_t* _420352124917615409936 = bigint(-10426166);
		bigint_t* _2546864245397371923742 = bigint_sub(_1639641229953585053911, _420352124917615409936 );
		bigint_to_string(_2546864245397371923742, 10, buffer);
		printf("trying ");
		puts("sub(-60, -10426166)");
		puts(buffer);
		assert(strcmp(buffer, "10426106") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1639641229953585053911);
		bigint_free(_420352124917615409936);
		bigint_free(_2546864245397371923742);

	

		bigint_t* _3765821048575695977494;
		bigint_t* _3009530026558011275477 = bigint(-210);
		bigint_t* _782239785620518070446 = bigint(524524);
		bigint_t* _1756979297955285272709 = bigint_mul(_3009530026558011275477, _782239785620518070446 );
		bigint_to_string(_1756979297955285272709, 10, buffer);
		printf("trying ");
		puts("mul(-210, 524524)");
		puts(buffer);
		assert(strcmp(buffer, "-110150040") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3009530026558011275477);
		bigint_free(_782239785620518070446);
		bigint_free(_1756979297955285272709);

	

		bigint_t* _4362821592370258071031;
		bigint_t* _1418986721078277554717 = bigint(-210);
		bigint_t* _725064022447539921481 = bigint(524524);
		bigint_t* _4326055105097285247220 = bigint_add(_1418986721078277554717, _725064022447539921481 );
		bigint_to_string(_4326055105097285247220, 10, buffer);
		printf("trying ");
		puts("add(-210, 524524)");
		puts(buffer);
		assert(strcmp(buffer, "524314") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1418986721078277554717);
		bigint_free(_725064022447539921481);
		bigint_free(_4326055105097285247220);

	

		bigint_t* _1184263820598400953862;
		bigint_t* _4311554448150508970897 = bigint(-210);
		bigint_t* _855863402256788823580 = bigint(524524);
		bigint_t* _3183458587158874438828 = bigint_sub(_4311554448150508970897, _855863402256788823580 );
		bigint_to_string(_3183458587158874438828, 10, buffer);
		printf("trying ");
		puts("sub(-210, 524524)");
		puts(buffer);
		assert(strcmp(buffer, "-524734") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4311554448150508970897);
		bigint_free(_855863402256788823580);
		bigint_free(_3183458587158874438828);

	

		bigint_t* _1831335472572110280058;
		bigint_t* _1137609102528140047606 = bigint(-212);
		bigint_t* _1206397765945135149920 = bigint(-5626421);
		bigint_t* _535036013794124443975 = bigint_mul(_1137609102528140047606, _1206397765945135149920 );
		bigint_to_string(_535036013794124443975, 10, buffer);
		printf("trying ");
		puts("mul(-212, -5626421)");
		puts(buffer);
		assert(strcmp(buffer, "1192801252") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1137609102528140047606);
		bigint_free(_1206397765945135149920);
		bigint_free(_535036013794124443975);

	

		bigint_t* _4309901169773091702107;
		bigint_t* _3132076266244177580619 = bigint(-212);
		bigint_t* _4088600681033836684640 = bigint(-5626421);
		bigint_t* _3525203050989816916491 = bigint_add(_3132076266244177580619, _4088600681033836684640 );
		bigint_to_string(_3525203050989816916491, 10, buffer);
		printf("trying ");
		puts("add(-212, -5626421)");
		puts(buffer);
		assert(strcmp(buffer, "-5626633") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3132076266244177580619);
		bigint_free(_4088600681033836684640);
		bigint_free(_3525203050989816916491);

	

		bigint_t* _51935190555018296304;
		bigint_t* _1842588478025823228051 = bigint(-212);
		bigint_t* _1160174340645415038523 = bigint(-5626421);
		bigint_t* _1448440615961225866550 = bigint_sub(_1842588478025823228051, _1160174340645415038523 );
		bigint_to_string(_1448440615961225866550, 10, buffer);
		printf("trying ");
		puts("sub(-212, -5626421)");
		puts(buffer);
		assert(strcmp(buffer, "5626209") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1842588478025823228051);
		bigint_free(_1160174340645415038523);
		bigint_free(_1448440615961225866550);

	

		bigint_t* _1710615475602037448307;
		bigint_t* _2333994012263929319169 = bigint(144);
		bigint_t* _616720603957928984139 = bigint(-16727056);
		bigint_t* _388020779602331369041 = bigint_mul(_2333994012263929319169, _616720603957928984139 );
		bigint_to_string(_388020779602331369041, 10, buffer);
		printf("trying ");
		puts("mul(144, -16727056)");
		puts(buffer);
		assert(strcmp(buffer, "-2408696064") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2333994012263929319169);
		bigint_free(_616720603957928984139);
		bigint_free(_388020779602331369041);

	

		bigint_t* _1513170049431664873702;
		bigint_t* _405475681529324772872 = bigint(144);
		bigint_t* _1700824190922540919442 = bigint(-16727056);
		bigint_t* _3540197168371550513868 = bigint_add(_405475681529324772872, _1700824190922540919442 );
		bigint_to_string(_3540197168371550513868, 10, buffer);
		printf("trying ");
		puts("add(144, -16727056)");
		puts(buffer);
		assert(strcmp(buffer, "-16726912") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_405475681529324772872);
		bigint_free(_1700824190922540919442);
		bigint_free(_3540197168371550513868);

	

		bigint_t* _192885784716803453521;
		bigint_t* _3634150597720385784140 = bigint(144);
		bigint_t* _3257941440550716976203 = bigint(-16727056);
		bigint_t* _1705241095808492454842 = bigint_sub(_3634150597720385784140, _3257941440550716976203 );
		bigint_to_string(_1705241095808492454842, 10, buffer);
		printf("trying ");
		puts("sub(144, -16727056)");
		puts(buffer);
		assert(strcmp(buffer, "16727200") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3634150597720385784140);
		bigint_free(_3257941440550716976203);
		bigint_free(_1705241095808492454842);

	

		bigint_t* _3794827812462606381221;
		bigint_t* _2251648899496516672986 = bigint(21);
		bigint_t* _3311856436245434921509 = bigint(9310688);
		bigint_t* _2682018391438188657678 = bigint_mul(_2251648899496516672986, _3311856436245434921509 );
		bigint_to_string(_2682018391438188657678, 10, buffer);
		printf("trying ");
		puts("mul(21, 9310688)");
		puts(buffer);
		assert(strcmp(buffer, "195524448") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2251648899496516672986);
		bigint_free(_3311856436245434921509);
		bigint_free(_2682018391438188657678);

	

		bigint_t* _1322923639385694737079;
		bigint_t* _4163752703339136970151 = bigint(21);
		bigint_t* _2205211354326309660237 = bigint(9310688);
		bigint_t* _2715121532908639820062 = bigint_add(_4163752703339136970151, _2205211354326309660237 );
		bigint_to_string(_2715121532908639820062, 10, buffer);
		printf("trying ");
		puts("add(21, 9310688)");
		puts(buffer);
		assert(strcmp(buffer, "9310709") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4163752703339136970151);
		bigint_free(_2205211354326309660237);
		bigint_free(_2715121532908639820062);

	

		bigint_t* _3429480181858814638752;
		bigint_t* _1346825696507596872273 = bigint(21);
		bigint_t* _890784312949739084362 = bigint(9310688);
		bigint_t* _3259548225832403904087 = bigint_sub(_1346825696507596872273, _890784312949739084362 );
		bigint_to_string(_3259548225832403904087, 10, buffer);
		printf("trying ");
		puts("sub(21, 9310688)");
		puts(buffer);
		assert(strcmp(buffer, "-9310667") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1346825696507596872273);
		bigint_free(_890784312949739084362);
		bigint_free(_3259548225832403904087);

	

		bigint_t* _975857450876934951199;
		bigint_t* _1770836427475983097109 = bigint(-61);
		bigint_t* _1406562368962207035138 = bigint(4989529);
		bigint_t* _1131536698109745915956 = bigint_mul(_1770836427475983097109, _1406562368962207035138 );
		bigint_to_string(_1131536698109745915956, 10, buffer);
		printf("trying ");
		puts("mul(-61, 4989529)");
		puts(buffer);
		assert(strcmp(buffer, "-304361269") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1770836427475983097109);
		bigint_free(_1406562368962207035138);
		bigint_free(_1131536698109745915956);

	

		bigint_t* _302691233812084155902;
		bigint_t* _882473020855578643327 = bigint(-61);
		bigint_t* _2688709949430624086717 = bigint(4989529);
		bigint_t* _3350566245313324746750 = bigint_add(_882473020855578643327, _2688709949430624086717 );
		bigint_to_string(_3350566245313324746750, 10, buffer);
		printf("trying ");
		puts("add(-61, 4989529)");
		puts(buffer);
		assert(strcmp(buffer, "4989468") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_882473020855578643327);
		bigint_free(_2688709949430624086717);
		bigint_free(_3350566245313324746750);

	

		bigint_t* _1301971021487001894661;
		bigint_t* _1577046704092694883632 = bigint(-61);
		bigint_t* _4098543659678098791251 = bigint(4989529);
		bigint_t* _1507892206563758014138 = bigint_sub(_1577046704092694883632, _4098543659678098791251 );
		bigint_to_string(_1507892206563758014138, 10, buffer);
		printf("trying ");
		puts("sub(-61, 4989529)");
		puts(buffer);
		assert(strcmp(buffer, "-4989590") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1577046704092694883632);
		bigint_free(_4098543659678098791251);
		bigint_free(_1507892206563758014138);

	

		bigint_t* _2135476528081332101029;
		bigint_t* _2597575345566842964787 = bigint(-196);
		bigint_t* _394788811756568607198 = bigint(15766856);
		bigint_t* _2337569112717635216512 = bigint_mul(_2597575345566842964787, _394788811756568607198 );
		bigint_to_string(_2337569112717635216512, 10, buffer);
		printf("trying ");
		puts("mul(-196, 15766856)");
		puts(buffer);
		assert(strcmp(buffer, "-3090303776") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2597575345566842964787);
		bigint_free(_394788811756568607198);
		bigint_free(_2337569112717635216512);

	

		bigint_t* _4312834650383034408563;
		bigint_t* _3132790093205604148538 = bigint(-196);
		bigint_t* _4700626574012786395115 = bigint(15766856);
		bigint_t* _391784069668441923747 = bigint_add(_3132790093205604148538, _4700626574012786395115 );
		bigint_to_string(_391784069668441923747, 10, buffer);
		printf("trying ");
		puts("add(-196, 15766856)");
		puts(buffer);
		assert(strcmp(buffer, "15766660") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3132790093205604148538);
		bigint_free(_4700626574012786395115);
		bigint_free(_391784069668441923747);

	

		bigint_t* _1319499344083498333448;
		bigint_t* _471062110283391776276 = bigint(-196);
		bigint_t* _1514031397226293978136 = bigint(15766856);
		bigint_t* _2189979762056216914496 = bigint_sub(_471062110283391776276, _1514031397226293978136 );
		bigint_to_string(_2189979762056216914496, 10, buffer);
		printf("trying ");
		puts("sub(-196, 15766856)");
		puts(buffer);
		assert(strcmp(buffer, "-15767052") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_471062110283391776276);
		bigint_free(_1514031397226293978136);
		bigint_free(_2189979762056216914496);

	

		bigint_t* _3725588718424335178860;
		bigint_t* _2217453271566937115394 = bigint(-32);
		bigint_t* _2022559591380012152050 = bigint(14608832);
		bigint_t* _152188663401873689295 = bigint_mul(_2217453271566937115394, _2022559591380012152050 );
		bigint_to_string(_152188663401873689295, 10, buffer);
		printf("trying ");
		puts("mul(-32, 14608832)");
		puts(buffer);
		assert(strcmp(buffer, "-467482624") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2217453271566937115394);
		bigint_free(_2022559591380012152050);
		bigint_free(_152188663401873689295);

	

		bigint_t* _4000426841302753587377;
		bigint_t* _2939575199560666324064 = bigint(-32);
		bigint_t* _3937273626552835195904 = bigint(14608832);
		bigint_t* _1557548444309297405524 = bigint_add(_2939575199560666324064, _3937273626552835195904 );
		bigint_to_string(_1557548444309297405524, 10, buffer);
		printf("trying ");
		puts("add(-32, 14608832)");
		puts(buffer);
		assert(strcmp(buffer, "14608800") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2939575199560666324064);
		bigint_free(_3937273626552835195904);
		bigint_free(_1557548444309297405524);

	

		bigint_t* _1020945360793298762291;
		bigint_t* _447502205072483454292 = bigint(-32);
		bigint_t* _2573520720097076453979 = bigint(14608832);
		bigint_t* _3637176806716307786065 = bigint_sub(_447502205072483454292, _2573520720097076453979 );
		bigint_to_string(_3637176806716307786065, 10, buffer);
		printf("trying ");
		puts("sub(-32, 14608832)");
		puts(buffer);
		assert(strcmp(buffer, "-14608864") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_447502205072483454292);
		bigint_free(_2573520720097076453979);
		bigint_free(_3637176806716307786065);

	

		bigint_t* _2477670037779849024531;
		bigint_t* _1167144666064480474120 = bigint(-75);
		bigint_t* _77475376202368522527 = bigint(-14541037);
		bigint_t* _18852117723453813056 = bigint_mul(_1167144666064480474120, _77475376202368522527 );
		bigint_to_string(_18852117723453813056, 10, buffer);
		printf("trying ");
		puts("mul(-75, -14541037)");
		puts(buffer);
		assert(strcmp(buffer, "1090577775") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1167144666064480474120);
		bigint_free(_77475376202368522527);
		bigint_free(_18852117723453813056);

	

		bigint_t* _4558301503675719336410;
		bigint_t* _632089046487278437341 = bigint(-75);
		bigint_t* _4219838719441893707562 = bigint(-14541037);
		bigint_t* _1321864380248090726894 = bigint_add(_632089046487278437341, _4219838719441893707562 );
		bigint_to_string(_1321864380248090726894, 10, buffer);
		printf("trying ");
		puts("add(-75, -14541037)");
		puts(buffer);
		assert(strcmp(buffer, "-14541112") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_632089046487278437341);
		bigint_free(_4219838719441893707562);
		bigint_free(_1321864380248090726894);

	

		bigint_t* _1253562350935744612853;
		bigint_t* _66657954061963029781 = bigint(-75);
		bigint_t* _2738471809864486940922 = bigint(-14541037);
		bigint_t* _2744030397301175702015 = bigint_sub(_66657954061963029781, _2738471809864486940922 );
		bigint_to_string(_2744030397301175702015, 10, buffer);
		printf("trying ");
		puts("sub(-75, -14541037)");
		puts(buffer);
		assert(strcmp(buffer, "14540962") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_66657954061963029781);
		bigint_free(_2738471809864486940922);
		bigint_free(_2744030397301175702015);

	

		bigint_t* _4427222565064479242099;
		bigint_t* _2236191124271846613895 = bigint(251);
		bigint_t* _2718730966519066528441 = bigint(-15769716);
		bigint_t* _2381355101699976088390 = bigint_mul(_2236191124271846613895, _2718730966519066528441 );
		bigint_to_string(_2381355101699976088390, 10, buffer);
		printf("trying ");
		puts("mul(251, -15769716)");
		puts(buffer);
		assert(strcmp(buffer, "-3958198716") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2236191124271846613895);
		bigint_free(_2718730966519066528441);
		bigint_free(_2381355101699976088390);

	

		bigint_t* _3581754055446751380073;
		bigint_t* _1558300067581257943345 = bigint(251);
		bigint_t* _3418805995119944482031 = bigint(-15769716);
		bigint_t* _2569396731029568332808 = bigint_add(_1558300067581257943345, _3418805995119944482031 );
		bigint_to_string(_2569396731029568332808, 10, buffer);
		printf("trying ");
		puts("add(251, -15769716)");
		puts(buffer);
		assert(strcmp(buffer, "-15769465") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1558300067581257943345);
		bigint_free(_3418805995119944482031);
		bigint_free(_2569396731029568332808);

	

		bigint_t* _3375232464294762345716;
		bigint_t* _3310861882979882751559 = bigint(251);
		bigint_t* _611840953992241245230 = bigint(-15769716);
		bigint_t* _2910305796681934024054 = bigint_sub(_3310861882979882751559, _611840953992241245230 );
		bigint_to_string(_2910305796681934024054, 10, buffer);
		printf("trying ");
		puts("sub(251, -15769716)");
		puts(buffer);
		assert(strcmp(buffer, "15769967") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3310861882979882751559);
		bigint_free(_611840953992241245230);
		bigint_free(_2910305796681934024054);

	

		bigint_t* _1898313695571979013541;
		bigint_t* _2734332439012356225195 = bigint(-9);
		bigint_t* _693098756407015501781 = bigint(13408578);
		bigint_t* _2186810325682557718985 = bigint_mul(_2734332439012356225195, _693098756407015501781 );
		bigint_to_string(_2186810325682557718985, 10, buffer);
		printf("trying ");
		puts("mul(-9, 13408578)");
		puts(buffer);
		assert(strcmp(buffer, "-120677202") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2734332439012356225195);
		bigint_free(_693098756407015501781);
		bigint_free(_2186810325682557718985);

	

		bigint_t* _63167867362766941899;
		bigint_t* _935670414363829362798 = bigint(-9);
		bigint_t* _3304132449535907780770 = bigint(13408578);
		bigint_t* _1292064700604772286897 = bigint_add(_935670414363829362798, _3304132449535907780770 );
		bigint_to_string(_1292064700604772286897, 10, buffer);
		printf("trying ");
		puts("add(-9, 13408578)");
		puts(buffer);
		assert(strcmp(buffer, "13408569") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_935670414363829362798);
		bigint_free(_3304132449535907780770);
		bigint_free(_1292064700604772286897);

	

		bigint_t* _1710285034509314710125;
		bigint_t* _1247890183757120357814 = bigint(-9);
		bigint_t* _3468532404322688741194 = bigint(13408578);
		bigint_t* _3676130513074380639576 = bigint_sub(_1247890183757120357814, _3468532404322688741194 );
		bigint_to_string(_3676130513074380639576, 10, buffer);
		printf("trying ");
		puts("sub(-9, 13408578)");
		puts(buffer);
		assert(strcmp(buffer, "-13408587") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1247890183757120357814);
		bigint_free(_3468532404322688741194);
		bigint_free(_3676130513074380639576);

	

		bigint_t* _2247211720671873469895;
		bigint_t* _485532152445988229391 = bigint(-179);
		bigint_t* _1283590883933993732054 = bigint(9896067);
		bigint_t* _1702402750691355850073 = bigint_mul(_485532152445988229391, _1283590883933993732054 );
		bigint_to_string(_1702402750691355850073, 10, buffer);
		printf("trying ");
		puts("mul(-179, 9896067)");
		puts(buffer);
		assert(strcmp(buffer, "-1771395993") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_485532152445988229391);
		bigint_free(_1283590883933993732054);
		bigint_free(_1702402750691355850073);

	

		bigint_t* _3898976582804998051739;
		bigint_t* _648897134192290730144 = bigint(-179);
		bigint_t* _2187737119073066747613 = bigint(9896067);
		bigint_t* _4010919748511494054145 = bigint_add(_648897134192290730144, _2187737119073066747613 );
		bigint_to_string(_4010919748511494054145, 10, buffer);
		printf("trying ");
		puts("add(-179, 9896067)");
		puts(buffer);
		assert(strcmp(buffer, "9895888") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_648897134192290730144);
		bigint_free(_2187737119073066747613);
		bigint_free(_4010919748511494054145);

	

		bigint_t* _1480705245050355012468;
		bigint_t* _1762451688310284359693 = bigint(-179);
		bigint_t* _2267033302224904576287 = bigint(9896067);
		bigint_t* _2229552403425789898173 = bigint_sub(_1762451688310284359693, _2267033302224904576287 );
		bigint_to_string(_2229552403425789898173, 10, buffer);
		printf("trying ");
		puts("sub(-179, 9896067)");
		puts(buffer);
		assert(strcmp(buffer, "-9896246") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1762451688310284359693);
		bigint_free(_2267033302224904576287);
		bigint_free(_2229552403425789898173);

	

		bigint_t* _2048645471390930879524;
		bigint_t* _3166951968527697758502 = bigint(183);
		bigint_t* _575178422713225154189 = bigint(15182284);
		bigint_t* _4371507579520837198062 = bigint_mul(_3166951968527697758502, _575178422713225154189 );
		bigint_to_string(_4371507579520837198062, 10, buffer);
		printf("trying ");
		puts("mul(183, 15182284)");
		puts(buffer);
		assert(strcmp(buffer, "2778357972") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3166951968527697758502);
		bigint_free(_575178422713225154189);
		bigint_free(_4371507579520837198062);

	

		bigint_t* _3483023281636848301139;
		bigint_t* _1285612998272523250867 = bigint(183);
		bigint_t* _4458072733136684359701 = bigint(15182284);
		bigint_t* _4703683326968291770995 = bigint_add(_1285612998272523250867, _4458072733136684359701 );
		bigint_to_string(_4703683326968291770995, 10, buffer);
		printf("trying ");
		puts("add(183, 15182284)");
		puts(buffer);
		assert(strcmp(buffer, "15182467") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1285612998272523250867);
		bigint_free(_4458072733136684359701);
		bigint_free(_4703683326968291770995);

	

		bigint_t* _3184271573308762455582;
		bigint_t* _4143785312395949190374 = bigint(183);
		bigint_t* _3751964533002035268424 = bigint(15182284);
		bigint_t* _1494325718884485327235 = bigint_sub(_4143785312395949190374, _3751964533002035268424 );
		bigint_to_string(_1494325718884485327235, 10, buffer);
		printf("trying ");
		puts("sub(183, 15182284)");
		puts(buffer);
		assert(strcmp(buffer, "-15182101") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4143785312395949190374);
		bigint_free(_3751964533002035268424);
		bigint_free(_1494325718884485327235);

	

		bigint_t* _3132291157803074817280;
		bigint_t* _4322845279687729087112 = bigint(97);
		bigint_t* _2616400361384958204399 = bigint(2269612);
		bigint_t* _2700874278210303238314 = bigint_mul(_4322845279687729087112, _2616400361384958204399 );
		bigint_to_string(_2700874278210303238314, 10, buffer);
		printf("trying ");
		puts("mul(97, 2269612)");
		puts(buffer);
		assert(strcmp(buffer, "220152364") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4322845279687729087112);
		bigint_free(_2616400361384958204399);
		bigint_free(_2700874278210303238314);

	

		bigint_t* _3953717524655545016423;
		bigint_t* _468630065869098145528 = bigint(97);
		bigint_t* _3045108192412549794302 = bigint(2269612);
		bigint_t* _909512359170300775409 = bigint_add(_468630065869098145528, _3045108192412549794302 );
		bigint_to_string(_909512359170300775409, 10, buffer);
		printf("trying ");
		puts("add(97, 2269612)");
		puts(buffer);
		assert(strcmp(buffer, "2269709") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_468630065869098145528);
		bigint_free(_3045108192412549794302);
		bigint_free(_909512359170300775409);

	

		bigint_t* _1116509878368164554719;
		bigint_t* _3092542697928098195570 = bigint(97);
		bigint_t* _1572438702480294203066 = bigint(2269612);
		bigint_t* _1880476446444600806936 = bigint_sub(_3092542697928098195570, _1572438702480294203066 );
		bigint_to_string(_1880476446444600806936, 10, buffer);
		printf("trying ");
		puts("sub(97, 2269612)");
		puts(buffer);
		assert(strcmp(buffer, "-2269515") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3092542697928098195570);
		bigint_free(_1572438702480294203066);
		bigint_free(_1880476446444600806936);

	

		bigint_t* _3017649867635748657031;
		bigint_t* _1359623478743645681953 = bigint(188);
		bigint_t* _1064691643714565806653 = bigint(-15178437);
		bigint_t* _49275125213334146449 = bigint_mul(_1359623478743645681953, _1064691643714565806653 );
		bigint_to_string(_49275125213334146449, 10, buffer);
		printf("trying ");
		puts("mul(188, -15178437)");
		puts(buffer);
		assert(strcmp(buffer, "-2853546156") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1359623478743645681953);
		bigint_free(_1064691643714565806653);
		bigint_free(_49275125213334146449);

	

		bigint_t* _1403998778760235913716;
		bigint_t* _325760432129058380284 = bigint(188);
		bigint_t* _986562437822480675025 = bigint(-15178437);
		bigint_t* _145165686339708336991 = bigint_add(_325760432129058380284, _986562437822480675025 );
		bigint_to_string(_145165686339708336991, 10, buffer);
		printf("trying ");
		puts("add(188, -15178437)");
		puts(buffer);
		assert(strcmp(buffer, "-15178249") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_325760432129058380284);
		bigint_free(_986562437822480675025);
		bigint_free(_145165686339708336991);

	

		bigint_t* _1949784795491774569511;
		bigint_t* _1958527551939928882201 = bigint(188);
		bigint_t* _1331184728643949208872 = bigint(-15178437);
		bigint_t* _3914591223517827791020 = bigint_sub(_1958527551939928882201, _1331184728643949208872 );
		bigint_to_string(_3914591223517827791020, 10, buffer);
		printf("trying ");
		puts("sub(188, -15178437)");
		puts(buffer);
		assert(strcmp(buffer, "15178625") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1958527551939928882201);
		bigint_free(_1331184728643949208872);
		bigint_free(_3914591223517827791020);

	

		bigint_t* _4215318197629438072462;
		bigint_t* _2029819929755205012873 = bigint(-211);
		bigint_t* _4473069421133066064032 = bigint(12428050);
		bigint_t* _3858985528729690444530 = bigint_mul(_2029819929755205012873, _4473069421133066064032 );
		bigint_to_string(_3858985528729690444530, 10, buffer);
		printf("trying ");
		puts("mul(-211, 12428050)");
		puts(buffer);
		assert(strcmp(buffer, "-2622318550") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2029819929755205012873);
		bigint_free(_4473069421133066064032);
		bigint_free(_3858985528729690444530);

	

		bigint_t* _3146887475311461645744;
		bigint_t* _3772521889586297477716 = bigint(-211);
		bigint_t* _3108873620776034016752 = bigint(12428050);
		bigint_t* _2157055014521351648988 = bigint_add(_3772521889586297477716, _3108873620776034016752 );
		bigint_to_string(_2157055014521351648988, 10, buffer);
		printf("trying ");
		puts("add(-211, 12428050)");
		puts(buffer);
		assert(strcmp(buffer, "12427839") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3772521889586297477716);
		bigint_free(_3108873620776034016752);
		bigint_free(_2157055014521351648988);

	

		bigint_t* _2647430084233740532555;
		bigint_t* _1892410559126814571126 = bigint(-211);
		bigint_t* _1583669638746970752967 = bigint(12428050);
		bigint_t* _760109256291013653986 = bigint_sub(_1892410559126814571126, _1583669638746970752967 );
		bigint_to_string(_760109256291013653986, 10, buffer);
		printf("trying ");
		puts("sub(-211, 12428050)");
		puts(buffer);
		assert(strcmp(buffer, "-12428261") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1892410559126814571126);
		bigint_free(_1583669638746970752967);
		bigint_free(_760109256291013653986);

	

		bigint_t* _2797995474729592641416;
		bigint_t* _461845995666032901835 = bigint(-176);
		bigint_t* _3808539541414906170509 = bigint(-10122364);
		bigint_t* _725219858204044503599 = bigint_mul(_461845995666032901835, _3808539541414906170509 );
		bigint_to_string(_725219858204044503599, 10, buffer);
		printf("trying ");
		puts("mul(-176, -10122364)");
		puts(buffer);
		assert(strcmp(buffer, "1781536064") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_461845995666032901835);
		bigint_free(_3808539541414906170509);
		bigint_free(_725219858204044503599);

	

		bigint_t* _2431082277824071234247;
		bigint_t* _2618605647003774518605 = bigint(-176);
		bigint_t* _4684592436188316682812 = bigint(-10122364);
		bigint_t* _3571122670107387254290 = bigint_add(_2618605647003774518605, _4684592436188316682812 );
		bigint_to_string(_3571122670107387254290, 10, buffer);
		printf("trying ");
		puts("add(-176, -10122364)");
		puts(buffer);
		assert(strcmp(buffer, "-10122540") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2618605647003774518605);
		bigint_free(_4684592436188316682812);
		bigint_free(_3571122670107387254290);

	

		bigint_t* _982134482334136229277;
		bigint_t* _1827101033175204821216 = bigint(-176);
		bigint_t* _819088219822282405118 = bigint(-10122364);
		bigint_t* _4670161107261326497338 = bigint_sub(_1827101033175204821216, _819088219822282405118 );
		bigint_to_string(_4670161107261326497338, 10, buffer);
		printf("trying ");
		puts("sub(-176, -10122364)");
		puts(buffer);
		assert(strcmp(buffer, "10122188") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1827101033175204821216);
		bigint_free(_819088219822282405118);
		bigint_free(_4670161107261326497338);

	

		bigint_t* _1775277182771831794780;
		bigint_t* _2183287145098177200226 = bigint(-254);
		bigint_t* _3666207368785483163104 = bigint(6632282);
		bigint_t* _387409222344019885355 = bigint_mul(_2183287145098177200226, _3666207368785483163104 );
		bigint_to_string(_387409222344019885355, 10, buffer);
		printf("trying ");
		puts("mul(-254, 6632282)");
		puts(buffer);
		assert(strcmp(buffer, "-1684599628") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2183287145098177200226);
		bigint_free(_3666207368785483163104);
		bigint_free(_387409222344019885355);

	

		bigint_t* _3209670811278173923459;
		bigint_t* _3275795871788157224956 = bigint(-254);
		bigint_t* _790035832892319075483 = bigint(6632282);
		bigint_t* _2380967419887359286653 = bigint_add(_3275795871788157224956, _790035832892319075483 );
		bigint_to_string(_2380967419887359286653, 10, buffer);
		printf("trying ");
		puts("add(-254, 6632282)");
		puts(buffer);
		assert(strcmp(buffer, "6632028") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3275795871788157224956);
		bigint_free(_790035832892319075483);
		bigint_free(_2380967419887359286653);

	

		bigint_t* _449411744440315490600;
		bigint_t* _1978622677627534806054 = bigint(-254);
		bigint_t* _2209232121527748962114 = bigint(6632282);
		bigint_t* _354389177775684217276 = bigint_sub(_1978622677627534806054, _2209232121527748962114 );
		bigint_to_string(_354389177775684217276, 10, buffer);
		printf("trying ");
		puts("sub(-254, 6632282)");
		puts(buffer);
		assert(strcmp(buffer, "-6632536") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1978622677627534806054);
		bigint_free(_2209232121527748962114);
		bigint_free(_354389177775684217276);

	

		bigint_t* _878383867605488500185;
		bigint_t* _1798903720395071286721 = bigint(-176);
		bigint_t* _507951283647220387470 = bigint(9136425);
		bigint_t* _2015175758301579632578 = bigint_mul(_1798903720395071286721, _507951283647220387470 );
		bigint_to_string(_2015175758301579632578, 10, buffer);
		printf("trying ");
		puts("mul(-176, 9136425)");
		puts(buffer);
		assert(strcmp(buffer, "-1608010800") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1798903720395071286721);
		bigint_free(_507951283647220387470);
		bigint_free(_2015175758301579632578);

	

		bigint_t* _1005160204837436384515;
		bigint_t* _2759187775424884196084 = bigint(-176);
		bigint_t* _1571397918617548304979 = bigint(9136425);
		bigint_t* _2503107943671751962259 = bigint_add(_2759187775424884196084, _1571397918617548304979 );
		bigint_to_string(_2503107943671751962259, 10, buffer);
		printf("trying ");
		puts("add(-176, 9136425)");
		puts(buffer);
		assert(strcmp(buffer, "9136249") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2759187775424884196084);
		bigint_free(_1571397918617548304979);
		bigint_free(_2503107943671751962259);

	

		bigint_t* _2645190702139101814951;
		bigint_t* _2257901989474677881169 = bigint(-176);
		bigint_t* _2393538776130120694098 = bigint(9136425);
		bigint_t* _3936107064374875116912 = bigint_sub(_2257901989474677881169, _2393538776130120694098 );
		bigint_to_string(_3936107064374875116912, 10, buffer);
		printf("trying ");
		puts("sub(-176, 9136425)");
		puts(buffer);
		assert(strcmp(buffer, "-9136601") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2257901989474677881169);
		bigint_free(_2393538776130120694098);
		bigint_free(_3936107064374875116912);

	

		bigint_t* _2309221653396407773054;
		bigint_t* _2703868338054856043033 = bigint(31);
		bigint_t* _3869256542714879249591 = bigint(3833875);
		bigint_t* _2759536756469966781906 = bigint_mul(_2703868338054856043033, _3869256542714879249591 );
		bigint_to_string(_2759536756469966781906, 10, buffer);
		printf("trying ");
		puts("mul(31, 3833875)");
		puts(buffer);
		assert(strcmp(buffer, "118850125") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2703868338054856043033);
		bigint_free(_3869256542714879249591);
		bigint_free(_2759536756469966781906);

	

		bigint_t* _12663006894489392318;
		bigint_t* _3351528894060812107472 = bigint(31);
		bigint_t* _3597229434339012014664 = bigint(3833875);
		bigint_t* _130219512091052717285 = bigint_add(_3351528894060812107472, _3597229434339012014664 );
		bigint_to_string(_130219512091052717285, 10, buffer);
		printf("trying ");
		puts("add(31, 3833875)");
		puts(buffer);
		assert(strcmp(buffer, "3833906") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3351528894060812107472);
		bigint_free(_3597229434339012014664);
		bigint_free(_130219512091052717285);

	

		bigint_t* _2574469603000604267810;
		bigint_t* _1811097623713990059487 = bigint(31);
		bigint_t* _3617140905731512028444 = bigint(3833875);
		bigint_t* _1738050935718889394085 = bigint_sub(_1811097623713990059487, _3617140905731512028444 );
		bigint_to_string(_1738050935718889394085, 10, buffer);
		printf("trying ");
		puts("sub(31, 3833875)");
		puts(buffer);
		assert(strcmp(buffer, "-3833844") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1811097623713990059487);
		bigint_free(_3617140905731512028444);
		bigint_free(_1738050935718889394085);

	

		bigint_t* _3224183244466287796352;
		bigint_t* _3873538548848862677072 = bigint(-185);
		bigint_t* _1823280637631854868621 = bigint(-13271562);
		bigint_t* _1045883504691770763049 = bigint_mul(_3873538548848862677072, _1823280637631854868621 );
		bigint_to_string(_1045883504691770763049, 10, buffer);
		printf("trying ");
		puts("mul(-185, -13271562)");
		puts(buffer);
		assert(strcmp(buffer, "2455238970") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3873538548848862677072);
		bigint_free(_1823280637631854868621);
		bigint_free(_1045883504691770763049);

	

		bigint_t* _1501984076006112106701;
		bigint_t* _2023615295868473034821 = bigint(-185);
		bigint_t* _1597684400222263357050 = bigint(-13271562);
		bigint_t* _1778297404458401669147 = bigint_add(_2023615295868473034821, _1597684400222263357050 );
		bigint_to_string(_1778297404458401669147, 10, buffer);
		printf("trying ");
		puts("add(-185, -13271562)");
		puts(buffer);
		assert(strcmp(buffer, "-13271747") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2023615295868473034821);
		bigint_free(_1597684400222263357050);
		bigint_free(_1778297404458401669147);

	

		bigint_t* _3110302222419901460444;
		bigint_t* _1080326256442592347138 = bigint(-185);
		bigint_t* _267362768075227511092 = bigint(-13271562);
		bigint_t* _329533602444993749760 = bigint_sub(_1080326256442592347138, _267362768075227511092 );
		bigint_to_string(_329533602444993749760, 10, buffer);
		printf("trying ");
		puts("sub(-185, -13271562)");
		puts(buffer);
		assert(strcmp(buffer, "13271377") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1080326256442592347138);
		bigint_free(_267362768075227511092);
		bigint_free(_329533602444993749760);

	

		bigint_t* _2323041491937049060004;
		bigint_t* _4420879316502860877438 = bigint(32);
		bigint_t* _2429282522298844517198 = bigint(-12767591);
		bigint_t* _159478926429065591935 = bigint_mul(_4420879316502860877438, _2429282522298844517198 );
		bigint_to_string(_159478926429065591935, 10, buffer);
		printf("trying ");
		puts("mul(32, -12767591)");
		puts(buffer);
		assert(strcmp(buffer, "-408562912") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4420879316502860877438);
		bigint_free(_2429282522298844517198);
		bigint_free(_159478926429065591935);

	

		bigint_t* _2286027188836150170506;
		bigint_t* _3013022508172383177561 = bigint(32);
		bigint_t* _5794032831429256281 = bigint(-12767591);
		bigint_t* _1714685612722400029351 = bigint_add(_3013022508172383177561, _5794032831429256281 );
		bigint_to_string(_1714685612722400029351, 10, buffer);
		printf("trying ");
		puts("add(32, -12767591)");
		puts(buffer);
		assert(strcmp(buffer, "-12767559") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3013022508172383177561);
		bigint_free(_5794032831429256281);
		bigint_free(_1714685612722400029351);

	

		bigint_t* _423401149591302082726;
		bigint_t* _544533394258251259689 = bigint(32);
		bigint_t* _1295043169799986757492 = bigint(-12767591);
		bigint_t* _2110356409794844639884 = bigint_sub(_544533394258251259689, _1295043169799986757492 );
		bigint_to_string(_2110356409794844639884, 10, buffer);
		printf("trying ");
		puts("sub(32, -12767591)");
		puts(buffer);
		assert(strcmp(buffer, "12767623") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_544533394258251259689);
		bigint_free(_1295043169799986757492);
		bigint_free(_2110356409794844639884);

	

		bigint_t* _2004987684906909332655;
		bigint_t* _762831872858713680072 = bigint(222);
		bigint_t* _3267706545830618256502 = bigint(3799944);
		bigint_t* _3744111592334544198387 = bigint_mul(_762831872858713680072, _3267706545830618256502 );
		bigint_to_string(_3744111592334544198387, 10, buffer);
		printf("trying ");
		puts("mul(222, 3799944)");
		puts(buffer);
		assert(strcmp(buffer, "843587568") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_762831872858713680072);
		bigint_free(_3267706545830618256502);
		bigint_free(_3744111592334544198387);

	

		bigint_t* _3554219987793814062774;
		bigint_t* _3658764104463477584398 = bigint(222);
		bigint_t* _920554442624172628646 = bigint(3799944);
		bigint_t* _3131534122328947153242 = bigint_add(_3658764104463477584398, _920554442624172628646 );
		bigint_to_string(_3131534122328947153242, 10, buffer);
		printf("trying ");
		puts("add(222, 3799944)");
		puts(buffer);
		assert(strcmp(buffer, "3800166") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3658764104463477584398);
		bigint_free(_920554442624172628646);
		bigint_free(_3131534122328947153242);

	

		bigint_t* _3906774917345582063703;
		bigint_t* _475774686292139719587 = bigint(222);
		bigint_t* _4391769951525895521204 = bigint(3799944);
		bigint_t* _4082128613399114362847 = bigint_sub(_475774686292139719587, _4391769951525895521204 );
		bigint_to_string(_4082128613399114362847, 10, buffer);
		printf("trying ");
		puts("sub(222, 3799944)");
		puts(buffer);
		assert(strcmp(buffer, "-3799722") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_475774686292139719587);
		bigint_free(_4391769951525895521204);
		bigint_free(_4082128613399114362847);

	

		bigint_t* _1575490062031131379564;
		bigint_t* _1065293824388285487146 = bigint(112);
		bigint_t* _2944560466003048192434 = bigint(-16368170);
		bigint_t* _2097079337926954110028 = bigint_mul(_1065293824388285487146, _2944560466003048192434 );
		bigint_to_string(_2097079337926954110028, 10, buffer);
		printf("trying ");
		puts("mul(112, -16368170)");
		puts(buffer);
		assert(strcmp(buffer, "-1833235040") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1065293824388285487146);
		bigint_free(_2944560466003048192434);
		bigint_free(_2097079337926954110028);

	

		bigint_t* _4423694767022545232070;
		bigint_t* _3674604755057599946374 = bigint(112);
		bigint_t* _4685975849542544378415 = bigint(-16368170);
		bigint_t* _1798263419459263864939 = bigint_add(_3674604755057599946374, _4685975849542544378415 );
		bigint_to_string(_1798263419459263864939, 10, buffer);
		printf("trying ");
		puts("add(112, -16368170)");
		puts(buffer);
		assert(strcmp(buffer, "-16368058") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3674604755057599946374);
		bigint_free(_4685975849542544378415);
		bigint_free(_1798263419459263864939);

	

		bigint_t* _4165256494570041061177;
		bigint_t* _4360818822434881652598 = bigint(112);
		bigint_t* _1589369921449162477768 = bigint(-16368170);
		bigint_t* _2045434106771420550918 = bigint_sub(_4360818822434881652598, _1589369921449162477768 );
		bigint_to_string(_2045434106771420550918, 10, buffer);
		printf("trying ");
		puts("sub(112, -16368170)");
		puts(buffer);
		assert(strcmp(buffer, "16368282") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4360818822434881652598);
		bigint_free(_1589369921449162477768);
		bigint_free(_2045434106771420550918);

	

		bigint_t* _161239988759863961218;
		bigint_t* _2195132159886343181812 = bigint(214);
		bigint_t* _4250699740143765310493 = bigint(744415);
		bigint_t* _2550217334922625613700 = bigint_mul(_2195132159886343181812, _4250699740143765310493 );
		bigint_to_string(_2550217334922625613700, 10, buffer);
		printf("trying ");
		puts("mul(214, 744415)");
		puts(buffer);
		assert(strcmp(buffer, "159304810") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2195132159886343181812);
		bigint_free(_4250699740143765310493);
		bigint_free(_2550217334922625613700);

	

		bigint_t* _1307703064162539709929;
		bigint_t* _3131218266546421860341 = bigint(214);
		bigint_t* _2619718598181363359443 = bigint(744415);
		bigint_t* _1476056812054097753594 = bigint_add(_3131218266546421860341, _2619718598181363359443 );
		bigint_to_string(_1476056812054097753594, 10, buffer);
		printf("trying ");
		puts("add(214, 744415)");
		puts(buffer);
		assert(strcmp(buffer, "744629") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3131218266546421860341);
		bigint_free(_2619718598181363359443);
		bigint_free(_1476056812054097753594);

	

		bigint_t* _2291929350927463844454;
		bigint_t* _3771506121354190678632 = bigint(214);
		bigint_t* _514443715296851715118 = bigint(744415);
		bigint_t* _3430313390148290032122 = bigint_sub(_3771506121354190678632, _514443715296851715118 );
		bigint_to_string(_3430313390148290032122, 10, buffer);
		printf("trying ");
		puts("sub(214, 744415)");
		puts(buffer);
		assert(strcmp(buffer, "-744201") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3771506121354190678632);
		bigint_free(_514443715296851715118);
		bigint_free(_3430313390148290032122);

	

		bigint_t* _2884523783425979758945;
		bigint_t* _2934148827342762764541 = bigint(214);
		bigint_t* _1179535393216095591963 = bigint(-7168966);
		bigint_t* _826336005336985302959 = bigint_mul(_2934148827342762764541, _1179535393216095591963 );
		bigint_to_string(_826336005336985302959, 10, buffer);
		printf("trying ");
		puts("mul(214, -7168966)");
		puts(buffer);
		assert(strcmp(buffer, "-1534158724") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2934148827342762764541);
		bigint_free(_1179535393216095591963);
		bigint_free(_826336005336985302959);

	

		bigint_t* _2437436446097020731016;
		bigint_t* _408859107934732689743 = bigint(214);
		bigint_t* _3579105398225541981244 = bigint(-7168966);
		bigint_t* _681721335958892699822 = bigint_add(_408859107934732689743, _3579105398225541981244 );
		bigint_to_string(_681721335958892699822, 10, buffer);
		printf("trying ");
		puts("add(214, -7168966)");
		puts(buffer);
		assert(strcmp(buffer, "-7168752") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_408859107934732689743);
		bigint_free(_3579105398225541981244);
		bigint_free(_681721335958892699822);

	

		bigint_t* _2110090100743521455003;
		bigint_t* _990939001764452443403 = bigint(214);
		bigint_t* _3995185771327010451993 = bigint(-7168966);
		bigint_t* _4471735643581660100600 = bigint_sub(_990939001764452443403, _3995185771327010451993 );
		bigint_to_string(_4471735643581660100600, 10, buffer);
		printf("trying ");
		puts("sub(214, -7168966)");
		puts(buffer);
		assert(strcmp(buffer, "7169180") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_990939001764452443403);
		bigint_free(_3995185771327010451993);
		bigint_free(_4471735643581660100600);

	

		bigint_t* _2698981881826778416432;
		bigint_t* _951470062155823707511 = bigint(-118);
		bigint_t* _3806128065158155002783 = bigint(-11163864);
		bigint_t* _3438887360249759621619 = bigint_mul(_951470062155823707511, _3806128065158155002783 );
		bigint_to_string(_3438887360249759621619, 10, buffer);
		printf("trying ");
		puts("mul(-118, -11163864)");
		puts(buffer);
		assert(strcmp(buffer, "1317335952") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_951470062155823707511);
		bigint_free(_3806128065158155002783);
		bigint_free(_3438887360249759621619);

	

		bigint_t* _4357859528819796788349;
		bigint_t* _1021917049249770065577 = bigint(-118);
		bigint_t* _3719151387230307356288 = bigint(-11163864);
		bigint_t* _325176055286853808528 = bigint_add(_1021917049249770065577, _3719151387230307356288 );
		bigint_to_string(_325176055286853808528, 10, buffer);
		printf("trying ");
		puts("add(-118, -11163864)");
		puts(buffer);
		assert(strcmp(buffer, "-11163982") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1021917049249770065577);
		bigint_free(_3719151387230307356288);
		bigint_free(_325176055286853808528);

	

		bigint_t* _2585725382883053854138;
		bigint_t* _12049880029069537278 = bigint(-118);
		bigint_t* _4695048450258847264735 = bigint(-11163864);
		bigint_t* _201780444330068739720 = bigint_sub(_12049880029069537278, _4695048450258847264735 );
		bigint_to_string(_201780444330068739720, 10, buffer);
		printf("trying ");
		puts("sub(-118, -11163864)");
		puts(buffer);
		assert(strcmp(buffer, "11163746") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_12049880029069537278);
		bigint_free(_4695048450258847264735);
		bigint_free(_201780444330068739720);

	

		bigint_t* _1176517874013533335940;
		bigint_t* _4183169569594463050087 = bigint(-59);
		bigint_t* _4367625355921222480692 = bigint(15023420);
		bigint_t* _2552120558360259770006 = bigint_mul(_4183169569594463050087, _4367625355921222480692 );
		bigint_to_string(_2552120558360259770006, 10, buffer);
		printf("trying ");
		puts("mul(-59, 15023420)");
		puts(buffer);
		assert(strcmp(buffer, "-886381780") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4183169569594463050087);
		bigint_free(_4367625355921222480692);
		bigint_free(_2552120558360259770006);

	

		bigint_t* _3153395485499751854754;
		bigint_t* _2360074298171129054615 = bigint(-59);
		bigint_t* _213417773837392427628 = bigint(15023420);
		bigint_t* _657953883822781042764 = bigint_add(_2360074298171129054615, _213417773837392427628 );
		bigint_to_string(_657953883822781042764, 10, buffer);
		printf("trying ");
		puts("add(-59, 15023420)");
		puts(buffer);
		assert(strcmp(buffer, "15023361") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2360074298171129054615);
		bigint_free(_213417773837392427628);
		bigint_free(_657953883822781042764);

	

		bigint_t* _2715254612525624225194;
		bigint_t* _1463354122797432484448 = bigint(-59);
		bigint_t* _3892586153112537761686 = bigint(15023420);
		bigint_t* _3924033513964192830197 = bigint_sub(_1463354122797432484448, _3892586153112537761686 );
		bigint_to_string(_3924033513964192830197, 10, buffer);
		printf("trying ");
		puts("sub(-59, 15023420)");
		puts(buffer);
		assert(strcmp(buffer, "-15023479") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1463354122797432484448);
		bigint_free(_3892586153112537761686);
		bigint_free(_3924033513964192830197);

	

		bigint_t* _3707072347376091201062;
		bigint_t* _4069161999392750119109 = bigint(170);
		bigint_t* _2338134597597066938650 = bigint(-15851928);
		bigint_t* _935358656699017252186 = bigint_mul(_4069161999392750119109, _2338134597597066938650 );
		bigint_to_string(_935358656699017252186, 10, buffer);
		printf("trying ");
		puts("mul(170, -15851928)");
		puts(buffer);
		assert(strcmp(buffer, "-2694827760") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4069161999392750119109);
		bigint_free(_2338134597597066938650);
		bigint_free(_935358656699017252186);

	

		bigint_t* _2458774085595937298117;
		bigint_t* _1691177097492639178149 = bigint(170);
		bigint_t* _3472634722562558697850 = bigint(-15851928);
		bigint_t* _4240587505591916028042 = bigint_add(_1691177097492639178149, _3472634722562558697850 );
		bigint_to_string(_4240587505591916028042, 10, buffer);
		printf("trying ");
		puts("add(170, -15851928)");
		puts(buffer);
		assert(strcmp(buffer, "-15851758") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1691177097492639178149);
		bigint_free(_3472634722562558697850);
		bigint_free(_4240587505591916028042);

	

		bigint_t* _3593085527055257961718;
		bigint_t* _2993063962833050392006 = bigint(170);
		bigint_t* _1035754554370063513218 = bigint(-15851928);
		bigint_t* _2221441330423300377907 = bigint_sub(_2993063962833050392006, _1035754554370063513218 );
		bigint_to_string(_2221441330423300377907, 10, buffer);
		printf("trying ");
		puts("sub(170, -15851928)");
		puts(buffer);
		assert(strcmp(buffer, "15852098") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2993063962833050392006);
		bigint_free(_1035754554370063513218);
		bigint_free(_2221441330423300377907);

	

		bigint_t* _3356144548100544159028;
		bigint_t* _4609751392486845908564 = bigint(-208);
		bigint_t* _4448279858462529553539 = bigint(1801939);
		bigint_t* _4494560859886536899128 = bigint_mul(_4609751392486845908564, _4448279858462529553539 );
		bigint_to_string(_4494560859886536899128, 10, buffer);
		printf("trying ");
		puts("mul(-208, 1801939)");
		puts(buffer);
		assert(strcmp(buffer, "-374803312") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4609751392486845908564);
		bigint_free(_4448279858462529553539);
		bigint_free(_4494560859886536899128);

	

		bigint_t* _2865735901824789701444;
		bigint_t* _2123990486040773357714 = bigint(-208);
		bigint_t* _2455954672907471231515 = bigint(1801939);
		bigint_t* _3595274699347372409784 = bigint_add(_2123990486040773357714, _2455954672907471231515 );
		bigint_to_string(_3595274699347372409784, 10, buffer);
		printf("trying ");
		puts("add(-208, 1801939)");
		puts(buffer);
		assert(strcmp(buffer, "1801731") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2123990486040773357714);
		bigint_free(_2455954672907471231515);
		bigint_free(_3595274699347372409784);

	

		bigint_t* _1798343343467274373410;
		bigint_t* _738733240309853823161 = bigint(-208);
		bigint_t* _1755937343150875995145 = bigint(1801939);
		bigint_t* _1237825513593984559497 = bigint_sub(_738733240309853823161, _1755937343150875995145 );
		bigint_to_string(_1237825513593984559497, 10, buffer);
		printf("trying ");
		puts("sub(-208, 1801939)");
		puts(buffer);
		assert(strcmp(buffer, "-1802147") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_738733240309853823161);
		bigint_free(_1755937343150875995145);
		bigint_free(_1237825513593984559497);

	

		bigint_t* _1981998210053901144993;
		bigint_t* _543040176961898388420 = bigint(-191);
		bigint_t* _3991816841456798076790 = bigint(8138325);
		bigint_t* _3720158004339334970361 = bigint_mul(_543040176961898388420, _3991816841456798076790 );
		bigint_to_string(_3720158004339334970361, 10, buffer);
		printf("trying ");
		puts("mul(-191, 8138325)");
		puts(buffer);
		assert(strcmp(buffer, "-1554420075") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_543040176961898388420);
		bigint_free(_3991816841456798076790);
		bigint_free(_3720158004339334970361);

	

		bigint_t* _2294741513095852243177;
		bigint_t* _4190314945321726384966 = bigint(-191);
		bigint_t* _1013730439292405745488 = bigint(8138325);
		bigint_t* _2166231025333332402263 = bigint_add(_4190314945321726384966, _1013730439292405745488 );
		bigint_to_string(_2166231025333332402263, 10, buffer);
		printf("trying ");
		puts("add(-191, 8138325)");
		puts(buffer);
		assert(strcmp(buffer, "8138134") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4190314945321726384966);
		bigint_free(_1013730439292405745488);
		bigint_free(_2166231025333332402263);

	

		bigint_t* _496196194561110998729;
		bigint_t* _1000308700561468870497 = bigint(-191);
		bigint_t* _1414323756097039744259 = bigint(8138325);
		bigint_t* _2998985849286586543462 = bigint_sub(_1000308700561468870497, _1414323756097039744259 );
		bigint_to_string(_2998985849286586543462, 10, buffer);
		printf("trying ");
		puts("sub(-191, 8138325)");
		puts(buffer);
		assert(strcmp(buffer, "-8138516") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1000308700561468870497);
		bigint_free(_1414323756097039744259);
		bigint_free(_2998985849286586543462);

	

		bigint_t* _4144812994405488072303;
		bigint_t* _636277413829496514580 = bigint(-208);
		bigint_t* _3768165918297538515502 = bigint(-1432525);
		bigint_t* _2915711077558424183021 = bigint_mul(_636277413829496514580, _3768165918297538515502 );
		bigint_to_string(_2915711077558424183021, 10, buffer);
		printf("trying ");
		puts("mul(-208, -1432525)");
		puts(buffer);
		assert(strcmp(buffer, "297965200") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_636277413829496514580);
		bigint_free(_3768165918297538515502);
		bigint_free(_2915711077558424183021);

	

		bigint_t* _1177794151742746439087;
		bigint_t* _1414625032106827802825 = bigint(-208);
		bigint_t* _3909710726479403122809 = bigint(-1432525);
		bigint_t* _648854805517716511891 = bigint_add(_1414625032106827802825, _3909710726479403122809 );
		bigint_to_string(_648854805517716511891, 10, buffer);
		printf("trying ");
		puts("add(-208, -1432525)");
		puts(buffer);
		assert(strcmp(buffer, "-1432733") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1414625032106827802825);
		bigint_free(_3909710726479403122809);
		bigint_free(_648854805517716511891);

	

		bigint_t* _2633253348965568819239;
		bigint_t* _4193162452147742924432 = bigint(-208);
		bigint_t* _4554338557683449019978 = bigint(-1432525);
		bigint_t* _2517082952225609854052 = bigint_sub(_4193162452147742924432, _4554338557683449019978 );
		bigint_to_string(_2517082952225609854052, 10, buffer);
		printf("trying ");
		puts("sub(-208, -1432525)");
		puts(buffer);
		assert(strcmp(buffer, "1432317") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4193162452147742924432);
		bigint_free(_4554338557683449019978);
		bigint_free(_2517082952225609854052);

	

		bigint_t* _3005117384055955399801;
		bigint_t* _2377590773053124265742 = bigint(-149);
		bigint_t* _1214960805512384632219 = bigint(-13402077);
		bigint_t* _2415813769682606495471 = bigint_mul(_2377590773053124265742, _1214960805512384632219 );
		bigint_to_string(_2415813769682606495471, 10, buffer);
		printf("trying ");
		puts("mul(-149, -13402077)");
		puts(buffer);
		assert(strcmp(buffer, "1996909473") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2377590773053124265742);
		bigint_free(_1214960805512384632219);
		bigint_free(_2415813769682606495471);

	

		bigint_t* _189125705573717748685;
		bigint_t* _4323045632854754591795 = bigint(-149);
		bigint_t* _840403808337330618758 = bigint(-13402077);
		bigint_t* _3122885631060672493066 = bigint_add(_4323045632854754591795, _840403808337330618758 );
		bigint_to_string(_3122885631060672493066, 10, buffer);
		printf("trying ");
		puts("add(-149, -13402077)");
		puts(buffer);
		assert(strcmp(buffer, "-13402226") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4323045632854754591795);
		bigint_free(_840403808337330618758);
		bigint_free(_3122885631060672493066);

	

		bigint_t* _3847049033848976141383;
		bigint_t* _3406031269836552549890 = bigint(-149);
		bigint_t* _3101810537873295978792 = bigint(-13402077);
		bigint_t* _437065641952249511592 = bigint_sub(_3406031269836552549890, _3101810537873295978792 );
		bigint_to_string(_437065641952249511592, 10, buffer);
		printf("trying ");
		puts("sub(-149, -13402077)");
		puts(buffer);
		assert(strcmp(buffer, "13401928") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3406031269836552549890);
		bigint_free(_3101810537873295978792);
		bigint_free(_437065641952249511592);

	

		bigint_t* _2811478083623801149019;
		bigint_t* _1657608955501648412294 = bigint(48);
		bigint_t* _707185785392930872431 = bigint(-3816172);
		bigint_t* _2514573601534391909682 = bigint_mul(_1657608955501648412294, _707185785392930872431 );
		bigint_to_string(_2514573601534391909682, 10, buffer);
		printf("trying ");
		puts("mul(48, -3816172)");
		puts(buffer);
		assert(strcmp(buffer, "-183176256") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1657608955501648412294);
		bigint_free(_707185785392930872431);
		bigint_free(_2514573601534391909682);

	

		bigint_t* _3478389243038800226014;
		bigint_t* _666868193093616035956 = bigint(48);
		bigint_t* _1431926508882619576969 = bigint(-3816172);
		bigint_t* _3551621176669756056435 = bigint_add(_666868193093616035956, _1431926508882619576969 );
		bigint_to_string(_3551621176669756056435, 10, buffer);
		printf("trying ");
		puts("add(48, -3816172)");
		puts(buffer);
		assert(strcmp(buffer, "-3816124") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_666868193093616035956);
		bigint_free(_1431926508882619576969);
		bigint_free(_3551621176669756056435);

	

		bigint_t* _2510982920378826370599;
		bigint_t* _3070191160388257360209 = bigint(48);
		bigint_t* _4034936105456714100486 = bigint(-3816172);
		bigint_t* _4572347720433092818940 = bigint_sub(_3070191160388257360209, _4034936105456714100486 );
		bigint_to_string(_4572347720433092818940, 10, buffer);
		printf("trying ");
		puts("sub(48, -3816172)");
		puts(buffer);
		assert(strcmp(buffer, "3816220") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3070191160388257360209);
		bigint_free(_4034936105456714100486);
		bigint_free(_4572347720433092818940);

	

		bigint_t* _386493851452944848210;
		bigint_t* _3902121803553078593585 = bigint(-147);
		bigint_t* _3905340017666290753211 = bigint(6244251);
		bigint_t* _1109675749892196680059 = bigint_mul(_3902121803553078593585, _3905340017666290753211 );
		bigint_to_string(_1109675749892196680059, 10, buffer);
		printf("trying ");
		puts("mul(-147, 6244251)");
		puts(buffer);
		assert(strcmp(buffer, "-917904897") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3902121803553078593585);
		bigint_free(_3905340017666290753211);
		bigint_free(_1109675749892196680059);

	

		bigint_t* _3002398460270889348037;
		bigint_t* _723011098646477085264 = bigint(-147);
		bigint_t* _3591707234317243144341 = bigint(6244251);
		bigint_t* _4171129534486716488599 = bigint_add(_723011098646477085264, _3591707234317243144341 );
		bigint_to_string(_4171129534486716488599, 10, buffer);
		printf("trying ");
		puts("add(-147, 6244251)");
		puts(buffer);
		assert(strcmp(buffer, "6244104") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_723011098646477085264);
		bigint_free(_3591707234317243144341);
		bigint_free(_4171129534486716488599);

	

		bigint_t* _1152261291565269377208;
		bigint_t* _3496129315213290672589 = bigint(-147);
		bigint_t* _487059179975150278950 = bigint(6244251);
		bigint_t* _3206993443358287709299 = bigint_sub(_3496129315213290672589, _487059179975150278950 );
		bigint_to_string(_3206993443358287709299, 10, buffer);
		printf("trying ");
		puts("sub(-147, 6244251)");
		puts(buffer);
		assert(strcmp(buffer, "-6244398") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3496129315213290672589);
		bigint_free(_487059179975150278950);
		bigint_free(_3206993443358287709299);

	

		bigint_t* _2431955639594863873305;
		bigint_t* _3522676101235884631695 = bigint(-175);
		bigint_t* _3954876085230583614950 = bigint(9181428);
		bigint_t* _2827598801064866759895 = bigint_mul(_3522676101235884631695, _3954876085230583614950 );
		bigint_to_string(_2827598801064866759895, 10, buffer);
		printf("trying ");
		puts("mul(-175, 9181428)");
		puts(buffer);
		assert(strcmp(buffer, "-1606749900") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3522676101235884631695);
		bigint_free(_3954876085230583614950);
		bigint_free(_2827598801064866759895);

	

		bigint_t* _2064290130116163557595;
		bigint_t* _2317978800061598371304 = bigint(-175);
		bigint_t* _4198226059052561539628 = bigint(9181428);
		bigint_t* _3456524101040238459306 = bigint_add(_2317978800061598371304, _4198226059052561539628 );
		bigint_to_string(_3456524101040238459306, 10, buffer);
		printf("trying ");
		puts("add(-175, 9181428)");
		puts(buffer);
		assert(strcmp(buffer, "9181253") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2317978800061598371304);
		bigint_free(_4198226059052561539628);
		bigint_free(_3456524101040238459306);

	

		bigint_t* _1823596560184715477511;
		bigint_t* _1614203315511988031576 = bigint(-175);
		bigint_t* _4598432194770766506151 = bigint(9181428);
		bigint_t* _2151416437358038307813 = bigint_sub(_1614203315511988031576, _4598432194770766506151 );
		bigint_to_string(_2151416437358038307813, 10, buffer);
		printf("trying ");
		puts("sub(-175, 9181428)");
		puts(buffer);
		assert(strcmp(buffer, "-9181603") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1614203315511988031576);
		bigint_free(_4598432194770766506151);
		bigint_free(_2151416437358038307813);

	

		bigint_t* _92250658577836538333;
		bigint_t* _3392125889074969096135 = bigint(-6);
		bigint_t* _1352641766001418272789 = bigint(993577);
		bigint_t* _4361166389508423321397 = bigint_mul(_3392125889074969096135, _1352641766001418272789 );
		bigint_to_string(_4361166389508423321397, 10, buffer);
		printf("trying ");
		puts("mul(-6, 993577)");
		puts(buffer);
		assert(strcmp(buffer, "-5961462") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3392125889074969096135);
		bigint_free(_1352641766001418272789);
		bigint_free(_4361166389508423321397);

	

		bigint_t* _1962488841560815499214;
		bigint_t* _1373521068478781934384 = bigint(-6);
		bigint_t* _2192679026662393346396 = bigint(993577);
		bigint_t* _4485920859163061105826 = bigint_add(_1373521068478781934384, _2192679026662393346396 );
		bigint_to_string(_4485920859163061105826, 10, buffer);
		printf("trying ");
		puts("add(-6, 993577)");
		puts(buffer);
		assert(strcmp(buffer, "993571") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1373521068478781934384);
		bigint_free(_2192679026662393346396);
		bigint_free(_4485920859163061105826);

	

		bigint_t* _577696605977788771170;
		bigint_t* _1974315586359460110933 = bigint(-6);
		bigint_t* _3695221625972669349117 = bigint(993577);
		bigint_t* _3054545623164445285073 = bigint_sub(_1974315586359460110933, _3695221625972669349117 );
		bigint_to_string(_3054545623164445285073, 10, buffer);
		printf("trying ");
		puts("sub(-6, 993577)");
		puts(buffer);
		assert(strcmp(buffer, "-993583") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1974315586359460110933);
		bigint_free(_3695221625972669349117);
		bigint_free(_3054545623164445285073);

	

		bigint_t* _2112157742554362504596;
		bigint_t* _2964821488873323558180 = bigint(-136);
		bigint_t* _3035016883306691395842 = bigint(-9089770);
		bigint_t* _2505971765704326273164 = bigint_mul(_2964821488873323558180, _3035016883306691395842 );
		bigint_to_string(_2505971765704326273164, 10, buffer);
		printf("trying ");
		puts("mul(-136, -9089770)");
		puts(buffer);
		assert(strcmp(buffer, "1236208720") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2964821488873323558180);
		bigint_free(_3035016883306691395842);
		bigint_free(_2505971765704326273164);

	

		bigint_t* _1640226347334952545854;
		bigint_t* _1213418803597517827164 = bigint(-136);
		bigint_t* _872213274639437563418 = bigint(-9089770);
		bigint_t* _782407629711006451263 = bigint_add(_1213418803597517827164, _872213274639437563418 );
		bigint_to_string(_782407629711006451263, 10, buffer);
		printf("trying ");
		puts("add(-136, -9089770)");
		puts(buffer);
		assert(strcmp(buffer, "-9089906") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1213418803597517827164);
		bigint_free(_872213274639437563418);
		bigint_free(_782407629711006451263);

	

		bigint_t* _675609698548850662266;
		bigint_t* _3116533105872865131374 = bigint(-136);
		bigint_t* _2542054196792886031821 = bigint(-9089770);
		bigint_t* _161340533270361936888 = bigint_sub(_3116533105872865131374, _2542054196792886031821 );
		bigint_to_string(_161340533270361936888, 10, buffer);
		printf("trying ");
		puts("sub(-136, -9089770)");
		puts(buffer);
		assert(strcmp(buffer, "9089634") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3116533105872865131374);
		bigint_free(_2542054196792886031821);
		bigint_free(_161340533270361936888);

	

		bigint_t* _2216748888420157345841;
		bigint_t* _3657431326368440554806 = bigint(-23);
		bigint_t* _4431802151281902128694 = bigint(-7156330);
		bigint_t* _2267726439045452749031 = bigint_mul(_3657431326368440554806, _4431802151281902128694 );
		bigint_to_string(_2267726439045452749031, 10, buffer);
		printf("trying ");
		puts("mul(-23, -7156330)");
		puts(buffer);
		assert(strcmp(buffer, "164595590") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3657431326368440554806);
		bigint_free(_4431802151281902128694);
		bigint_free(_2267726439045452749031);

	

		bigint_t* _3858577633682654446633;
		bigint_t* _2544853655290337962017 = bigint(-23);
		bigint_t* _1515135198890728961285 = bigint(-7156330);
		bigint_t* _1984364541077726782672 = bigint_add(_2544853655290337962017, _1515135198890728961285 );
		bigint_to_string(_1984364541077726782672, 10, buffer);
		printf("trying ");
		puts("add(-23, -7156330)");
		puts(buffer);
		assert(strcmp(buffer, "-7156353") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2544853655290337962017);
		bigint_free(_1515135198890728961285);
		bigint_free(_1984364541077726782672);

	

		bigint_t* _2679971988310524688648;
		bigint_t* _459021121445355902696 = bigint(-23);
		bigint_t* _2979259663063391016046 = bigint(-7156330);
		bigint_t* _4632268659977431423258 = bigint_sub(_459021121445355902696, _2979259663063391016046 );
		bigint_to_string(_4632268659977431423258, 10, buffer);
		printf("trying ");
		puts("sub(-23, -7156330)");
		puts(buffer);
		assert(strcmp(buffer, "7156307") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_459021121445355902696);
		bigint_free(_2979259663063391016046);
		bigint_free(_4632268659977431423258);

	

		bigint_t* _1174003157910750071338;
		bigint_t* _2558265238347037767548 = bigint(-87);
		bigint_t* _3806005942748583539531 = bigint(11893378);
		bigint_t* _1861224865910563248942 = bigint_mul(_2558265238347037767548, _3806005942748583539531 );
		bigint_to_string(_1861224865910563248942, 10, buffer);
		printf("trying ");
		puts("mul(-87, 11893378)");
		puts(buffer);
		assert(strcmp(buffer, "-1034723886") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2558265238347037767548);
		bigint_free(_3806005942748583539531);
		bigint_free(_1861224865910563248942);

	

		bigint_t* _1584782174260516072821;
		bigint_t* _4657100691039281326984 = bigint(-87);
		bigint_t* _3548401792297422586243 = bigint(11893378);
		bigint_t* _2574125285373331016718 = bigint_add(_4657100691039281326984, _3548401792297422586243 );
		bigint_to_string(_2574125285373331016718, 10, buffer);
		printf("trying ");
		puts("add(-87, 11893378)");
		puts(buffer);
		assert(strcmp(buffer, "11893291") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4657100691039281326984);
		bigint_free(_3548401792297422586243);
		bigint_free(_2574125285373331016718);

	

		bigint_t* _4097624555363448544373;
		bigint_t* _2372086119395539480748 = bigint(-87);
		bigint_t* _2608117836508977881928 = bigint(11893378);
		bigint_t* _715875741601168893232 = bigint_sub(_2372086119395539480748, _2608117836508977881928 );
		bigint_to_string(_715875741601168893232, 10, buffer);
		printf("trying ");
		puts("sub(-87, 11893378)");
		puts(buffer);
		assert(strcmp(buffer, "-11893465") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2372086119395539480748);
		bigint_free(_2608117836508977881928);
		bigint_free(_715875741601168893232);

	

		bigint_t* _3345000061613699065422;
		bigint_t* _3327196273516135931589 = bigint(-103);
		bigint_t* _3861333907069346531689 = bigint(3169295);
		bigint_t* _1311052351908526833874 = bigint_mul(_3327196273516135931589, _3861333907069346531689 );
		bigint_to_string(_1311052351908526833874, 10, buffer);
		printf("trying ");
		puts("mul(-103, 3169295)");
		puts(buffer);
		assert(strcmp(buffer, "-326437385") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3327196273516135931589);
		bigint_free(_3861333907069346531689);
		bigint_free(_1311052351908526833874);

	

		bigint_t* _1164159001342918398418;
		bigint_t* _3690546354739955205428 = bigint(-103);
		bigint_t* _1085295051601315502589 = bigint(3169295);
		bigint_t* _4026089444152068045465 = bigint_add(_3690546354739955205428, _1085295051601315502589 );
		bigint_to_string(_4026089444152068045465, 10, buffer);
		printf("trying ");
		puts("add(-103, 3169295)");
		puts(buffer);
		assert(strcmp(buffer, "3169192") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3690546354739955205428);
		bigint_free(_1085295051601315502589);
		bigint_free(_4026089444152068045465);

	

		bigint_t* _2592687936340645365258;
		bigint_t* _2967923478052470361022 = bigint(-103);
		bigint_t* _3412383120835278525881 = bigint(3169295);
		bigint_t* _1332655086166588256113 = bigint_sub(_2967923478052470361022, _3412383120835278525881 );
		bigint_to_string(_1332655086166588256113, 10, buffer);
		printf("trying ");
		puts("sub(-103, 3169295)");
		puts(buffer);
		assert(strcmp(buffer, "-3169398") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2967923478052470361022);
		bigint_free(_3412383120835278525881);
		bigint_free(_1332655086166588256113);

	

		bigint_t* _4076483329779398979182;
		bigint_t* _4479291681455805302804 = bigint(-36);
		bigint_t* _1071861738265160528744 = bigint(-6147318);
		bigint_t* _3640069906761613608160 = bigint_mul(_4479291681455805302804, _1071861738265160528744 );
		bigint_to_string(_3640069906761613608160, 10, buffer);
		printf("trying ");
		puts("mul(-36, -6147318)");
		puts(buffer);
		assert(strcmp(buffer, "221303448") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4479291681455805302804);
		bigint_free(_1071861738265160528744);
		bigint_free(_3640069906761613608160);

	

		bigint_t* _394380102567292666715;
		bigint_t* _3769487891101395017445 = bigint(-36);
		bigint_t* _3284079840486265621007 = bigint(-6147318);
		bigint_t* _2177520400299976428607 = bigint_add(_3769487891101395017445, _3284079840486265621007 );
		bigint_to_string(_2177520400299976428607, 10, buffer);
		printf("trying ");
		puts("add(-36, -6147318)");
		puts(buffer);
		assert(strcmp(buffer, "-6147354") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3769487891101395017445);
		bigint_free(_3284079840486265621007);
		bigint_free(_2177520400299976428607);

	

		bigint_t* _2304922745196981968484;
		bigint_t* _2691578097918549392896 = bigint(-36);
		bigint_t* _1790002240323961058846 = bigint(-6147318);
		bigint_t* _4635524249480726903781 = bigint_sub(_2691578097918549392896, _1790002240323961058846 );
		bigint_to_string(_4635524249480726903781, 10, buffer);
		printf("trying ");
		puts("sub(-36, -6147318)");
		puts(buffer);
		assert(strcmp(buffer, "6147282") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2691578097918549392896);
		bigint_free(_1790002240323961058846);
		bigint_free(_4635524249480726903781);

	

		bigint_t* _1752825179898360142277;
		bigint_t* _3992507903531131548485 = bigint(155);
		bigint_t* _3598932198389192204125 = bigint(12959819);
		bigint_t* _3508817093005087935553 = bigint_mul(_3992507903531131548485, _3598932198389192204125 );
		bigint_to_string(_3508817093005087935553, 10, buffer);
		printf("trying ");
		puts("mul(155, 12959819)");
		puts(buffer);
		assert(strcmp(buffer, "2008771945") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3992507903531131548485);
		bigint_free(_3598932198389192204125);
		bigint_free(_3508817093005087935553);

	

		bigint_t* _12557856125507581359;
		bigint_t* _324660543492947794226 = bigint(155);
		bigint_t* _1964336543813566737353 = bigint(12959819);
		bigint_t* _2915053623472245741468 = bigint_add(_324660543492947794226, _1964336543813566737353 );
		bigint_to_string(_2915053623472245741468, 10, buffer);
		printf("trying ");
		puts("add(155, 12959819)");
		puts(buffer);
		assert(strcmp(buffer, "12959974") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_324660543492947794226);
		bigint_free(_1964336543813566737353);
		bigint_free(_2915053623472245741468);

	

		bigint_t* _2339355767785426538933;
		bigint_t* _1258786791773584635890 = bigint(155);
		bigint_t* _3859136419557250868769 = bigint(12959819);
		bigint_t* _3671440337769810640198 = bigint_sub(_1258786791773584635890, _3859136419557250868769 );
		bigint_to_string(_3671440337769810640198, 10, buffer);
		printf("trying ");
		puts("sub(155, 12959819)");
		puts(buffer);
		assert(strcmp(buffer, "-12959664") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1258786791773584635890);
		bigint_free(_3859136419557250868769);
		bigint_free(_3671440337769810640198);

	

		bigint_t* _4056520602553739807468;
		bigint_t* _2782685794156880028103 = bigint(65);
		bigint_t* _1794554668267817495200 = bigint(13009326);
		bigint_t* _1043681033435976683894 = bigint_mul(_2782685794156880028103, _1794554668267817495200 );
		bigint_to_string(_1043681033435976683894, 10, buffer);
		printf("trying ");
		puts("mul(65, 13009326)");
		puts(buffer);
		assert(strcmp(buffer, "845606190") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2782685794156880028103);
		bigint_free(_1794554668267817495200);
		bigint_free(_1043681033435976683894);

	

		bigint_t* _1062065844349858477142;
		bigint_t* _1100039639564685726807 = bigint(65);
		bigint_t* _932377504609148515130 = bigint(13009326);
		bigint_t* _284653095120609848241 = bigint_add(_1100039639564685726807, _932377504609148515130 );
		bigint_to_string(_284653095120609848241, 10, buffer);
		printf("trying ");
		puts("add(65, 13009326)");
		puts(buffer);
		assert(strcmp(buffer, "13009391") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1100039639564685726807);
		bigint_free(_932377504609148515130);
		bigint_free(_284653095120609848241);

	

		bigint_t* _998200495808810736001;
		bigint_t* _1702106308889174350458 = bigint(65);
		bigint_t* _3072588716312972250881 = bigint(13009326);
		bigint_t* _4543161737048783097778 = bigint_sub(_1702106308889174350458, _3072588716312972250881 );
		bigint_to_string(_4543161737048783097778, 10, buffer);
		printf("trying ");
		puts("sub(65, 13009326)");
		puts(buffer);
		assert(strcmp(buffer, "-13009261") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1702106308889174350458);
		bigint_free(_3072588716312972250881);
		bigint_free(_4543161737048783097778);

	

		bigint_t* _762196571285776836917;
		bigint_t* _1311656310951492167844 = bigint(-158);
		bigint_t* _1337185198837786121916 = bigint(7131651);
		bigint_t* _3440171250940998571768 = bigint_mul(_1311656310951492167844, _1337185198837786121916 );
		bigint_to_string(_3440171250940998571768, 10, buffer);
		printf("trying ");
		puts("mul(-158, 7131651)");
		puts(buffer);
		assert(strcmp(buffer, "-1126800858") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1311656310951492167844);
		bigint_free(_1337185198837786121916);
		bigint_free(_3440171250940998571768);

	

		bigint_t* _3135712753336562368995;
		bigint_t* _158364977098477225595 = bigint(-158);
		bigint_t* _120105808972354181248 = bigint(7131651);
		bigint_t* _3130297100254098405611 = bigint_add(_158364977098477225595, _120105808972354181248 );
		bigint_to_string(_3130297100254098405611, 10, buffer);
		printf("trying ");
		puts("add(-158, 7131651)");
		puts(buffer);
		assert(strcmp(buffer, "7131493") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_158364977098477225595);
		bigint_free(_120105808972354181248);
		bigint_free(_3130297100254098405611);

	

		bigint_t* _2177209862608551942388;
		bigint_t* _3589165559126521289683 = bigint(-158);
		bigint_t* _4349010672701028194353 = bigint(7131651);
		bigint_t* _3890130610824832658766 = bigint_sub(_3589165559126521289683, _4349010672701028194353 );
		bigint_to_string(_3890130610824832658766, 10, buffer);
		printf("trying ");
		puts("sub(-158, 7131651)");
		puts(buffer);
		assert(strcmp(buffer, "-7131809") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3589165559126521289683);
		bigint_free(_4349010672701028194353);
		bigint_free(_3890130610824832658766);

	

		bigint_t* _2277590107978918826197;
		bigint_t* _3643648415958816623502 = bigint(-148);
		bigint_t* _2144277583464613475899 = bigint(704039);
		bigint_t* _3446302072368188744301 = bigint_mul(_3643648415958816623502, _2144277583464613475899 );
		bigint_to_string(_3446302072368188744301, 10, buffer);
		printf("trying ");
		puts("mul(-148, 704039)");
		puts(buffer);
		assert(strcmp(buffer, "-104197772") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3643648415958816623502);
		bigint_free(_2144277583464613475899);
		bigint_free(_3446302072368188744301);

	

		bigint_t* _4057653067137918606591;
		bigint_t* _1567161628961313731727 = bigint(-148);
		bigint_t* _3871457696246288687120 = bigint(704039);
		bigint_t* _3099202591146999399416 = bigint_add(_1567161628961313731727, _3871457696246288687120 );
		bigint_to_string(_3099202591146999399416, 10, buffer);
		printf("trying ");
		puts("add(-148, 704039)");
		puts(buffer);
		assert(strcmp(buffer, "703891") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1567161628961313731727);
		bigint_free(_3871457696246288687120);
		bigint_free(_3099202591146999399416);

	

		bigint_t* _2389387440610059110379;
		bigint_t* _4219390193110560459288 = bigint(-148);
		bigint_t* _1748669565586208239800 = bigint(704039);
		bigint_t* _1884901772970468280557 = bigint_sub(_4219390193110560459288, _1748669565586208239800 );
		bigint_to_string(_1884901772970468280557, 10, buffer);
		printf("trying ");
		puts("sub(-148, 704039)");
		puts(buffer);
		assert(strcmp(buffer, "-704187") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4219390193110560459288);
		bigint_free(_1748669565586208239800);
		bigint_free(_1884901772970468280557);

	

		bigint_t* _3784582683858854992651;
		bigint_t* _4684861973946470399863 = bigint(-141);
		bigint_t* _1482560063158814537187 = bigint(-11459519);
		bigint_t* _1098126464385766597931 = bigint_mul(_4684861973946470399863, _1482560063158814537187 );
		bigint_to_string(_1098126464385766597931, 10, buffer);
		printf("trying ");
		puts("mul(-141, -11459519)");
		puts(buffer);
		assert(strcmp(buffer, "1615792179") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4684861973946470399863);
		bigint_free(_1482560063158814537187);
		bigint_free(_1098126464385766597931);

	

		bigint_t* _4462203670182110976165;
		bigint_t* _460254755202086420349 = bigint(-141);
		bigint_t* _17448272306299737041 = bigint(-11459519);
		bigint_t* _4470290069843611448528 = bigint_add(_460254755202086420349, _17448272306299737041 );
		bigint_to_string(_4470290069843611448528, 10, buffer);
		printf("trying ");
		puts("add(-141, -11459519)");
		puts(buffer);
		assert(strcmp(buffer, "-11459660") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_460254755202086420349);
		bigint_free(_17448272306299737041);
		bigint_free(_4470290069843611448528);

	

		bigint_t* _3007579769209236331542;
		bigint_t* _2820216846133034974454 = bigint(-141);
		bigint_t* _3544994055400216961431 = bigint(-11459519);
		bigint_t* _2358347555866202609148 = bigint_sub(_2820216846133034974454, _3544994055400216961431 );
		bigint_to_string(_2358347555866202609148, 10, buffer);
		printf("trying ");
		puts("sub(-141, -11459519)");
		puts(buffer);
		assert(strcmp(buffer, "11459378") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2820216846133034974454);
		bigint_free(_3544994055400216961431);
		bigint_free(_2358347555866202609148);

	

		bigint_t* _3765988482556981319303;
		bigint_t* _2289567829745773452396 = bigint(-144);
		bigint_t* _3769451081527831340563 = bigint(13228940);
		bigint_t* _839830882393799900375 = bigint_mul(_2289567829745773452396, _3769451081527831340563 );
		bigint_to_string(_839830882393799900375, 10, buffer);
		printf("trying ");
		puts("mul(-144, 13228940)");
		puts(buffer);
		assert(strcmp(buffer, "-1904967360") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2289567829745773452396);
		bigint_free(_3769451081527831340563);
		bigint_free(_839830882393799900375);

	

		bigint_t* _1618807238956768395598;
		bigint_t* _3642281536976899869869 = bigint(-144);
		bigint_t* _1144520516087505454314 = bigint(13228940);
		bigint_t* _2310109455283228736631 = bigint_add(_3642281536976899869869, _1144520516087505454314 );
		bigint_to_string(_2310109455283228736631, 10, buffer);
		printf("trying ");
		puts("add(-144, 13228940)");
		puts(buffer);
		assert(strcmp(buffer, "13228796") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3642281536976899869869);
		bigint_free(_1144520516087505454314);
		bigint_free(_2310109455283228736631);

	

		bigint_t* _1515977406629196291700;
		bigint_t* _1409822033279837518100 = bigint(-144);
		bigint_t* _4109269558085533430111 = bigint(13228940);
		bigint_t* _3272686991790356244883 = bigint_sub(_1409822033279837518100, _4109269558085533430111 );
		bigint_to_string(_3272686991790356244883, 10, buffer);
		printf("trying ");
		puts("sub(-144, 13228940)");
		puts(buffer);
		assert(strcmp(buffer, "-13229084") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1409822033279837518100);
		bigint_free(_4109269558085533430111);
		bigint_free(_3272686991790356244883);

	

		bigint_t* _1762793300760395687168;
		bigint_t* _682258090050200285520 = bigint(129);
		bigint_t* _578339635054050587748 = bigint(-13532067);
		bigint_t* _952264288957487856462 = bigint_mul(_682258090050200285520, _578339635054050587748 );
		bigint_to_string(_952264288957487856462, 10, buffer);
		printf("trying ");
		puts("mul(129, -13532067)");
		puts(buffer);
		assert(strcmp(buffer, "-1745636643") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_682258090050200285520);
		bigint_free(_578339635054050587748);
		bigint_free(_952264288957487856462);

	

		bigint_t* _4468746974061033643277;
		bigint_t* _2709800738224147997173 = bigint(129);
		bigint_t* _2300555360301704586204 = bigint(-13532067);
		bigint_t* _61498157035113411822 = bigint_add(_2709800738224147997173, _2300555360301704586204 );
		bigint_to_string(_61498157035113411822, 10, buffer);
		printf("trying ");
		puts("add(129, -13532067)");
		puts(buffer);
		assert(strcmp(buffer, "-13531938") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2709800738224147997173);
		bigint_free(_2300555360301704586204);
		bigint_free(_61498157035113411822);

	

		bigint_t* _689199752869158253267;
		bigint_t* _154368980442578886856 = bigint(129);
		bigint_t* _3599083928731692326895 = bigint(-13532067);
		bigint_t* _1997812748833087513206 = bigint_sub(_154368980442578886856, _3599083928731692326895 );
		bigint_to_string(_1997812748833087513206, 10, buffer);
		printf("trying ");
		puts("sub(129, -13532067)");
		puts(buffer);
		assert(strcmp(buffer, "13532196") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_154368980442578886856);
		bigint_free(_3599083928731692326895);
		bigint_free(_1997812748833087513206);

	

		bigint_t* _3990853045878824443790;
		bigint_t* _4063748321016243366277 = bigint(125);
		bigint_t* _2751315881756549707653 = bigint(-4640429);
		bigint_t* _1600881051598490398582 = bigint_mul(_4063748321016243366277, _2751315881756549707653 );
		bigint_to_string(_1600881051598490398582, 10, buffer);
		printf("trying ");
		puts("mul(125, -4640429)");
		puts(buffer);
		assert(strcmp(buffer, "-580053625") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4063748321016243366277);
		bigint_free(_2751315881756549707653);
		bigint_free(_1600881051598490398582);

	

		bigint_t* _263841586811948546587;
		bigint_t* _996893825684474133635 = bigint(125);
		bigint_t* _351315600100036773404 = bigint(-4640429);
		bigint_t* _1975819854135943934694 = bigint_add(_996893825684474133635, _351315600100036773404 );
		bigint_to_string(_1975819854135943934694, 10, buffer);
		printf("trying ");
		puts("add(125, -4640429)");
		puts(buffer);
		assert(strcmp(buffer, "-4640304") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_996893825684474133635);
		bigint_free(_351315600100036773404);
		bigint_free(_1975819854135943934694);

	

		bigint_t* _214472622699568462909;
		bigint_t* _2601781608471564255344 = bigint(125);
		bigint_t* _1228894340913725050779 = bigint(-4640429);
		bigint_t* _2833785161218574731017 = bigint_sub(_2601781608471564255344, _1228894340913725050779 );
		bigint_to_string(_2833785161218574731017, 10, buffer);
		printf("trying ");
		puts("sub(125, -4640429)");
		puts(buffer);
		assert(strcmp(buffer, "4640554") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2601781608471564255344);
		bigint_free(_1228894340913725050779);
		bigint_free(_2833785161218574731017);

	

		bigint_t* _1280943599209737603185;
		bigint_t* _4698715957879041392306 = bigint(-28);
		bigint_t* _2339021487829422532972 = bigint(-2980757);
		bigint_t* _2602931841637680955071 = bigint_mul(_4698715957879041392306, _2339021487829422532972 );
		bigint_to_string(_2602931841637680955071, 10, buffer);
		printf("trying ");
		puts("mul(-28, -2980757)");
		puts(buffer);
		assert(strcmp(buffer, "83461196") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4698715957879041392306);
		bigint_free(_2339021487829422532972);
		bigint_free(_2602931841637680955071);

	

		bigint_t* _2372398269942286747117;
		bigint_t* _2949230272237175769895 = bigint(-28);
		bigint_t* _2864833054648347819299 = bigint(-2980757);
		bigint_t* _1910890593259413769653 = bigint_add(_2949230272237175769895, _2864833054648347819299 );
		bigint_to_string(_1910890593259413769653, 10, buffer);
		printf("trying ");
		puts("add(-28, -2980757)");
		puts(buffer);
		assert(strcmp(buffer, "-2980785") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2949230272237175769895);
		bigint_free(_2864833054648347819299);
		bigint_free(_1910890593259413769653);

	

		bigint_t* _2520441828597572927852;
		bigint_t* _3840609585984053367212 = bigint(-28);
		bigint_t* _913402035788284870352 = bigint(-2980757);
		bigint_t* _3716807612711358192607 = bigint_sub(_3840609585984053367212, _913402035788284870352 );
		bigint_to_string(_3716807612711358192607, 10, buffer);
		printf("trying ");
		puts("sub(-28, -2980757)");
		puts(buffer);
		assert(strcmp(buffer, "2980729") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3840609585984053367212);
		bigint_free(_913402035788284870352);
		bigint_free(_3716807612711358192607);

	

		bigint_t* _3265933877674486720081;
		bigint_t* _969506196273732909301 = bigint(186);
		bigint_t* _4512209734085364736875 = bigint(13833794);
		bigint_t* _2192471683817114126843 = bigint_mul(_969506196273732909301, _4512209734085364736875 );
		bigint_to_string(_2192471683817114126843, 10, buffer);
		printf("trying ");
		puts("mul(186, 13833794)");
		puts(buffer);
		assert(strcmp(buffer, "2573085684") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_969506196273732909301);
		bigint_free(_4512209734085364736875);
		bigint_free(_2192471683817114126843);

	

		bigint_t* _2440832985414754227239;
		bigint_t* _357176873252480063685 = bigint(186);
		bigint_t* _431949117396622797308 = bigint(13833794);
		bigint_t* _1987633241566221095838 = bigint_add(_357176873252480063685, _431949117396622797308 );
		bigint_to_string(_1987633241566221095838, 10, buffer);
		printf("trying ");
		puts("add(186, 13833794)");
		puts(buffer);
		assert(strcmp(buffer, "13833980") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_357176873252480063685);
		bigint_free(_431949117396622797308);
		bigint_free(_1987633241566221095838);

	

		bigint_t* _118754043874249976235;
		bigint_t* _1530662583911758301858 = bigint(186);
		bigint_t* _1106539834923682846037 = bigint(13833794);
		bigint_t* _3664588395939926405757 = bigint_sub(_1530662583911758301858, _1106539834923682846037 );
		bigint_to_string(_3664588395939926405757, 10, buffer);
		printf("trying ");
		puts("sub(186, 13833794)");
		puts(buffer);
		assert(strcmp(buffer, "-13833608") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1530662583911758301858);
		bigint_free(_1106539834923682846037);
		bigint_free(_3664588395939926405757);

	

		bigint_t* _4204569841316102699060;
		bigint_t* _401723587768387666915 = bigint(12);
		bigint_t* _1597654312190701220136 = bigint(8521235);
		bigint_t* _2843811465963348623084 = bigint_mul(_401723587768387666915, _1597654312190701220136 );
		bigint_to_string(_2843811465963348623084, 10, buffer);
		printf("trying ");
		puts("mul(12, 8521235)");
		puts(buffer);
		assert(strcmp(buffer, "102254820") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_401723587768387666915);
		bigint_free(_1597654312190701220136);
		bigint_free(_2843811465963348623084);

	

		bigint_t* _1637827027550890265094;
		bigint_t* _2297866654007172303351 = bigint(12);
		bigint_t* _1254739466966239749489 = bigint(8521235);
		bigint_t* _2860143182070870836694 = bigint_add(_2297866654007172303351, _1254739466966239749489 );
		bigint_to_string(_2860143182070870836694, 10, buffer);
		printf("trying ");
		puts("add(12, 8521235)");
		puts(buffer);
		assert(strcmp(buffer, "8521247") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2297866654007172303351);
		bigint_free(_1254739466966239749489);
		bigint_free(_2860143182070870836694);

	

		bigint_t* _609207799593680216120;
		bigint_t* _1101721415723845787531 = bigint(12);
		bigint_t* _2759119919663486951924 = bigint(8521235);
		bigint_t* _3159355973988410773175 = bigint_sub(_1101721415723845787531, _2759119919663486951924 );
		bigint_to_string(_3159355973988410773175, 10, buffer);
		printf("trying ");
		puts("sub(12, 8521235)");
		puts(buffer);
		assert(strcmp(buffer, "-8521223") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1101721415723845787531);
		bigint_free(_2759119919663486951924);
		bigint_free(_3159355973988410773175);

	

		bigint_t* _2865280284028483514611;
		bigint_t* _3606146263465808557706 = bigint(121);
		bigint_t* _3745528429170374873520 = bigint(-15261906);
		bigint_t* _1353860623694447625012 = bigint_mul(_3606146263465808557706, _3745528429170374873520 );
		bigint_to_string(_1353860623694447625012, 10, buffer);
		printf("trying ");
		puts("mul(121, -15261906)");
		puts(buffer);
		assert(strcmp(buffer, "-1846690626") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3606146263465808557706);
		bigint_free(_3745528429170374873520);
		bigint_free(_1353860623694447625012);

	

		bigint_t* _2474029393445124574368;
		bigint_t* _867294695552877694611 = bigint(121);
		bigint_t* _3386549124930627570060 = bigint(-15261906);
		bigint_t* _4027073645378132089092 = bigint_add(_867294695552877694611, _3386549124930627570060 );
		bigint_to_string(_4027073645378132089092, 10, buffer);
		printf("trying ");
		puts("add(121, -15261906)");
		puts(buffer);
		assert(strcmp(buffer, "-15261785") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_867294695552877694611);
		bigint_free(_3386549124930627570060);
		bigint_free(_4027073645378132089092);

	

		bigint_t* _911488838484810858700;
		bigint_t* _3558005340178838136563 = bigint(121);
		bigint_t* _2075465051931199619319 = bigint(-15261906);
		bigint_t* _3844923982711995952433 = bigint_sub(_3558005340178838136563, _2075465051931199619319 );
		bigint_to_string(_3844923982711995952433, 10, buffer);
		printf("trying ");
		puts("sub(121, -15261906)");
		puts(buffer);
		assert(strcmp(buffer, "15262027") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3558005340178838136563);
		bigint_free(_2075465051931199619319);
		bigint_free(_3844923982711995952433);

	

		bigint_t* _3046490081674482684458;
		bigint_t* _2129616588395704421352 = bigint(250);
		bigint_t* _3664218803646062572168 = bigint(-2601508);
		bigint_t* _900786902763824744514 = bigint_mul(_2129616588395704421352, _3664218803646062572168 );
		bigint_to_string(_900786902763824744514, 10, buffer);
		printf("trying ");
		puts("mul(250, -2601508)");
		puts(buffer);
		assert(strcmp(buffer, "-650377000") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2129616588395704421352);
		bigint_free(_3664218803646062572168);
		bigint_free(_900786902763824744514);

	

		bigint_t* _832958633493475114739;
		bigint_t* _2930799609807178972744 = bigint(250);
		bigint_t* _3747767257675046803786 = bigint(-2601508);
		bigint_t* _3409430231183374651103 = bigint_add(_2930799609807178972744, _3747767257675046803786 );
		bigint_to_string(_3409430231183374651103, 10, buffer);
		printf("trying ");
		puts("add(250, -2601508)");
		puts(buffer);
		assert(strcmp(buffer, "-2601258") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2930799609807178972744);
		bigint_free(_3747767257675046803786);
		bigint_free(_3409430231183374651103);

	

		bigint_t* _656548305679859903554;
		bigint_t* _3175553466594456573568 = bigint(250);
		bigint_t* _3624142199246756191343 = bigint(-2601508);
		bigint_t* _2508794905199363554884 = bigint_sub(_3175553466594456573568, _3624142199246756191343 );
		bigint_to_string(_2508794905199363554884, 10, buffer);
		printf("trying ");
		puts("sub(250, -2601508)");
		puts(buffer);
		assert(strcmp(buffer, "2601758") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3175553466594456573568);
		bigint_free(_3624142199246756191343);
		bigint_free(_2508794905199363554884);

	

		bigint_t* _1425337350320597965893;
		bigint_t* _2626342629591565040139 = bigint(-185);
		bigint_t* _3601745433674457139435 = bigint(-14778301);
		bigint_t* _3095521400595044017474 = bigint_mul(_2626342629591565040139, _3601745433674457139435 );
		bigint_to_string(_3095521400595044017474, 10, buffer);
		printf("trying ");
		puts("mul(-185, -14778301)");
		puts(buffer);
		assert(strcmp(buffer, "2733985685") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2626342629591565040139);
		bigint_free(_3601745433674457139435);
		bigint_free(_3095521400595044017474);

	

		bigint_t* _4446028130770194484068;
		bigint_t* _1433438151045970054653 = bigint(-185);
		bigint_t* _2010098320675030834964 = bigint(-14778301);
		bigint_t* _1771102851117516150835 = bigint_add(_1433438151045970054653, _2010098320675030834964 );
		bigint_to_string(_1771102851117516150835, 10, buffer);
		printf("trying ");
		puts("add(-185, -14778301)");
		puts(buffer);
		assert(strcmp(buffer, "-14778486") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1433438151045970054653);
		bigint_free(_2010098320675030834964);
		bigint_free(_1771102851117516150835);

	

		bigint_t* _40508347370224716059;
		bigint_t* _1485093460404323653088 = bigint(-185);
		bigint_t* _3908790986203321837434 = bigint(-14778301);
		bigint_t* _1177946711778483481466 = bigint_sub(_1485093460404323653088, _3908790986203321837434 );
		bigint_to_string(_1177946711778483481466, 10, buffer);
		printf("trying ");
		puts("sub(-185, -14778301)");
		puts(buffer);
		assert(strcmp(buffer, "14778116") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1485093460404323653088);
		bigint_free(_3908790986203321837434);
		bigint_free(_1177946711778483481466);

	

		bigint_t* _720411932773629757743;
		bigint_t* _1584207007128427608402 = bigint(-99);
		bigint_t* _900155775997549030225 = bigint(13956835);
		bigint_t* _1287492494116513686776 = bigint_mul(_1584207007128427608402, _900155775997549030225 );
		bigint_to_string(_1287492494116513686776, 10, buffer);
		printf("trying ");
		puts("mul(-99, 13956835)");
		puts(buffer);
		assert(strcmp(buffer, "-1381726665") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1584207007128427608402);
		bigint_free(_900155775997549030225);
		bigint_free(_1287492494116513686776);

	

		bigint_t* _893452049802817177711;
		bigint_t* _3855241703256573400449 = bigint(-99);
		bigint_t* _1750917751415436827180 = bigint(13956835);
		bigint_t* _3965760347157596051716 = bigint_add(_3855241703256573400449, _1750917751415436827180 );
		bigint_to_string(_3965760347157596051716, 10, buffer);
		printf("trying ");
		puts("add(-99, 13956835)");
		puts(buffer);
		assert(strcmp(buffer, "13956736") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3855241703256573400449);
		bigint_free(_1750917751415436827180);
		bigint_free(_3965760347157596051716);

	

		bigint_t* _1666835694631329340572;
		bigint_t* _1839829803080344995161 = bigint(-99);
		bigint_t* _768645474689854004383 = bigint(13956835);
		bigint_t* _2855597366275332317313 = bigint_sub(_1839829803080344995161, _768645474689854004383 );
		bigint_to_string(_2855597366275332317313, 10, buffer);
		printf("trying ");
		puts("sub(-99, 13956835)");
		puts(buffer);
		assert(strcmp(buffer, "-13956934") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1839829803080344995161);
		bigint_free(_768645474689854004383);
		bigint_free(_2855597366275332317313);

	

		bigint_t* _759242896788329299774;
		bigint_t* _1770714924100715004597 = bigint(232);
		bigint_t* _2947022620304382144150 = bigint(-11768809);
		bigint_t* _2871041701232714921197 = bigint_mul(_1770714924100715004597, _2947022620304382144150 );
		bigint_to_string(_2871041701232714921197, 10, buffer);
		printf("trying ");
		puts("mul(232, -11768809)");
		puts(buffer);
		assert(strcmp(buffer, "-2730363688") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1770714924100715004597);
		bigint_free(_2947022620304382144150);
		bigint_free(_2871041701232714921197);

	

		bigint_t* _2296927678047818493793;
		bigint_t* _3546826920854172775661 = bigint(232);
		bigint_t* _3424131693647157149328 = bigint(-11768809);
		bigint_t* _3613386242485594559775 = bigint_add(_3546826920854172775661, _3424131693647157149328 );
		bigint_to_string(_3613386242485594559775, 10, buffer);
		printf("trying ");
		puts("add(232, -11768809)");
		puts(buffer);
		assert(strcmp(buffer, "-11768577") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3546826920854172775661);
		bigint_free(_3424131693647157149328);
		bigint_free(_3613386242485594559775);

	

		bigint_t* _1377838601734752204046;
		bigint_t* _601134975499702405209 = bigint(232);
		bigint_t* _2661420056562824857387 = bigint(-11768809);
		bigint_t* _3089881839628981266282 = bigint_sub(_601134975499702405209, _2661420056562824857387 );
		bigint_to_string(_3089881839628981266282, 10, buffer);
		printf("trying ");
		puts("sub(232, -11768809)");
		puts(buffer);
		assert(strcmp(buffer, "11769041") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_601134975499702405209);
		bigint_free(_2661420056562824857387);
		bigint_free(_3089881839628981266282);

	

		bigint_t* _4705288848155068325458;
		bigint_t* _3423454330784163705697 = bigint(153);
		bigint_t* _3552014043378518521558 = bigint(-10254613);
		bigint_t* _274685939549123766487 = bigint_mul(_3423454330784163705697, _3552014043378518521558 );
		bigint_to_string(_274685939549123766487, 10, buffer);
		printf("trying ");
		puts("mul(153, -10254613)");
		puts(buffer);
		assert(strcmp(buffer, "-1568955789") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3423454330784163705697);
		bigint_free(_3552014043378518521558);
		bigint_free(_274685939549123766487);

	

		bigint_t* _3140438805420690012081;
		bigint_t* _3789420034236805472656 = bigint(153);
		bigint_t* _1508609268765781865183 = bigint(-10254613);
		bigint_t* _3137370524645662647270 = bigint_add(_3789420034236805472656, _1508609268765781865183 );
		bigint_to_string(_3137370524645662647270, 10, buffer);
		printf("trying ");
		puts("add(153, -10254613)");
		puts(buffer);
		assert(strcmp(buffer, "-10254460") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3789420034236805472656);
		bigint_free(_1508609268765781865183);
		bigint_free(_3137370524645662647270);

	

		bigint_t* _4703577939908200641977;
		bigint_t* _4673556519798607802355 = bigint(153);
		bigint_t* _745237783073402625795 = bigint(-10254613);
		bigint_t* _2625984088196727948649 = bigint_sub(_4673556519798607802355, _745237783073402625795 );
		bigint_to_string(_2625984088196727948649, 10, buffer);
		printf("trying ");
		puts("sub(153, -10254613)");
		puts(buffer);
		assert(strcmp(buffer, "10254766") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4673556519798607802355);
		bigint_free(_745237783073402625795);
		bigint_free(_2625984088196727948649);

	

		bigint_t* _321827369045201921453;
		bigint_t* _3154023459865822244368 = bigint(147);
		bigint_t* _1307995021652243899846 = bigint(-2307060);
		bigint_t* _2807335899962365464432 = bigint_mul(_3154023459865822244368, _1307995021652243899846 );
		bigint_to_string(_2807335899962365464432, 10, buffer);
		printf("trying ");
		puts("mul(147, -2307060)");
		puts(buffer);
		assert(strcmp(buffer, "-339137820") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3154023459865822244368);
		bigint_free(_1307995021652243899846);
		bigint_free(_2807335899962365464432);

	

		bigint_t* _683677585264029294180;
		bigint_t* _523190512520978676465 = bigint(147);
		bigint_t* _1368984232358713419209 = bigint(-2307060);
		bigint_t* _1684853189407659377045 = bigint_add(_523190512520978676465, _1368984232358713419209 );
		bigint_to_string(_1684853189407659377045, 10, buffer);
		printf("trying ");
		puts("add(147, -2307060)");
		puts(buffer);
		assert(strcmp(buffer, "-2306913") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_523190512520978676465);
		bigint_free(_1368984232358713419209);
		bigint_free(_1684853189407659377045);

	

		bigint_t* _2090871828899663396421;
		bigint_t* _356205082076028714315 = bigint(147);
		bigint_t* _818756801904210775119 = bigint(-2307060);
		bigint_t* _1461157477944404075233 = bigint_sub(_356205082076028714315, _818756801904210775119 );
		bigint_to_string(_1461157477944404075233, 10, buffer);
		printf("trying ");
		puts("sub(147, -2307060)");
		puts(buffer);
		assert(strcmp(buffer, "2307207") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_356205082076028714315);
		bigint_free(_818756801904210775119);
		bigint_free(_1461157477944404075233);

	

		bigint_t* _1493187583114269424715;
		bigint_t* _560819258473496569285 = bigint(-31);
		bigint_t* _2465872078239481753372 = bigint(-3240253);
		bigint_t* _2721113927086098219481 = bigint_mul(_560819258473496569285, _2465872078239481753372 );
		bigint_to_string(_2721113927086098219481, 10, buffer);
		printf("trying ");
		puts("mul(-31, -3240253)");
		puts(buffer);
		assert(strcmp(buffer, "100447843") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_560819258473496569285);
		bigint_free(_2465872078239481753372);
		bigint_free(_2721113927086098219481);

	

		bigint_t* _4720852975683532899644;
		bigint_t* _998176468427061615117 = bigint(-31);
		bigint_t* _3247472514309558495348 = bigint(-3240253);
		bigint_t* _217116958040531753840 = bigint_add(_998176468427061615117, _3247472514309558495348 );
		bigint_to_string(_217116958040531753840, 10, buffer);
		printf("trying ");
		puts("add(-31, -3240253)");
		puts(buffer);
		assert(strcmp(buffer, "-3240284") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_998176468427061615117);
		bigint_free(_3247472514309558495348);
		bigint_free(_217116958040531753840);

	

		bigint_t* _1757724054871033807532;
		bigint_t* _302832619553760296071 = bigint(-31);
		bigint_t* _2300752031133490741940 = bigint(-3240253);
		bigint_t* _4271710705903539684238 = bigint_sub(_302832619553760296071, _2300752031133490741940 );
		bigint_to_string(_4271710705903539684238, 10, buffer);
		printf("trying ");
		puts("sub(-31, -3240253)");
		puts(buffer);
		assert(strcmp(buffer, "3240222") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_302832619553760296071);
		bigint_free(_2300752031133490741940);
		bigint_free(_4271710705903539684238);

	

		bigint_t* _904675171047546683124;
		bigint_t* _2442432324813163716741 = bigint(149);
		bigint_t* _2231087854800209891208 = bigint(-13216395);
		bigint_t* _3170559125232613225253 = bigint_mul(_2442432324813163716741, _2231087854800209891208 );
		bigint_to_string(_3170559125232613225253, 10, buffer);
		printf("trying ");
		puts("mul(149, -13216395)");
		puts(buffer);
		assert(strcmp(buffer, "-1969242855") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2442432324813163716741);
		bigint_free(_2231087854800209891208);
		bigint_free(_3170559125232613225253);

	

		bigint_t* _3893433518809121137212;
		bigint_t* _610389914595319480160 = bigint(149);
		bigint_t* _1342907486968626880391 = bigint(-13216395);
		bigint_t* _3519694608344297138234 = bigint_add(_610389914595319480160, _1342907486968626880391 );
		bigint_to_string(_3519694608344297138234, 10, buffer);
		printf("trying ");
		puts("add(149, -13216395)");
		puts(buffer);
		assert(strcmp(buffer, "-13216246") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_610389914595319480160);
		bigint_free(_1342907486968626880391);
		bigint_free(_3519694608344297138234);

	

		bigint_t* _355439388724921946884;
		bigint_t* _3222940848440380473065 = bigint(149);
		bigint_t* _3969239649125539994897 = bigint(-13216395);
		bigint_t* _1353360080635967408334 = bigint_sub(_3222940848440380473065, _3969239649125539994897 );
		bigint_to_string(_1353360080635967408334, 10, buffer);
		printf("trying ");
		puts("sub(149, -13216395)");
		puts(buffer);
		assert(strcmp(buffer, "13216544") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3222940848440380473065);
		bigint_free(_3969239649125539994897);
		bigint_free(_1353360080635967408334);

	

		bigint_t* _4419244721921939052004;
		bigint_t* _1553035439480856018147 = bigint(152);
		bigint_t* _3559112688534415704443 = bigint(3466270);
		bigint_t* _2696544726977051579491 = bigint_mul(_1553035439480856018147, _3559112688534415704443 );
		bigint_to_string(_2696544726977051579491, 10, buffer);
		printf("trying ");
		puts("mul(152, 3466270)");
		puts(buffer);
		assert(strcmp(buffer, "526873040") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1553035439480856018147);
		bigint_free(_3559112688534415704443);
		bigint_free(_2696544726977051579491);

	

		bigint_t* _1720991131818695142458;
		bigint_t* _3753490567243181215551 = bigint(152);
		bigint_t* _4685719903584249796840 = bigint(3466270);
		bigint_t* _2932109683624576793053 = bigint_add(_3753490567243181215551, _4685719903584249796840 );
		bigint_to_string(_2932109683624576793053, 10, buffer);
		printf("trying ");
		puts("add(152, 3466270)");
		puts(buffer);
		assert(strcmp(buffer, "3466422") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3753490567243181215551);
		bigint_free(_4685719903584249796840);
		bigint_free(_2932109683624576793053);

	

		bigint_t* _231268483915677774231;
		bigint_t* _1286614199237034478390 = bigint(152);
		bigint_t* _2940479737650502026959 = bigint(3466270);
		bigint_t* _3815326197319529474557 = bigint_sub(_1286614199237034478390, _2940479737650502026959 );
		bigint_to_string(_3815326197319529474557, 10, buffer);
		printf("trying ");
		puts("sub(152, 3466270)");
		puts(buffer);
		assert(strcmp(buffer, "-3466118") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1286614199237034478390);
		bigint_free(_2940479737650502026959);
		bigint_free(_3815326197319529474557);

	

		bigint_t* _2453686230006876895665;
		bigint_t* _1901376145760692371677 = bigint(-67);
		bigint_t* _3039949831843857781036 = bigint(6708538);
		bigint_t* _2636424004197851329730 = bigint_mul(_1901376145760692371677, _3039949831843857781036 );
		bigint_to_string(_2636424004197851329730, 10, buffer);
		printf("trying ");
		puts("mul(-67, 6708538)");
		puts(buffer);
		assert(strcmp(buffer, "-449472046") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1901376145760692371677);
		bigint_free(_3039949831843857781036);
		bigint_free(_2636424004197851329730);

	

		bigint_t* _3984379371108528972563;
		bigint_t* _988537229566252941080 = bigint(-67);
		bigint_t* _2567821598432379224594 = bigint(6708538);
		bigint_t* _742707477965537341718 = bigint_add(_988537229566252941080, _2567821598432379224594 );
		bigint_to_string(_742707477965537341718, 10, buffer);
		printf("trying ");
		puts("add(-67, 6708538)");
		puts(buffer);
		assert(strcmp(buffer, "6708471") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_988537229566252941080);
		bigint_free(_2567821598432379224594);
		bigint_free(_742707477965537341718);

	

		bigint_t* _1553533590492754211570;
		bigint_t* _2165035200301997161898 = bigint(-67);
		bigint_t* _3421882594089629564879 = bigint(6708538);
		bigint_t* _2956149086065992583689 = bigint_sub(_2165035200301997161898, _3421882594089629564879 );
		bigint_to_string(_2956149086065992583689, 10, buffer);
		printf("trying ");
		puts("sub(-67, 6708538)");
		puts(buffer);
		assert(strcmp(buffer, "-6708605") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2165035200301997161898);
		bigint_free(_3421882594089629564879);
		bigint_free(_2956149086065992583689);

	

		bigint_t* _4394488641986213493273;
		bigint_t* _1676803460310634328373 = bigint(-238);
		bigint_t* _1460377951613093872123 = bigint(-10459768);
		bigint_t* _3364279840615842529948 = bigint_mul(_1676803460310634328373, _1460377951613093872123 );
		bigint_to_string(_3364279840615842529948, 10, buffer);
		printf("trying ");
		puts("mul(-238, -10459768)");
		puts(buffer);
		assert(strcmp(buffer, "2489424784") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1676803460310634328373);
		bigint_free(_1460377951613093872123);
		bigint_free(_3364279840615842529948);

	

		bigint_t* _4687115116403333565684;
		bigint_t* _1585235397190080589184 = bigint(-238);
		bigint_t* _4476161918506865961714 = bigint(-10459768);
		bigint_t* _4308962341137028556387 = bigint_add(_1585235397190080589184, _4476161918506865961714 );
		bigint_to_string(_4308962341137028556387, 10, buffer);
		printf("trying ");
		puts("add(-238, -10459768)");
		puts(buffer);
		assert(strcmp(buffer, "-10460006") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1585235397190080589184);
		bigint_free(_4476161918506865961714);
		bigint_free(_4308962341137028556387);

	

		bigint_t* _1564348437356367614877;
		bigint_t* _4700054577049081365042 = bigint(-238);
		bigint_t* _1625226248257761690117 = bigint(-10459768);
		bigint_t* _4552548006113748537228 = bigint_sub(_4700054577049081365042, _1625226248257761690117 );
		bigint_to_string(_4552548006113748537228, 10, buffer);
		printf("trying ");
		puts("sub(-238, -10459768)");
		puts(buffer);
		assert(strcmp(buffer, "10459530") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4700054577049081365042);
		bigint_free(_1625226248257761690117);
		bigint_free(_4552548006113748537228);

	

		bigint_t* _3591756619306786040745;
		bigint_t* _4320054662730821329048 = bigint(37);
		bigint_t* _1582659592805528734590 = bigint(-15019664);
		bigint_t* _2777812763811887201821 = bigint_mul(_4320054662730821329048, _1582659592805528734590 );
		bigint_to_string(_2777812763811887201821, 10, buffer);
		printf("trying ");
		puts("mul(37, -15019664)");
		puts(buffer);
		assert(strcmp(buffer, "-555727568") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4320054662730821329048);
		bigint_free(_1582659592805528734590);
		bigint_free(_2777812763811887201821);

	

		bigint_t* _4508305150702762290904;
		bigint_t* _1905048076827558404060 = bigint(37);
		bigint_t* _4516862422335503351756 = bigint(-15019664);
		bigint_t* _719137734704268858830 = bigint_add(_1905048076827558404060, _4516862422335503351756 );
		bigint_to_string(_719137734704268858830, 10, buffer);
		printf("trying ");
		puts("add(37, -15019664)");
		puts(buffer);
		assert(strcmp(buffer, "-15019627") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1905048076827558404060);
		bigint_free(_4516862422335503351756);
		bigint_free(_719137734704268858830);

	

		bigint_t* _3283896474049196174040;
		bigint_t* _3387302546774100479870 = bigint(37);
		bigint_t* _2610597356932899008229 = bigint(-15019664);
		bigint_t* _1243709215736700441554 = bigint_sub(_3387302546774100479870, _2610597356932899008229 );
		bigint_to_string(_1243709215736700441554, 10, buffer);
		printf("trying ");
		puts("sub(37, -15019664)");
		puts(buffer);
		assert(strcmp(buffer, "15019701") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3387302546774100479870);
		bigint_free(_2610597356932899008229);
		bigint_free(_1243709215736700441554);

	

		bigint_t* _2277074630650307740600;
		bigint_t* _2557015624935224739727 = bigint(94);
		bigint_t* _2656942814787477355634 = bigint(-8274134);
		bigint_t* _349279834810508466275 = bigint_mul(_2557015624935224739727, _2656942814787477355634 );
		bigint_to_string(_349279834810508466275, 10, buffer);
		printf("trying ");
		puts("mul(94, -8274134)");
		puts(buffer);
		assert(strcmp(buffer, "-777768596") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2557015624935224739727);
		bigint_free(_2656942814787477355634);
		bigint_free(_349279834810508466275);

	

		bigint_t* _2753775965761182854158;
		bigint_t* _1456970739847431867265 = bigint(94);
		bigint_t* _1152944890579349416476 = bigint(-8274134);
		bigint_t* _1240528615152134096402 = bigint_add(_1456970739847431867265, _1152944890579349416476 );
		bigint_to_string(_1240528615152134096402, 10, buffer);
		printf("trying ");
		puts("add(94, -8274134)");
		puts(buffer);
		assert(strcmp(buffer, "-8274040") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1456970739847431867265);
		bigint_free(_1152944890579349416476);
		bigint_free(_1240528615152134096402);

	

		bigint_t* _357959804961088025299;
		bigint_t* _2813193471173015177604 = bigint(94);
		bigint_t* _341978111854150776538 = bigint(-8274134);
		bigint_t* _2461011202338495199656 = bigint_sub(_2813193471173015177604, _341978111854150776538 );
		bigint_to_string(_2461011202338495199656, 10, buffer);
		printf("trying ");
		puts("sub(94, -8274134)");
		puts(buffer);
		assert(strcmp(buffer, "8274228") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2813193471173015177604);
		bigint_free(_341978111854150776538);
		bigint_free(_2461011202338495199656);

	

		bigint_t* _1464966708113247681387;
		bigint_t* _2158691368971674450689 = bigint(83);
		bigint_t* _1490243246322781538866 = bigint(-32925);
		bigint_t* _85303837707458107922 = bigint_mul(_2158691368971674450689, _1490243246322781538866 );
		bigint_to_string(_85303837707458107922, 10, buffer);
		printf("trying ");
		puts("mul(83, -32925)");
		puts(buffer);
		assert(strcmp(buffer, "-2732775") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2158691368971674450689);
		bigint_free(_1490243246322781538866);
		bigint_free(_85303837707458107922);

	

		bigint_t* _783840917476951989411;
		bigint_t* _4645612214986057987821 = bigint(83);
		bigint_t* _2528647216457541590050 = bigint(-32925);
		bigint_t* _705964780839365604169 = bigint_add(_4645612214986057987821, _2528647216457541590050 );
		bigint_to_string(_705964780839365604169, 10, buffer);
		printf("trying ");
		puts("add(83, -32925)");
		puts(buffer);
		assert(strcmp(buffer, "-32842") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4645612214986057987821);
		bigint_free(_2528647216457541590050);
		bigint_free(_705964780839365604169);

	

		bigint_t* _1802690979379130491986;
		bigint_t* _2051703141349428720332 = bigint(83);
		bigint_t* _343721725156082158848 = bigint(-32925);
		bigint_t* _4235476176201573877235 = bigint_sub(_2051703141349428720332, _343721725156082158848 );
		bigint_to_string(_4235476176201573877235, 10, buffer);
		printf("trying ");
		puts("sub(83, -32925)");
		puts(buffer);
		assert(strcmp(buffer, "33008") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2051703141349428720332);
		bigint_free(_343721725156082158848);
		bigint_free(_4235476176201573877235);

	

		bigint_t* _1825850592001357100672;
		bigint_t* _1769344986573922228808 = bigint(-85);
		bigint_t* _3146000800658231579225 = bigint(6752604);
		bigint_t* _2099771044337180279318 = bigint_mul(_1769344986573922228808, _3146000800658231579225 );
		bigint_to_string(_2099771044337180279318, 10, buffer);
		printf("trying ");
		puts("mul(-85, 6752604)");
		puts(buffer);
		assert(strcmp(buffer, "-573971340") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1769344986573922228808);
		bigint_free(_3146000800658231579225);
		bigint_free(_2099771044337180279318);

	

		bigint_t* _1740624377301667948825;
		bigint_t* _242560193104591779546 = bigint(-85);
		bigint_t* _800787704937597301806 = bigint(6752604);
		bigint_t* _1354297284478572155526 = bigint_add(_242560193104591779546, _800787704937597301806 );
		bigint_to_string(_1354297284478572155526, 10, buffer);
		printf("trying ");
		puts("add(-85, 6752604)");
		puts(buffer);
		assert(strcmp(buffer, "6752519") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_242560193104591779546);
		bigint_free(_800787704937597301806);
		bigint_free(_1354297284478572155526);

	

		bigint_t* _3941033281814040924514;
		bigint_t* _2165919425840182218867 = bigint(-85);
		bigint_t* _2980967236083245605712 = bigint(6752604);
		bigint_t* _752251107178763394191 = bigint_sub(_2165919425840182218867, _2980967236083245605712 );
		bigint_to_string(_752251107178763394191, 10, buffer);
		printf("trying ");
		puts("sub(-85, 6752604)");
		puts(buffer);
		assert(strcmp(buffer, "-6752689") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2165919425840182218867);
		bigint_free(_2980967236083245605712);
		bigint_free(_752251107178763394191);

	

		bigint_t* _1328855095522802144504;
		bigint_t* _763997524064098243023 = bigint(6);
		bigint_t* _2982015159675921224962 = bigint(-4980930);
		bigint_t* _1134470976304675327262 = bigint_mul(_763997524064098243023, _2982015159675921224962 );
		bigint_to_string(_1134470976304675327262, 10, buffer);
		printf("trying ");
		puts("mul(6, -4980930)");
		puts(buffer);
		assert(strcmp(buffer, "-29885580") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_763997524064098243023);
		bigint_free(_2982015159675921224962);
		bigint_free(_1134470976304675327262);

	

		bigint_t* _4065711293541629322792;
		bigint_t* _1443356805810251443849 = bigint(6);
		bigint_t* _2784491754839252357023 = bigint(-4980930);
		bigint_t* _3446931343644677399015 = bigint_add(_1443356805810251443849, _2784491754839252357023 );
		bigint_to_string(_3446931343644677399015, 10, buffer);
		printf("trying ");
		puts("add(6, -4980930)");
		puts(buffer);
		assert(strcmp(buffer, "-4980924") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1443356805810251443849);
		bigint_free(_2784491754839252357023);
		bigint_free(_3446931343644677399015);

	

		bigint_t* _2455354028589671183424;
		bigint_t* _1126711569511827374239 = bigint(6);
		bigint_t* _2091130119032557356434 = bigint(-4980930);
		bigint_t* _1520110866184416993175 = bigint_sub(_1126711569511827374239, _2091130119032557356434 );
		bigint_to_string(_1520110866184416993175, 10, buffer);
		printf("trying ");
		puts("sub(6, -4980930)");
		puts(buffer);
		assert(strcmp(buffer, "4980936") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1126711569511827374239);
		bigint_free(_2091130119032557356434);
		bigint_free(_1520110866184416993175);

	

		bigint_t* _2947039186856100450341;
		bigint_t* _1468078086957820487622 = bigint(-126);
		bigint_t* _2553881451941327932041 = bigint(7965956);
		bigint_t* _4634941389061381278122 = bigint_mul(_1468078086957820487622, _2553881451941327932041 );
		bigint_to_string(_4634941389061381278122, 10, buffer);
		printf("trying ");
		puts("mul(-126, 7965956)");
		puts(buffer);
		assert(strcmp(buffer, "-1003710456") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1468078086957820487622);
		bigint_free(_2553881451941327932041);
		bigint_free(_4634941389061381278122);

	

		bigint_t* _170935993823757793759;
		bigint_t* _4286457740885091659633 = bigint(-126);
		bigint_t* _955395863193450540956 = bigint(7965956);
		bigint_t* _640989742783235812347 = bigint_add(_4286457740885091659633, _955395863193450540956 );
		bigint_to_string(_640989742783235812347, 10, buffer);
		printf("trying ");
		puts("add(-126, 7965956)");
		puts(buffer);
		assert(strcmp(buffer, "7965830") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4286457740885091659633);
		bigint_free(_955395863193450540956);
		bigint_free(_640989742783235812347);

	

		bigint_t* _4332196519761277186894;
		bigint_t* _351547538002658761597 = bigint(-126);
		bigint_t* _985719196207145457929 = bigint(7965956);
		bigint_t* _2520522441206867762167 = bigint_sub(_351547538002658761597, _985719196207145457929 );
		bigint_to_string(_2520522441206867762167, 10, buffer);
		printf("trying ");
		puts("sub(-126, 7965956)");
		puts(buffer);
		assert(strcmp(buffer, "-7966082") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_351547538002658761597);
		bigint_free(_985719196207145457929);
		bigint_free(_2520522441206867762167);

	

		bigint_t* _495631565801807745853;
		bigint_t* _3202797380263630695758 = bigint(-218);
		bigint_t* _4655490574419382655640 = bigint(15624007);
		bigint_t* _1443795356778532630245 = bigint_mul(_3202797380263630695758, _4655490574419382655640 );
		bigint_to_string(_1443795356778532630245, 10, buffer);
		printf("trying ");
		puts("mul(-218, 15624007)");
		puts(buffer);
		assert(strcmp(buffer, "-3406033526") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3202797380263630695758);
		bigint_free(_4655490574419382655640);
		bigint_free(_1443795356778532630245);

	

		bigint_t* _4712033364243934691070;
		bigint_t* _178426514902896394489 = bigint(-218);
		bigint_t* _3989523914652584111336 = bigint(15624007);
		bigint_t* _49057694197783239099 = bigint_add(_178426514902896394489, _3989523914652584111336 );
		bigint_to_string(_49057694197783239099, 10, buffer);
		printf("trying ");
		puts("add(-218, 15624007)");
		puts(buffer);
		assert(strcmp(buffer, "15623789") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_178426514902896394489);
		bigint_free(_3989523914652584111336);
		bigint_free(_49057694197783239099);

	

		bigint_t* _3376750758545689631614;
		bigint_t* _2653400200145435239898 = bigint(-218);
		bigint_t* _1574195403914700729385 = bigint(15624007);
		bigint_t* _4581063800665780128217 = bigint_sub(_2653400200145435239898, _1574195403914700729385 );
		bigint_to_string(_4581063800665780128217, 10, buffer);
		printf("trying ");
		puts("sub(-218, 15624007)");
		puts(buffer);
		assert(strcmp(buffer, "-15624225") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2653400200145435239898);
		bigint_free(_1574195403914700729385);
		bigint_free(_4581063800665780128217);

	

		bigint_t* _916057850166238496505;
		bigint_t* _4365815531498137091166 = bigint(-164);
		bigint_t* _4703657743659315362942 = bigint(462210);
		bigint_t* _885929391900076880039 = bigint_mul(_4365815531498137091166, _4703657743659315362942 );
		bigint_to_string(_885929391900076880039, 10, buffer);
		printf("trying ");
		puts("mul(-164, 462210)");
		puts(buffer);
		assert(strcmp(buffer, "-75802440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4365815531498137091166);
		bigint_free(_4703657743659315362942);
		bigint_free(_885929391900076880039);

	

		bigint_t* _1562028059610559778684;
		bigint_t* _4070272391311346384029 = bigint(-164);
		bigint_t* _3170092958810876908309 = bigint(462210);
		bigint_t* _621259833826300744519 = bigint_add(_4070272391311346384029, _3170092958810876908309 );
		bigint_to_string(_621259833826300744519, 10, buffer);
		printf("trying ");
		puts("add(-164, 462210)");
		puts(buffer);
		assert(strcmp(buffer, "462046") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4070272391311346384029);
		bigint_free(_3170092958810876908309);
		bigint_free(_621259833826300744519);

	

		bigint_t* _1186376742727803839487;
		bigint_t* _4383987773454831167144 = bigint(-164);
		bigint_t* _2376391633708340565812 = bigint(462210);
		bigint_t* _2619020162217302749896 = bigint_sub(_4383987773454831167144, _2376391633708340565812 );
		bigint_to_string(_2619020162217302749896, 10, buffer);
		printf("trying ");
		puts("sub(-164, 462210)");
		puts(buffer);
		assert(strcmp(buffer, "-462374") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4383987773454831167144);
		bigint_free(_2376391633708340565812);
		bigint_free(_2619020162217302749896);

	

		bigint_t* _1735588600294738199104;
		bigint_t* _1171019378912084728098 = bigint(215);
		bigint_t* _4026664872324651085148 = bigint(-1102723);
		bigint_t* _2250447720018952464128 = bigint_mul(_1171019378912084728098, _4026664872324651085148 );
		bigint_to_string(_2250447720018952464128, 10, buffer);
		printf("trying ");
		puts("mul(215, -1102723)");
		puts(buffer);
		assert(strcmp(buffer, "-237085445") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1171019378912084728098);
		bigint_free(_4026664872324651085148);
		bigint_free(_2250447720018952464128);

	

		bigint_t* _1052332499932079973401;
		bigint_t* _3514785690931783121867 = bigint(215);
		bigint_t* _1983243412874768265212 = bigint(-1102723);
		bigint_t* _687895100969380608559 = bigint_add(_3514785690931783121867, _1983243412874768265212 );
		bigint_to_string(_687895100969380608559, 10, buffer);
		printf("trying ");
		puts("add(215, -1102723)");
		puts(buffer);
		assert(strcmp(buffer, "-1102508") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3514785690931783121867);
		bigint_free(_1983243412874768265212);
		bigint_free(_687895100969380608559);

	

		bigint_t* _797558939622776689039;
		bigint_t* _2923040067066878625980 = bigint(215);
		bigint_t* _1190855178782498231781 = bigint(-1102723);
		bigint_t* _1647290858380154635646 = bigint_sub(_2923040067066878625980, _1190855178782498231781 );
		bigint_to_string(_1647290858380154635646, 10, buffer);
		printf("trying ");
		puts("sub(215, -1102723)");
		puts(buffer);
		assert(strcmp(buffer, "1102938") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2923040067066878625980);
		bigint_free(_1190855178782498231781);
		bigint_free(_1647290858380154635646);

	

		bigint_t* _3705681767641435602819;
		bigint_t* _3677233185267539797519 = bigint(79);
		bigint_t* _4316238566389946089778 = bigint(-10743649);
		bigint_t* _1031486442728704408767 = bigint_mul(_3677233185267539797519, _4316238566389946089778 );
		bigint_to_string(_1031486442728704408767, 10, buffer);
		printf("trying ");
		puts("mul(79, -10743649)");
		puts(buffer);
		assert(strcmp(buffer, "-848748271") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3677233185267539797519);
		bigint_free(_4316238566389946089778);
		bigint_free(_1031486442728704408767);

	

		bigint_t* _1802330604183126116163;
		bigint_t* _4611587632001109239557 = bigint(79);
		bigint_t* _835082774305728237681 = bigint(-10743649);
		bigint_t* _2675073365632653822204 = bigint_add(_4611587632001109239557, _835082774305728237681 );
		bigint_to_string(_2675073365632653822204, 10, buffer);
		printf("trying ");
		puts("add(79, -10743649)");
		puts(buffer);
		assert(strcmp(buffer, "-10743570") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4611587632001109239557);
		bigint_free(_835082774305728237681);
		bigint_free(_2675073365632653822204);

	

		bigint_t* _1018918845170712699990;
		bigint_t* _1291568890227929346370 = bigint(79);
		bigint_t* _3828408057334698010489 = bigint(-10743649);
		bigint_t* _4218287344034759525268 = bigint_sub(_1291568890227929346370, _3828408057334698010489 );
		bigint_to_string(_4218287344034759525268, 10, buffer);
		printf("trying ");
		puts("sub(79, -10743649)");
		puts(buffer);
		assert(strcmp(buffer, "10743728") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1291568890227929346370);
		bigint_free(_3828408057334698010489);
		bigint_free(_4218287344034759525268);

	

		bigint_t* _1691300902178376374554;
		bigint_t* _2185529496942610223356 = bigint(43);
		bigint_t* _726993076909039839785 = bigint(-15904387);
		bigint_t* _4716264132470794136553 = bigint_mul(_2185529496942610223356, _726993076909039839785 );
		bigint_to_string(_4716264132470794136553, 10, buffer);
		printf("trying ");
		puts("mul(43, -15904387)");
		puts(buffer);
		assert(strcmp(buffer, "-683888641") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2185529496942610223356);
		bigint_free(_726993076909039839785);
		bigint_free(_4716264132470794136553);

	

		bigint_t* _605865992520856798745;
		bigint_t* _1030884466371922579044 = bigint(43);
		bigint_t* _4469739917083867726801 = bigint(-15904387);
		bigint_t* _3959407115124843167508 = bigint_add(_1030884466371922579044, _4469739917083867726801 );
		bigint_to_string(_3959407115124843167508, 10, buffer);
		printf("trying ");
		puts("add(43, -15904387)");
		puts(buffer);
		assert(strcmp(buffer, "-15904344") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1030884466371922579044);
		bigint_free(_4469739917083867726801);
		bigint_free(_3959407115124843167508);

	

		bigint_t* _4444357809350142104140;
		bigint_t* _688501527910898636831 = bigint(43);
		bigint_t* _1401979781310521790897 = bigint(-15904387);
		bigint_t* _835948091934249727049 = bigint_sub(_688501527910898636831, _1401979781310521790897 );
		bigint_to_string(_835948091934249727049, 10, buffer);
		printf("trying ");
		puts("sub(43, -15904387)");
		puts(buffer);
		assert(strcmp(buffer, "15904430") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_688501527910898636831);
		bigint_free(_1401979781310521790897);
		bigint_free(_835948091934249727049);

	

		bigint_t* _4030775353422612059737;
		bigint_t* _2406458719699774412760 = bigint(216);
		bigint_t* _4590183053828649072972 = bigint(2373920);
		bigint_t* _3829165673280403817398 = bigint_mul(_2406458719699774412760, _4590183053828649072972 );
		bigint_to_string(_3829165673280403817398, 10, buffer);
		printf("trying ");
		puts("mul(216, 2373920)");
		puts(buffer);
		assert(strcmp(buffer, "512766720") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2406458719699774412760);
		bigint_free(_4590183053828649072972);
		bigint_free(_3829165673280403817398);

	

		bigint_t* _1003845087435820651802;
		bigint_t* _3587439706171436830634 = bigint(216);
		bigint_t* _4420250423698377665842 = bigint(2373920);
		bigint_t* _1782502578514309563580 = bigint_add(_3587439706171436830634, _4420250423698377665842 );
		bigint_to_string(_1782502578514309563580, 10, buffer);
		printf("trying ");
		puts("add(216, 2373920)");
		puts(buffer);
		assert(strcmp(buffer, "2374136") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3587439706171436830634);
		bigint_free(_4420250423698377665842);
		bigint_free(_1782502578514309563580);

	

		bigint_t* _4561869021792183901910;
		bigint_t* _4691869767919383647026 = bigint(216);
		bigint_t* _2935645345440252530603 = bigint(2373920);
		bigint_t* _197000553667095028010 = bigint_sub(_4691869767919383647026, _2935645345440252530603 );
		bigint_to_string(_197000553667095028010, 10, buffer);
		printf("trying ");
		puts("sub(216, 2373920)");
		puts(buffer);
		assert(strcmp(buffer, "-2373704") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4691869767919383647026);
		bigint_free(_2935645345440252530603);
		bigint_free(_197000553667095028010);

	

		bigint_t* _2986281336575133160321;
		bigint_t* _2330765577943877691572 = bigint(-102);
		bigint_t* _4421432876027696172948 = bigint(-6793668);
		bigint_t* _720293412503492475639 = bigint_mul(_2330765577943877691572, _4421432876027696172948 );
		bigint_to_string(_720293412503492475639, 10, buffer);
		printf("trying ");
		puts("mul(-102, -6793668)");
		puts(buffer);
		assert(strcmp(buffer, "692954136") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2330765577943877691572);
		bigint_free(_4421432876027696172948);
		bigint_free(_720293412503492475639);

	

		bigint_t* _571592353038657654536;
		bigint_t* _731306601236144686943 = bigint(-102);
		bigint_t* _4257060522694381068281 = bigint(-6793668);
		bigint_t* _4187980504603048901043 = bigint_add(_731306601236144686943, _4257060522694381068281 );
		bigint_to_string(_4187980504603048901043, 10, buffer);
		printf("trying ");
		puts("add(-102, -6793668)");
		puts(buffer);
		assert(strcmp(buffer, "-6793770") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_731306601236144686943);
		bigint_free(_4257060522694381068281);
		bigint_free(_4187980504603048901043);

	

		bigint_t* _3900258054676370826804;
		bigint_t* _866848432796220262006 = bigint(-102);
		bigint_t* _1490755588972223728744 = bigint(-6793668);
		bigint_t* _579451438611720486580 = bigint_sub(_866848432796220262006, _1490755588972223728744 );
		bigint_to_string(_579451438611720486580, 10, buffer);
		printf("trying ");
		puts("sub(-102, -6793668)");
		puts(buffer);
		assert(strcmp(buffer, "6793566") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_866848432796220262006);
		bigint_free(_1490755588972223728744);
		bigint_free(_579451438611720486580);

	

		bigint_t* _2064078318813671083311;
		bigint_t* _3909597032033429419096 = bigint(-73);
		bigint_t* _509011023182460563528 = bigint(6687884);
		bigint_t* _604012898038820394602 = bigint_mul(_3909597032033429419096, _509011023182460563528 );
		bigint_to_string(_604012898038820394602, 10, buffer);
		printf("trying ");
		puts("mul(-73, 6687884)");
		puts(buffer);
		assert(strcmp(buffer, "-488215532") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3909597032033429419096);
		bigint_free(_509011023182460563528);
		bigint_free(_604012898038820394602);

	

		bigint_t* _841323791853574808761;
		bigint_t* _3591380739454820337837 = bigint(-73);
		bigint_t* _668672879055042506646 = bigint(6687884);
		bigint_t* _457096852468413128364 = bigint_add(_3591380739454820337837, _668672879055042506646 );
		bigint_to_string(_457096852468413128364, 10, buffer);
		printf("trying ");
		puts("add(-73, 6687884)");
		puts(buffer);
		assert(strcmp(buffer, "6687811") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3591380739454820337837);
		bigint_free(_668672879055042506646);
		bigint_free(_457096852468413128364);

	

		bigint_t* _339327725525973439383;
		bigint_t* _2484239856540647875674 = bigint(-73);
		bigint_t* _1198021585683610239431 = bigint(6687884);
		bigint_t* _2497833560058219529490 = bigint_sub(_2484239856540647875674, _1198021585683610239431 );
		bigint_to_string(_2497833560058219529490, 10, buffer);
		printf("trying ");
		puts("sub(-73, 6687884)");
		puts(buffer);
		assert(strcmp(buffer, "-6687957") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2484239856540647875674);
		bigint_free(_1198021585683610239431);
		bigint_free(_2497833560058219529490);

	

		bigint_t* _2679344839194153213229;
		bigint_t* _492090558476258882449 = bigint(180);
		bigint_t* _899070764735263447879 = bigint(13249623);
		bigint_t* _4573291688115009853388 = bigint_mul(_492090558476258882449, _899070764735263447879 );
		bigint_to_string(_4573291688115009853388, 10, buffer);
		printf("trying ");
		puts("mul(180, 13249623)");
		puts(buffer);
		assert(strcmp(buffer, "2384932140") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_492090558476258882449);
		bigint_free(_899070764735263447879);
		bigint_free(_4573291688115009853388);

	

		bigint_t* _3788577966066234686839;
		bigint_t* _1477863419445230551026 = bigint(180);
		bigint_t* _785611202138914846859 = bigint(13249623);
		bigint_t* _2891713377761781344059 = bigint_add(_1477863419445230551026, _785611202138914846859 );
		bigint_to_string(_2891713377761781344059, 10, buffer);
		printf("trying ");
		puts("add(180, 13249623)");
		puts(buffer);
		assert(strcmp(buffer, "13249803") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1477863419445230551026);
		bigint_free(_785611202138914846859);
		bigint_free(_2891713377761781344059);

	

		bigint_t* _606587419144611236882;
		bigint_t* _2451495171092109227026 = bigint(180);
		bigint_t* _4025658472078463457245 = bigint(13249623);
		bigint_t* _3958946360047664083660 = bigint_sub(_2451495171092109227026, _4025658472078463457245 );
		bigint_to_string(_3958946360047664083660, 10, buffer);
		printf("trying ");
		puts("sub(180, 13249623)");
		puts(buffer);
		assert(strcmp(buffer, "-13249443") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2451495171092109227026);
		bigint_free(_4025658472078463457245);
		bigint_free(_3958946360047664083660);

	

		bigint_t* _247554033620142767122;
		bigint_t* _3419614580694652883097 = bigint(-235);
		bigint_t* _4113543971307914505129 = bigint(-6870706);
		bigint_t* _2571897235148024413020 = bigint_mul(_3419614580694652883097, _4113543971307914505129 );
		bigint_to_string(_2571897235148024413020, 10, buffer);
		printf("trying ");
		puts("mul(-235, -6870706)");
		puts(buffer);
		assert(strcmp(buffer, "1614615910") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3419614580694652883097);
		bigint_free(_4113543971307914505129);
		bigint_free(_2571897235148024413020);

	

		bigint_t* _660059609218344446153;
		bigint_t* _2987676699917256843825 = bigint(-235);
		bigint_t* _3821839412331121887908 = bigint(-6870706);
		bigint_t* _382925767113669772473 = bigint_add(_2987676699917256843825, _3821839412331121887908 );
		bigint_to_string(_382925767113669772473, 10, buffer);
		printf("trying ");
		puts("add(-235, -6870706)");
		puts(buffer);
		assert(strcmp(buffer, "-6870941") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2987676699917256843825);
		bigint_free(_3821839412331121887908);
		bigint_free(_382925767113669772473);

	

		bigint_t* _3527309004933844798622;
		bigint_t* _2153280997654576155817 = bigint(-235);
		bigint_t* _2680090601584734148127 = bigint(-6870706);
		bigint_t* _2823989200886415525210 = bigint_sub(_2153280997654576155817, _2680090601584734148127 );
		bigint_to_string(_2823989200886415525210, 10, buffer);
		printf("trying ");
		puts("sub(-235, -6870706)");
		puts(buffer);
		assert(strcmp(buffer, "6870471") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2153280997654576155817);
		bigint_free(_2680090601584734148127);
		bigint_free(_2823989200886415525210);

	

		bigint_t* _1741025104154299685162;
		bigint_t* _2488313218800247050487 = bigint(-231);
		bigint_t* _3900595690681399705155 = bigint(9674987);
		bigint_t* _1316781556000472878052 = bigint_mul(_2488313218800247050487, _3900595690681399705155 );
		bigint_to_string(_1316781556000472878052, 10, buffer);
		printf("trying ");
		puts("mul(-231, 9674987)");
		puts(buffer);
		assert(strcmp(buffer, "-2234921997") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2488313218800247050487);
		bigint_free(_3900595690681399705155);
		bigint_free(_1316781556000472878052);

	

		bigint_t* _1359710854030087028117;
		bigint_t* _1670816163178634122443 = bigint(-231);
		bigint_t* _3147991302271835926641 = bigint(9674987);
		bigint_t* _4112961354255956787133 = bigint_add(_1670816163178634122443, _3147991302271835926641 );
		bigint_to_string(_4112961354255956787133, 10, buffer);
		printf("trying ");
		puts("add(-231, 9674987)");
		puts(buffer);
		assert(strcmp(buffer, "9674756") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1670816163178634122443);
		bigint_free(_3147991302271835926641);
		bigint_free(_4112961354255956787133);

	

		bigint_t* _882879718168812383529;
		bigint_t* _2207923836815280797058 = bigint(-231);
		bigint_t* _3288461753091762725284 = bigint(9674987);
		bigint_t* _1475639378727065484329 = bigint_sub(_2207923836815280797058, _3288461753091762725284 );
		bigint_to_string(_1475639378727065484329, 10, buffer);
		printf("trying ");
		puts("sub(-231, 9674987)");
		puts(buffer);
		assert(strcmp(buffer, "-9675218") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2207923836815280797058);
		bigint_free(_3288461753091762725284);
		bigint_free(_1475639378727065484329);

	

		bigint_t* _769680287544891839745;
		bigint_t* _2810748926212124893109 = bigint(5);
		bigint_t* _118593407969180891667 = bigint(-7603109);
		bigint_t* _1388398897838143526171 = bigint_mul(_2810748926212124893109, _118593407969180891667 );
		bigint_to_string(_1388398897838143526171, 10, buffer);
		printf("trying ");
		puts("mul(5, -7603109)");
		puts(buffer);
		assert(strcmp(buffer, "-38015545") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2810748926212124893109);
		bigint_free(_118593407969180891667);
		bigint_free(_1388398897838143526171);

	

		bigint_t* _3403276943366286355789;
		bigint_t* _3792170249291946772254 = bigint(5);
		bigint_t* _1132640080728636520419 = bigint(-7603109);
		bigint_t* _1617276497067836379314 = bigint_add(_3792170249291946772254, _1132640080728636520419 );
		bigint_to_string(_1617276497067836379314, 10, buffer);
		printf("trying ");
		puts("add(5, -7603109)");
		puts(buffer);
		assert(strcmp(buffer, "-7603104") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3792170249291946772254);
		bigint_free(_1132640080728636520419);
		bigint_free(_1617276497067836379314);

	

		bigint_t* _4693009772677404385302;
		bigint_t* _2594699436834082923276 = bigint(5);
		bigint_t* _2739690210941764470908 = bigint(-7603109);
		bigint_t* _1162244845432617090080 = bigint_sub(_2594699436834082923276, _2739690210941764470908 );
		bigint_to_string(_1162244845432617090080, 10, buffer);
		printf("trying ");
		puts("sub(5, -7603109)");
		puts(buffer);
		assert(strcmp(buffer, "7603114") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2594699436834082923276);
		bigint_free(_2739690210941764470908);
		bigint_free(_1162244845432617090080);

	

		bigint_t* _1778334218203385648440;
		bigint_t* _1093072678875667020303 = bigint(-163);
		bigint_t* _3637729257857802382015 = bigint(-9880007);
		bigint_t* _708005258803741142543 = bigint_mul(_1093072678875667020303, _3637729257857802382015 );
		bigint_to_string(_708005258803741142543, 10, buffer);
		printf("trying ");
		puts("mul(-163, -9880007)");
		puts(buffer);
		assert(strcmp(buffer, "1610441141") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1093072678875667020303);
		bigint_free(_3637729257857802382015);
		bigint_free(_708005258803741142543);

	

		bigint_t* _2823859028814555910332;
		bigint_t* _1527592799554441409596 = bigint(-163);
		bigint_t* _3373107152658753733733 = bigint(-9880007);
		bigint_t* _2604134331007619657019 = bigint_add(_1527592799554441409596, _3373107152658753733733 );
		bigint_to_string(_2604134331007619657019, 10, buffer);
		printf("trying ");
		puts("add(-163, -9880007)");
		puts(buffer);
		assert(strcmp(buffer, "-9880170") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1527592799554441409596);
		bigint_free(_3373107152658753733733);
		bigint_free(_2604134331007619657019);

	

		bigint_t* _3651809713276371335172;
		bigint_t* _326761326745661373416 = bigint(-163);
		bigint_t* _2848269011412007948085 = bigint(-9880007);
		bigint_t* _2968367731515244159198 = bigint_sub(_326761326745661373416, _2848269011412007948085 );
		bigint_to_string(_2968367731515244159198, 10, buffer);
		printf("trying ");
		puts("sub(-163, -9880007)");
		puts(buffer);
		assert(strcmp(buffer, "9879844") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_326761326745661373416);
		bigint_free(_2848269011412007948085);
		bigint_free(_2968367731515244159198);

	

		bigint_t* _3880413351867393912876;
		bigint_t* _1218826765767566258235 = bigint(234);
		bigint_t* _3064685157418223303635 = bigint(-4621211);
		bigint_t* _1612716091873590629257 = bigint_mul(_1218826765767566258235, _3064685157418223303635 );
		bigint_to_string(_1612716091873590629257, 10, buffer);
		printf("trying ");
		puts("mul(234, -4621211)");
		puts(buffer);
		assert(strcmp(buffer, "-1081363374") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1218826765767566258235);
		bigint_free(_3064685157418223303635);
		bigint_free(_1612716091873590629257);

	

		bigint_t* _3396884725533790862146;
		bigint_t* _3036037736690092486119 = bigint(234);
		bigint_t* _1197842888244251356672 = bigint(-4621211);
		bigint_t* _1005140292758373308045 = bigint_add(_3036037736690092486119, _1197842888244251356672 );
		bigint_to_string(_1005140292758373308045, 10, buffer);
		printf("trying ");
		puts("add(234, -4621211)");
		puts(buffer);
		assert(strcmp(buffer, "-4620977") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3036037736690092486119);
		bigint_free(_1197842888244251356672);
		bigint_free(_1005140292758373308045);

	

		bigint_t* _3002890914331491215483;
		bigint_t* _4373885406135294405955 = bigint(234);
		bigint_t* _2387015422333544882448 = bigint(-4621211);
		bigint_t* _718884751270740592231 = bigint_sub(_4373885406135294405955, _2387015422333544882448 );
		bigint_to_string(_718884751270740592231, 10, buffer);
		printf("trying ");
		puts("sub(234, -4621211)");
		puts(buffer);
		assert(strcmp(buffer, "4621445") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4373885406135294405955);
		bigint_free(_2387015422333544882448);
		bigint_free(_718884751270740592231);

	

		bigint_t* _2137044428488044545494;
		bigint_t* _49768388203300062191 = bigint(238);
		bigint_t* _4693700196793372516977 = bigint(1542791);
		bigint_t* _1326146228616795903684 = bigint_mul(_49768388203300062191, _4693700196793372516977 );
		bigint_to_string(_1326146228616795903684, 10, buffer);
		printf("trying ");
		puts("mul(238, 1542791)");
		puts(buffer);
		assert(strcmp(buffer, "367184258") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_49768388203300062191);
		bigint_free(_4693700196793372516977);
		bigint_free(_1326146228616795903684);

	

		bigint_t* _2274693147588645310378;
		bigint_t* _2858529118003411652697 = bigint(238);
		bigint_t* _504894069797232745024 = bigint(1542791);
		bigint_t* _1008603157015191058029 = bigint_add(_2858529118003411652697, _504894069797232745024 );
		bigint_to_string(_1008603157015191058029, 10, buffer);
		printf("trying ");
		puts("add(238, 1542791)");
		puts(buffer);
		assert(strcmp(buffer, "1543029") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2858529118003411652697);
		bigint_free(_504894069797232745024);
		bigint_free(_1008603157015191058029);

	

		bigint_t* _967915464893382913911;
		bigint_t* _1820422793297825323700 = bigint(238);
		bigint_t* _1785042455458761888119 = bigint(1542791);
		bigint_t* _804086623260022978388 = bigint_sub(_1820422793297825323700, _1785042455458761888119 );
		bigint_to_string(_804086623260022978388, 10, buffer);
		printf("trying ");
		puts("sub(238, 1542791)");
		puts(buffer);
		assert(strcmp(buffer, "-1542553") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1820422793297825323700);
		bigint_free(_1785042455458761888119);
		bigint_free(_804086623260022978388);

	

		bigint_t* _150505603832599623103;
		bigint_t* _3762301533939165810568 = bigint(229);
		bigint_t* _3406257582752268864149 = bigint(9872427);
		bigint_t* _4332809264745893414901 = bigint_mul(_3762301533939165810568, _3406257582752268864149 );
		bigint_to_string(_4332809264745893414901, 10, buffer);
		printf("trying ");
		puts("mul(229, 9872427)");
		puts(buffer);
		assert(strcmp(buffer, "2260785783") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3762301533939165810568);
		bigint_free(_3406257582752268864149);
		bigint_free(_4332809264745893414901);

	

		bigint_t* _807048861643558051319;
		bigint_t* _2982279394464467904259 = bigint(229);
		bigint_t* _2566116652500551627003 = bigint(9872427);
		bigint_t* _1471937505388136268542 = bigint_add(_2982279394464467904259, _2566116652500551627003 );
		bigint_to_string(_1471937505388136268542, 10, buffer);
		printf("trying ");
		puts("add(229, 9872427)");
		puts(buffer);
		assert(strcmp(buffer, "9872656") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2982279394464467904259);
		bigint_free(_2566116652500551627003);
		bigint_free(_1471937505388136268542);

	

		bigint_t* _2406243755032136346963;
		bigint_t* _4440926375015162571811 = bigint(229);
		bigint_t* _2704644661504320278858 = bigint(9872427);
		bigint_t* _1593768617387829556289 = bigint_sub(_4440926375015162571811, _2704644661504320278858 );
		bigint_to_string(_1593768617387829556289, 10, buffer);
		printf("trying ");
		puts("sub(229, 9872427)");
		puts(buffer);
		assert(strcmp(buffer, "-9872198") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4440926375015162571811);
		bigint_free(_2704644661504320278858);
		bigint_free(_1593768617387829556289);

	

		bigint_t* _4348023512467071359124;
		bigint_t* _817055481174757435403 = bigint(-167);
		bigint_t* _3601576278390354876981 = bigint(-6020277);
		bigint_t* _605731783139267222062 = bigint_mul(_817055481174757435403, _3601576278390354876981 );
		bigint_to_string(_605731783139267222062, 10, buffer);
		printf("trying ");
		puts("mul(-167, -6020277)");
		puts(buffer);
		assert(strcmp(buffer, "1005386259") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_817055481174757435403);
		bigint_free(_3601576278390354876981);
		bigint_free(_605731783139267222062);

	

		bigint_t* _4084290310965958904189;
		bigint_t* _3014670070672321906276 = bigint(-167);
		bigint_t* _1426986428618552061426 = bigint(-6020277);
		bigint_t* _1101686215323260287211 = bigint_add(_3014670070672321906276, _1426986428618552061426 );
		bigint_to_string(_1101686215323260287211, 10, buffer);
		printf("trying ");
		puts("add(-167, -6020277)");
		puts(buffer);
		assert(strcmp(buffer, "-6020444") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3014670070672321906276);
		bigint_free(_1426986428618552061426);
		bigint_free(_1101686215323260287211);

	

		bigint_t* _3330626948623408023468;
		bigint_t* _1630327140085313233250 = bigint(-167);
		bigint_t* _4354130142450505295283 = bigint(-6020277);
		bigint_t* _1750530053534445238661 = bigint_sub(_1630327140085313233250, _4354130142450505295283 );
		bigint_to_string(_1750530053534445238661, 10, buffer);
		printf("trying ");
		puts("sub(-167, -6020277)");
		puts(buffer);
		assert(strcmp(buffer, "6020110") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1630327140085313233250);
		bigint_free(_4354130142450505295283);
		bigint_free(_1750530053534445238661);

	

		bigint_t* _575730238747878161679;
		bigint_t* _2885452968246937511557 = bigint(27);
		bigint_t* _2917463017832451518722 = bigint(-10528970);
		bigint_t* _4358313530061018194731 = bigint_mul(_2885452968246937511557, _2917463017832451518722 );
		bigint_to_string(_4358313530061018194731, 10, buffer);
		printf("trying ");
		puts("mul(27, -10528970)");
		puts(buffer);
		assert(strcmp(buffer, "-284282190") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2885452968246937511557);
		bigint_free(_2917463017832451518722);
		bigint_free(_4358313530061018194731);

	

		bigint_t* _64021139416663410799;
		bigint_t* _3723156019558327811362 = bigint(27);
		bigint_t* _4175769654716059317494 = bigint(-10528970);
		bigint_t* _2646881441232632784576 = bigint_add(_3723156019558327811362, _4175769654716059317494 );
		bigint_to_string(_2646881441232632784576, 10, buffer);
		printf("trying ");
		puts("add(27, -10528970)");
		puts(buffer);
		assert(strcmp(buffer, "-10528943") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3723156019558327811362);
		bigint_free(_4175769654716059317494);
		bigint_free(_2646881441232632784576);

	

		bigint_t* _1667538201186578904152;
		bigint_t* _3266255851444930423450 = bigint(27);
		bigint_t* _3103953638111396077558 = bigint(-10528970);
		bigint_t* _752489090917707059135 = bigint_sub(_3266255851444930423450, _3103953638111396077558 );
		bigint_to_string(_752489090917707059135, 10, buffer);
		printf("trying ");
		puts("sub(27, -10528970)");
		puts(buffer);
		assert(strcmp(buffer, "10528997") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3266255851444930423450);
		bigint_free(_3103953638111396077558);
		bigint_free(_752489090917707059135);

	

		bigint_t* _4201136040900481168165;
		bigint_t* _51078149481883586711 = bigint(-210);
		bigint_t* _2282541882758281117535 = bigint(-7265743);
		bigint_t* _3836006302216525716489 = bigint_mul(_51078149481883586711, _2282541882758281117535 );
		bigint_to_string(_3836006302216525716489, 10, buffer);
		printf("trying ");
		puts("mul(-210, -7265743)");
		puts(buffer);
		assert(strcmp(buffer, "1525806030") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_51078149481883586711);
		bigint_free(_2282541882758281117535);
		bigint_free(_3836006302216525716489);

	

		bigint_t* _3479936045472613718598;
		bigint_t* _2385968130219714610676 = bigint(-210);
		bigint_t* _3271580108602880038620 = bigint(-7265743);
		bigint_t* _1731240663908382527543 = bigint_add(_2385968130219714610676, _3271580108602880038620 );
		bigint_to_string(_1731240663908382527543, 10, buffer);
		printf("trying ");
		puts("add(-210, -7265743)");
		puts(buffer);
		assert(strcmp(buffer, "-7265953") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2385968130219714610676);
		bigint_free(_3271580108602880038620);
		bigint_free(_1731240663908382527543);

	

		bigint_t* _21891989240507361040;
		bigint_t* _1587296747723959558743 = bigint(-210);
		bigint_t* _550623969240305283120 = bigint(-7265743);
		bigint_t* _69376116893920648346 = bigint_sub(_1587296747723959558743, _550623969240305283120 );
		bigint_to_string(_69376116893920648346, 10, buffer);
		printf("trying ");
		puts("sub(-210, -7265743)");
		puts(buffer);
		assert(strcmp(buffer, "7265533") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1587296747723959558743);
		bigint_free(_550623969240305283120);
		bigint_free(_69376116893920648346);

	

		bigint_t* _2897936749389128781127;
		bigint_t* _4371429608984636249832 = bigint(158);
		bigint_t* _744364740392297176424 = bigint(2339821);
		bigint_t* _3642843727846215930258 = bigint_mul(_4371429608984636249832, _744364740392297176424 );
		bigint_to_string(_3642843727846215930258, 10, buffer);
		printf("trying ");
		puts("mul(158, 2339821)");
		puts(buffer);
		assert(strcmp(buffer, "369691718") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4371429608984636249832);
		bigint_free(_744364740392297176424);
		bigint_free(_3642843727846215930258);

	

		bigint_t* _2302997782284870768709;
		bigint_t* _2193829770700842152607 = bigint(158);
		bigint_t* _4133964237085089937113 = bigint(2339821);
		bigint_t* _1534805603908199981367 = bigint_add(_2193829770700842152607, _4133964237085089937113 );
		bigint_to_string(_1534805603908199981367, 10, buffer);
		printf("trying ");
		puts("add(158, 2339821)");
		puts(buffer);
		assert(strcmp(buffer, "2339979") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2193829770700842152607);
		bigint_free(_4133964237085089937113);
		bigint_free(_1534805603908199981367);

	

		bigint_t* _985293411528041532177;
		bigint_t* _4307678029623312066192 = bigint(158);
		bigint_t* _1246565563684744170592 = bigint(2339821);
		bigint_t* _3430518941689045599683 = bigint_sub(_4307678029623312066192, _1246565563684744170592 );
		bigint_to_string(_3430518941689045599683, 10, buffer);
		printf("trying ");
		puts("sub(158, 2339821)");
		puts(buffer);
		assert(strcmp(buffer, "-2339663") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4307678029623312066192);
		bigint_free(_1246565563684744170592);
		bigint_free(_3430518941689045599683);

	

		bigint_t* _2009574551825600140964;
		bigint_t* _189159359152169952929 = bigint(-252);
		bigint_t* _1408365163388536940151 = bigint(-8587169);
		bigint_t* _4148821733322200699023 = bigint_mul(_189159359152169952929, _1408365163388536940151 );
		bigint_to_string(_4148821733322200699023, 10, buffer);
		printf("trying ");
		puts("mul(-252, -8587169)");
		puts(buffer);
		assert(strcmp(buffer, "2163966588") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_189159359152169952929);
		bigint_free(_1408365163388536940151);
		bigint_free(_4148821733322200699023);

	

		bigint_t* _3167693456260807838789;
		bigint_t* _4523981849296912588623 = bigint(-252);
		bigint_t* _1834423336115561250431 = bigint(-8587169);
		bigint_t* _3836965102139530646730 = bigint_add(_4523981849296912588623, _1834423336115561250431 );
		bigint_to_string(_3836965102139530646730, 10, buffer);
		printf("trying ");
		puts("add(-252, -8587169)");
		puts(buffer);
		assert(strcmp(buffer, "-8587421") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4523981849296912588623);
		bigint_free(_1834423336115561250431);
		bigint_free(_3836965102139530646730);

	

		bigint_t* _2584781092636255735779;
		bigint_t* _671390394437511958669 = bigint(-252);
		bigint_t* _3195373830701649298819 = bigint(-8587169);
		bigint_t* _821204104187403686706 = bigint_sub(_671390394437511958669, _3195373830701649298819 );
		bigint_to_string(_821204104187403686706, 10, buffer);
		printf("trying ");
		puts("sub(-252, -8587169)");
		puts(buffer);
		assert(strcmp(buffer, "8586917") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_671390394437511958669);
		bigint_free(_3195373830701649298819);
		bigint_free(_821204104187403686706);

	

		bigint_t* _499980753836115384267;
		bigint_t* _4314045310314792436979 = bigint(-132);
		bigint_t* _361320228327254086473 = bigint(6546278);
		bigint_t* _658940838396949696264 = bigint_mul(_4314045310314792436979, _361320228327254086473 );
		bigint_to_string(_658940838396949696264, 10, buffer);
		printf("trying ");
		puts("mul(-132, 6546278)");
		puts(buffer);
		assert(strcmp(buffer, "-864108696") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4314045310314792436979);
		bigint_free(_361320228327254086473);
		bigint_free(_658940838396949696264);

	

		bigint_t* _3981751294171448292595;
		bigint_t* _1526620383570739873233 = bigint(-132);
		bigint_t* _1253883214615732649784 = bigint(6546278);
		bigint_t* _1955686545400575286782 = bigint_add(_1526620383570739873233, _1253883214615732649784 );
		bigint_to_string(_1955686545400575286782, 10, buffer);
		printf("trying ");
		puts("add(-132, 6546278)");
		puts(buffer);
		assert(strcmp(buffer, "6546146") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1526620383570739873233);
		bigint_free(_1253883214615732649784);
		bigint_free(_1955686545400575286782);

	

		bigint_t* _4641499454559121927570;
		bigint_t* _3396705880801322219469 = bigint(-132);
		bigint_t* _3149002065826262039318 = bigint(6546278);
		bigint_t* _4152845128466224779228 = bigint_sub(_3396705880801322219469, _3149002065826262039318 );
		bigint_to_string(_4152845128466224779228, 10, buffer);
		printf("trying ");
		puts("sub(-132, 6546278)");
		puts(buffer);
		assert(strcmp(buffer, "-6546410") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3396705880801322219469);
		bigint_free(_3149002065826262039318);
		bigint_free(_4152845128466224779228);

	

		bigint_t* _907596596528354780957;
		bigint_t* _4178048984395143615828 = bigint(251);
		bigint_t* _3513816514863570749026 = bigint(5515737);
		bigint_t* _4635691841372003002578 = bigint_mul(_4178048984395143615828, _3513816514863570749026 );
		bigint_to_string(_4635691841372003002578, 10, buffer);
		printf("trying ");
		puts("mul(251, 5515737)");
		puts(buffer);
		assert(strcmp(buffer, "1384449987") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4178048984395143615828);
		bigint_free(_3513816514863570749026);
		bigint_free(_4635691841372003002578);

	

		bigint_t* _810261347393175526176;
		bigint_t* _1591480078275762501924 = bigint(251);
		bigint_t* _3252554587113924363080 = bigint(5515737);
		bigint_t* _3886899684436212322718 = bigint_add(_1591480078275762501924, _3252554587113924363080 );
		bigint_to_string(_3886899684436212322718, 10, buffer);
		printf("trying ");
		puts("add(251, 5515737)");
		puts(buffer);
		assert(strcmp(buffer, "5515988") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1591480078275762501924);
		bigint_free(_3252554587113924363080);
		bigint_free(_3886899684436212322718);

	

		bigint_t* _2461512972403792912595;
		bigint_t* _2306828088823497277081 = bigint(251);
		bigint_t* _4377291906131864457648 = bigint(5515737);
		bigint_t* _4694119036099318329138 = bigint_sub(_2306828088823497277081, _4377291906131864457648 );
		bigint_to_string(_4694119036099318329138, 10, buffer);
		printf("trying ");
		puts("sub(251, 5515737)");
		puts(buffer);
		assert(strcmp(buffer, "-5515486") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2306828088823497277081);
		bigint_free(_4377291906131864457648);
		bigint_free(_4694119036099318329138);

	

		bigint_t* _99374701439230751600;
		bigint_t* _2204822001429914946963 = bigint(171);
		bigint_t* _2300590159014010578468 = bigint(-8160238);
		bigint_t* _4430813088581204041876 = bigint_mul(_2204822001429914946963, _2300590159014010578468 );
		bigint_to_string(_4430813088581204041876, 10, buffer);
		printf("trying ");
		puts("mul(171, -8160238)");
		puts(buffer);
		assert(strcmp(buffer, "-1395400698") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2204822001429914946963);
		bigint_free(_2300590159014010578468);
		bigint_free(_4430813088581204041876);

	

		bigint_t* _4124275936367876802569;
		bigint_t* _1337416285153751283020 = bigint(171);
		bigint_t* _4487126943449082241915 = bigint(-8160238);
		bigint_t* _4537883945256988691728 = bigint_add(_1337416285153751283020, _4487126943449082241915 );
		bigint_to_string(_4537883945256988691728, 10, buffer);
		printf("trying ");
		puts("add(171, -8160238)");
		puts(buffer);
		assert(strcmp(buffer, "-8160067") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1337416285153751283020);
		bigint_free(_4487126943449082241915);
		bigint_free(_4537883945256988691728);

	

		bigint_t* _841585531789320911503;
		bigint_t* _1712526572194407810023 = bigint(171);
		bigint_t* _4089978550283074982501 = bigint(-8160238);
		bigint_t* _1501006343073806365498 = bigint_sub(_1712526572194407810023, _4089978550283074982501 );
		bigint_to_string(_1501006343073806365498, 10, buffer);
		printf("trying ");
		puts("sub(171, -8160238)");
		puts(buffer);
		assert(strcmp(buffer, "8160409") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1712526572194407810023);
		bigint_free(_4089978550283074982501);
		bigint_free(_1501006343073806365498);

	

		bigint_t* _2905808489667302140400;
		bigint_t* _1959534342620618714888 = bigint(107);
		bigint_t* _2158788993281182084928 = bigint(-9798188);
		bigint_t* _57311610314356415080 = bigint_mul(_1959534342620618714888, _2158788993281182084928 );
		bigint_to_string(_57311610314356415080, 10, buffer);
		printf("trying ");
		puts("mul(107, -9798188)");
		puts(buffer);
		assert(strcmp(buffer, "-1048406116") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1959534342620618714888);
		bigint_free(_2158788993281182084928);
		bigint_free(_57311610314356415080);

	

		bigint_t* _4631811545577105398575;
		bigint_t* _1182013543834189225465 = bigint(107);
		bigint_t* _3621849549177525418157 = bigint(-9798188);
		bigint_t* _3070449592748824685332 = bigint_add(_1182013543834189225465, _3621849549177525418157 );
		bigint_to_string(_3070449592748824685332, 10, buffer);
		printf("trying ");
		puts("add(107, -9798188)");
		puts(buffer);
		assert(strcmp(buffer, "-9798081") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1182013543834189225465);
		bigint_free(_3621849549177525418157);
		bigint_free(_3070449592748824685332);

	

		bigint_t* _4292211118013571799378;
		bigint_t* _1437152374482081121150 = bigint(107);
		bigint_t* _1161074738611490239554 = bigint(-9798188);
		bigint_t* _1111949747734671995684 = bigint_sub(_1437152374482081121150, _1161074738611490239554 );
		bigint_to_string(_1111949747734671995684, 10, buffer);
		printf("trying ");
		puts("sub(107, -9798188)");
		puts(buffer);
		assert(strcmp(buffer, "9798295") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1437152374482081121150);
		bigint_free(_1161074738611490239554);
		bigint_free(_1111949747734671995684);

	

		bigint_t* _640756779688253630565;
		bigint_t* _2967144478046493299048 = bigint(-245);
		bigint_t* _1754301086237872721066 = bigint(-13335129);
		bigint_t* _4521297290280796073131 = bigint_mul(_2967144478046493299048, _1754301086237872721066 );
		bigint_to_string(_4521297290280796073131, 10, buffer);
		printf("trying ");
		puts("mul(-245, -13335129)");
		puts(buffer);
		assert(strcmp(buffer, "3267106605") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2967144478046493299048);
		bigint_free(_1754301086237872721066);
		bigint_free(_4521297290280796073131);

	

		bigint_t* _3215889870544062063316;
		bigint_t* _950238236204452096039 = bigint(-245);
		bigint_t* _3274089340012028339436 = bigint(-13335129);
		bigint_t* _3618183011691066604503 = bigint_add(_950238236204452096039, _3274089340012028339436 );
		bigint_to_string(_3618183011691066604503, 10, buffer);
		printf("trying ");
		puts("add(-245, -13335129)");
		puts(buffer);
		assert(strcmp(buffer, "-13335374") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_950238236204452096039);
		bigint_free(_3274089340012028339436);
		bigint_free(_3618183011691066604503);

	

		bigint_t* _2939198164911017675321;
		bigint_t* _4576728979470707288501 = bigint(-245);
		bigint_t* _4443652515181678369108 = bigint(-13335129);
		bigint_t* _64514453634679826910 = bigint_sub(_4576728979470707288501, _4443652515181678369108 );
		bigint_to_string(_64514453634679826910, 10, buffer);
		printf("trying ");
		puts("sub(-245, -13335129)");
		puts(buffer);
		assert(strcmp(buffer, "13334884") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4576728979470707288501);
		bigint_free(_4443652515181678369108);
		bigint_free(_64514453634679826910);

	

		bigint_t* _1374149158720226480126;
		bigint_t* _675896703739786807227 = bigint(-164);
		bigint_t* _4106427528228517090492 = bigint(-4956048);
		bigint_t* _3881357005515288447253 = bigint_mul(_675896703739786807227, _4106427528228517090492 );
		bigint_to_string(_3881357005515288447253, 10, buffer);
		printf("trying ");
		puts("mul(-164, -4956048)");
		puts(buffer);
		assert(strcmp(buffer, "812791872") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_675896703739786807227);
		bigint_free(_4106427528228517090492);
		bigint_free(_3881357005515288447253);

	

		bigint_t* _3862333053272320553302;
		bigint_t* _794773517005086205978 = bigint(-164);
		bigint_t* _3410533407185756522539 = bigint(-4956048);
		bigint_t* _1984322403615950183821 = bigint_add(_794773517005086205978, _3410533407185756522539 );
		bigint_to_string(_1984322403615950183821, 10, buffer);
		printf("trying ");
		puts("add(-164, -4956048)");
		puts(buffer);
		assert(strcmp(buffer, "-4956212") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_794773517005086205978);
		bigint_free(_3410533407185756522539);
		bigint_free(_1984322403615950183821);

	

		bigint_t* _92962361719970682852;
		bigint_t* _1185485645770592313378 = bigint(-164);
		bigint_t* _2228909106280487279977 = bigint(-4956048);
		bigint_t* _1794951092670565744734 = bigint_sub(_1185485645770592313378, _2228909106280487279977 );
		bigint_to_string(_1794951092670565744734, 10, buffer);
		printf("trying ");
		puts("sub(-164, -4956048)");
		puts(buffer);
		assert(strcmp(buffer, "4955884") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1185485645770592313378);
		bigint_free(_2228909106280487279977);
		bigint_free(_1794951092670565744734);

	

		bigint_t* _1094750288742630706458;
		bigint_t* _3903569557848052464346 = bigint(-124);
		bigint_t* _2647333889361886224830 = bigint(-8638550);
		bigint_t* _1599490083973366210539 = bigint_mul(_3903569557848052464346, _2647333889361886224830 );
		bigint_to_string(_1599490083973366210539, 10, buffer);
		printf("trying ");
		puts("mul(-124, -8638550)");
		puts(buffer);
		assert(strcmp(buffer, "1071180200") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3903569557848052464346);
		bigint_free(_2647333889361886224830);
		bigint_free(_1599490083973366210539);

	

		bigint_t* _2447560083007268435638;
		bigint_t* _754105891693645942299 = bigint(-124);
		bigint_t* _3278202266106990389021 = bigint(-8638550);
		bigint_t* _3380000875222945063182 = bigint_add(_754105891693645942299, _3278202266106990389021 );
		bigint_to_string(_3380000875222945063182, 10, buffer);
		printf("trying ");
		puts("add(-124, -8638550)");
		puts(buffer);
		assert(strcmp(buffer, "-8638674") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_754105891693645942299);
		bigint_free(_3278202266106990389021);
		bigint_free(_3380000875222945063182);

	

		bigint_t* _2836880490277335398804;
		bigint_t* _2901030697336925906381 = bigint(-124);
		bigint_t* _960714011763345256446 = bigint(-8638550);
		bigint_t* _1369446768142002477760 = bigint_sub(_2901030697336925906381, _960714011763345256446 );
		bigint_to_string(_1369446768142002477760, 10, buffer);
		printf("trying ");
		puts("sub(-124, -8638550)");
		puts(buffer);
		assert(strcmp(buffer, "8638426") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2901030697336925906381);
		bigint_free(_960714011763345256446);
		bigint_free(_1369446768142002477760);

	

		bigint_t* _158716631699715231399;
		bigint_t* _2480004301776054572796 = bigint(-250);
		bigint_t* _2555097833129847866951 = bigint(-15162705);
		bigint_t* _218566148865718636832 = bigint_mul(_2480004301776054572796, _2555097833129847866951 );
		bigint_to_string(_218566148865718636832, 10, buffer);
		printf("trying ");
		puts("mul(-250, -15162705)");
		puts(buffer);
		assert(strcmp(buffer, "3790676250") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2480004301776054572796);
		bigint_free(_2555097833129847866951);
		bigint_free(_218566148865718636832);

	

		bigint_t* _1065194816966446831557;
		bigint_t* _2638174002333834761217 = bigint(-250);
		bigint_t* _4434051580287950905743 = bigint(-15162705);
		bigint_t* _1721032310777422953686 = bigint_add(_2638174002333834761217, _4434051580287950905743 );
		bigint_to_string(_1721032310777422953686, 10, buffer);
		printf("trying ");
		puts("add(-250, -15162705)");
		puts(buffer);
		assert(strcmp(buffer, "-15162955") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2638174002333834761217);
		bigint_free(_4434051580287950905743);
		bigint_free(_1721032310777422953686);

	

		bigint_t* _834540515825283833644;
		bigint_t* _706684137577264905694 = bigint(-250);
		bigint_t* _4614096557195918709964 = bigint(-15162705);
		bigint_t* _2840740992420667446205 = bigint_sub(_706684137577264905694, _4614096557195918709964 );
		bigint_to_string(_2840740992420667446205, 10, buffer);
		printf("trying ");
		puts("sub(-250, -15162705)");
		puts(buffer);
		assert(strcmp(buffer, "15162455") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_706684137577264905694);
		bigint_free(_4614096557195918709964);
		bigint_free(_2840740992420667446205);

	

		bigint_t* _747978311932349405986;
		bigint_t* _2659905714449003943437 = bigint(96);
		bigint_t* _2364414020177318509839 = bigint(-10622884);
		bigint_t* _3833813214736838509800 = bigint_mul(_2659905714449003943437, _2364414020177318509839 );
		bigint_to_string(_3833813214736838509800, 10, buffer);
		printf("trying ");
		puts("mul(96, -10622884)");
		puts(buffer);
		assert(strcmp(buffer, "-1019796864") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2659905714449003943437);
		bigint_free(_2364414020177318509839);
		bigint_free(_3833813214736838509800);

	

		bigint_t* _232224528017466765672;
		bigint_t* _1212719463429896941636 = bigint(96);
		bigint_t* _3554976386402970783165 = bigint(-10622884);
		bigint_t* _4181182094896325888921 = bigint_add(_1212719463429896941636, _3554976386402970783165 );
		bigint_to_string(_4181182094896325888921, 10, buffer);
		printf("trying ");
		puts("add(96, -10622884)");
		puts(buffer);
		assert(strcmp(buffer, "-10622788") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1212719463429896941636);
		bigint_free(_3554976386402970783165);
		bigint_free(_4181182094896325888921);

	

		bigint_t* _4057672670647583569376;
		bigint_t* _4259419025319440218135 = bigint(96);
		bigint_t* _2835838364091599947308 = bigint(-10622884);
		bigint_t* _2228239792998436347800 = bigint_sub(_4259419025319440218135, _2835838364091599947308 );
		bigint_to_string(_2228239792998436347800, 10, buffer);
		printf("trying ");
		puts("sub(96, -10622884)");
		puts(buffer);
		assert(strcmp(buffer, "10622980") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4259419025319440218135);
		bigint_free(_2835838364091599947308);
		bigint_free(_2228239792998436347800);

	

		bigint_t* _4083413243046677765399;
		bigint_t* _4721646179519498149596 = bigint(-122);
		bigint_t* _1028786727419571874467 = bigint(-14914255);
		bigint_t* _3104383385435555106846 = bigint_mul(_4721646179519498149596, _1028786727419571874467 );
		bigint_to_string(_3104383385435555106846, 10, buffer);
		printf("trying ");
		puts("mul(-122, -14914255)");
		puts(buffer);
		assert(strcmp(buffer, "1819539110") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4721646179519498149596);
		bigint_free(_1028786727419571874467);
		bigint_free(_3104383385435555106846);

	

		bigint_t* _2809876847152803079285;
		bigint_t* _240179098336480171527 = bigint(-122);
		bigint_t* _422648162950472375323 = bigint(-14914255);
		bigint_t* _1309014103781564417694 = bigint_add(_240179098336480171527, _422648162950472375323 );
		bigint_to_string(_1309014103781564417694, 10, buffer);
		printf("trying ");
		puts("add(-122, -14914255)");
		puts(buffer);
		assert(strcmp(buffer, "-14914377") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_240179098336480171527);
		bigint_free(_422648162950472375323);
		bigint_free(_1309014103781564417694);

	

		bigint_t* _2317164462176532160492;
		bigint_t* _1305755724002439457229 = bigint(-122);
		bigint_t* _1165740596736474750058 = bigint(-14914255);
		bigint_t* _2488470901944375229217 = bigint_sub(_1305755724002439457229, _1165740596736474750058 );
		bigint_to_string(_2488470901944375229217, 10, buffer);
		printf("trying ");
		puts("sub(-122, -14914255)");
		puts(buffer);
		assert(strcmp(buffer, "14914133") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1305755724002439457229);
		bigint_free(_1165740596736474750058);
		bigint_free(_2488470901944375229217);

	

		bigint_t* _2711939284282594602775;
		bigint_t* _1523233316306012366309 = bigint(1);
		bigint_t* _1751737696403809147554 = bigint(5012367);
		bigint_t* _2920499242889104576772 = bigint_mul(_1523233316306012366309, _1751737696403809147554 );
		bigint_to_string(_2920499242889104576772, 10, buffer);
		printf("trying ");
		puts("mul(1, 5012367)");
		puts(buffer);
		assert(strcmp(buffer, "5012367") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1523233316306012366309);
		bigint_free(_1751737696403809147554);
		bigint_free(_2920499242889104576772);

	

		bigint_t* _1989972237313063147098;
		bigint_t* _4056309067720290763819 = bigint(1);
		bigint_t* _986472959665279511399 = bigint(5012367);
		bigint_t* _2415304833848949577455 = bigint_add(_4056309067720290763819, _986472959665279511399 );
		bigint_to_string(_2415304833848949577455, 10, buffer);
		printf("trying ");
		puts("add(1, 5012367)");
		puts(buffer);
		assert(strcmp(buffer, "5012368") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4056309067720290763819);
		bigint_free(_986472959665279511399);
		bigint_free(_2415304833848949577455);

	

		bigint_t* _1261022884799324303284;
		bigint_t* _3137992835912609522185 = bigint(1);
		bigint_t* _1369302890494780219703 = bigint(5012367);
		bigint_t* _1785126213121181131410 = bigint_sub(_3137992835912609522185, _1369302890494780219703 );
		bigint_to_string(_1785126213121181131410, 10, buffer);
		printf("trying ");
		puts("sub(1, 5012367)");
		puts(buffer);
		assert(strcmp(buffer, "-5012366") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3137992835912609522185);
		bigint_free(_1369302890494780219703);
		bigint_free(_1785126213121181131410);

	

		bigint_t* _4580607820191501204938;
		bigint_t* _618348474055020747791 = bigint(-165);
		bigint_t* _4491318248393191387795 = bigint(2591160);
		bigint_t* _3719273159358833290705 = bigint_mul(_618348474055020747791, _4491318248393191387795 );
		bigint_to_string(_3719273159358833290705, 10, buffer);
		printf("trying ");
		puts("mul(-165, 2591160)");
		puts(buffer);
		assert(strcmp(buffer, "-427541400") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_618348474055020747791);
		bigint_free(_4491318248393191387795);
		bigint_free(_3719273159358833290705);

	

		bigint_t* _1393316308442456953318;
		bigint_t* _94480258644512354514 = bigint(-165);
		bigint_t* _886996977509224196418 = bigint(2591160);
		bigint_t* _766226370068022429130 = bigint_add(_94480258644512354514, _886996977509224196418 );
		bigint_to_string(_766226370068022429130, 10, buffer);
		printf("trying ");
		puts("add(-165, 2591160)");
		puts(buffer);
		assert(strcmp(buffer, "2590995") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_94480258644512354514);
		bigint_free(_886996977509224196418);
		bigint_free(_766226370068022429130);

	

		bigint_t* _1879113096300502746189;
		bigint_t* _4606066740645006708670 = bigint(-165);
		bigint_t* _2204934534655085923078 = bigint(2591160);
		bigint_t* _1999348911814227905306 = bigint_sub(_4606066740645006708670, _2204934534655085923078 );
		bigint_to_string(_1999348911814227905306, 10, buffer);
		printf("trying ");
		puts("sub(-165, 2591160)");
		puts(buffer);
		assert(strcmp(buffer, "-2591325") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4606066740645006708670);
		bigint_free(_2204934534655085923078);
		bigint_free(_1999348911814227905306);

	

		bigint_t* _756278971072205130902;
		bigint_t* _269357453901875531740 = bigint(195);
		bigint_t* _4672794467469274477974 = bigint(-5568213);
		bigint_t* _974806146144459243624 = bigint_mul(_269357453901875531740, _4672794467469274477974 );
		bigint_to_string(_974806146144459243624, 10, buffer);
		printf("trying ");
		puts("mul(195, -5568213)");
		puts(buffer);
		assert(strcmp(buffer, "-1085801535") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_269357453901875531740);
		bigint_free(_4672794467469274477974);
		bigint_free(_974806146144459243624);

	

		bigint_t* _4168297553967640942798;
		bigint_t* _453344257378320047670 = bigint(195);
		bigint_t* _3100776076109895840535 = bigint(-5568213);
		bigint_t* _1696249569466770468169 = bigint_add(_453344257378320047670, _3100776076109895840535 );
		bigint_to_string(_1696249569466770468169, 10, buffer);
		printf("trying ");
		puts("add(195, -5568213)");
		puts(buffer);
		assert(strcmp(buffer, "-5568018") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_453344257378320047670);
		bigint_free(_3100776076109895840535);
		bigint_free(_1696249569466770468169);

	

		bigint_t* _3268378201401173656677;
		bigint_t* _3590834810245860624517 = bigint(195);
		bigint_t* _3382032627783116619974 = bigint(-5568213);
		bigint_t* _1367562979941206472097 = bigint_sub(_3590834810245860624517, _3382032627783116619974 );
		bigint_to_string(_1367562979941206472097, 10, buffer);
		printf("trying ");
		puts("sub(195, -5568213)");
		puts(buffer);
		assert(strcmp(buffer, "5568408") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3590834810245860624517);
		bigint_free(_3382032627783116619974);
		bigint_free(_1367562979941206472097);

	

		bigint_t* _321052979562596393986;
		bigint_t* _1905006516055636236679 = bigint(-17);
		bigint_t* _1933682913815085254026 = bigint(1031967);
		bigint_t* _792889785227439054856 = bigint_mul(_1905006516055636236679, _1933682913815085254026 );
		bigint_to_string(_792889785227439054856, 10, buffer);
		printf("trying ");
		puts("mul(-17, 1031967)");
		puts(buffer);
		assert(strcmp(buffer, "-17543439") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1905006516055636236679);
		bigint_free(_1933682913815085254026);
		bigint_free(_792889785227439054856);

	

		bigint_t* _395532535603319941966;
		bigint_t* _4253800521987836892464 = bigint(-17);
		bigint_t* _558071117375015909514 = bigint(1031967);
		bigint_t* _3900959717958794891112 = bigint_add(_4253800521987836892464, _558071117375015909514 );
		bigint_to_string(_3900959717958794891112, 10, buffer);
		printf("trying ");
		puts("add(-17, 1031967)");
		puts(buffer);
		assert(strcmp(buffer, "1031950") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4253800521987836892464);
		bigint_free(_558071117375015909514);
		bigint_free(_3900959717958794891112);

	

		bigint_t* _883910878090722674494;
		bigint_t* _3973162927773985832437 = bigint(-17);
		bigint_t* _3992923917026761511745 = bigint(1031967);
		bigint_t* _2925879060946799913660 = bigint_sub(_3973162927773985832437, _3992923917026761511745 );
		bigint_to_string(_2925879060946799913660, 10, buffer);
		printf("trying ");
		puts("sub(-17, 1031967)");
		puts(buffer);
		assert(strcmp(buffer, "-1031984") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3973162927773985832437);
		bigint_free(_3992923917026761511745);
		bigint_free(_2925879060946799913660);

	

		bigint_t* _158299779610628320461;
		bigint_t* _3091339450731545111402 = bigint(16);
		bigint_t* _874511505246735389874 = bigint(-11817445);
		bigint_t* _4014519837865432794827 = bigint_mul(_3091339450731545111402, _874511505246735389874 );
		bigint_to_string(_4014519837865432794827, 10, buffer);
		printf("trying ");
		puts("mul(16, -11817445)");
		puts(buffer);
		assert(strcmp(buffer, "-189079120") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3091339450731545111402);
		bigint_free(_874511505246735389874);
		bigint_free(_4014519837865432794827);

	

		bigint_t* _684117616591428701104;
		bigint_t* _1413893758135175161763 = bigint(16);
		bigint_t* _4343208643648360652447 = bigint(-11817445);
		bigint_t* _3082063586513606600870 = bigint_add(_1413893758135175161763, _4343208643648360652447 );
		bigint_to_string(_3082063586513606600870, 10, buffer);
		printf("trying ");
		puts("add(16, -11817445)");
		puts(buffer);
		assert(strcmp(buffer, "-11817429") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1413893758135175161763);
		bigint_free(_4343208643648360652447);
		bigint_free(_3082063586513606600870);

	

		bigint_t* _3048115645055637068533;
		bigint_t* _1863811759753751465594 = bigint(16);
		bigint_t* _724132625970758446663 = bigint(-11817445);
		bigint_t* _1533430795014366995826 = bigint_sub(_1863811759753751465594, _724132625970758446663 );
		bigint_to_string(_1533430795014366995826, 10, buffer);
		printf("trying ");
		puts("sub(16, -11817445)");
		puts(buffer);
		assert(strcmp(buffer, "11817461") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1863811759753751465594);
		bigint_free(_724132625970758446663);
		bigint_free(_1533430795014366995826);

	

		bigint_t* _2819527064162079501933;
		bigint_t* _4297167211363699871865 = bigint(-186);
		bigint_t* _1527820372856457480991 = bigint(-573428);
		bigint_t* _2675621353169530490359 = bigint_mul(_4297167211363699871865, _1527820372856457480991 );
		bigint_to_string(_2675621353169530490359, 10, buffer);
		printf("trying ");
		puts("mul(-186, -573428)");
		puts(buffer);
		assert(strcmp(buffer, "106657608") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4297167211363699871865);
		bigint_free(_1527820372856457480991);
		bigint_free(_2675621353169530490359);

	

		bigint_t* _2066030383646397573702;
		bigint_t* _1852459281249159495612 = bigint(-186);
		bigint_t* _3452687829304332463981 = bigint(-573428);
		bigint_t* _4089292292210500893492 = bigint_add(_1852459281249159495612, _3452687829304332463981 );
		bigint_to_string(_4089292292210500893492, 10, buffer);
		printf("trying ");
		puts("add(-186, -573428)");
		puts(buffer);
		assert(strcmp(buffer, "-573614") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1852459281249159495612);
		bigint_free(_3452687829304332463981);
		bigint_free(_4089292292210500893492);

	

		bigint_t* _104380473884064062473;
		bigint_t* _1548264095889880327896 = bigint(-186);
		bigint_t* _3086882743659506422105 = bigint(-573428);
		bigint_t* _211921543164083033584 = bigint_sub(_1548264095889880327896, _3086882743659506422105 );
		bigint_to_string(_211921543164083033584, 10, buffer);
		printf("trying ");
		puts("sub(-186, -573428)");
		puts(buffer);
		assert(strcmp(buffer, "573242") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1548264095889880327896);
		bigint_free(_3086882743659506422105);
		bigint_free(_211921543164083033584);

	

		bigint_t* _4408882845993848620167;
		bigint_t* _4639971647678256280926 = bigint(-118);
		bigint_t* _865645345227141513527 = bigint(10681399);
		bigint_t* _1679353126200450134295 = bigint_mul(_4639971647678256280926, _865645345227141513527 );
		bigint_to_string(_1679353126200450134295, 10, buffer);
		printf("trying ");
		puts("mul(-118, 10681399)");
		puts(buffer);
		assert(strcmp(buffer, "-1260405082") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4639971647678256280926);
		bigint_free(_865645345227141513527);
		bigint_free(_1679353126200450134295);

	

		bigint_t* _3503019470148809911975;
		bigint_t* _4278889254350148019454 = bigint(-118);
		bigint_t* _605273127977845035985 = bigint(10681399);
		bigint_t* _315645019264074889682 = bigint_add(_4278889254350148019454, _605273127977845035985 );
		bigint_to_string(_315645019264074889682, 10, buffer);
		printf("trying ");
		puts("add(-118, 10681399)");
		puts(buffer);
		assert(strcmp(buffer, "10681281") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4278889254350148019454);
		bigint_free(_605273127977845035985);
		bigint_free(_315645019264074889682);

	

		bigint_t* _731397928208307683429;
		bigint_t* _2025238984431039382874 = bigint(-118);
		bigint_t* _4014862951502724869814 = bigint(10681399);
		bigint_t* _54125164024609507094 = bigint_sub(_2025238984431039382874, _4014862951502724869814 );
		bigint_to_string(_54125164024609507094, 10, buffer);
		printf("trying ");
		puts("sub(-118, 10681399)");
		puts(buffer);
		assert(strcmp(buffer, "-10681517") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2025238984431039382874);
		bigint_free(_4014862951502724869814);
		bigint_free(_54125164024609507094);

	

		bigint_t* _594480634439457911618;
		bigint_t* _3880888599840156596762 = bigint(-238);
		bigint_t* _737693337640905551742 = bigint(-8502051);
		bigint_t* _4134883943778849349396 = bigint_mul(_3880888599840156596762, _737693337640905551742 );
		bigint_to_string(_4134883943778849349396, 10, buffer);
		printf("trying ");
		puts("mul(-238, -8502051)");
		puts(buffer);
		assert(strcmp(buffer, "2023488138") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3880888599840156596762);
		bigint_free(_737693337640905551742);
		bigint_free(_4134883943778849349396);

	

		bigint_t* _1212792169041272443340;
		bigint_t* _627571846245103235315 = bigint(-238);
		bigint_t* _3683975513153947905555 = bigint(-8502051);
		bigint_t* _3856159787025560500468 = bigint_add(_627571846245103235315, _3683975513153947905555 );
		bigint_to_string(_3856159787025560500468, 10, buffer);
		printf("trying ");
		puts("add(-238, -8502051)");
		puts(buffer);
		assert(strcmp(buffer, "-8502289") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_627571846245103235315);
		bigint_free(_3683975513153947905555);
		bigint_free(_3856159787025560500468);

	

		bigint_t* _4309033444538207816737;
		bigint_t* _1528792352137513246154 = bigint(-238);
		bigint_t* _2649557034376451136699 = bigint(-8502051);
		bigint_t* _306211734147698565681 = bigint_sub(_1528792352137513246154, _2649557034376451136699 );
		bigint_to_string(_306211734147698565681, 10, buffer);
		printf("trying ");
		puts("sub(-238, -8502051)");
		puts(buffer);
		assert(strcmp(buffer, "8501813") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1528792352137513246154);
		bigint_free(_2649557034376451136699);
		bigint_free(_306211734147698565681);

	

		bigint_t* _971789853530262165799;
		bigint_t* _143949268490578245037 = bigint(-81);
		bigint_t* _4060820626376902991815 = bigint(-3924728);
		bigint_t* _57215786185212904999 = bigint_mul(_143949268490578245037, _4060820626376902991815 );
		bigint_to_string(_57215786185212904999, 10, buffer);
		printf("trying ");
		puts("mul(-81, -3924728)");
		puts(buffer);
		assert(strcmp(buffer, "317902968") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_143949268490578245037);
		bigint_free(_4060820626376902991815);
		bigint_free(_57215786185212904999);

	

		bigint_t* _3093005839621129850010;
		bigint_t* _3443888637724498881809 = bigint(-81);
		bigint_t* _470656851543856398026 = bigint(-3924728);
		bigint_t* _3941865968290304900041 = bigint_add(_3443888637724498881809, _470656851543856398026 );
		bigint_to_string(_3941865968290304900041, 10, buffer);
		printf("trying ");
		puts("add(-81, -3924728)");
		puts(buffer);
		assert(strcmp(buffer, "-3924809") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3443888637724498881809);
		bigint_free(_470656851543856398026);
		bigint_free(_3941865968290304900041);

	

		bigint_t* _1893335714276445920908;
		bigint_t* _3287548180020380343192 = bigint(-81);
		bigint_t* _3377613032210115654857 = bigint(-3924728);
		bigint_t* _4429161119740644343852 = bigint_sub(_3287548180020380343192, _3377613032210115654857 );
		bigint_to_string(_4429161119740644343852, 10, buffer);
		printf("trying ");
		puts("sub(-81, -3924728)");
		puts(buffer);
		assert(strcmp(buffer, "3924647") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3287548180020380343192);
		bigint_free(_3377613032210115654857);
		bigint_free(_4429161119740644343852);

	

		bigint_t* _1749251572576007275377;
		bigint_t* _1576670194344894259852 = bigint(-6);
		bigint_t* _3062690398689179590584 = bigint(-6098977);
		bigint_t* _4088144737776114543735 = bigint_mul(_1576670194344894259852, _3062690398689179590584 );
		bigint_to_string(_4088144737776114543735, 10, buffer);
		printf("trying ");
		puts("mul(-6, -6098977)");
		puts(buffer);
		assert(strcmp(buffer, "36593862") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1576670194344894259852);
		bigint_free(_3062690398689179590584);
		bigint_free(_4088144737776114543735);

	

		bigint_t* _3473035932065085630894;
		bigint_t* _2848075358149721623649 = bigint(-6);
		bigint_t* _3389901605675428068357 = bigint(-6098977);
		bigint_t* _1738581816510256287025 = bigint_add(_2848075358149721623649, _3389901605675428068357 );
		bigint_to_string(_1738581816510256287025, 10, buffer);
		printf("trying ");
		puts("add(-6, -6098977)");
		puts(buffer);
		assert(strcmp(buffer, "-6098983") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2848075358149721623649);
		bigint_free(_3389901605675428068357);
		bigint_free(_1738581816510256287025);

	

		bigint_t* _3084951125688547471593;
		bigint_t* _630970230140558630082 = bigint(-6);
		bigint_t* _4078144594163149608432 = bigint(-6098977);
		bigint_t* _4179773186993416228601 = bigint_sub(_630970230140558630082, _4078144594163149608432 );
		bigint_to_string(_4179773186993416228601, 10, buffer);
		printf("trying ");
		puts("sub(-6, -6098977)");
		puts(buffer);
		assert(strcmp(buffer, "6098971") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_630970230140558630082);
		bigint_free(_4078144594163149608432);
		bigint_free(_4179773186993416228601);

	

		bigint_t* _93702405781060275207;
		bigint_t* _3303873348722368939142 = bigint(-23);
		bigint_t* _3514597477319873984181 = bigint(-3353225);
		bigint_t* _1315617511230851118824 = bigint_mul(_3303873348722368939142, _3514597477319873984181 );
		bigint_to_string(_1315617511230851118824, 10, buffer);
		printf("trying ");
		puts("mul(-23, -3353225)");
		puts(buffer);
		assert(strcmp(buffer, "77124175") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3303873348722368939142);
		bigint_free(_3514597477319873984181);
		bigint_free(_1315617511230851118824);

	

		bigint_t* _3847117546720486757327;
		bigint_t* _375203609913266356366 = bigint(-23);
		bigint_t* _2999173540732733850573 = bigint(-3353225);
		bigint_t* _1512891314562801683893 = bigint_add(_375203609913266356366, _2999173540732733850573 );
		bigint_to_string(_1512891314562801683893, 10, buffer);
		printf("trying ");
		puts("add(-23, -3353225)");
		puts(buffer);
		assert(strcmp(buffer, "-3353248") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_375203609913266356366);
		bigint_free(_2999173540732733850573);
		bigint_free(_1512891314562801683893);

	

		bigint_t* _642255317169193295283;
		bigint_t* _2662054475219709039149 = bigint(-23);
		bigint_t* _4670531060877219919883 = bigint(-3353225);
		bigint_t* _2025170870221557103385 = bigint_sub(_2662054475219709039149, _4670531060877219919883 );
		bigint_to_string(_2025170870221557103385, 10, buffer);
		printf("trying ");
		puts("sub(-23, -3353225)");
		puts(buffer);
		assert(strcmp(buffer, "3353202") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2662054475219709039149);
		bigint_free(_4670531060877219919883);
		bigint_free(_2025170870221557103385);

	

		bigint_t* _3840006372117594652316;
		bigint_t* _3136347867294149508125 = bigint(-141);
		bigint_t* _1977617512252765802746 = bigint(-6156341);
		bigint_t* _1681326083120648671829 = bigint_mul(_3136347867294149508125, _1977617512252765802746 );
		bigint_to_string(_1681326083120648671829, 10, buffer);
		printf("trying ");
		puts("mul(-141, -6156341)");
		puts(buffer);
		assert(strcmp(buffer, "868044081") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3136347867294149508125);
		bigint_free(_1977617512252765802746);
		bigint_free(_1681326083120648671829);

	

		bigint_t* _1989100488836749241203;
		bigint_t* _87040166326725689951 = bigint(-141);
		bigint_t* _4584831304845235504783 = bigint(-6156341);
		bigint_t* _164525438780782068525 = bigint_add(_87040166326725689951, _4584831304845235504783 );
		bigint_to_string(_164525438780782068525, 10, buffer);
		printf("trying ");
		puts("add(-141, -6156341)");
		puts(buffer);
		assert(strcmp(buffer, "-6156482") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_87040166326725689951);
		bigint_free(_4584831304845235504783);
		bigint_free(_164525438780782068525);

	

		bigint_t* _3351721374517369653764;
		bigint_t* _2859408921135016057783 = bigint(-141);
		bigint_t* _224800150349927881174 = bigint(-6156341);
		bigint_t* _742403978018304316822 = bigint_sub(_2859408921135016057783, _224800150349927881174 );
		bigint_to_string(_742403978018304316822, 10, buffer);
		printf("trying ");
		puts("sub(-141, -6156341)");
		puts(buffer);
		assert(strcmp(buffer, "6156200") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2859408921135016057783);
		bigint_free(_224800150349927881174);
		bigint_free(_742403978018304316822);

	

		bigint_t* _953337459274824336155;
		bigint_t* _4354564299621115794005 = bigint(-172);
		bigint_t* _2847370860532716924239 = bigint(-13235804);
		bigint_t* _1838634635632343496842 = bigint_mul(_4354564299621115794005, _2847370860532716924239 );
		bigint_to_string(_1838634635632343496842, 10, buffer);
		printf("trying ");
		puts("mul(-172, -13235804)");
		puts(buffer);
		assert(strcmp(buffer, "2276558288") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4354564299621115794005);
		bigint_free(_2847370860532716924239);
		bigint_free(_1838634635632343496842);

	

		bigint_t* _1658912748821102758233;
		bigint_t* _3345090149821213391003 = bigint(-172);
		bigint_t* _3210882299655835341170 = bigint(-13235804);
		bigint_t* _2960752945635431607624 = bigint_add(_3345090149821213391003, _3210882299655835341170 );
		bigint_to_string(_2960752945635431607624, 10, buffer);
		printf("trying ");
		puts("add(-172, -13235804)");
		puts(buffer);
		assert(strcmp(buffer, "-13235976") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3345090149821213391003);
		bigint_free(_3210882299655835341170);
		bigint_free(_2960752945635431607624);

	

		bigint_t* _4517874709283024821;
		bigint_t* _828648460147948646962 = bigint(-172);
		bigint_t* _1058589741248452919682 = bigint(-13235804);
		bigint_t* _2129224762848479366013 = bigint_sub(_828648460147948646962, _1058589741248452919682 );
		bigint_to_string(_2129224762848479366013, 10, buffer);
		printf("trying ");
		puts("sub(-172, -13235804)");
		puts(buffer);
		assert(strcmp(buffer, "13235632") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_828648460147948646962);
		bigint_free(_1058589741248452919682);
		bigint_free(_2129224762848479366013);

	

		bigint_t* _3909865640748897704121;
		bigint_t* _3757943346526731726423 = bigint(38);
		bigint_t* _1138712948043418848303 = bigint(2115703);
		bigint_t* _1919049446331926703848 = bigint_mul(_3757943346526731726423, _1138712948043418848303 );
		bigint_to_string(_1919049446331926703848, 10, buffer);
		printf("trying ");
		puts("mul(38, 2115703)");
		puts(buffer);
		assert(strcmp(buffer, "80396714") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3757943346526731726423);
		bigint_free(_1138712948043418848303);
		bigint_free(_1919049446331926703848);

	

		bigint_t* _886957082909387389823;
		bigint_t* _267708123573449552384 = bigint(38);
		bigint_t* _4638350039334575855946 = bigint(2115703);
		bigint_t* _3862537090297537351728 = bigint_add(_267708123573449552384, _4638350039334575855946 );
		bigint_to_string(_3862537090297537351728, 10, buffer);
		printf("trying ");
		puts("add(38, 2115703)");
		puts(buffer);
		assert(strcmp(buffer, "2115741") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_267708123573449552384);
		bigint_free(_4638350039334575855946);
		bigint_free(_3862537090297537351728);

	

		bigint_t* _3775938729650492000943;
		bigint_t* _4605878675129513831560 = bigint(38);
		bigint_t* _1889428548072552327676 = bigint(2115703);
		bigint_t* _1340141503937895600633 = bigint_sub(_4605878675129513831560, _1889428548072552327676 );
		bigint_to_string(_1340141503937895600633, 10, buffer);
		printf("trying ");
		puts("sub(38, 2115703)");
		puts(buffer);
		assert(strcmp(buffer, "-2115665") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4605878675129513831560);
		bigint_free(_1889428548072552327676);
		bigint_free(_1340141503937895600633);

	

		bigint_t* _2094960037693260240304;
		bigint_t* _3068767158504157388919 = bigint(99);
		bigint_t* _1462376559722905784351 = bigint(5135091);
		bigint_t* _3775514439166942909898 = bigint_mul(_3068767158504157388919, _1462376559722905784351 );
		bigint_to_string(_3775514439166942909898, 10, buffer);
		printf("trying ");
		puts("mul(99, 5135091)");
		puts(buffer);
		assert(strcmp(buffer, "508374009") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3068767158504157388919);
		bigint_free(_1462376559722905784351);
		bigint_free(_3775514439166942909898);

	

		bigint_t* _39747643835027832346;
		bigint_t* _4579072012724299150005 = bigint(99);
		bigint_t* _2511671225543910306290 = bigint(5135091);
		bigint_t* _3590782856845511013409 = bigint_add(_4579072012724299150005, _2511671225543910306290 );
		bigint_to_string(_3590782856845511013409, 10, buffer);
		printf("trying ");
		puts("add(99, 5135091)");
		puts(buffer);
		assert(strcmp(buffer, "5135190") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4579072012724299150005);
		bigint_free(_2511671225543910306290);
		bigint_free(_3590782856845511013409);

	

		bigint_t* _4342417448974118042585;
		bigint_t* _208294253598036804549 = bigint(99);
		bigint_t* _1386616491677407968207 = bigint(5135091);
		bigint_t* _3956293484848599218815 = bigint_sub(_208294253598036804549, _1386616491677407968207 );
		bigint_to_string(_3956293484848599218815, 10, buffer);
		printf("trying ");
		puts("sub(99, 5135091)");
		puts(buffer);
		assert(strcmp(buffer, "-5134992") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_208294253598036804549);
		bigint_free(_1386616491677407968207);
		bigint_free(_3956293484848599218815);

	

		bigint_t* _642113646657328597726;
		bigint_t* _2261634959995511415450 = bigint(-223);
		bigint_t* _4295905503973023744531 = bigint(-16582333);
		bigint_t* _3705144568617685216400 = bigint_mul(_2261634959995511415450, _4295905503973023744531 );
		bigint_to_string(_3705144568617685216400, 10, buffer);
		printf("trying ");
		puts("mul(-223, -16582333)");
		puts(buffer);
		assert(strcmp(buffer, "3697860259") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2261634959995511415450);
		bigint_free(_4295905503973023744531);
		bigint_free(_3705144568617685216400);

	

		bigint_t* _182021900984327829185;
		bigint_t* _305695417307092811741 = bigint(-223);
		bigint_t* _886029249858588031364 = bigint(-16582333);
		bigint_t* _2274728922782716053354 = bigint_add(_305695417307092811741, _886029249858588031364 );
		bigint_to_string(_2274728922782716053354, 10, buffer);
		printf("trying ");
		puts("add(-223, -16582333)");
		puts(buffer);
		assert(strcmp(buffer, "-16582556") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_305695417307092811741);
		bigint_free(_886029249858588031364);
		bigint_free(_2274728922782716053354);

	

		bigint_t* _2594364393664187820125;
		bigint_t* _1800458897831932233206 = bigint(-223);
		bigint_t* _2915310610239354234335 = bigint(-16582333);
		bigint_t* _1945381469948790931196 = bigint_sub(_1800458897831932233206, _2915310610239354234335 );
		bigint_to_string(_1945381469948790931196, 10, buffer);
		printf("trying ");
		puts("sub(-223, -16582333)");
		puts(buffer);
		assert(strcmp(buffer, "16582110") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1800458897831932233206);
		bigint_free(_2915310610239354234335);
		bigint_free(_1945381469948790931196);

	

		bigint_t* _1838904319175509192920;
		bigint_t* _2572370571159781016178 = bigint(224);
		bigint_t* _3646323895656683341725 = bigint(-10432955);
		bigint_t* _1130949727936671966055 = bigint_mul(_2572370571159781016178, _3646323895656683341725 );
		bigint_to_string(_1130949727936671966055, 10, buffer);
		printf("trying ");
		puts("mul(224, -10432955)");
		puts(buffer);
		assert(strcmp(buffer, "-2336981920") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2572370571159781016178);
		bigint_free(_3646323895656683341725);
		bigint_free(_1130949727936671966055);

	

		bigint_t* _2177513479280317466022;
		bigint_t* _2763694287366006725767 = bigint(224);
		bigint_t* _4693540646947125296826 = bigint(-10432955);
		bigint_t* _956562037536576778409 = bigint_add(_2763694287366006725767, _4693540646947125296826 );
		bigint_to_string(_956562037536576778409, 10, buffer);
		printf("trying ");
		puts("add(224, -10432955)");
		puts(buffer);
		assert(strcmp(buffer, "-10432731") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2763694287366006725767);
		bigint_free(_4693540646947125296826);
		bigint_free(_956562037536576778409);

	

		bigint_t* _655509900808345650561;
		bigint_t* _3704445796781758882994 = bigint(224);
		bigint_t* _891919275840312945045 = bigint(-10432955);
		bigint_t* _2092567868204173646092 = bigint_sub(_3704445796781758882994, _891919275840312945045 );
		bigint_to_string(_2092567868204173646092, 10, buffer);
		printf("trying ");
		puts("sub(224, -10432955)");
		puts(buffer);
		assert(strcmp(buffer, "10433179") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3704445796781758882994);
		bigint_free(_891919275840312945045);
		bigint_free(_2092567868204173646092);

	

		bigint_t* _3705549442169425114318;
		bigint_t* _85151948664911764465 = bigint(116);
		bigint_t* _4009767559773818944006 = bigint(4424303);
		bigint_t* _815565900873886740639 = bigint_mul(_85151948664911764465, _4009767559773818944006 );
		bigint_to_string(_815565900873886740639, 10, buffer);
		printf("trying ");
		puts("mul(116, 4424303)");
		puts(buffer);
		assert(strcmp(buffer, "513219148") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_85151948664911764465);
		bigint_free(_4009767559773818944006);
		bigint_free(_815565900873886740639);

	

		bigint_t* _3491003779277738613325;
		bigint_t* _717280637433278203546 = bigint(116);
		bigint_t* _1309394345896892041537 = bigint(4424303);
		bigint_t* _2454929144606940746385 = bigint_add(_717280637433278203546, _1309394345896892041537 );
		bigint_to_string(_2454929144606940746385, 10, buffer);
		printf("trying ");
		puts("add(116, 4424303)");
		puts(buffer);
		assert(strcmp(buffer, "4424419") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_717280637433278203546);
		bigint_free(_1309394345896892041537);
		bigint_free(_2454929144606940746385);

	

		bigint_t* _1969654018776755558342;
		bigint_t* _3675132995446398286663 = bigint(116);
		bigint_t* _3333290700094997137901 = bigint(4424303);
		bigint_t* _4642548386915635608084 = bigint_sub(_3675132995446398286663, _3333290700094997137901 );
		bigint_to_string(_4642548386915635608084, 10, buffer);
		printf("trying ");
		puts("sub(116, 4424303)");
		puts(buffer);
		assert(strcmp(buffer, "-4424187") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3675132995446398286663);
		bigint_free(_3333290700094997137901);
		bigint_free(_4642548386915635608084);

	

		bigint_t* _1738294464535465075764;
		bigint_t* _868966905636154437290 = bigint(2);
		bigint_t* _2632290011458283975972 = bigint(-5837678);
		bigint_t* _2257549425941524381130 = bigint_mul(_868966905636154437290, _2632290011458283975972 );
		bigint_to_string(_2257549425941524381130, 10, buffer);
		printf("trying ");
		puts("mul(2, -5837678)");
		puts(buffer);
		assert(strcmp(buffer, "-11675356") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_868966905636154437290);
		bigint_free(_2632290011458283975972);
		bigint_free(_2257549425941524381130);

	

		bigint_t* _888965130990719347832;
		bigint_t* _3954526172907422689557 = bigint(2);
		bigint_t* _3562585182813403813184 = bigint(-5837678);
		bigint_t* _2348515051138065988606 = bigint_add(_3954526172907422689557, _3562585182813403813184 );
		bigint_to_string(_2348515051138065988606, 10, buffer);
		printf("trying ");
		puts("add(2, -5837678)");
		puts(buffer);
		assert(strcmp(buffer, "-5837676") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3954526172907422689557);
		bigint_free(_3562585182813403813184);
		bigint_free(_2348515051138065988606);

	

		bigint_t* _4643304346802224881931;
		bigint_t* _2286350146185177981123 = bigint(2);
		bigint_t* _1558565414580940088389 = bigint(-5837678);
		bigint_t* _3046517696033809970721 = bigint_sub(_2286350146185177981123, _1558565414580940088389 );
		bigint_to_string(_3046517696033809970721, 10, buffer);
		printf("trying ");
		puts("sub(2, -5837678)");
		puts(buffer);
		assert(strcmp(buffer, "5837680") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2286350146185177981123);
		bigint_free(_1558565414580940088389);
		bigint_free(_3046517696033809970721);

	

		bigint_t* _938147740304489867538;
		bigint_t* _1938471838772205266859 = bigint(177);
		bigint_t* _3718996569189891320586 = bigint(-4259945);
		bigint_t* _2222677645759801894606 = bigint_mul(_1938471838772205266859, _3718996569189891320586 );
		bigint_to_string(_2222677645759801894606, 10, buffer);
		printf("trying ");
		puts("mul(177, -4259945)");
		puts(buffer);
		assert(strcmp(buffer, "-754010265") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1938471838772205266859);
		bigint_free(_3718996569189891320586);
		bigint_free(_2222677645759801894606);

	

		bigint_t* _3975938439735528495685;
		bigint_t* _2900806115248189868535 = bigint(177);
		bigint_t* _3078421071971667283820 = bigint(-4259945);
		bigint_t* _3665759988267190939263 = bigint_add(_2900806115248189868535, _3078421071971667283820 );
		bigint_to_string(_3665759988267190939263, 10, buffer);
		printf("trying ");
		puts("add(177, -4259945)");
		puts(buffer);
		assert(strcmp(buffer, "-4259768") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2900806115248189868535);
		bigint_free(_3078421071971667283820);
		bigint_free(_3665759988267190939263);

	

		bigint_t* _1475238486112582496126;
		bigint_t* _1273284384575433349614 = bigint(177);
		bigint_t* _1033798791870013592178 = bigint(-4259945);
		bigint_t* _1031668839408183589406 = bigint_sub(_1273284384575433349614, _1033798791870013592178 );
		bigint_to_string(_1031668839408183589406, 10, buffer);
		printf("trying ");
		puts("sub(177, -4259945)");
		puts(buffer);
		assert(strcmp(buffer, "4260122") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1273284384575433349614);
		bigint_free(_1033798791870013592178);
		bigint_free(_1031668839408183589406);

	

		bigint_t* _2105657074222316354763;
		bigint_t* _4670464855763919245566 = bigint(57);
		bigint_t* _1788752780378358454596 = bigint(1845883);
		bigint_t* _262086566793627299027 = bigint_mul(_4670464855763919245566, _1788752780378358454596 );
		bigint_to_string(_262086566793627299027, 10, buffer);
		printf("trying ");
		puts("mul(57, 1845883)");
		puts(buffer);
		assert(strcmp(buffer, "105215331") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4670464855763919245566);
		bigint_free(_1788752780378358454596);
		bigint_free(_262086566793627299027);

	

		bigint_t* _804556404773807094589;
		bigint_t* _2461965029884698976098 = bigint(57);
		bigint_t* _607199957313144347425 = bigint(1845883);
		bigint_t* _1749922182814238272451 = bigint_add(_2461965029884698976098, _607199957313144347425 );
		bigint_to_string(_1749922182814238272451, 10, buffer);
		printf("trying ");
		puts("add(57, 1845883)");
		puts(buffer);
		assert(strcmp(buffer, "1845940") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2461965029884698976098);
		bigint_free(_607199957313144347425);
		bigint_free(_1749922182814238272451);

	

		bigint_t* _707654237317341239898;
		bigint_t* _349433351173355035617 = bigint(57);
		bigint_t* _4660476960865131010851 = bigint(1845883);
		bigint_t* _3719542605424420498114 = bigint_sub(_349433351173355035617, _4660476960865131010851 );
		bigint_to_string(_3719542605424420498114, 10, buffer);
		printf("trying ");
		puts("sub(57, 1845883)");
		puts(buffer);
		assert(strcmp(buffer, "-1845826") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_349433351173355035617);
		bigint_free(_4660476960865131010851);
		bigint_free(_3719542605424420498114);

	

		bigint_t* _734012652883745117280;
		bigint_t* _2106046324260942596571 = bigint(239);
		bigint_t* _3940992479876498478314 = bigint(15442855);
		bigint_t* _1644363440276946194752 = bigint_mul(_2106046324260942596571, _3940992479876498478314 );
		bigint_to_string(_1644363440276946194752, 10, buffer);
		printf("trying ");
		puts("mul(239, 15442855)");
		puts(buffer);
		assert(strcmp(buffer, "3690842345") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2106046324260942596571);
		bigint_free(_3940992479876498478314);
		bigint_free(_1644363440276946194752);

	

		bigint_t* _1836780336701899038758;
		bigint_t* _4089731927199055353350 = bigint(239);
		bigint_t* _625918950447438579489 = bigint(15442855);
		bigint_t* _4640034857973200564112 = bigint_add(_4089731927199055353350, _625918950447438579489 );
		bigint_to_string(_4640034857973200564112, 10, buffer);
		printf("trying ");
		puts("add(239, 15442855)");
		puts(buffer);
		assert(strcmp(buffer, "15443094") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4089731927199055353350);
		bigint_free(_625918950447438579489);
		bigint_free(_4640034857973200564112);

	

		bigint_t* _1038677772907007284607;
		bigint_t* _861796211359987379429 = bigint(239);
		bigint_t* _920442177212222213912 = bigint(15442855);
		bigint_t* _4360312809150886606738 = bigint_sub(_861796211359987379429, _920442177212222213912 );
		bigint_to_string(_4360312809150886606738, 10, buffer);
		printf("trying ");
		puts("sub(239, 15442855)");
		puts(buffer);
		assert(strcmp(buffer, "-15442616") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_861796211359987379429);
		bigint_free(_920442177212222213912);
		bigint_free(_4360312809150886606738);

	

		bigint_t* _1791445478782454878835;
		bigint_t* _924990055615953967519 = bigint(188);
		bigint_t* _1677613219664213127478 = bigint(6441119);
		bigint_t* _1508185787139314489393 = bigint_mul(_924990055615953967519, _1677613219664213127478 );
		bigint_to_string(_1508185787139314489393, 10, buffer);
		printf("trying ");
		puts("mul(188, 6441119)");
		puts(buffer);
		assert(strcmp(buffer, "1210930372") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_924990055615953967519);
		bigint_free(_1677613219664213127478);
		bigint_free(_1508185787139314489393);

	

		bigint_t* _1843865534600369511437;
		bigint_t* _4488359031451632436476 = bigint(188);
		bigint_t* _275109851406530005330 = bigint(6441119);
		bigint_t* _1681687129412913517895 = bigint_add(_4488359031451632436476, _275109851406530005330 );
		bigint_to_string(_1681687129412913517895, 10, buffer);
		printf("trying ");
		puts("add(188, 6441119)");
		puts(buffer);
		assert(strcmp(buffer, "6441307") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4488359031451632436476);
		bigint_free(_275109851406530005330);
		bigint_free(_1681687129412913517895);

	

		bigint_t* _1549726641364500448316;
		bigint_t* _381695429860366064475 = bigint(188);
		bigint_t* _2308638682737356382740 = bigint(6441119);
		bigint_t* _678078980059613804241 = bigint_sub(_381695429860366064475, _2308638682737356382740 );
		bigint_to_string(_678078980059613804241, 10, buffer);
		printf("trying ");
		puts("sub(188, 6441119)");
		puts(buffer);
		assert(strcmp(buffer, "-6440931") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_381695429860366064475);
		bigint_free(_2308638682737356382740);
		bigint_free(_678078980059613804241);

	

		bigint_t* _2059132701369096336735;
		bigint_t* _1248884093033644047036 = bigint(148);
		bigint_t* _4459836944494824950282 = bigint(-14547245);
		bigint_t* _1996169589337606742754 = bigint_mul(_1248884093033644047036, _4459836944494824950282 );
		bigint_to_string(_1996169589337606742754, 10, buffer);
		printf("trying ");
		puts("mul(148, -14547245)");
		puts(buffer);
		assert(strcmp(buffer, "-2152992260") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1248884093033644047036);
		bigint_free(_4459836944494824950282);
		bigint_free(_1996169589337606742754);

	

		bigint_t* _4076390873705343057187;
		bigint_t* _1992913616236166424527 = bigint(148);
		bigint_t* _179173470273656725729 = bigint(-14547245);
		bigint_t* _4330280903418294348154 = bigint_add(_1992913616236166424527, _179173470273656725729 );
		bigint_to_string(_4330280903418294348154, 10, buffer);
		printf("trying ");
		puts("add(148, -14547245)");
		puts(buffer);
		assert(strcmp(buffer, "-14547097") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1992913616236166424527);
		bigint_free(_179173470273656725729);
		bigint_free(_4330280903418294348154);

	

		bigint_t* _1613963434936076009148;
		bigint_t* _22634406843028425116 = bigint(148);
		bigint_t* _3343926026720359751316 = bigint(-14547245);
		bigint_t* _1506594459087609120572 = bigint_sub(_22634406843028425116, _3343926026720359751316 );
		bigint_to_string(_1506594459087609120572, 10, buffer);
		printf("trying ");
		puts("sub(148, -14547245)");
		puts(buffer);
		assert(strcmp(buffer, "14547393") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_22634406843028425116);
		bigint_free(_3343926026720359751316);
		bigint_free(_1506594459087609120572);

	

		bigint_t* _985632769836283217085;
		bigint_t* _1939473485798197937576 = bigint(-23);
		bigint_t* _3888222553968870495884 = bigint(-6459705);
		bigint_t* _3320704899318062031609 = bigint_mul(_1939473485798197937576, _3888222553968870495884 );
		bigint_to_string(_3320704899318062031609, 10, buffer);
		printf("trying ");
		puts("mul(-23, -6459705)");
		puts(buffer);
		assert(strcmp(buffer, "148573215") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1939473485798197937576);
		bigint_free(_3888222553968870495884);
		bigint_free(_3320704899318062031609);

	

		bigint_t* _4409872784829629977564;
		bigint_t* _1224934330229936698731 = bigint(-23);
		bigint_t* _637093005065603202784 = bigint(-6459705);
		bigint_t* _2092511330983078870891 = bigint_add(_1224934330229936698731, _637093005065603202784 );
		bigint_to_string(_2092511330983078870891, 10, buffer);
		printf("trying ");
		puts("add(-23, -6459705)");
		puts(buffer);
		assert(strcmp(buffer, "-6459728") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1224934330229936698731);
		bigint_free(_637093005065603202784);
		bigint_free(_2092511330983078870891);

	

		bigint_t* _236052668358146155388;
		bigint_t* _119380302178735736305 = bigint(-23);
		bigint_t* _1555835576300757059598 = bigint(-6459705);
		bigint_t* _49737701950805982975 = bigint_sub(_119380302178735736305, _1555835576300757059598 );
		bigint_to_string(_49737701950805982975, 10, buffer);
		printf("trying ");
		puts("sub(-23, -6459705)");
		puts(buffer);
		assert(strcmp(buffer, "6459682") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_119380302178735736305);
		bigint_free(_1555835576300757059598);
		bigint_free(_49737701950805982975);

	

		bigint_t* _1380052438439381473662;
		bigint_t* _1878111195997770712649 = bigint(-101);
		bigint_t* _3440977500351770416434 = bigint(13056406);
		bigint_t* _2637789583475428958132 = bigint_mul(_1878111195997770712649, _3440977500351770416434 );
		bigint_to_string(_2637789583475428958132, 10, buffer);
		printf("trying ");
		puts("mul(-101, 13056406)");
		puts(buffer);
		assert(strcmp(buffer, "-1318697006") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1878111195997770712649);
		bigint_free(_3440977500351770416434);
		bigint_free(_2637789583475428958132);

	

		bigint_t* _1829866348852247766513;
		bigint_t* _3172349616178898503209 = bigint(-101);
		bigint_t* _4353917625321662687617 = bigint(13056406);
		bigint_t* _4508453195228192426859 = bigint_add(_3172349616178898503209, _4353917625321662687617 );
		bigint_to_string(_4508453195228192426859, 10, buffer);
		printf("trying ");
		puts("add(-101, 13056406)");
		puts(buffer);
		assert(strcmp(buffer, "13056305") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3172349616178898503209);
		bigint_free(_4353917625321662687617);
		bigint_free(_4508453195228192426859);

	

		bigint_t* _1040946844795786591495;
		bigint_t* _2715201399252589354000 = bigint(-101);
		bigint_t* _2062704456280892155416 = bigint(13056406);
		bigint_t* _1153811640409273025359 = bigint_sub(_2715201399252589354000, _2062704456280892155416 );
		bigint_to_string(_1153811640409273025359, 10, buffer);
		printf("trying ");
		puts("sub(-101, 13056406)");
		puts(buffer);
		assert(strcmp(buffer, "-13056507") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2715201399252589354000);
		bigint_free(_2062704456280892155416);
		bigint_free(_1153811640409273025359);

	

		bigint_t* _1038972022039245413655;
		bigint_t* _218798875817992403044 = bigint(-36);
		bigint_t* _703638379555661957710 = bigint(-8906388);
		bigint_t* _3353176129991510427182 = bigint_mul(_218798875817992403044, _703638379555661957710 );
		bigint_to_string(_3353176129991510427182, 10, buffer);
		printf("trying ");
		puts("mul(-36, -8906388)");
		puts(buffer);
		assert(strcmp(buffer, "320629968") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_218798875817992403044);
		bigint_free(_703638379555661957710);
		bigint_free(_3353176129991510427182);

	

		bigint_t* _788015627055858498511;
		bigint_t* _1613318715059402194261 = bigint(-36);
		bigint_t* _3264592355322027817698 = bigint(-8906388);
		bigint_t* _4523126168887060477824 = bigint_add(_1613318715059402194261, _3264592355322027817698 );
		bigint_to_string(_4523126168887060477824, 10, buffer);
		printf("trying ");
		puts("add(-36, -8906388)");
		puts(buffer);
		assert(strcmp(buffer, "-8906424") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1613318715059402194261);
		bigint_free(_3264592355322027817698);
		bigint_free(_4523126168887060477824);

	

		bigint_t* _2881022389682515206429;
		bigint_t* _4356900776603836824784 = bigint(-36);
		bigint_t* _3528044222381385027315 = bigint(-8906388);
		bigint_t* _4291950565103890468091 = bigint_sub(_4356900776603836824784, _3528044222381385027315 );
		bigint_to_string(_4291950565103890468091, 10, buffer);
		printf("trying ");
		puts("sub(-36, -8906388)");
		puts(buffer);
		assert(strcmp(buffer, "8906352") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4356900776603836824784);
		bigint_free(_3528044222381385027315);
		bigint_free(_4291950565103890468091);

	

		bigint_t* _4162805169811756348313;
		bigint_t* _257415974443766132583 = bigint(-163);
		bigint_t* _3059361368056220055907 = bigint(14573235);
		bigint_t* _3814191862072845260819 = bigint_mul(_257415974443766132583, _3059361368056220055907 );
		bigint_to_string(_3814191862072845260819, 10, buffer);
		printf("trying ");
		puts("mul(-163, 14573235)");
		puts(buffer);
		assert(strcmp(buffer, "-2375437305") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_257415974443766132583);
		bigint_free(_3059361368056220055907);
		bigint_free(_3814191862072845260819);

	

		bigint_t* _4209865018501570723723;
		bigint_t* _3026881737701355248023 = bigint(-163);
		bigint_t* _1611979593479770881330 = bigint(14573235);
		bigint_t* _4374630930663687717747 = bigint_add(_3026881737701355248023, _1611979593479770881330 );
		bigint_to_string(_4374630930663687717747, 10, buffer);
		printf("trying ");
		puts("add(-163, 14573235)");
		puts(buffer);
		assert(strcmp(buffer, "14573072") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3026881737701355248023);
		bigint_free(_1611979593479770881330);
		bigint_free(_4374630930663687717747);

	

		bigint_t* _3857440793014102053181;
		bigint_t* _1864965955189194992351 = bigint(-163);
		bigint_t* _704093293271276277360 = bigint(14573235);
		bigint_t* _2461580545192816524496 = bigint_sub(_1864965955189194992351, _704093293271276277360 );
		bigint_to_string(_2461580545192816524496, 10, buffer);
		printf("trying ");
		puts("sub(-163, 14573235)");
		puts(buffer);
		assert(strcmp(buffer, "-14573398") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1864965955189194992351);
		bigint_free(_704093293271276277360);
		bigint_free(_2461580545192816524496);

	

		bigint_t* _3436793781717786136485;
		bigint_t* _4337672103998408648992 = bigint(223);
		bigint_t* _4178456411480270996009 = bigint(760679);
		bigint_t* _210940928708000394723 = bigint_mul(_4337672103998408648992, _4178456411480270996009 );
		bigint_to_string(_210940928708000394723, 10, buffer);
		printf("trying ");
		puts("mul(223, 760679)");
		puts(buffer);
		assert(strcmp(buffer, "169631417") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4337672103998408648992);
		bigint_free(_4178456411480270996009);
		bigint_free(_210940928708000394723);

	

		bigint_t* _3692663693268050613076;
		bigint_t* _652311032449885913947 = bigint(223);
		bigint_t* _2689528024302879881 = bigint(760679);
		bigint_t* _2253606532397790455199 = bigint_add(_652311032449885913947, _2689528024302879881 );
		bigint_to_string(_2253606532397790455199, 10, buffer);
		printf("trying ");
		puts("add(223, 760679)");
		puts(buffer);
		assert(strcmp(buffer, "760902") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_652311032449885913947);
		bigint_free(_2689528024302879881);
		bigint_free(_2253606532397790455199);

	

		bigint_t* _2388765776370126569104;
		bigint_t* _2333039232761607761706 = bigint(223);
		bigint_t* _2021899120733324964507 = bigint(760679);
		bigint_t* _4035448701433352099463 = bigint_sub(_2333039232761607761706, _2021899120733324964507 );
		bigint_to_string(_4035448701433352099463, 10, buffer);
		printf("trying ");
		puts("sub(223, 760679)");
		puts(buffer);
		assert(strcmp(buffer, "-760456") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2333039232761607761706);
		bigint_free(_2021899120733324964507);
		bigint_free(_4035448701433352099463);

	

		bigint_t* _1977284864167646275287;
		bigint_t* _1372853646837922326308 = bigint(-247);
		bigint_t* _923383029759612586159 = bigint(16743933);
		bigint_t* _2664208170371811247689 = bigint_mul(_1372853646837922326308, _923383029759612586159 );
		bigint_to_string(_2664208170371811247689, 10, buffer);
		printf("trying ");
		puts("mul(-247, 16743933)");
		puts(buffer);
		assert(strcmp(buffer, "-4135751451") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1372853646837922326308);
		bigint_free(_923383029759612586159);
		bigint_free(_2664208170371811247689);

	

		bigint_t* _3249266854711121303759;
		bigint_t* _592236230365047169429 = bigint(-247);
		bigint_t* _800046021377609497215 = bigint(16743933);
		bigint_t* _4011864666388741275615 = bigint_add(_592236230365047169429, _800046021377609497215 );
		bigint_to_string(_4011864666388741275615, 10, buffer);
		printf("trying ");
		puts("add(-247, 16743933)");
		puts(buffer);
		assert(strcmp(buffer, "16743686") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_592236230365047169429);
		bigint_free(_800046021377609497215);
		bigint_free(_4011864666388741275615);

	

		bigint_t* _1083982478488899092810;
		bigint_t* _1277682927283321019361 = bigint(-247);
		bigint_t* _3850822177547503462363 = bigint(16743933);
		bigint_t* _729846597257596735255 = bigint_sub(_1277682927283321019361, _3850822177547503462363 );
		bigint_to_string(_729846597257596735255, 10, buffer);
		printf("trying ");
		puts("sub(-247, 16743933)");
		puts(buffer);
		assert(strcmp(buffer, "-16744180") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1277682927283321019361);
		bigint_free(_3850822177547503462363);
		bigint_free(_729846597257596735255);

	

		bigint_t* _1182753340394104285618;
		bigint_t* _2076173869517250312877 = bigint(-216);
		bigint_t* _3254545716195750117165 = bigint(13756684);
		bigint_t* _4660250088996614138560 = bigint_mul(_2076173869517250312877, _3254545716195750117165 );
		bigint_to_string(_4660250088996614138560, 10, buffer);
		printf("trying ");
		puts("mul(-216, 13756684)");
		puts(buffer);
		assert(strcmp(buffer, "-2971443744") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2076173869517250312877);
		bigint_free(_3254545716195750117165);
		bigint_free(_4660250088996614138560);

	

		bigint_t* _2716438611412650875587;
		bigint_t* _3933566284244519723409 = bigint(-216);
		bigint_t* _2539292290542872261186 = bigint(13756684);
		bigint_t* _2347983264102616043923 = bigint_add(_3933566284244519723409, _2539292290542872261186 );
		bigint_to_string(_2347983264102616043923, 10, buffer);
		printf("trying ");
		puts("add(-216, 13756684)");
		puts(buffer);
		assert(strcmp(buffer, "13756468") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3933566284244519723409);
		bigint_free(_2539292290542872261186);
		bigint_free(_2347983264102616043923);

	

		bigint_t* _2304511166206042803971;
		bigint_t* _1548444139071417737831 = bigint(-216);
		bigint_t* _3007136778818224065534 = bigint(13756684);
		bigint_t* _3503493343018759731522 = bigint_sub(_1548444139071417737831, _3007136778818224065534 );
		bigint_to_string(_3503493343018759731522, 10, buffer);
		printf("trying ");
		puts("sub(-216, 13756684)");
		puts(buffer);
		assert(strcmp(buffer, "-13756900") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1548444139071417737831);
		bigint_free(_3007136778818224065534);
		bigint_free(_3503493343018759731522);

	

		bigint_t* _1525993293869843197901;
		bigint_t* _4573640510939821011221 = bigint(-211);
		bigint_t* _3377153756714264988880 = bigint(3172381);
		bigint_t* _2329004790519950877498 = bigint_mul(_4573640510939821011221, _3377153756714264988880 );
		bigint_to_string(_2329004790519950877498, 10, buffer);
		printf("trying ");
		puts("mul(-211, 3172381)");
		puts(buffer);
		assert(strcmp(buffer, "-669372391") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4573640510939821011221);
		bigint_free(_3377153756714264988880);
		bigint_free(_2329004790519950877498);

	

		bigint_t* _1096389666382031875946;
		bigint_t* _4453186979370371055908 = bigint(-211);
		bigint_t* _4298244267743973433980 = bigint(3172381);
		bigint_t* _4411869940657387245506 = bigint_add(_4453186979370371055908, _4298244267743973433980 );
		bigint_to_string(_4411869940657387245506, 10, buffer);
		printf("trying ");
		puts("add(-211, 3172381)");
		puts(buffer);
		assert(strcmp(buffer, "3172170") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4453186979370371055908);
		bigint_free(_4298244267743973433980);
		bigint_free(_4411869940657387245506);

	

		bigint_t* _1382676158310289687948;
		bigint_t* _4500100454278410068780 = bigint(-211);
		bigint_t* _2256570889246339451490 = bigint(3172381);
		bigint_t* _3112567101944183650127 = bigint_sub(_4500100454278410068780, _2256570889246339451490 );
		bigint_to_string(_3112567101944183650127, 10, buffer);
		printf("trying ");
		puts("sub(-211, 3172381)");
		puts(buffer);
		assert(strcmp(buffer, "-3172592") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4500100454278410068780);
		bigint_free(_2256570889246339451490);
		bigint_free(_3112567101944183650127);

	

		bigint_t* _3006087455731689678400;
		bigint_t* _2517380775338955760105 = bigint(213);
		bigint_t* _1824266193915894592681 = bigint(-3418934);
		bigint_t* _112192483318910228640 = bigint_mul(_2517380775338955760105, _1824266193915894592681 );
		bigint_to_string(_112192483318910228640, 10, buffer);
		printf("trying ");
		puts("mul(213, -3418934)");
		puts(buffer);
		assert(strcmp(buffer, "-728232942") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2517380775338955760105);
		bigint_free(_1824266193915894592681);
		bigint_free(_112192483318910228640);

	

		bigint_t* _3986655715713674532293;
		bigint_t* _3022854871564251580928 = bigint(213);
		bigint_t* _4116926361526848404434 = bigint(-3418934);
		bigint_t* _843846583140774849263 = bigint_add(_3022854871564251580928, _4116926361526848404434 );
		bigint_to_string(_843846583140774849263, 10, buffer);
		printf("trying ");
		puts("add(213, -3418934)");
		puts(buffer);
		assert(strcmp(buffer, "-3418721") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3022854871564251580928);
		bigint_free(_4116926361526848404434);
		bigint_free(_843846583140774849263);

	

		bigint_t* _3852144088314306765864;
		bigint_t* _575403251508351967117 = bigint(213);
		bigint_t* _3498981954666908463953 = bigint(-3418934);
		bigint_t* _2703972505917181705198 = bigint_sub(_575403251508351967117, _3498981954666908463953 );
		bigint_to_string(_2703972505917181705198, 10, buffer);
		printf("trying ");
		puts("sub(213, -3418934)");
		puts(buffer);
		assert(strcmp(buffer, "3419147") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_575403251508351967117);
		bigint_free(_3498981954666908463953);
		bigint_free(_2703972505917181705198);

	

		bigint_t* _2956614646568767134341;
		bigint_t* _4219158521590534124003 = bigint(-41);
		bigint_t* _4672684258388195165759 = bigint(-5794502);
		bigint_t* _1154216568391187116906 = bigint_mul(_4219158521590534124003, _4672684258388195165759 );
		bigint_to_string(_1154216568391187116906, 10, buffer);
		printf("trying ");
		puts("mul(-41, -5794502)");
		puts(buffer);
		assert(strcmp(buffer, "237574582") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4219158521590534124003);
		bigint_free(_4672684258388195165759);
		bigint_free(_1154216568391187116906);

	

		bigint_t* _3225221871908165926256;
		bigint_t* _682666636248086028422 = bigint(-41);
		bigint_t* _395989934738322497496 = bigint(-5794502);
		bigint_t* _1436260832404277565586 = bigint_add(_682666636248086028422, _395989934738322497496 );
		bigint_to_string(_1436260832404277565586, 10, buffer);
		printf("trying ");
		puts("add(-41, -5794502)");
		puts(buffer);
		assert(strcmp(buffer, "-5794543") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_682666636248086028422);
		bigint_free(_395989934738322497496);
		bigint_free(_1436260832404277565586);

	

		bigint_t* _1824781603588347111172;
		bigint_t* _4476533673170814478324 = bigint(-41);
		bigint_t* _4042652431982906879219 = bigint(-5794502);
		bigint_t* _2807041325055843061600 = bigint_sub(_4476533673170814478324, _4042652431982906879219 );
		bigint_to_string(_2807041325055843061600, 10, buffer);
		printf("trying ");
		puts("sub(-41, -5794502)");
		puts(buffer);
		assert(strcmp(buffer, "5794461") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4476533673170814478324);
		bigint_free(_4042652431982906879219);
		bigint_free(_2807041325055843061600);

	

		bigint_t* _4634554808783789696067;
		bigint_t* _1922370462701739319230 = bigint(-148);
		bigint_t* _3469995458108317295353 = bigint(-9497864);
		bigint_t* _4420289682224621553574 = bigint_mul(_1922370462701739319230, _3469995458108317295353 );
		bigint_to_string(_4420289682224621553574, 10, buffer);
		printf("trying ");
		puts("mul(-148, -9497864)");
		puts(buffer);
		assert(strcmp(buffer, "1405683872") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1922370462701739319230);
		bigint_free(_3469995458108317295353);
		bigint_free(_4420289682224621553574);

	

		bigint_t* _4167014500929477443130;
		bigint_t* _1532582278185313551996 = bigint(-148);
		bigint_t* _2954314089984692376027 = bigint(-9497864);
		bigint_t* _2061119032828793589116 = bigint_add(_1532582278185313551996, _2954314089984692376027 );
		bigint_to_string(_2061119032828793589116, 10, buffer);
		printf("trying ");
		puts("add(-148, -9497864)");
		puts(buffer);
		assert(strcmp(buffer, "-9498012") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1532582278185313551996);
		bigint_free(_2954314089984692376027);
		bigint_free(_2061119032828793589116);

	

		bigint_t* _1454449860533504005332;
		bigint_t* _1863216055270402103022 = bigint(-148);
		bigint_t* _2786197577409047909250 = bigint(-9497864);
		bigint_t* _3020003834529680251910 = bigint_sub(_1863216055270402103022, _2786197577409047909250 );
		bigint_to_string(_3020003834529680251910, 10, buffer);
		printf("trying ");
		puts("sub(-148, -9497864)");
		puts(buffer);
		assert(strcmp(buffer, "9497716") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1863216055270402103022);
		bigint_free(_2786197577409047909250);
		bigint_free(_3020003834529680251910);

	

		bigint_t* _686173563118847973067;
		bigint_t* _4690059963175685395902 = bigint(-27);
		bigint_t* _1290257613028610039309 = bigint(2355957);
		bigint_t* _377754909233563955979 = bigint_mul(_4690059963175685395902, _1290257613028610039309 );
		bigint_to_string(_377754909233563955979, 10, buffer);
		printf("trying ");
		puts("mul(-27, 2355957)");
		puts(buffer);
		assert(strcmp(buffer, "-63610839") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4690059963175685395902);
		bigint_free(_1290257613028610039309);
		bigint_free(_377754909233563955979);

	

		bigint_t* _2335734136736941888381;
		bigint_t* _3782202643701764608602 = bigint(-27);
		bigint_t* _4283261254141752213511 = bigint(2355957);
		bigint_t* _935391890336326549890 = bigint_add(_3782202643701764608602, _4283261254141752213511 );
		bigint_to_string(_935391890336326549890, 10, buffer);
		printf("trying ");
		puts("add(-27, 2355957)");
		puts(buffer);
		assert(strcmp(buffer, "2355930") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3782202643701764608602);
		bigint_free(_4283261254141752213511);
		bigint_free(_935391890336326549890);

	

		bigint_t* _1709165489757101258106;
		bigint_t* _3712834993951809851687 = bigint(-27);
		bigint_t* _1533288513921613792602 = bigint(2355957);
		bigint_t* _2662914114772148088508 = bigint_sub(_3712834993951809851687, _1533288513921613792602 );
		bigint_to_string(_2662914114772148088508, 10, buffer);
		printf("trying ");
		puts("sub(-27, 2355957)");
		puts(buffer);
		assert(strcmp(buffer, "-2355984") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3712834993951809851687);
		bigint_free(_1533288513921613792602);
		bigint_free(_2662914114772148088508);

	

		bigint_t* _1184845321821854739109;
		bigint_t* _343003592581727573928 = bigint(131);
		bigint_t* _479204117695635113618 = bigint(-8041447);
		bigint_t* _4176864879829168430770 = bigint_mul(_343003592581727573928, _479204117695635113618 );
		bigint_to_string(_4176864879829168430770, 10, buffer);
		printf("trying ");
		puts("mul(131, -8041447)");
		puts(buffer);
		assert(strcmp(buffer, "-1053429557") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_343003592581727573928);
		bigint_free(_479204117695635113618);
		bigint_free(_4176864879829168430770);

	

		bigint_t* _1872053689861224408316;
		bigint_t* _3657074735583268038464 = bigint(131);
		bigint_t* _4445425923902184896164 = bigint(-8041447);
		bigint_t* _2281379976695044723547 = bigint_add(_3657074735583268038464, _4445425923902184896164 );
		bigint_to_string(_2281379976695044723547, 10, buffer);
		printf("trying ");
		puts("add(131, -8041447)");
		puts(buffer);
		assert(strcmp(buffer, "-8041316") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3657074735583268038464);
		bigint_free(_4445425923902184896164);
		bigint_free(_2281379976695044723547);

	

		bigint_t* _1378600979317039788812;
		bigint_t* _59694334287393826156 = bigint(131);
		bigint_t* _2994952014052391911234 = bigint(-8041447);
		bigint_t* _175301304510609809499 = bigint_sub(_59694334287393826156, _2994952014052391911234 );
		bigint_to_string(_175301304510609809499, 10, buffer);
		printf("trying ");
		puts("sub(131, -8041447)");
		puts(buffer);
		assert(strcmp(buffer, "8041578") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_59694334287393826156);
		bigint_free(_2994952014052391911234);
		bigint_free(_175301304510609809499);

	

		bigint_t* _2537287183690462136129;
		bigint_t* _4633480163467463399261 = bigint(-198);
		bigint_t* _2905735838182375600482 = bigint(-4807438);
		bigint_t* _1627919798686920611716 = bigint_mul(_4633480163467463399261, _2905735838182375600482 );
		bigint_to_string(_1627919798686920611716, 10, buffer);
		printf("trying ");
		puts("mul(-198, -4807438)");
		puts(buffer);
		assert(strcmp(buffer, "951872724") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4633480163467463399261);
		bigint_free(_2905735838182375600482);
		bigint_free(_1627919798686920611716);

	

		bigint_t* _3257795992493260236766;
		bigint_t* _979892515009479630758 = bigint(-198);
		bigint_t* _1525038309486382445196 = bigint(-4807438);
		bigint_t* _335708967335459733931 = bigint_add(_979892515009479630758, _1525038309486382445196 );
		bigint_to_string(_335708967335459733931, 10, buffer);
		printf("trying ");
		puts("add(-198, -4807438)");
		puts(buffer);
		assert(strcmp(buffer, "-4807636") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_979892515009479630758);
		bigint_free(_1525038309486382445196);
		bigint_free(_335708967335459733931);

	

		bigint_t* _2642802582969874170763;
		bigint_t* _1327776040425819198720 = bigint(-198);
		bigint_t* _2435120651791846412953 = bigint(-4807438);
		bigint_t* _4039486261287400201808 = bigint_sub(_1327776040425819198720, _2435120651791846412953 );
		bigint_to_string(_4039486261287400201808, 10, buffer);
		printf("trying ");
		puts("sub(-198, -4807438)");
		puts(buffer);
		assert(strcmp(buffer, "4807240") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1327776040425819198720);
		bigint_free(_2435120651791846412953);
		bigint_free(_4039486261287400201808);

	

		bigint_t* _4550968061010565647318;
		bigint_t* _3283709036479060807125 = bigint(92);
		bigint_t* _134765072650865284577 = bigint(7862055);
		bigint_t* _2884329112227265205160 = bigint_mul(_3283709036479060807125, _134765072650865284577 );
		bigint_to_string(_2884329112227265205160, 10, buffer);
		printf("trying ");
		puts("mul(92, 7862055)");
		puts(buffer);
		assert(strcmp(buffer, "723309060") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3283709036479060807125);
		bigint_free(_134765072650865284577);
		bigint_free(_2884329112227265205160);

	

		bigint_t* _3840587734720461900178;
		bigint_t* _246276700712512426218 = bigint(92);
		bigint_t* _4563059855617052349536 = bigint(7862055);
		bigint_t* _1313756114190218779031 = bigint_add(_246276700712512426218, _4563059855617052349536 );
		bigint_to_string(_1313756114190218779031, 10, buffer);
		printf("trying ");
		puts("add(92, 7862055)");
		puts(buffer);
		assert(strcmp(buffer, "7862147") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_246276700712512426218);
		bigint_free(_4563059855617052349536);
		bigint_free(_1313756114190218779031);

	

		bigint_t* _1515997666195654800732;
		bigint_t* _3655463229231314639898 = bigint(92);
		bigint_t* _2562963142632707890485 = bigint(7862055);
		bigint_t* _3948914893259213949582 = bigint_sub(_3655463229231314639898, _2562963142632707890485 );
		bigint_to_string(_3948914893259213949582, 10, buffer);
		printf("trying ");
		puts("sub(92, 7862055)");
		puts(buffer);
		assert(strcmp(buffer, "-7861963") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3655463229231314639898);
		bigint_free(_2562963142632707890485);
		bigint_free(_3948914893259213949582);

	

		bigint_t* _3419570402423669925341;
		bigint_t* _1664670644530218189393 = bigint(232);
		bigint_t* _959544427775409121735 = bigint(2082069);
		bigint_t* _2603430046279303213441 = bigint_mul(_1664670644530218189393, _959544427775409121735 );
		bigint_to_string(_2603430046279303213441, 10, buffer);
		printf("trying ");
		puts("mul(232, 2082069)");
		puts(buffer);
		assert(strcmp(buffer, "483040008") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1664670644530218189393);
		bigint_free(_959544427775409121735);
		bigint_free(_2603430046279303213441);

	

		bigint_t* _980087407978131534585;
		bigint_t* _3982623739202627780596 = bigint(232);
		bigint_t* _3003715339774687913323 = bigint(2082069);
		bigint_t* _1920280353422422061014 = bigint_add(_3982623739202627780596, _3003715339774687913323 );
		bigint_to_string(_1920280353422422061014, 10, buffer);
		printf("trying ");
		puts("add(232, 2082069)");
		puts(buffer);
		assert(strcmp(buffer, "2082301") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3982623739202627780596);
		bigint_free(_3003715339774687913323);
		bigint_free(_1920280353422422061014);

	

		bigint_t* _3896828684605097444412;
		bigint_t* _45423553471593048189 = bigint(232);
		bigint_t* _4133198534695066583916 = bigint(2082069);
		bigint_t* _4130187471260246843891 = bigint_sub(_45423553471593048189, _4133198534695066583916 );
		bigint_to_string(_4130187471260246843891, 10, buffer);
		printf("trying ");
		puts("sub(232, 2082069)");
		puts(buffer);
		assert(strcmp(buffer, "-2081837") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_45423553471593048189);
		bigint_free(_4133198534695066583916);
		bigint_free(_4130187471260246843891);

	

		bigint_t* _4087680538057105140285;
		bigint_t* _615311986944783714786 = bigint(196);
		bigint_t* _3780607751104285660321 = bigint(-8795070);
		bigint_t* _3095749379014957107826 = bigint_mul(_615311986944783714786, _3780607751104285660321 );
		bigint_to_string(_3095749379014957107826, 10, buffer);
		printf("trying ");
		puts("mul(196, -8795070)");
		puts(buffer);
		assert(strcmp(buffer, "-1723833720") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_615311986944783714786);
		bigint_free(_3780607751104285660321);
		bigint_free(_3095749379014957107826);

	

		bigint_t* _117356927579034397440;
		bigint_t* _4138502653362659064638 = bigint(196);
		bigint_t* _389519170346272604692 = bigint(-8795070);
		bigint_t* _224989824710725955301 = bigint_add(_4138502653362659064638, _389519170346272604692 );
		bigint_to_string(_224989824710725955301, 10, buffer);
		printf("trying ");
		puts("add(196, -8795070)");
		puts(buffer);
		assert(strcmp(buffer, "-8794874") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4138502653362659064638);
		bigint_free(_389519170346272604692);
		bigint_free(_224989824710725955301);

	

		bigint_t* _1967809894311918833552;
		bigint_t* _4557063973608811894315 = bigint(196);
		bigint_t* _334395369954374681538 = bigint(-8795070);
		bigint_t* _3682153981783663241981 = bigint_sub(_4557063973608811894315, _334395369954374681538 );
		bigint_to_string(_3682153981783663241981, 10, buffer);
		printf("trying ");
		puts("sub(196, -8795070)");
		puts(buffer);
		assert(strcmp(buffer, "8795266") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4557063973608811894315);
		bigint_free(_334395369954374681538);
		bigint_free(_3682153981783663241981);

	

		bigint_t* _596768614936186527435;
		bigint_t* _2767895565662753993141 = bigint(215);
		bigint_t* _3330449827169428517791 = bigint(12050342);
		bigint_t* _3271022052547965938799 = bigint_mul(_2767895565662753993141, _3330449827169428517791 );
		bigint_to_string(_3271022052547965938799, 10, buffer);
		printf("trying ");
		puts("mul(215, 12050342)");
		puts(buffer);
		assert(strcmp(buffer, "2590823530") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2767895565662753993141);
		bigint_free(_3330449827169428517791);
		bigint_free(_3271022052547965938799);

	

		bigint_t* _2307058151992321999237;
		bigint_t* _4020912422501189719182 = bigint(215);
		bigint_t* _2634900940876019034181 = bigint(12050342);
		bigint_t* _2636692411034788592031 = bigint_add(_4020912422501189719182, _2634900940876019034181 );
		bigint_to_string(_2636692411034788592031, 10, buffer);
		printf("trying ");
		puts("add(215, 12050342)");
		puts(buffer);
		assert(strcmp(buffer, "12050557") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4020912422501189719182);
		bigint_free(_2634900940876019034181);
		bigint_free(_2636692411034788592031);

	

		bigint_t* _3463479944542950320891;
		bigint_t* _583988856182147693996 = bigint(215);
		bigint_t* _570585862189617140775 = bigint(12050342);
		bigint_t* _374557743679808601342 = bigint_sub(_583988856182147693996, _570585862189617140775 );
		bigint_to_string(_374557743679808601342, 10, buffer);
		printf("trying ");
		puts("sub(215, 12050342)");
		puts(buffer);
		assert(strcmp(buffer, "-12050127") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_583988856182147693996);
		bigint_free(_570585862189617140775);
		bigint_free(_374557743679808601342);

	

		bigint_t* _3595773400374790205447;
		bigint_t* _1280870946354317829586 = bigint(-194);
		bigint_t* _1276702592688810185770 = bigint(16251009);
		bigint_t* _4657683689536778724675 = bigint_mul(_1280870946354317829586, _1276702592688810185770 );
		bigint_to_string(_4657683689536778724675, 10, buffer);
		printf("trying ");
		puts("mul(-194, 16251009)");
		puts(buffer);
		assert(strcmp(buffer, "-3152695746") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1280870946354317829586);
		bigint_free(_1276702592688810185770);
		bigint_free(_4657683689536778724675);

	

		bigint_t* _1211181732838785355198;
		bigint_t* _2393033893752011969512 = bigint(-194);
		bigint_t* _2652631810250228801382 = bigint(16251009);
		bigint_t* _76937582282892718131 = bigint_add(_2393033893752011969512, _2652631810250228801382 );
		bigint_to_string(_76937582282892718131, 10, buffer);
		printf("trying ");
		puts("add(-194, 16251009)");
		puts(buffer);
		assert(strcmp(buffer, "16250815") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2393033893752011969512);
		bigint_free(_2652631810250228801382);
		bigint_free(_76937582282892718131);

	

		bigint_t* _4425266637268844182925;
		bigint_t* _4014009390415603131726 = bigint(-194);
		bigint_t* _1759201935540060884546 = bigint(16251009);
		bigint_t* _672384042240788242115 = bigint_sub(_4014009390415603131726, _1759201935540060884546 );
		bigint_to_string(_672384042240788242115, 10, buffer);
		printf("trying ");
		puts("sub(-194, 16251009)");
		puts(buffer);
		assert(strcmp(buffer, "-16251203") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4014009390415603131726);
		bigint_free(_1759201935540060884546);
		bigint_free(_672384042240788242115);

	

		bigint_t* _1215074079596390464523;
		bigint_t* _2454623273625952390648 = bigint(-36);
		bigint_t* _617652675875879373460 = bigint(-13803218);
		bigint_t* _4516431530301317380866 = bigint_mul(_2454623273625952390648, _617652675875879373460 );
		bigint_to_string(_4516431530301317380866, 10, buffer);
		printf("trying ");
		puts("mul(-36, -13803218)");
		puts(buffer);
		assert(strcmp(buffer, "496915848") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2454623273625952390648);
		bigint_free(_617652675875879373460);
		bigint_free(_4516431530301317380866);

	

		bigint_t* _2960441056749881377815;
		bigint_t* _1643644468135259954463 = bigint(-36);
		bigint_t* _3623979283858048381690 = bigint(-13803218);
		bigint_t* _1704537430776591064888 = bigint_add(_1643644468135259954463, _3623979283858048381690 );
		bigint_to_string(_1704537430776591064888, 10, buffer);
		printf("trying ");
		puts("add(-36, -13803218)");
		puts(buffer);
		assert(strcmp(buffer, "-13803254") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1643644468135259954463);
		bigint_free(_3623979283858048381690);
		bigint_free(_1704537430776591064888);

	

		bigint_t* _536389221244224175736;
		bigint_t* _103419054663093225526 = bigint(-36);
		bigint_t* _1095268527462255217334 = bigint(-13803218);
		bigint_t* _1448194116896761391664 = bigint_sub(_103419054663093225526, _1095268527462255217334 );
		bigint_to_string(_1448194116896761391664, 10, buffer);
		printf("trying ");
		puts("sub(-36, -13803218)");
		puts(buffer);
		assert(strcmp(buffer, "13803182") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_103419054663093225526);
		bigint_free(_1095268527462255217334);
		bigint_free(_1448194116896761391664);

	

		bigint_t* _3890688943594352174290;
		bigint_t* _1826458037435913890399 = bigint(44);
		bigint_t* _3463166737242150106812 = bigint(9538507);
		bigint_t* _3053003147099190763104 = bigint_mul(_1826458037435913890399, _3463166737242150106812 );
		bigint_to_string(_3053003147099190763104, 10, buffer);
		printf("trying ");
		puts("mul(44, 9538507)");
		puts(buffer);
		assert(strcmp(buffer, "419694308") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1826458037435913890399);
		bigint_free(_3463166737242150106812);
		bigint_free(_3053003147099190763104);

	

		bigint_t* _249367703003542219788;
		bigint_t* _893864781931575541151 = bigint(44);
		bigint_t* _4660360170793511635060 = bigint(9538507);
		bigint_t* _441164087577175992219 = bigint_add(_893864781931575541151, _4660360170793511635060 );
		bigint_to_string(_441164087577175992219, 10, buffer);
		printf("trying ");
		puts("add(44, 9538507)");
		puts(buffer);
		assert(strcmp(buffer, "9538551") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_893864781931575541151);
		bigint_free(_4660360170793511635060);
		bigint_free(_441164087577175992219);

	

		bigint_t* _1898736107183818165518;
		bigint_t* _4448469533571593039303 = bigint(44);
		bigint_t* _286517720323098172511 = bigint(9538507);
		bigint_t* _1881029596240080978308 = bigint_sub(_4448469533571593039303, _286517720323098172511 );
		bigint_to_string(_1881029596240080978308, 10, buffer);
		printf("trying ");
		puts("sub(44, 9538507)");
		puts(buffer);
		assert(strcmp(buffer, "-9538463") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4448469533571593039303);
		bigint_free(_286517720323098172511);
		bigint_free(_1881029596240080978308);

	

		bigint_t* _1896122226897064072597;
		bigint_t* _3197303643863931201709 = bigint(64);
		bigint_t* _1512448897637503542863 = bigint(-9281143);
		bigint_t* _2607084009024774691050 = bigint_mul(_3197303643863931201709, _1512448897637503542863 );
		bigint_to_string(_2607084009024774691050, 10, buffer);
		printf("trying ");
		puts("mul(64, -9281143)");
		puts(buffer);
		assert(strcmp(buffer, "-593993152") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3197303643863931201709);
		bigint_free(_1512448897637503542863);
		bigint_free(_2607084009024774691050);

	

		bigint_t* _1276795922403995670510;
		bigint_t* _1076261019338373289655 = bigint(64);
		bigint_t* _2242812100981004742920 = bigint(-9281143);
		bigint_t* _989605388701102368654 = bigint_add(_1076261019338373289655, _2242812100981004742920 );
		bigint_to_string(_989605388701102368654, 10, buffer);
		printf("trying ");
		puts("add(64, -9281143)");
		puts(buffer);
		assert(strcmp(buffer, "-9281079") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1076261019338373289655);
		bigint_free(_2242812100981004742920);
		bigint_free(_989605388701102368654);

	

		bigint_t* _82496439343949361063;
		bigint_t* _34359969829902320326 = bigint(64);
		bigint_t* _1209242030680915453755 = bigint(-9281143);
		bigint_t* _4388145713684624512062 = bigint_sub(_34359969829902320326, _1209242030680915453755 );
		bigint_to_string(_4388145713684624512062, 10, buffer);
		printf("trying ");
		puts("sub(64, -9281143)");
		puts(buffer);
		assert(strcmp(buffer, "9281207") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_34359969829902320326);
		bigint_free(_1209242030680915453755);
		bigint_free(_4388145713684624512062);

	

		bigint_t* _922101084503650871209;
		bigint_t* _317424415771272757505 = bigint(-65);
		bigint_t* _617834810674372563275 = bigint(-13069827);
		bigint_t* _3577491289233776445674 = bigint_mul(_317424415771272757505, _617834810674372563275 );
		bigint_to_string(_3577491289233776445674, 10, buffer);
		printf("trying ");
		puts("mul(-65, -13069827)");
		puts(buffer);
		assert(strcmp(buffer, "849538755") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_317424415771272757505);
		bigint_free(_617834810674372563275);
		bigint_free(_3577491289233776445674);

	

		bigint_t* _4665560700964676811048;
		bigint_t* _3977664641903519225803 = bigint(-65);
		bigint_t* _4515463169641751788949 = bigint(-13069827);
		bigint_t* _2478013196331992022065 = bigint_add(_3977664641903519225803, _4515463169641751788949 );
		bigint_to_string(_2478013196331992022065, 10, buffer);
		printf("trying ");
		puts("add(-65, -13069827)");
		puts(buffer);
		assert(strcmp(buffer, "-13069892") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3977664641903519225803);
		bigint_free(_4515463169641751788949);
		bigint_free(_2478013196331992022065);

	

		bigint_t* _3510268397946514757734;
		bigint_t* _2682337388887107917978 = bigint(-65);
		bigint_t* _2679619414218789511230 = bigint(-13069827);
		bigint_t* _986418203722891605324 = bigint_sub(_2682337388887107917978, _2679619414218789511230 );
		bigint_to_string(_986418203722891605324, 10, buffer);
		printf("trying ");
		puts("sub(-65, -13069827)");
		puts(buffer);
		assert(strcmp(buffer, "13069762") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2682337388887107917978);
		bigint_free(_2679619414218789511230);
		bigint_free(_986418203722891605324);

	

		bigint_t* _2544524548642967235563;
		bigint_t* _817627895341141637003 = bigint(-166);
		bigint_t* _2862663647274323558232 = bigint(-9781591);
		bigint_t* _1234964809279354850098 = bigint_mul(_817627895341141637003, _2862663647274323558232 );
		bigint_to_string(_1234964809279354850098, 10, buffer);
		printf("trying ");
		puts("mul(-166, -9781591)");
		puts(buffer);
		assert(strcmp(buffer, "1623744106") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_817627895341141637003);
		bigint_free(_2862663647274323558232);
		bigint_free(_1234964809279354850098);

	

		bigint_t* _551676860288140446829;
		bigint_t* _6666377981120890867 = bigint(-166);
		bigint_t* _1686779675572703699037 = bigint(-9781591);
		bigint_t* _4159735176028004656358 = bigint_add(_6666377981120890867, _1686779675572703699037 );
		bigint_to_string(_4159735176028004656358, 10, buffer);
		printf("trying ");
		puts("add(-166, -9781591)");
		puts(buffer);
		assert(strcmp(buffer, "-9781757") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_6666377981120890867);
		bigint_free(_1686779675572703699037);
		bigint_free(_4159735176028004656358);

	

		bigint_t* _3412996573541277665698;
		bigint_t* _2952847656358563602546 = bigint(-166);
		bigint_t* _2931210677678566715264 = bigint(-9781591);
		bigint_t* _2525470714835447547034 = bigint_sub(_2952847656358563602546, _2931210677678566715264 );
		bigint_to_string(_2525470714835447547034, 10, buffer);
		printf("trying ");
		puts("sub(-166, -9781591)");
		puts(buffer);
		assert(strcmp(buffer, "9781425") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2952847656358563602546);
		bigint_free(_2931210677678566715264);
		bigint_free(_2525470714835447547034);

	

		bigint_t* _1289571265695659685897;
		bigint_t* _4578708593603192896950 = bigint(-49);
		bigint_t* _1293734621901175085120 = bigint(-10144880);
		bigint_t* _1282587288926994179300 = bigint_mul(_4578708593603192896950, _1293734621901175085120 );
		bigint_to_string(_1282587288926994179300, 10, buffer);
		printf("trying ");
		puts("mul(-49, -10144880)");
		puts(buffer);
		assert(strcmp(buffer, "497099120") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4578708593603192896950);
		bigint_free(_1293734621901175085120);
		bigint_free(_1282587288926994179300);

	

		bigint_t* _574484976293254012433;
		bigint_t* _737490089296390978633 = bigint(-49);
		bigint_t* _3895457301864064120720 = bigint(-10144880);
		bigint_t* _4336279187672116311525 = bigint_add(_737490089296390978633, _3895457301864064120720 );
		bigint_to_string(_4336279187672116311525, 10, buffer);
		printf("trying ");
		puts("add(-49, -10144880)");
		puts(buffer);
		assert(strcmp(buffer, "-10144929") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_737490089296390978633);
		bigint_free(_3895457301864064120720);
		bigint_free(_4336279187672116311525);

	

		bigint_t* _503712339085808961623;
		bigint_t* _4713845424378184873564 = bigint(-49);
		bigint_t* _773828227891800317442 = bigint(-10144880);
		bigint_t* _4243229224825775519006 = bigint_sub(_4713845424378184873564, _773828227891800317442 );
		bigint_to_string(_4243229224825775519006, 10, buffer);
		printf("trying ");
		puts("sub(-49, -10144880)");
		puts(buffer);
		assert(strcmp(buffer, "10144831") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4713845424378184873564);
		bigint_free(_773828227891800317442);
		bigint_free(_4243229224825775519006);

	

		bigint_t* _4396386381570172443473;
		bigint_t* _1659449951081717943865 = bigint(-217);
		bigint_t* _855621611389908593580 = bigint(-16569827);
		bigint_t* _2733779954157944315983 = bigint_mul(_1659449951081717943865, _855621611389908593580 );
		bigint_to_string(_2733779954157944315983, 10, buffer);
		printf("trying ");
		puts("mul(-217, -16569827)");
		puts(buffer);
		assert(strcmp(buffer, "3595652459") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1659449951081717943865);
		bigint_free(_855621611389908593580);
		bigint_free(_2733779954157944315983);

	

		bigint_t* _1684583600210275540072;
		bigint_t* _1071091976738127287709 = bigint(-217);
		bigint_t* _474216444293512568537 = bigint(-16569827);
		bigint_t* _3837760382511386797364 = bigint_add(_1071091976738127287709, _474216444293512568537 );
		bigint_to_string(_3837760382511386797364, 10, buffer);
		printf("trying ");
		puts("add(-217, -16569827)");
		puts(buffer);
		assert(strcmp(buffer, "-16570044") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1071091976738127287709);
		bigint_free(_474216444293512568537);
		bigint_free(_3837760382511386797364);

	

		bigint_t* _2724486153578571480147;
		bigint_t* _3431682784494573431074 = bigint(-217);
		bigint_t* _4140593121299594682623 = bigint(-16569827);
		bigint_t* _3995377235838931356499 = bigint_sub(_3431682784494573431074, _4140593121299594682623 );
		bigint_to_string(_3995377235838931356499, 10, buffer);
		printf("trying ");
		puts("sub(-217, -16569827)");
		puts(buffer);
		assert(strcmp(buffer, "16569610") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3431682784494573431074);
		bigint_free(_4140593121299594682623);
		bigint_free(_3995377235838931356499);

	

		bigint_t* _2893915526437475453197;
		bigint_t* _4609497260889383552315 = bigint(64);
		bigint_t* _205479949709157619370 = bigint(-3557688);
		bigint_t* _1501771936990796622413 = bigint_mul(_4609497260889383552315, _205479949709157619370 );
		bigint_to_string(_1501771936990796622413, 10, buffer);
		printf("trying ");
		puts("mul(64, -3557688)");
		puts(buffer);
		assert(strcmp(buffer, "-227692032") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4609497260889383552315);
		bigint_free(_205479949709157619370);
		bigint_free(_1501771936990796622413);

	

		bigint_t* _2350533289206161305035;
		bigint_t* _1448283378628587757970 = bigint(64);
		bigint_t* _48108638965357803411 = bigint(-3557688);
		bigint_t* _4657847726628398505923 = bigint_add(_1448283378628587757970, _48108638965357803411 );
		bigint_to_string(_4657847726628398505923, 10, buffer);
		printf("trying ");
		puts("add(64, -3557688)");
		puts(buffer);
		assert(strcmp(buffer, "-3557624") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1448283378628587757970);
		bigint_free(_48108638965357803411);
		bigint_free(_4657847726628398505923);

	

		bigint_t* _4083722951010736338942;
		bigint_t* _2970128880244416620710 = bigint(64);
		bigint_t* _74651154609158768295 = bigint(-3557688);
		bigint_t* _3901487542335425915882 = bigint_sub(_2970128880244416620710, _74651154609158768295 );
		bigint_to_string(_3901487542335425915882, 10, buffer);
		printf("trying ");
		puts("sub(64, -3557688)");
		puts(buffer);
		assert(strcmp(buffer, "3557752") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2970128880244416620710);
		bigint_free(_74651154609158768295);
		bigint_free(_3901487542335425915882);

	

		bigint_t* _1678894307303417577791;
		bigint_t* _1632498524148820041455 = bigint(24);
		bigint_t* _4563273310737078044616 = bigint(-1153061);
		bigint_t* _2123844510346325852322 = bigint_mul(_1632498524148820041455, _4563273310737078044616 );
		bigint_to_string(_2123844510346325852322, 10, buffer);
		printf("trying ");
		puts("mul(24, -1153061)");
		puts(buffer);
		assert(strcmp(buffer, "-27673464") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1632498524148820041455);
		bigint_free(_4563273310737078044616);
		bigint_free(_2123844510346325852322);

	

		bigint_t* _2375626482232477653055;
		bigint_t* _4585412049111964628780 = bigint(24);
		bigint_t* _335933895072606752035 = bigint(-1153061);
		bigint_t* _4009075625088096696550 = bigint_add(_4585412049111964628780, _335933895072606752035 );
		bigint_to_string(_4009075625088096696550, 10, buffer);
		printf("trying ");
		puts("add(24, -1153061)");
		puts(buffer);
		assert(strcmp(buffer, "-1153037") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4585412049111964628780);
		bigint_free(_335933895072606752035);
		bigint_free(_4009075625088096696550);

	

		bigint_t* _3037688603447496025126;
		bigint_t* _2812597173606030162660 = bigint(24);
		bigint_t* _4456491263570540087057 = bigint(-1153061);
		bigint_t* _1096021631976291675393 = bigint_sub(_2812597173606030162660, _4456491263570540087057 );
		bigint_to_string(_1096021631976291675393, 10, buffer);
		printf("trying ");
		puts("sub(24, -1153061)");
		puts(buffer);
		assert(strcmp(buffer, "1153085") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2812597173606030162660);
		bigint_free(_4456491263570540087057);
		bigint_free(_1096021631976291675393);

	

		bigint_t* _279568965149197086964;
		bigint_t* _2550613657170166203388 = bigint(99);
		bigint_t* _2459950994600250478380 = bigint(2626229);
		bigint_t* _2686441335164954216952 = bigint_mul(_2550613657170166203388, _2459950994600250478380 );
		bigint_to_string(_2686441335164954216952, 10, buffer);
		printf("trying ");
		puts("mul(99, 2626229)");
		puts(buffer);
		assert(strcmp(buffer, "259996671") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2550613657170166203388);
		bigint_free(_2459950994600250478380);
		bigint_free(_2686441335164954216952);

	

		bigint_t* _2617831906679534301902;
		bigint_t* _3923677046621798517767 = bigint(99);
		bigint_t* _4522388134317642999839 = bigint(2626229);
		bigint_t* _2778657637793367373933 = bigint_add(_3923677046621798517767, _4522388134317642999839 );
		bigint_to_string(_2778657637793367373933, 10, buffer);
		printf("trying ");
		puts("add(99, 2626229)");
		puts(buffer);
		assert(strcmp(buffer, "2626328") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3923677046621798517767);
		bigint_free(_4522388134317642999839);
		bigint_free(_2778657637793367373933);

	

		bigint_t* _1153981144881859507176;
		bigint_t* _2149844548215484145365 = bigint(99);
		bigint_t* _3106425983091843084576 = bigint(2626229);
		bigint_t* _3128336401331407478587 = bigint_sub(_2149844548215484145365, _3106425983091843084576 );
		bigint_to_string(_3128336401331407478587, 10, buffer);
		printf("trying ");
		puts("sub(99, 2626229)");
		puts(buffer);
		assert(strcmp(buffer, "-2626130") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2149844548215484145365);
		bigint_free(_3106425983091843084576);
		bigint_free(_3128336401331407478587);

	

		bigint_t* _1471552364703786661516;
		bigint_t* _3376998423103624542559 = bigint(220);
		bigint_t* _982468670238576927913 = bigint(9075996);
		bigint_t* _842929734510663540264 = bigint_mul(_3376998423103624542559, _982468670238576927913 );
		bigint_to_string(_842929734510663540264, 10, buffer);
		printf("trying ");
		puts("mul(220, 9075996)");
		puts(buffer);
		assert(strcmp(buffer, "1996719120") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3376998423103624542559);
		bigint_free(_982468670238576927913);
		bigint_free(_842929734510663540264);

	

		bigint_t* _514974133375971924033;
		bigint_t* _1158851097509070583288 = bigint(220);
		bigint_t* _3568528144390227102830 = bigint(9075996);
		bigint_t* _84842571292593243243 = bigint_add(_1158851097509070583288, _3568528144390227102830 );
		bigint_to_string(_84842571292593243243, 10, buffer);
		printf("trying ");
		puts("add(220, 9075996)");
		puts(buffer);
		assert(strcmp(buffer, "9076216") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1158851097509070583288);
		bigint_free(_3568528144390227102830);
		bigint_free(_84842571292593243243);

	

		bigint_t* _3684545856232718269313;
		bigint_t* _1774296947293866029246 = bigint(220);
		bigint_t* _697771122127060261612 = bigint(9075996);
		bigint_t* _4525792349258851515508 = bigint_sub(_1774296947293866029246, _697771122127060261612 );
		bigint_to_string(_4525792349258851515508, 10, buffer);
		printf("trying ");
		puts("sub(220, 9075996)");
		puts(buffer);
		assert(strcmp(buffer, "-9075776") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1774296947293866029246);
		bigint_free(_697771122127060261612);
		bigint_free(_4525792349258851515508);

	

		bigint_t* _527248327818889384125;
		bigint_t* _3035300370662506614891 = bigint(235);
		bigint_t* _4196022198675453812231 = bigint(7516659);
		bigint_t* _4719737582429968811886 = bigint_mul(_3035300370662506614891, _4196022198675453812231 );
		bigint_to_string(_4719737582429968811886, 10, buffer);
		printf("trying ");
		puts("mul(235, 7516659)");
		puts(buffer);
		assert(strcmp(buffer, "1766414865") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3035300370662506614891);
		bigint_free(_4196022198675453812231);
		bigint_free(_4719737582429968811886);

	

		bigint_t* _270781868034092932100;
		bigint_t* _4559654173184986781891 = bigint(235);
		bigint_t* _695281323090973460139 = bigint(7516659);
		bigint_t* _396863144017803662629 = bigint_add(_4559654173184986781891, _695281323090973460139 );
		bigint_to_string(_396863144017803662629, 10, buffer);
		printf("trying ");
		puts("add(235, 7516659)");
		puts(buffer);
		assert(strcmp(buffer, "7516894") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4559654173184986781891);
		bigint_free(_695281323090973460139);
		bigint_free(_396863144017803662629);

	

		bigint_t* _2700704857000996578116;
		bigint_t* _3467952304963429278108 = bigint(235);
		bigint_t* _3974346642481585862198 = bigint(7516659);
		bigint_t* _414612229028887769994 = bigint_sub(_3467952304963429278108, _3974346642481585862198 );
		bigint_to_string(_414612229028887769994, 10, buffer);
		printf("trying ");
		puts("sub(235, 7516659)");
		puts(buffer);
		assert(strcmp(buffer, "-7516424") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3467952304963429278108);
		bigint_free(_3974346642481585862198);
		bigint_free(_414612229028887769994);

	

		bigint_t* _2996778566516098782905;
		bigint_t* _2213821417084210167406 = bigint(-15);
		bigint_t* _4412873940714325424589 = bigint(4493979);
		bigint_t* _2727209420139202713569 = bigint_mul(_2213821417084210167406, _4412873940714325424589 );
		bigint_to_string(_2727209420139202713569, 10, buffer);
		printf("trying ");
		puts("mul(-15, 4493979)");
		puts(buffer);
		assert(strcmp(buffer, "-67409685") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2213821417084210167406);
		bigint_free(_4412873940714325424589);
		bigint_free(_2727209420139202713569);

	

		bigint_t* _188901514936326208744;
		bigint_t* _4011207030799579984380 = bigint(-15);
		bigint_t* _1404741060120249228362 = bigint(4493979);
		bigint_t* _1833449915915603720971 = bigint_add(_4011207030799579984380, _1404741060120249228362 );
		bigint_to_string(_1833449915915603720971, 10, buffer);
		printf("trying ");
		puts("add(-15, 4493979)");
		puts(buffer);
		assert(strcmp(buffer, "4493964") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4011207030799579984380);
		bigint_free(_1404741060120249228362);
		bigint_free(_1833449915915603720971);

	

		bigint_t* _116933693251288564292;
		bigint_t* _437442591233441180747 = bigint(-15);
		bigint_t* _3142934443430540973431 = bigint(4493979);
		bigint_t* _2220286653653381373320 = bigint_sub(_437442591233441180747, _3142934443430540973431 );
		bigint_to_string(_2220286653653381373320, 10, buffer);
		printf("trying ");
		puts("sub(-15, 4493979)");
		puts(buffer);
		assert(strcmp(buffer, "-4493994") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_437442591233441180747);
		bigint_free(_3142934443430540973431);
		bigint_free(_2220286653653381373320);

	

		bigint_t* _2806194576823422825203;
		bigint_t* _2042161259805586697016 = bigint(-110);
		bigint_t* _2664150188061699852908 = bigint(8280960);
		bigint_t* _1270421113223828788227 = bigint_mul(_2042161259805586697016, _2664150188061699852908 );
		bigint_to_string(_1270421113223828788227, 10, buffer);
		printf("trying ");
		puts("mul(-110, 8280960)");
		puts(buffer);
		assert(strcmp(buffer, "-910905600") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2042161259805586697016);
		bigint_free(_2664150188061699852908);
		bigint_free(_1270421113223828788227);

	

		bigint_t* _4489998482701370534310;
		bigint_t* _3657332490916521548858 = bigint(-110);
		bigint_t* _1955743351159232032974 = bigint(8280960);
		bigint_t* _1118437698205338889940 = bigint_add(_3657332490916521548858, _1955743351159232032974 );
		bigint_to_string(_1118437698205338889940, 10, buffer);
		printf("trying ");
		puts("add(-110, 8280960)");
		puts(buffer);
		assert(strcmp(buffer, "8280850") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3657332490916521548858);
		bigint_free(_1955743351159232032974);
		bigint_free(_1118437698205338889940);

	

		bigint_t* _1958377783221633600222;
		bigint_t* _3724306595009941255925 = bigint(-110);
		bigint_t* _822879236345446344180 = bigint(8280960);
		bigint_t* _2807901289322507968914 = bigint_sub(_3724306595009941255925, _822879236345446344180 );
		bigint_to_string(_2807901289322507968914, 10, buffer);
		printf("trying ");
		puts("sub(-110, 8280960)");
		puts(buffer);
		assert(strcmp(buffer, "-8281070") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3724306595009941255925);
		bigint_free(_822879236345446344180);
		bigint_free(_2807901289322507968914);

	

		bigint_t* _3277718783184991421117;
		bigint_t* _2345826855188073597740 = bigint(100);
		bigint_t* _4055503670561160394452 = bigint(-3865309);
		bigint_t* _1159274184844573111812 = bigint_mul(_2345826855188073597740, _4055503670561160394452 );
		bigint_to_string(_1159274184844573111812, 10, buffer);
		printf("trying ");
		puts("mul(100, -3865309)");
		puts(buffer);
		assert(strcmp(buffer, "-386530900") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2345826855188073597740);
		bigint_free(_4055503670561160394452);
		bigint_free(_1159274184844573111812);

	

		bigint_t* _3899805435339054992116;
		bigint_t* _2928426958823884482884 = bigint(100);
		bigint_t* _1133439848856289666472 = bigint(-3865309);
		bigint_t* _1906334618472716838076 = bigint_add(_2928426958823884482884, _1133439848856289666472 );
		bigint_to_string(_1906334618472716838076, 10, buffer);
		printf("trying ");
		puts("add(100, -3865309)");
		puts(buffer);
		assert(strcmp(buffer, "-3865209") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2928426958823884482884);
		bigint_free(_1133439848856289666472);
		bigint_free(_1906334618472716838076);

	

		bigint_t* _2511861058917211221497;
		bigint_t* _3569594275631777237555 = bigint(100);
		bigint_t* _1039414666776180265422 = bigint(-3865309);
		bigint_t* _4133664067606860411250 = bigint_sub(_3569594275631777237555, _1039414666776180265422 );
		bigint_to_string(_4133664067606860411250, 10, buffer);
		printf("trying ");
		puts("sub(100, -3865309)");
		puts(buffer);
		assert(strcmp(buffer, "3865409") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3569594275631777237555);
		bigint_free(_1039414666776180265422);
		bigint_free(_4133664067606860411250);

	

		bigint_t* _2569543434885335313180;
		bigint_t* _291884767278167758589 = bigint(-184);
		bigint_t* _801467212986237418469 = bigint(-15508306);
		bigint_t* _4517175543152240221329 = bigint_mul(_291884767278167758589, _801467212986237418469 );
		bigint_to_string(_4517175543152240221329, 10, buffer);
		printf("trying ");
		puts("mul(-184, -15508306)");
		puts(buffer);
		assert(strcmp(buffer, "2853528304") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_291884767278167758589);
		bigint_free(_801467212986237418469);
		bigint_free(_4517175543152240221329);

	

		bigint_t* _3085742313643477033650;
		bigint_t* _465571236269989867861 = bigint(-184);
		bigint_t* _2533002139426948832853 = bigint(-15508306);
		bigint_t* _1136929671735781681165 = bigint_add(_465571236269989867861, _2533002139426948832853 );
		bigint_to_string(_1136929671735781681165, 10, buffer);
		printf("trying ");
		puts("add(-184, -15508306)");
		puts(buffer);
		assert(strcmp(buffer, "-15508490") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_465571236269989867861);
		bigint_free(_2533002139426948832853);
		bigint_free(_1136929671735781681165);

	

		bigint_t* _4584554248360972006077;
		bigint_t* _1089813396600634242780 = bigint(-184);
		bigint_t* _3810372044565846482792 = bigint(-15508306);
		bigint_t* _3363547812804341743540 = bigint_sub(_1089813396600634242780, _3810372044565846482792 );
		bigint_to_string(_3363547812804341743540, 10, buffer);
		printf("trying ");
		puts("sub(-184, -15508306)");
		puts(buffer);
		assert(strcmp(buffer, "15508122") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1089813396600634242780);
		bigint_free(_3810372044565846482792);
		bigint_free(_3363547812804341743540);

	

		bigint_t* _974439827419468819458;
		bigint_t* _3642346973996163275020 = bigint(244);
		bigint_t* _4464101585365493598733 = bigint(-6390566);
		bigint_t* _929902941693940958670 = bigint_mul(_3642346973996163275020, _4464101585365493598733 );
		bigint_to_string(_929902941693940958670, 10, buffer);
		printf("trying ");
		puts("mul(244, -6390566)");
		puts(buffer);
		assert(strcmp(buffer, "-1559298104") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3642346973996163275020);
		bigint_free(_4464101585365493598733);
		bigint_free(_929902941693940958670);

	

		bigint_t* _1121275189269373132154;
		bigint_t* _2642190164369815888682 = bigint(244);
		bigint_t* _2710006084524134260753 = bigint(-6390566);
		bigint_t* _516752118232771508431 = bigint_add(_2642190164369815888682, _2710006084524134260753 );
		bigint_to_string(_516752118232771508431, 10, buffer);
		printf("trying ");
		puts("add(244, -6390566)");
		puts(buffer);
		assert(strcmp(buffer, "-6390322") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2642190164369815888682);
		bigint_free(_2710006084524134260753);
		bigint_free(_516752118232771508431);

	

		bigint_t* _1975336006324000102357;
		bigint_t* _2399185313106586651382 = bigint(244);
		bigint_t* _1488549474347469263744 = bigint(-6390566);
		bigint_t* _682872354045823926904 = bigint_sub(_2399185313106586651382, _1488549474347469263744 );
		bigint_to_string(_682872354045823926904, 10, buffer);
		printf("trying ");
		puts("sub(244, -6390566)");
		puts(buffer);
		assert(strcmp(buffer, "6390810") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2399185313106586651382);
		bigint_free(_1488549474347469263744);
		bigint_free(_682872354045823926904);

	

		bigint_t* _505459082427428127400;
		bigint_t* _491263958079263227863 = bigint(-103);
		bigint_t* _944895729555693868584 = bigint(-10431043);
		bigint_t* _3184130336836691596943 = bigint_mul(_491263958079263227863, _944895729555693868584 );
		bigint_to_string(_3184130336836691596943, 10, buffer);
		printf("trying ");
		puts("mul(-103, -10431043)");
		puts(buffer);
		assert(strcmp(buffer, "1074397429") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_491263958079263227863);
		bigint_free(_944895729555693868584);
		bigint_free(_3184130336836691596943);

	

		bigint_t* _446683498986829468988;
		bigint_t* _2737673222700733114565 = bigint(-103);
		bigint_t* _1038030578098607332989 = bigint(-10431043);
		bigint_t* _3574368523244658938988 = bigint_add(_2737673222700733114565, _1038030578098607332989 );
		bigint_to_string(_3574368523244658938988, 10, buffer);
		printf("trying ");
		puts("add(-103, -10431043)");
		puts(buffer);
		assert(strcmp(buffer, "-10431146") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2737673222700733114565);
		bigint_free(_1038030578098607332989);
		bigint_free(_3574368523244658938988);

	

		bigint_t* _1259631987005735509397;
		bigint_t* _1140906348482186234243 = bigint(-103);
		bigint_t* _2408756136116945184355 = bigint(-10431043);
		bigint_t* _3024388658211202639222 = bigint_sub(_1140906348482186234243, _2408756136116945184355 );
		bigint_to_string(_3024388658211202639222, 10, buffer);
		printf("trying ");
		puts("sub(-103, -10431043)");
		puts(buffer);
		assert(strcmp(buffer, "10430940") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1140906348482186234243);
		bigint_free(_2408756136116945184355);
		bigint_free(_3024388658211202639222);

	

		bigint_t* _870978445114502306658;
		bigint_t* _2278131700931822714867 = bigint(-85);
		bigint_t* _1212804132040992035878 = bigint(-12278851);
		bigint_t* _3134946238796820549808 = bigint_mul(_2278131700931822714867, _1212804132040992035878 );
		bigint_to_string(_3134946238796820549808, 10, buffer);
		printf("trying ");
		puts("mul(-85, -12278851)");
		puts(buffer);
		assert(strcmp(buffer, "1043702335") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2278131700931822714867);
		bigint_free(_1212804132040992035878);
		bigint_free(_3134946238796820549808);

	

		bigint_t* _703985503389860688057;
		bigint_t* _3930842786890050144663 = bigint(-85);
		bigint_t* _3435058317774881361111 = bigint(-12278851);
		bigint_t* _4040453612760919687609 = bigint_add(_3930842786890050144663, _3435058317774881361111 );
		bigint_to_string(_4040453612760919687609, 10, buffer);
		printf("trying ");
		puts("add(-85, -12278851)");
		puts(buffer);
		assert(strcmp(buffer, "-12278936") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3930842786890050144663);
		bigint_free(_3435058317774881361111);
		bigint_free(_4040453612760919687609);

	

		bigint_t* _2606104247460446741223;
		bigint_t* _1615461337493539204762 = bigint(-85);
		bigint_t* _1609702096839730579381 = bigint(-12278851);
		bigint_t* _77525698123897082581 = bigint_sub(_1615461337493539204762, _1609702096839730579381 );
		bigint_to_string(_77525698123897082581, 10, buffer);
		printf("trying ");
		puts("sub(-85, -12278851)");
		puts(buffer);
		assert(strcmp(buffer, "12278766") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1615461337493539204762);
		bigint_free(_1609702096839730579381);
		bigint_free(_77525698123897082581);

	

		bigint_t* _3799194325952614034385;
		bigint_t* _3738955603705032445077 = bigint(38);
		bigint_t* _2471119452210394791584 = bigint(3473865);
		bigint_t* _2170420864322603452915 = bigint_mul(_3738955603705032445077, _2471119452210394791584 );
		bigint_to_string(_2170420864322603452915, 10, buffer);
		printf("trying ");
		puts("mul(38, 3473865)");
		puts(buffer);
		assert(strcmp(buffer, "132006870") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3738955603705032445077);
		bigint_free(_2471119452210394791584);
		bigint_free(_2170420864322603452915);

	

		bigint_t* _2827989679954542339778;
		bigint_t* _4000591664387265204078 = bigint(38);
		bigint_t* _1867398931710651057237 = bigint(3473865);
		bigint_t* _639389363484406231415 = bigint_add(_4000591664387265204078, _1867398931710651057237 );
		bigint_to_string(_639389363484406231415, 10, buffer);
		printf("trying ");
		puts("add(38, 3473865)");
		puts(buffer);
		assert(strcmp(buffer, "3473903") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4000591664387265204078);
		bigint_free(_1867398931710651057237);
		bigint_free(_639389363484406231415);

	

		bigint_t* _1135596814915635140181;
		bigint_t* _1917018191579798546911 = bigint(38);
		bigint_t* _1890750669122043811004 = bigint(3473865);
		bigint_t* _3022907063220136822978 = bigint_sub(_1917018191579798546911, _1890750669122043811004 );
		bigint_to_string(_3022907063220136822978, 10, buffer);
		printf("trying ");
		puts("sub(38, 3473865)");
		puts(buffer);
		assert(strcmp(buffer, "-3473827") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1917018191579798546911);
		bigint_free(_1890750669122043811004);
		bigint_free(_3022907063220136822978);

	

		bigint_t* _3779223605515170248213;
		bigint_t* _3506589513706022972358 = bigint(225);
		bigint_t* _1547005446946292950910 = bigint(-12365531);
		bigint_t* _2254390748900683323739 = bigint_mul(_3506589513706022972358, _1547005446946292950910 );
		bigint_to_string(_2254390748900683323739, 10, buffer);
		printf("trying ");
		puts("mul(225, -12365531)");
		puts(buffer);
		assert(strcmp(buffer, "-2782244475") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3506589513706022972358);
		bigint_free(_1547005446946292950910);
		bigint_free(_2254390748900683323739);

	

		bigint_t* _3879240782390310725083;
		bigint_t* _1914460075400967824213 = bigint(225);
		bigint_t* _2691632811258082124829 = bigint(-12365531);
		bigint_t* _1202707641321923898367 = bigint_add(_1914460075400967824213, _2691632811258082124829 );
		bigint_to_string(_1202707641321923898367, 10, buffer);
		printf("trying ");
		puts("add(225, -12365531)");
		puts(buffer);
		assert(strcmp(buffer, "-12365306") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1914460075400967824213);
		bigint_free(_2691632811258082124829);
		bigint_free(_1202707641321923898367);

	

		bigint_t* _1342822037207139136772;
		bigint_t* _150672793851927718390 = bigint(225);
		bigint_t* _3195470550267602607197 = bigint(-12365531);
		bigint_t* _2508077922730422337051 = bigint_sub(_150672793851927718390, _3195470550267602607197 );
		bigint_to_string(_2508077922730422337051, 10, buffer);
		printf("trying ");
		puts("sub(225, -12365531)");
		puts(buffer);
		assert(strcmp(buffer, "12365756") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_150672793851927718390);
		bigint_free(_3195470550267602607197);
		bigint_free(_2508077922730422337051);

	

		bigint_t* _3315073391640805952069;
		bigint_t* _993590345799321220979 = bigint(171);
		bigint_t* _4558186379634938584359 = bigint(10383128);
		bigint_t* _1197720839261563921187 = bigint_mul(_993590345799321220979, _4558186379634938584359 );
		bigint_to_string(_1197720839261563921187, 10, buffer);
		printf("trying ");
		puts("mul(171, 10383128)");
		puts(buffer);
		assert(strcmp(buffer, "1775514888") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_993590345799321220979);
		bigint_free(_4558186379634938584359);
		bigint_free(_1197720839261563921187);

	

		bigint_t* _2902004649629084164327;
		bigint_t* _3360543242807293299951 = bigint(171);
		bigint_t* _670330640860183511581 = bigint(10383128);
		bigint_t* _1013900675356258288281 = bigint_add(_3360543242807293299951, _670330640860183511581 );
		bigint_to_string(_1013900675356258288281, 10, buffer);
		printf("trying ");
		puts("add(171, 10383128)");
		puts(buffer);
		assert(strcmp(buffer, "10383299") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3360543242807293299951);
		bigint_free(_670330640860183511581);
		bigint_free(_1013900675356258288281);

	

		bigint_t* _4427151973089276062378;
		bigint_t* _2525170045098815906637 = bigint(171);
		bigint_t* _3209011341833700959946 = bigint(10383128);
		bigint_t* _1372010533844073972609 = bigint_sub(_2525170045098815906637, _3209011341833700959946 );
		bigint_to_string(_1372010533844073972609, 10, buffer);
		printf("trying ");
		puts("sub(171, 10383128)");
		puts(buffer);
		assert(strcmp(buffer, "-10382957") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2525170045098815906637);
		bigint_free(_3209011341833700959946);
		bigint_free(_1372010533844073972609);

	

		bigint_t* _4517325882236583063844;
		bigint_t* _4282837723266894532208 = bigint(-229);
		bigint_t* _1775568062520998239543 = bigint(11982596);
		bigint_t* _2150828054033334980546 = bigint_mul(_4282837723266894532208, _1775568062520998239543 );
		bigint_to_string(_2150828054033334980546, 10, buffer);
		printf("trying ");
		puts("mul(-229, 11982596)");
		puts(buffer);
		assert(strcmp(buffer, "-2744014484") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4282837723266894532208);
		bigint_free(_1775568062520998239543);
		bigint_free(_2150828054033334980546);

	

		bigint_t* _1942860342742735252416;
		bigint_t* _4005242729700501920584 = bigint(-229);
		bigint_t* _4059051373580746049368 = bigint(11982596);
		bigint_t* _1267221690535245383397 = bigint_add(_4005242729700501920584, _4059051373580746049368 );
		bigint_to_string(_1267221690535245383397, 10, buffer);
		printf("trying ");
		puts("add(-229, 11982596)");
		puts(buffer);
		assert(strcmp(buffer, "11982367") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4005242729700501920584);
		bigint_free(_4059051373580746049368);
		bigint_free(_1267221690535245383397);

	

		bigint_t* _2101094616631030227420;
		bigint_t* _1525854524917064718042 = bigint(-229);
		bigint_t* _61550434835273309332 = bigint(11982596);
		bigint_t* _951701587174440774810 = bigint_sub(_1525854524917064718042, _61550434835273309332 );
		bigint_to_string(_951701587174440774810, 10, buffer);
		printf("trying ");
		puts("sub(-229, 11982596)");
		puts(buffer);
		assert(strcmp(buffer, "-11982825") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1525854524917064718042);
		bigint_free(_61550434835273309332);
		bigint_free(_951701587174440774810);

	

		bigint_t* _2703588842566813229190;
		bigint_t* _1316347490528492113274 = bigint(142);
		bigint_t* _3153815217748328983765 = bigint(-12370037);
		bigint_t* _2719819901964671064507 = bigint_mul(_1316347490528492113274, _3153815217748328983765 );
		bigint_to_string(_2719819901964671064507, 10, buffer);
		printf("trying ");
		puts("mul(142, -12370037)");
		puts(buffer);
		assert(strcmp(buffer, "-1756545254") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1316347490528492113274);
		bigint_free(_3153815217748328983765);
		bigint_free(_2719819901964671064507);

	

		bigint_t* _934266806638644977716;
		bigint_t* _3060114157265193881818 = bigint(142);
		bigint_t* _1104769060336106848350 = bigint(-12370037);
		bigint_t* _1734168762934838647854 = bigint_add(_3060114157265193881818, _1104769060336106848350 );
		bigint_to_string(_1734168762934838647854, 10, buffer);
		printf("trying ");
		puts("add(142, -12370037)");
		puts(buffer);
		assert(strcmp(buffer, "-12369895") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3060114157265193881818);
		bigint_free(_1104769060336106848350);
		bigint_free(_1734168762934838647854);

	

		bigint_t* _166903219882800704574;
		bigint_t* _3303252805376587555500 = bigint(142);
		bigint_t* _1348328781981036705740 = bigint(-12370037);
		bigint_t* _3179832183834980054021 = bigint_sub(_3303252805376587555500, _1348328781981036705740 );
		bigint_to_string(_3179832183834980054021, 10, buffer);
		printf("trying ");
		puts("sub(142, -12370037)");
		puts(buffer);
		assert(strcmp(buffer, "12370179") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3303252805376587555500);
		bigint_free(_1348328781981036705740);
		bigint_free(_3179832183834980054021);

	

		bigint_t* _2711429468119527235897;
		bigint_t* _2041023164214457380165 = bigint(18);
		bigint_t* _539496738221121180827 = bigint(5773580);
		bigint_t* _2996847390907286837342 = bigint_mul(_2041023164214457380165, _539496738221121180827 );
		bigint_to_string(_2996847390907286837342, 10, buffer);
		printf("trying ");
		puts("mul(18, 5773580)");
		puts(buffer);
		assert(strcmp(buffer, "103924440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2041023164214457380165);
		bigint_free(_539496738221121180827);
		bigint_free(_2996847390907286837342);

	

		bigint_t* _3709782522548744811690;
		bigint_t* _3651877126613646599775 = bigint(18);
		bigint_t* _3101380082911734845972 = bigint(5773580);
		bigint_t* _1620187499972740135567 = bigint_add(_3651877126613646599775, _3101380082911734845972 );
		bigint_to_string(_1620187499972740135567, 10, buffer);
		printf("trying ");
		puts("add(18, 5773580)");
		puts(buffer);
		assert(strcmp(buffer, "5773598") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3651877126613646599775);
		bigint_free(_3101380082911734845972);
		bigint_free(_1620187499972740135567);

	

		bigint_t* _115584202061905870093;
		bigint_t* _2895365938737986953494 = bigint(18);
		bigint_t* _1709232027148778168237 = bigint(5773580);
		bigint_t* _47629468772235807154 = bigint_sub(_2895365938737986953494, _1709232027148778168237 );
		bigint_to_string(_47629468772235807154, 10, buffer);
		printf("trying ");
		puts("sub(18, 5773580)");
		puts(buffer);
		assert(strcmp(buffer, "-5773562") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2895365938737986953494);
		bigint_free(_1709232027148778168237);
		bigint_free(_47629468772235807154);

	

		bigint_t* _743871422773158503685;
		bigint_t* _962236990377089448876 = bigint(-45);
		bigint_t* _2090479781471752739147 = bigint(-4036598);
		bigint_t* _1729414591692020518633 = bigint_mul(_962236990377089448876, _2090479781471752739147 );
		bigint_to_string(_1729414591692020518633, 10, buffer);
		printf("trying ");
		puts("mul(-45, -4036598)");
		puts(buffer);
		assert(strcmp(buffer, "181646910") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_962236990377089448876);
		bigint_free(_2090479781471752739147);
		bigint_free(_1729414591692020518633);

	

		bigint_t* _2292884948695955722389;
		bigint_t* _3212346787516753516805 = bigint(-45);
		bigint_t* _409943837494741856099 = bigint(-4036598);
		bigint_t* _2021810753106098737463 = bigint_add(_3212346787516753516805, _409943837494741856099 );
		bigint_to_string(_2021810753106098737463, 10, buffer);
		printf("trying ");
		puts("add(-45, -4036598)");
		puts(buffer);
		assert(strcmp(buffer, "-4036643") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3212346787516753516805);
		bigint_free(_409943837494741856099);
		bigint_free(_2021810753106098737463);

	

		bigint_t* _3216894645273836427614;
		bigint_t* _3059572226569381463043 = bigint(-45);
		bigint_t* _1531806206129725673665 = bigint(-4036598);
		bigint_t* _3156966087972873074022 = bigint_sub(_3059572226569381463043, _1531806206129725673665 );
		bigint_to_string(_3156966087972873074022, 10, buffer);
		printf("trying ");
		puts("sub(-45, -4036598)");
		puts(buffer);
		assert(strcmp(buffer, "4036553") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3059572226569381463043);
		bigint_free(_1531806206129725673665);
		bigint_free(_3156966087972873074022);

	

		bigint_t* _3144328501268862076026;
		bigint_t* _121636917403199245941 = bigint(-220);
		bigint_t* _1856864481138837532703 = bigint(11548200);
		bigint_t* _2588505207179532706748 = bigint_mul(_121636917403199245941, _1856864481138837532703 );
		bigint_to_string(_2588505207179532706748, 10, buffer);
		printf("trying ");
		puts("mul(-220, 11548200)");
		puts(buffer);
		assert(strcmp(buffer, "-2540604000") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_121636917403199245941);
		bigint_free(_1856864481138837532703);
		bigint_free(_2588505207179532706748);

	

		bigint_t* _2461214093330930291283;
		bigint_t* _423090584812084312439 = bigint(-220);
		bigint_t* _199526380631831793051 = bigint(11548200);
		bigint_t* _306595945547991860171 = bigint_add(_423090584812084312439, _199526380631831793051 );
		bigint_to_string(_306595945547991860171, 10, buffer);
		printf("trying ");
		puts("add(-220, 11548200)");
		puts(buffer);
		assert(strcmp(buffer, "11547980") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_423090584812084312439);
		bigint_free(_199526380631831793051);
		bigint_free(_306595945547991860171);

	

		bigint_t* _2389262546995918138865;
		bigint_t* _4641624798295120780851 = bigint(-220);
		bigint_t* _4480651673645556221460 = bigint(11548200);
		bigint_t* _2831339351454042257427 = bigint_sub(_4641624798295120780851, _4480651673645556221460 );
		bigint_to_string(_2831339351454042257427, 10, buffer);
		printf("trying ");
		puts("sub(-220, 11548200)");
		puts(buffer);
		assert(strcmp(buffer, "-11548420") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4641624798295120780851);
		bigint_free(_4480651673645556221460);
		bigint_free(_2831339351454042257427);

	

		bigint_t* _2569198277567653953212;
		bigint_t* _3628228998702200068687 = bigint(-60);
		bigint_t* _116990754410674302951 = bigint(5132505);
		bigint_t* _429365390604904277939 = bigint_mul(_3628228998702200068687, _116990754410674302951 );
		bigint_to_string(_429365390604904277939, 10, buffer);
		printf("trying ");
		puts("mul(-60, 5132505)");
		puts(buffer);
		assert(strcmp(buffer, "-307950300") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3628228998702200068687);
		bigint_free(_116990754410674302951);
		bigint_free(_429365390604904277939);

	

		bigint_t* _255748325169280033906;
		bigint_t* _4579249728601154367495 = bigint(-60);
		bigint_t* _1085761074273800354183 = bigint(5132505);
		bigint_t* _4378785691912834180790 = bigint_add(_4579249728601154367495, _1085761074273800354183 );
		bigint_to_string(_4378785691912834180790, 10, buffer);
		printf("trying ");
		puts("add(-60, 5132505)");
		puts(buffer);
		assert(strcmp(buffer, "5132445") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4579249728601154367495);
		bigint_free(_1085761074273800354183);
		bigint_free(_4378785691912834180790);

	

		bigint_t* _1493611023329032112990;
		bigint_t* _2825057865646721887984 = bigint(-60);
		bigint_t* _1309321786130977238668 = bigint(5132505);
		bigint_t* _3178160160886608871991 = bigint_sub(_2825057865646721887984, _1309321786130977238668 );
		bigint_to_string(_3178160160886608871991, 10, buffer);
		printf("trying ");
		puts("sub(-60, 5132505)");
		puts(buffer);
		assert(strcmp(buffer, "-5132565") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2825057865646721887984);
		bigint_free(_1309321786130977238668);
		bigint_free(_3178160160886608871991);

	

		bigint_t* _4145179018007609862661;
		bigint_t* _3152141858429118252284 = bigint(-54);
		bigint_t* _298074263430277921356 = bigint(-8551864);
		bigint_t* _2193327605193215081991 = bigint_mul(_3152141858429118252284, _298074263430277921356 );
		bigint_to_string(_2193327605193215081991, 10, buffer);
		printf("trying ");
		puts("mul(-54, -8551864)");
		puts(buffer);
		assert(strcmp(buffer, "461800656") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3152141858429118252284);
		bigint_free(_298074263430277921356);
		bigint_free(_2193327605193215081991);

	

		bigint_t* _3349022434083387932089;
		bigint_t* _2308251461442875043082 = bigint(-54);
		bigint_t* _704054131646265838967 = bigint(-8551864);
		bigint_t* _4310410627563584003 = bigint_add(_2308251461442875043082, _704054131646265838967 );
		bigint_to_string(_4310410627563584003, 10, buffer);
		printf("trying ");
		puts("add(-54, -8551864)");
		puts(buffer);
		assert(strcmp(buffer, "-8551918") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2308251461442875043082);
		bigint_free(_704054131646265838967);
		bigint_free(_4310410627563584003);

	

		bigint_t* _1415091776430121020762;
		bigint_t* _4524389665222845672097 = bigint(-54);
		bigint_t* _2158607758890845492480 = bigint(-8551864);
		bigint_t* _4532693083788877139940 = bigint_sub(_4524389665222845672097, _2158607758890845492480 );
		bigint_to_string(_4532693083788877139940, 10, buffer);
		printf("trying ");
		puts("sub(-54, -8551864)");
		puts(buffer);
		assert(strcmp(buffer, "8551810") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4524389665222845672097);
		bigint_free(_2158607758890845492480);
		bigint_free(_4532693083788877139940);

	

		bigint_t* _759336133351300943763;
		bigint_t* _4200623270013754337505 = bigint(-171);
		bigint_t* _2203210551282883020726 = bigint(-12796418);
		bigint_t* _2015280799563095893890 = bigint_mul(_4200623270013754337505, _2203210551282883020726 );
		bigint_to_string(_2015280799563095893890, 10, buffer);
		printf("trying ");
		puts("mul(-171, -12796418)");
		puts(buffer);
		assert(strcmp(buffer, "2188187478") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4200623270013754337505);
		bigint_free(_2203210551282883020726);
		bigint_free(_2015280799563095893890);

	

		bigint_t* _864401762233333352152;
		bigint_t* _916663411753820173113 = bigint(-171);
		bigint_t* _1733392153022752098889 = bigint(-12796418);
		bigint_t* _4353514602842088624046 = bigint_add(_916663411753820173113, _1733392153022752098889 );
		bigint_to_string(_4353514602842088624046, 10, buffer);
		printf("trying ");
		puts("add(-171, -12796418)");
		puts(buffer);
		assert(strcmp(buffer, "-12796589") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_916663411753820173113);
		bigint_free(_1733392153022752098889);
		bigint_free(_4353514602842088624046);

	

		bigint_t* _466585197282734647804;
		bigint_t* _3189720468628088969367 = bigint(-171);
		bigint_t* _3249940375566802054279 = bigint(-12796418);
		bigint_t* _2939514542291553873774 = bigint_sub(_3189720468628088969367, _3249940375566802054279 );
		bigint_to_string(_2939514542291553873774, 10, buffer);
		printf("trying ");
		puts("sub(-171, -12796418)");
		puts(buffer);
		assert(strcmp(buffer, "12796247") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3189720468628088969367);
		bigint_free(_3249940375566802054279);
		bigint_free(_2939514542291553873774);

	

		bigint_t* _4493251625115843947457;
		bigint_t* _3642351081255196641759 = bigint(-131);
		bigint_t* _2054326225005317008789 = bigint(-10399407);
		bigint_t* _2076641296410438145779 = bigint_mul(_3642351081255196641759, _2054326225005317008789 );
		bigint_to_string(_2076641296410438145779, 10, buffer);
		printf("trying ");
		puts("mul(-131, -10399407)");
		puts(buffer);
		assert(strcmp(buffer, "1362322317") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3642351081255196641759);
		bigint_free(_2054326225005317008789);
		bigint_free(_2076641296410438145779);

	

		bigint_t* _4279341228125240975145;
		bigint_t* _996945867812926959486 = bigint(-131);
		bigint_t* _4289321074562578622854 = bigint(-10399407);
		bigint_t* _2097151447710844254455 = bigint_add(_996945867812926959486, _4289321074562578622854 );
		bigint_to_string(_2097151447710844254455, 10, buffer);
		printf("trying ");
		puts("add(-131, -10399407)");
		puts(buffer);
		assert(strcmp(buffer, "-10399538") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_996945867812926959486);
		bigint_free(_4289321074562578622854);
		bigint_free(_2097151447710844254455);

	

		bigint_t* _536207854073008010068;
		bigint_t* _2904269736013355921075 = bigint(-131);
		bigint_t* _4577155736761100553974 = bigint(-10399407);
		bigint_t* _4718170877388609995128 = bigint_sub(_2904269736013355921075, _4577155736761100553974 );
		bigint_to_string(_4718170877388609995128, 10, buffer);
		printf("trying ");
		puts("sub(-131, -10399407)");
		puts(buffer);
		assert(strcmp(buffer, "10399276") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2904269736013355921075);
		bigint_free(_4577155736761100553974);
		bigint_free(_4718170877388609995128);

	

		bigint_t* _1206054113744812750718;
		bigint_t* _4126555608463271291673 = bigint(203);
		bigint_t* _3528697519965687999041 = bigint(8458145);
		bigint_t* _375091293973976630099 = bigint_mul(_4126555608463271291673, _3528697519965687999041 );
		bigint_to_string(_375091293973976630099, 10, buffer);
		printf("trying ");
		puts("mul(203, 8458145)");
		puts(buffer);
		assert(strcmp(buffer, "1717003435") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4126555608463271291673);
		bigint_free(_3528697519965687999041);
		bigint_free(_375091293973976630099);

	

		bigint_t* _3640420063970399703683;
		bigint_t* _4017428919449103451429 = bigint(203);
		bigint_t* _4554301244531062658653 = bigint(8458145);
		bigint_t* _1153126380405598564582 = bigint_add(_4017428919449103451429, _4554301244531062658653 );
		bigint_to_string(_1153126380405598564582, 10, buffer);
		printf("trying ");
		puts("add(203, 8458145)");
		puts(buffer);
		assert(strcmp(buffer, "8458348") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4017428919449103451429);
		bigint_free(_4554301244531062658653);
		bigint_free(_1153126380405598564582);

	

		bigint_t* _321821929827433215701;
		bigint_t* _2855068143597430053832 = bigint(203);
		bigint_t* _4267235682957452599565 = bigint(8458145);
		bigint_t* _1717455235949819893574 = bigint_sub(_2855068143597430053832, _4267235682957452599565 );
		bigint_to_string(_1717455235949819893574, 10, buffer);
		printf("trying ");
		puts("sub(203, 8458145)");
		puts(buffer);
		assert(strcmp(buffer, "-8457942") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2855068143597430053832);
		bigint_free(_4267235682957452599565);
		bigint_free(_1717455235949819893574);

	

		bigint_t* _2872890140319603559526;
		bigint_t* _2975362813026344740350 = bigint(-202);
		bigint_t* _3260208812057377846184 = bigint(-10004375);
		bigint_t* _1740964483218111902978 = bigint_mul(_2975362813026344740350, _3260208812057377846184 );
		bigint_to_string(_1740964483218111902978, 10, buffer);
		printf("trying ");
		puts("mul(-202, -10004375)");
		puts(buffer);
		assert(strcmp(buffer, "2020883750") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2975362813026344740350);
		bigint_free(_3260208812057377846184);
		bigint_free(_1740964483218111902978);

	

		bigint_t* _1447159532974335487870;
		bigint_t* _859040302354748633617 = bigint(-202);
		bigint_t* _2996582264000378884658 = bigint(-10004375);
		bigint_t* _2120787774881708284456 = bigint_add(_859040302354748633617, _2996582264000378884658 );
		bigint_to_string(_2120787774881708284456, 10, buffer);
		printf("trying ");
		puts("add(-202, -10004375)");
		puts(buffer);
		assert(strcmp(buffer, "-10004577") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_859040302354748633617);
		bigint_free(_2996582264000378884658);
		bigint_free(_2120787774881708284456);

	

		bigint_t* _3127820463031816615422;
		bigint_t* _2389765664995355156770 = bigint(-202);
		bigint_t* _3276461340144271550626 = bigint(-10004375);
		bigint_t* _747681408925685714818 = bigint_sub(_2389765664995355156770, _3276461340144271550626 );
		bigint_to_string(_747681408925685714818, 10, buffer);
		printf("trying ");
		puts("sub(-202, -10004375)");
		puts(buffer);
		assert(strcmp(buffer, "10004173") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2389765664995355156770);
		bigint_free(_3276461340144271550626);
		bigint_free(_747681408925685714818);

	

		bigint_t* _748475195410834871684;
		bigint_t* _697803234347178732452 = bigint(65);
		bigint_t* _117479948825921840667 = bigint(-11441295);
		bigint_t* _4153210847862561721185 = bigint_mul(_697803234347178732452, _117479948825921840667 );
		bigint_to_string(_4153210847862561721185, 10, buffer);
		printf("trying ");
		puts("mul(65, -11441295)");
		puts(buffer);
		assert(strcmp(buffer, "-743684175") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_697803234347178732452);
		bigint_free(_117479948825921840667);
		bigint_free(_4153210847862561721185);

	

		bigint_t* _3159410905343223733479;
		bigint_t* _3020803050931468779401 = bigint(65);
		bigint_t* _2569624208530357469923 = bigint(-11441295);
		bigint_t* _352686399188628386097 = bigint_add(_3020803050931468779401, _2569624208530357469923 );
		bigint_to_string(_352686399188628386097, 10, buffer);
		printf("trying ");
		puts("add(65, -11441295)");
		puts(buffer);
		assert(strcmp(buffer, "-11441230") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3020803050931468779401);
		bigint_free(_2569624208530357469923);
		bigint_free(_352686399188628386097);

	

		bigint_t* _3647086374187107213098;
		bigint_t* _1844112187126913165340 = bigint(65);
		bigint_t* _1849516812708083578348 = bigint(-11441295);
		bigint_t* _3210826619692833775132 = bigint_sub(_1844112187126913165340, _1849516812708083578348 );
		bigint_to_string(_3210826619692833775132, 10, buffer);
		printf("trying ");
		puts("sub(65, -11441295)");
		puts(buffer);
		assert(strcmp(buffer, "11441360") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1844112187126913165340);
		bigint_free(_1849516812708083578348);
		bigint_free(_3210826619692833775132);

	

		bigint_t* _391450729614782913830;
		bigint_t* _638647743758012757848 = bigint(-227);
		bigint_t* _1856259006997277301248 = bigint(-13218640);
		bigint_t* _4249363151908854079692 = bigint_mul(_638647743758012757848, _1856259006997277301248 );
		bigint_to_string(_4249363151908854079692, 10, buffer);
		printf("trying ");
		puts("mul(-227, -13218640)");
		puts(buffer);
		assert(strcmp(buffer, "3000631280") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_638647743758012757848);
		bigint_free(_1856259006997277301248);
		bigint_free(_4249363151908854079692);

	

		bigint_t* _16149682921591722325;
		bigint_t* _3114580648722756643963 = bigint(-227);
		bigint_t* _1286756444056849131763 = bigint(-13218640);
		bigint_t* _1764823726657217942943 = bigint_add(_3114580648722756643963, _1286756444056849131763 );
		bigint_to_string(_1764823726657217942943, 10, buffer);
		printf("trying ");
		puts("add(-227, -13218640)");
		puts(buffer);
		assert(strcmp(buffer, "-13218867") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3114580648722756643963);
		bigint_free(_1286756444056849131763);
		bigint_free(_1764823726657217942943);

	

		bigint_t* _4683748863542940841137;
		bigint_t* _3724046686797526405300 = bigint(-227);
		bigint_t* _796380387567512818328 = bigint(-13218640);
		bigint_t* _53285313869254472986 = bigint_sub(_3724046686797526405300, _796380387567512818328 );
		bigint_to_string(_53285313869254472986, 10, buffer);
		printf("trying ");
		puts("sub(-227, -13218640)");
		puts(buffer);
		assert(strcmp(buffer, "13218413") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3724046686797526405300);
		bigint_free(_796380387567512818328);
		bigint_free(_53285313869254472986);

	

		bigint_t* _4345796590133574321767;
		bigint_t* _3773999969723947906868 = bigint(-202);
		bigint_t* _2663469325322537553799 = bigint(2648199);
		bigint_t* _39344966435416397680 = bigint_mul(_3773999969723947906868, _2663469325322537553799 );
		bigint_to_string(_39344966435416397680, 10, buffer);
		printf("trying ");
		puts("mul(-202, 2648199)");
		puts(buffer);
		assert(strcmp(buffer, "-534936198") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3773999969723947906868);
		bigint_free(_2663469325322537553799);
		bigint_free(_39344966435416397680);

	

		bigint_t* _1104642185419520359998;
		bigint_t* _4317475117208358793043 = bigint(-202);
		bigint_t* _2282221322616158510887 = bigint(2648199);
		bigint_t* _2068355597217412570824 = bigint_add(_4317475117208358793043, _2282221322616158510887 );
		bigint_to_string(_2068355597217412570824, 10, buffer);
		printf("trying ");
		puts("add(-202, 2648199)");
		puts(buffer);
		assert(strcmp(buffer, "2647997") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4317475117208358793043);
		bigint_free(_2282221322616158510887);
		bigint_free(_2068355597217412570824);

	

		bigint_t* _2921676600579998874251;
		bigint_t* _4326169762004535713171 = bigint(-202);
		bigint_t* _1546254606058716578230 = bigint(2648199);
		bigint_t* _732903366185322296787 = bigint_sub(_4326169762004535713171, _1546254606058716578230 );
		bigint_to_string(_732903366185322296787, 10, buffer);
		printf("trying ");
		puts("sub(-202, 2648199)");
		puts(buffer);
		assert(strcmp(buffer, "-2648401") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4326169762004535713171);
		bigint_free(_1546254606058716578230);
		bigint_free(_732903366185322296787);

	

		bigint_t* _1341146390882356830253;
		bigint_t* _3050808217133859961013 = bigint(-135);
		bigint_t* _1175601682649189327762 = bigint(13735803);
		bigint_t* _4221528233599636425358 = bigint_mul(_3050808217133859961013, _1175601682649189327762 );
		bigint_to_string(_4221528233599636425358, 10, buffer);
		printf("trying ");
		puts("mul(-135, 13735803)");
		puts(buffer);
		assert(strcmp(buffer, "-1854333405") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3050808217133859961013);
		bigint_free(_1175601682649189327762);
		bigint_free(_4221528233599636425358);

	

		bigint_t* _4455336164315304431737;
		bigint_t* _2319520336733168797822 = bigint(-135);
		bigint_t* _2533436779833518236663 = bigint(13735803);
		bigint_t* _2979547010294063578584 = bigint_add(_2319520336733168797822, _2533436779833518236663 );
		bigint_to_string(_2979547010294063578584, 10, buffer);
		printf("trying ");
		puts("add(-135, 13735803)");
		puts(buffer);
		assert(strcmp(buffer, "13735668") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2319520336733168797822);
		bigint_free(_2533436779833518236663);
		bigint_free(_2979547010294063578584);

	

		bigint_t* _793731912902553535833;
		bigint_t* _4013106135489106828945 = bigint(-135);
		bigint_t* _322342040299907034275 = bigint(13735803);
		bigint_t* _3230732571319990528741 = bigint_sub(_4013106135489106828945, _322342040299907034275 );
		bigint_to_string(_3230732571319990528741, 10, buffer);
		printf("trying ");
		puts("sub(-135, 13735803)");
		puts(buffer);
		assert(strcmp(buffer, "-13735938") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4013106135489106828945);
		bigint_free(_322342040299907034275);
		bigint_free(_3230732571319990528741);

	

		bigint_t* _2128590635253744503348;
		bigint_t* _2529690073567020701068 = bigint(-167);
		bigint_t* _3731476019942173633852 = bigint(-16665139);
		bigint_t* _2240302702713287949989 = bigint_mul(_2529690073567020701068, _3731476019942173633852 );
		bigint_to_string(_2240302702713287949989, 10, buffer);
		printf("trying ");
		puts("mul(-167, -16665139)");
		puts(buffer);
		assert(strcmp(buffer, "2783078213") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2529690073567020701068);
		bigint_free(_3731476019942173633852);
		bigint_free(_2240302702713287949989);

	

		bigint_t* _260135260080270743477;
		bigint_t* _393060166861567025747 = bigint(-167);
		bigint_t* _3627001247063141578794 = bigint(-16665139);
		bigint_t* _109981417588313553149 = bigint_add(_393060166861567025747, _3627001247063141578794 );
		bigint_to_string(_109981417588313553149, 10, buffer);
		printf("trying ");
		puts("add(-167, -16665139)");
		puts(buffer);
		assert(strcmp(buffer, "-16665306") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_393060166861567025747);
		bigint_free(_3627001247063141578794);
		bigint_free(_109981417588313553149);

	

		bigint_t* _4337538406378583769960;
		bigint_t* _4625093980308933372660 = bigint(-167);
		bigint_t* _2089009772350586027912 = bigint(-16665139);
		bigint_t* _4035712123648278730424 = bigint_sub(_4625093980308933372660, _2089009772350586027912 );
		bigint_to_string(_4035712123648278730424, 10, buffer);
		printf("trying ");
		puts("sub(-167, -16665139)");
		puts(buffer);
		assert(strcmp(buffer, "16664972") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4625093980308933372660);
		bigint_free(_2089009772350586027912);
		bigint_free(_4035712123648278730424);

	

		bigint_t* _3673906924879030708337;
		bigint_t* _911948550767199388322 = bigint(-38);
		bigint_t* _3030090104450906148927 = bigint(-1439253);
		bigint_t* _2311939351107145809615 = bigint_mul(_911948550767199388322, _3030090104450906148927 );
		bigint_to_string(_2311939351107145809615, 10, buffer);
		printf("trying ");
		puts("mul(-38, -1439253)");
		puts(buffer);
		assert(strcmp(buffer, "54691614") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_911948550767199388322);
		bigint_free(_3030090104450906148927);
		bigint_free(_2311939351107145809615);

	

		bigint_t* _270851488231982530998;
		bigint_t* _4395205082146433210946 = bigint(-38);
		bigint_t* _1086528699343685456454 = bigint(-1439253);
		bigint_t* _2870299411365918205189 = bigint_add(_4395205082146433210946, _1086528699343685456454 );
		bigint_to_string(_2870299411365918205189, 10, buffer);
		printf("trying ");
		puts("add(-38, -1439253)");
		puts(buffer);
		assert(strcmp(buffer, "-1439291") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4395205082146433210946);
		bigint_free(_1086528699343685456454);
		bigint_free(_2870299411365918205189);

	

		bigint_t* _558831930110614730552;
		bigint_t* _1540109993373850483972 = bigint(-38);
		bigint_t* _2152783215509089814624 = bigint(-1439253);
		bigint_t* _2542353089745721975286 = bigint_sub(_1540109993373850483972, _2152783215509089814624 );
		bigint_to_string(_2542353089745721975286, 10, buffer);
		printf("trying ");
		puts("sub(-38, -1439253)");
		puts(buffer);
		assert(strcmp(buffer, "1439215") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1540109993373850483972);
		bigint_free(_2152783215509089814624);
		bigint_free(_2542353089745721975286);

	

		bigint_t* _2891105338966736457736;
		bigint_t* _4231360556919750882676 = bigint(-96);
		bigint_t* _925448394158590950282 = bigint(-6019003);
		bigint_t* _4539067582050631898043 = bigint_mul(_4231360556919750882676, _925448394158590950282 );
		bigint_to_string(_4539067582050631898043, 10, buffer);
		printf("trying ");
		puts("mul(-96, -6019003)");
		puts(buffer);
		assert(strcmp(buffer, "577824288") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4231360556919750882676);
		bigint_free(_925448394158590950282);
		bigint_free(_4539067582050631898043);

	

		bigint_t* _2405647409687620130359;
		bigint_t* _3647303026037815459867 = bigint(-96);
		bigint_t* _2271853266140002285432 = bigint(-6019003);
		bigint_t* _2434175754482266891769 = bigint_add(_3647303026037815459867, _2271853266140002285432 );
		bigint_to_string(_2434175754482266891769, 10, buffer);
		printf("trying ");
		puts("add(-96, -6019003)");
		puts(buffer);
		assert(strcmp(buffer, "-6019099") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3647303026037815459867);
		bigint_free(_2271853266140002285432);
		bigint_free(_2434175754482266891769);

	

		bigint_t* _859031412464514114285;
		bigint_t* _4150041724985749204488 = bigint(-96);
		bigint_t* _452434446855519206010 = bigint(-6019003);
		bigint_t* _3672912990602257864500 = bigint_sub(_4150041724985749204488, _452434446855519206010 );
		bigint_to_string(_3672912990602257864500, 10, buffer);
		printf("trying ");
		puts("sub(-96, -6019003)");
		puts(buffer);
		assert(strcmp(buffer, "6018907") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4150041724985749204488);
		bigint_free(_452434446855519206010);
		bigint_free(_3672912990602257864500);

	

		bigint_t* _2836467936697465724709;
		bigint_t* _1929168353780637492399 = bigint(179);
		bigint_t* _1107593728238746406886 = bigint(11725159);
		bigint_t* _2247023455338465228686 = bigint_mul(_1929168353780637492399, _1107593728238746406886 );
		bigint_to_string(_2247023455338465228686, 10, buffer);
		printf("trying ");
		puts("mul(179, 11725159)");
		puts(buffer);
		assert(strcmp(buffer, "2098803461") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1929168353780637492399);
		bigint_free(_1107593728238746406886);
		bigint_free(_2247023455338465228686);

	

		bigint_t* _1584221898404997023032;
		bigint_t* _575357964307867548930 = bigint(179);
		bigint_t* _2164350998708454278093 = bigint(11725159);
		bigint_t* _4057132893274219054172 = bigint_add(_575357964307867548930, _2164350998708454278093 );
		bigint_to_string(_4057132893274219054172, 10, buffer);
		printf("trying ");
		puts("add(179, 11725159)");
		puts(buffer);
		assert(strcmp(buffer, "11725338") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_575357964307867548930);
		bigint_free(_2164350998708454278093);
		bigint_free(_4057132893274219054172);

	

		bigint_t* _3688930764737430667735;
		bigint_t* _821076258662024276872 = bigint(179);
		bigint_t* _2940788216303844299595 = bigint(11725159);
		bigint_t* _1370640955567842868188 = bigint_sub(_821076258662024276872, _2940788216303844299595 );
		bigint_to_string(_1370640955567842868188, 10, buffer);
		printf("trying ");
		puts("sub(179, 11725159)");
		puts(buffer);
		assert(strcmp(buffer, "-11724980") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_821076258662024276872);
		bigint_free(_2940788216303844299595);
		bigint_free(_1370640955567842868188);

	

		bigint_t* _3668753399947129319143;
		bigint_t* _3461394397890881316999 = bigint(140);
		bigint_t* _4160890997390646071130 = bigint(-3735464);
		bigint_t* _2986539105785863885611 = bigint_mul(_3461394397890881316999, _4160890997390646071130 );
		bigint_to_string(_2986539105785863885611, 10, buffer);
		printf("trying ");
		puts("mul(140, -3735464)");
		puts(buffer);
		assert(strcmp(buffer, "-522964960") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3461394397890881316999);
		bigint_free(_4160890997390646071130);
		bigint_free(_2986539105785863885611);

	

		bigint_t* _425438875668123594848;
		bigint_t* _396889964904974096188 = bigint(140);
		bigint_t* _1111581050582913863380 = bigint(-3735464);
		bigint_t* _1953400397161432359330 = bigint_add(_396889964904974096188, _1111581050582913863380 );
		bigint_to_string(_1953400397161432359330, 10, buffer);
		printf("trying ");
		puts("add(140, -3735464)");
		puts(buffer);
		assert(strcmp(buffer, "-3735324") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_396889964904974096188);
		bigint_free(_1111581050582913863380);
		bigint_free(_1953400397161432359330);

	

		bigint_t* _1830535630850388760641;
		bigint_t* _1806951954998329666166 = bigint(140);
		bigint_t* _4016534213359345632104 = bigint(-3735464);
		bigint_t* _1076819885167398170558 = bigint_sub(_1806951954998329666166, _4016534213359345632104 );
		bigint_to_string(_1076819885167398170558, 10, buffer);
		printf("trying ");
		puts("sub(140, -3735464)");
		puts(buffer);
		assert(strcmp(buffer, "3735604") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1806951954998329666166);
		bigint_free(_4016534213359345632104);
		bigint_free(_1076819885167398170558);

	

		bigint_t* _1105183000721010558011;
		bigint_t* _160861730444170762917 = bigint(-111);
		bigint_t* _3932915651266161349011 = bigint(9103983);
		bigint_t* _3746435722193734580772 = bigint_mul(_160861730444170762917, _3932915651266161349011 );
		bigint_to_string(_3746435722193734580772, 10, buffer);
		printf("trying ");
		puts("mul(-111, 9103983)");
		puts(buffer);
		assert(strcmp(buffer, "-1010542113") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_160861730444170762917);
		bigint_free(_3932915651266161349011);
		bigint_free(_3746435722193734580772);

	

		bigint_t* _1285154332067870867606;
		bigint_t* _2540894501660918915251 = bigint(-111);
		bigint_t* _118948294094237593523 = bigint(9103983);
		bigint_t* _1984160978627244792847 = bigint_add(_2540894501660918915251, _118948294094237593523 );
		bigint_to_string(_1984160978627244792847, 10, buffer);
		printf("trying ");
		puts("add(-111, 9103983)");
		puts(buffer);
		assert(strcmp(buffer, "9103872") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2540894501660918915251);
		bigint_free(_118948294094237593523);
		bigint_free(_1984160978627244792847);

	

		bigint_t* _14658873931247074542;
		bigint_t* _1341850026830262054021 = bigint(-111);
		bigint_t* _3208956496899777546281 = bigint(9103983);
		bigint_t* _3387044510933783880326 = bigint_sub(_1341850026830262054021, _3208956496899777546281 );
		bigint_to_string(_3387044510933783880326, 10, buffer);
		printf("trying ");
		puts("sub(-111, 9103983)");
		puts(buffer);
		assert(strcmp(buffer, "-9104094") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1341850026830262054021);
		bigint_free(_3208956496899777546281);
		bigint_free(_3387044510933783880326);

	

		bigint_t* _2355339088289061274698;
		bigint_t* _2736623296825823411760 = bigint(169);
		bigint_t* _339557203444588553613 = bigint(4725112);
		bigint_t* _2649518248454410580401 = bigint_mul(_2736623296825823411760, _339557203444588553613 );
		bigint_to_string(_2649518248454410580401, 10, buffer);
		printf("trying ");
		puts("mul(169, 4725112)");
		puts(buffer);
		assert(strcmp(buffer, "798543928") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2736623296825823411760);
		bigint_free(_339557203444588553613);
		bigint_free(_2649518248454410580401);

	

		bigint_t* _3907287250938940001276;
		bigint_t* _4638221958917162441625 = bigint(169);
		bigint_t* _4302289556765045576744 = bigint(4725112);
		bigint_t* _3034410345397153330379 = bigint_add(_4638221958917162441625, _4302289556765045576744 );
		bigint_to_string(_3034410345397153330379, 10, buffer);
		printf("trying ");
		puts("add(169, 4725112)");
		puts(buffer);
		assert(strcmp(buffer, "4725281") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4638221958917162441625);
		bigint_free(_4302289556765045576744);
		bigint_free(_3034410345397153330379);

	

		bigint_t* _2578000058237163492942;
		bigint_t* _508778177754977169014 = bigint(169);
		bigint_t* _903130971334946289960 = bigint(4725112);
		bigint_t* _2023781616245080013026 = bigint_sub(_508778177754977169014, _903130971334946289960 );
		bigint_to_string(_2023781616245080013026, 10, buffer);
		printf("trying ");
		puts("sub(169, 4725112)");
		puts(buffer);
		assert(strcmp(buffer, "-4724943") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_508778177754977169014);
		bigint_free(_903130971334946289960);
		bigint_free(_2023781616245080013026);

	

		bigint_t* _1734280610121160382398;
		bigint_t* _1959308847320368154249 = bigint(-90);
		bigint_t* _1257819281921910267463 = bigint(-3875572);
		bigint_t* _1485951110443918170953 = bigint_mul(_1959308847320368154249, _1257819281921910267463 );
		bigint_to_string(_1485951110443918170953, 10, buffer);
		printf("trying ");
		puts("mul(-90, -3875572)");
		puts(buffer);
		assert(strcmp(buffer, "348801480") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1959308847320368154249);
		bigint_free(_1257819281921910267463);
		bigint_free(_1485951110443918170953);

	

		bigint_t* _2643920158264461717067;
		bigint_t* _3019178631134163823369 = bigint(-90);
		bigint_t* _3886965789437027638736 = bigint(-3875572);
		bigint_t* _2075028208954373100635 = bigint_add(_3019178631134163823369, _3886965789437027638736 );
		bigint_to_string(_2075028208954373100635, 10, buffer);
		printf("trying ");
		puts("add(-90, -3875572)");
		puts(buffer);
		assert(strcmp(buffer, "-3875662") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3019178631134163823369);
		bigint_free(_3886965789437027638736);
		bigint_free(_2075028208954373100635);

	

		bigint_t* _3083358555919073180019;
		bigint_t* _1924449905748357258322 = bigint(-90);
		bigint_t* _2811612939940025055895 = bigint(-3875572);
		bigint_t* _2253116014542397682510 = bigint_sub(_1924449905748357258322, _2811612939940025055895 );
		bigint_to_string(_2253116014542397682510, 10, buffer);
		printf("trying ");
		puts("sub(-90, -3875572)");
		puts(buffer);
		assert(strcmp(buffer, "3875482") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1924449905748357258322);
		bigint_free(_2811612939940025055895);
		bigint_free(_2253116014542397682510);

	

		bigint_t* _1428611879129351376826;
		bigint_t* _2390636340966834878108 = bigint(23);
		bigint_t* _4364793873692348667144 = bigint(7807104);
		bigint_t* _564213040441271535521 = bigint_mul(_2390636340966834878108, _4364793873692348667144 );
		bigint_to_string(_564213040441271535521, 10, buffer);
		printf("trying ");
		puts("mul(23, 7807104)");
		puts(buffer);
		assert(strcmp(buffer, "179563392") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2390636340966834878108);
		bigint_free(_4364793873692348667144);
		bigint_free(_564213040441271535521);

	

		bigint_t* _3741514086904317545270;
		bigint_t* _1864642047131260727464 = bigint(23);
		bigint_t* _1398339469128352347793 = bigint(7807104);
		bigint_t* _1604333514103396522624 = bigint_add(_1864642047131260727464, _1398339469128352347793 );
		bigint_to_string(_1604333514103396522624, 10, buffer);
		printf("trying ");
		puts("add(23, 7807104)");
		puts(buffer);
		assert(strcmp(buffer, "7807127") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1864642047131260727464);
		bigint_free(_1398339469128352347793);
		bigint_free(_1604333514103396522624);

	

		bigint_t* _455326123777527490130;
		bigint_t* _423856999309375353377 = bigint(23);
		bigint_t* _3093169491934596479773 = bigint(7807104);
		bigint_t* _1408200529222319891752 = bigint_sub(_423856999309375353377, _3093169491934596479773 );
		bigint_to_string(_1408200529222319891752, 10, buffer);
		printf("trying ");
		puts("sub(23, 7807104)");
		puts(buffer);
		assert(strcmp(buffer, "-7807081") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_423856999309375353377);
		bigint_free(_3093169491934596479773);
		bigint_free(_1408200529222319891752);

	

		bigint_t* _286354861963602144169;
		bigint_t* _1613319804278774734043 = bigint(158);
		bigint_t* _334073788035182845410 = bigint(12948245);
		bigint_t* _545262063098057208384 = bigint_mul(_1613319804278774734043, _334073788035182845410 );
		bigint_to_string(_545262063098057208384, 10, buffer);
		printf("trying ");
		puts("mul(158, 12948245)");
		puts(buffer);
		assert(strcmp(buffer, "2045822710") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1613319804278774734043);
		bigint_free(_334073788035182845410);
		bigint_free(_545262063098057208384);

	

		bigint_t* _1550864656475874456032;
		bigint_t* _1855197813910279131826 = bigint(158);
		bigint_t* _4489612538118060811616 = bigint(12948245);
		bigint_t* _1742041906954048967067 = bigint_add(_1855197813910279131826, _4489612538118060811616 );
		bigint_to_string(_1742041906954048967067, 10, buffer);
		printf("trying ");
		puts("add(158, 12948245)");
		puts(buffer);
		assert(strcmp(buffer, "12948403") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1855197813910279131826);
		bigint_free(_4489612538118060811616);
		bigint_free(_1742041906954048967067);

	

		bigint_t* _4508746474179357464126;
		bigint_t* _2737484246705035306877 = bigint(158);
		bigint_t* _3213755101093793159418 = bigint(12948245);
		bigint_t* _3933813021380129483786 = bigint_sub(_2737484246705035306877, _3213755101093793159418 );
		bigint_to_string(_3933813021380129483786, 10, buffer);
		printf("trying ");
		puts("sub(158, 12948245)");
		puts(buffer);
		assert(strcmp(buffer, "-12948087") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2737484246705035306877);
		bigint_free(_3213755101093793159418);
		bigint_free(_3933813021380129483786);

	

		bigint_t* _3123289175385291794718;
		bigint_t* _2693706802789495228387 = bigint(-235);
		bigint_t* _4231024716462741202203 = bigint(6701004);
		bigint_t* _4191664272971192983009 = bigint_mul(_2693706802789495228387, _4231024716462741202203 );
		bigint_to_string(_4191664272971192983009, 10, buffer);
		printf("trying ");
		puts("mul(-235, 6701004)");
		puts(buffer);
		assert(strcmp(buffer, "-1574735940") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2693706802789495228387);
		bigint_free(_4231024716462741202203);
		bigint_free(_4191664272971192983009);

	

		bigint_t* _1920669595269940665393;
		bigint_t* _2020046655623904860317 = bigint(-235);
		bigint_t* _1102868386644228025987 = bigint(6701004);
		bigint_t* _1906823754037606215424 = bigint_add(_2020046655623904860317, _1102868386644228025987 );
		bigint_to_string(_1906823754037606215424, 10, buffer);
		printf("trying ");
		puts("add(-235, 6701004)");
		puts(buffer);
		assert(strcmp(buffer, "6700769") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2020046655623904860317);
		bigint_free(_1102868386644228025987);
		bigint_free(_1906823754037606215424);

	

		bigint_t* _2556399070075035637203;
		bigint_t* _1285526923771009392808 = bigint(-235);
		bigint_t* _2263368467323515270238 = bigint(6701004);
		bigint_t* _990360195258558071673 = bigint_sub(_1285526923771009392808, _2263368467323515270238 );
		bigint_to_string(_990360195258558071673, 10, buffer);
		printf("trying ");
		puts("sub(-235, 6701004)");
		puts(buffer);
		assert(strcmp(buffer, "-6701239") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1285526923771009392808);
		bigint_free(_2263368467323515270238);
		bigint_free(_990360195258558071673);

	

		bigint_t* _813008165321197862278;
		bigint_t* _3211132028456044010926 = bigint(83);
		bigint_t* _3251761301405091244341 = bigint(-3596812);
		bigint_t* _2854945157201981659317 = bigint_mul(_3211132028456044010926, _3251761301405091244341 );
		bigint_to_string(_2854945157201981659317, 10, buffer);
		printf("trying ");
		puts("mul(83, -3596812)");
		puts(buffer);
		assert(strcmp(buffer, "-298535396") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3211132028456044010926);
		bigint_free(_3251761301405091244341);
		bigint_free(_2854945157201981659317);

	

		bigint_t* _704785830617136930072;
		bigint_t* _3160631142359673630654 = bigint(83);
		bigint_t* _349640356928958176351 = bigint(-3596812);
		bigint_t* _3759287511534192787302 = bigint_add(_3160631142359673630654, _349640356928958176351 );
		bigint_to_string(_3759287511534192787302, 10, buffer);
		printf("trying ");
		puts("add(83, -3596812)");
		puts(buffer);
		assert(strcmp(buffer, "-3596729") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3160631142359673630654);
		bigint_free(_349640356928958176351);
		bigint_free(_3759287511534192787302);

	

		bigint_t* _3576025984574472893219;
		bigint_t* _3635818499265124905498 = bigint(83);
		bigint_t* _2922761190009415426105 = bigint(-3596812);
		bigint_t* _2066776383438042961869 = bigint_sub(_3635818499265124905498, _2922761190009415426105 );
		bigint_to_string(_2066776383438042961869, 10, buffer);
		printf("trying ");
		puts("sub(83, -3596812)");
		puts(buffer);
		assert(strcmp(buffer, "3596895") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3635818499265124905498);
		bigint_free(_2922761190009415426105);
		bigint_free(_2066776383438042961869);

	

		bigint_t* _2959659021404069260723;
		bigint_t* _4444081716441123281878 = bigint(-4);
		bigint_t* _3078050748349186407483 = bigint(16635796);
		bigint_t* _2861160987734626231501 = bigint_mul(_4444081716441123281878, _3078050748349186407483 );
		bigint_to_string(_2861160987734626231501, 10, buffer);
		printf("trying ");
		puts("mul(-4, 16635796)");
		puts(buffer);
		assert(strcmp(buffer, "-66543184") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4444081716441123281878);
		bigint_free(_3078050748349186407483);
		bigint_free(_2861160987734626231501);

	

		bigint_t* _2281178863363043231597;
		bigint_t* _953834677709421443551 = bigint(-4);
		bigint_t* _425597341335376103240 = bigint(16635796);
		bigint_t* _2440303034651838798665 = bigint_add(_953834677709421443551, _425597341335376103240 );
		bigint_to_string(_2440303034651838798665, 10, buffer);
		printf("trying ");
		puts("add(-4, 16635796)");
		puts(buffer);
		assert(strcmp(buffer, "16635792") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_953834677709421443551);
		bigint_free(_425597341335376103240);
		bigint_free(_2440303034651838798665);

	

		bigint_t* _2625647865010335434536;
		bigint_t* _1433570936750352730206 = bigint(-4);
		bigint_t* _2718589830923680523955 = bigint(16635796);
		bigint_t* _1017987681973693777671 = bigint_sub(_1433570936750352730206, _2718589830923680523955 );
		bigint_to_string(_1017987681973693777671, 10, buffer);
		printf("trying ");
		puts("sub(-4, 16635796)");
		puts(buffer);
		assert(strcmp(buffer, "-16635800") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1433570936750352730206);
		bigint_free(_2718589830923680523955);
		bigint_free(_1017987681973693777671);

	

		bigint_t* _3732237603548775071740;
		bigint_t* _2731801288996486505904 = bigint(139);
		bigint_t* _4332297265517382817293 = bigint(6256610);
		bigint_t* _465345077290613016033 = bigint_mul(_2731801288996486505904, _4332297265517382817293 );
		bigint_to_string(_465345077290613016033, 10, buffer);
		printf("trying ");
		puts("mul(139, 6256610)");
		puts(buffer);
		assert(strcmp(buffer, "869668790") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2731801288996486505904);
		bigint_free(_4332297265517382817293);
		bigint_free(_465345077290613016033);

	

		bigint_t* _4691907072390700585162;
		bigint_t* _2983552529684551483091 = bigint(139);
		bigint_t* _1587626381834108558095 = bigint(6256610);
		bigint_t* _2085210249557679692138 = bigint_add(_2983552529684551483091, _1587626381834108558095 );
		bigint_to_string(_2085210249557679692138, 10, buffer);
		printf("trying ");
		puts("add(139, 6256610)");
		puts(buffer);
		assert(strcmp(buffer, "6256749") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2983552529684551483091);
		bigint_free(_1587626381834108558095);
		bigint_free(_2085210249557679692138);

	

		bigint_t* _942009520285779830838;
		bigint_t* _3591525872416173944441 = bigint(139);
		bigint_t* _2764228700243178146780 = bigint(6256610);
		bigint_t* _1430314578362177580630 = bigint_sub(_3591525872416173944441, _2764228700243178146780 );
		bigint_to_string(_1430314578362177580630, 10, buffer);
		printf("trying ");
		puts("sub(139, 6256610)");
		puts(buffer);
		assert(strcmp(buffer, "-6256471") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3591525872416173944441);
		bigint_free(_2764228700243178146780);
		bigint_free(_1430314578362177580630);

	

		bigint_t* _2750058410926041707904;
		bigint_t* _3691674667913453337386 = bigint(-177);
		bigint_t* _976939757302450808771 = bigint(7676489);
		bigint_t* _2604676081907046550859 = bigint_mul(_3691674667913453337386, _976939757302450808771 );
		bigint_to_string(_2604676081907046550859, 10, buffer);
		printf("trying ");
		puts("mul(-177, 7676489)");
		puts(buffer);
		assert(strcmp(buffer, "-1358738553") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3691674667913453337386);
		bigint_free(_976939757302450808771);
		bigint_free(_2604676081907046550859);

	

		bigint_t* _4575556891117386854154;
		bigint_t* _957352683312737122490 = bigint(-177);
		bigint_t* _1751840011566899416509 = bigint(7676489);
		bigint_t* _2611072096511335679903 = bigint_add(_957352683312737122490, _1751840011566899416509 );
		bigint_to_string(_2611072096511335679903, 10, buffer);
		printf("trying ");
		puts("add(-177, 7676489)");
		puts(buffer);
		assert(strcmp(buffer, "7676312") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_957352683312737122490);
		bigint_free(_1751840011566899416509);
		bigint_free(_2611072096511335679903);

	

		bigint_t* _1488722503889419098681;
		bigint_t* _1818849666259695574311 = bigint(-177);
		bigint_t* _3436439912978764780021 = bigint(7676489);
		bigint_t* _4606142466969613976791 = bigint_sub(_1818849666259695574311, _3436439912978764780021 );
		bigint_to_string(_4606142466969613976791, 10, buffer);
		printf("trying ");
		puts("sub(-177, 7676489)");
		puts(buffer);
		assert(strcmp(buffer, "-7676666") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1818849666259695574311);
		bigint_free(_3436439912978764780021);
		bigint_free(_4606142466969613976791);

	

		bigint_t* _3031422588418659725028;
		bigint_t* _4028093267323839756057 = bigint(-59);
		bigint_t* _2318164659869577008046 = bigint(-15695889);
		bigint_t* _231400877143009173865 = bigint_mul(_4028093267323839756057, _2318164659869577008046 );
		bigint_to_string(_231400877143009173865, 10, buffer);
		printf("trying ");
		puts("mul(-59, -15695889)");
		puts(buffer);
		assert(strcmp(buffer, "926057451") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4028093267323839756057);
		bigint_free(_2318164659869577008046);
		bigint_free(_231400877143009173865);

	

		bigint_t* _398566742179247748072;
		bigint_t* _4147768285702152656902 = bigint(-59);
		bigint_t* _2739315674809505805541 = bigint(-15695889);
		bigint_t* _4645555852195920613229 = bigint_add(_4147768285702152656902, _2739315674809505805541 );
		bigint_to_string(_4645555852195920613229, 10, buffer);
		printf("trying ");
		puts("add(-59, -15695889)");
		puts(buffer);
		assert(strcmp(buffer, "-15695948") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4147768285702152656902);
		bigint_free(_2739315674809505805541);
		bigint_free(_4645555852195920613229);

	

		bigint_t* _3892798569927738437636;
		bigint_t* _860990717537190374439 = bigint(-59);
		bigint_t* _2969525445103541381321 = bigint(-15695889);
		bigint_t* _4710149151866350001708 = bigint_sub(_860990717537190374439, _2969525445103541381321 );
		bigint_to_string(_4710149151866350001708, 10, buffer);
		printf("trying ");
		puts("sub(-59, -15695889)");
		puts(buffer);
		assert(strcmp(buffer, "15695830") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_860990717537190374439);
		bigint_free(_2969525445103541381321);
		bigint_free(_4710149151866350001708);

	

		bigint_t* _852541805457600802395;
		bigint_t* _2009658823781841806046 = bigint(-97);
		bigint_t* _3306482560329563044902 = bigint(13534450);
		bigint_t* _4078583600214984937946 = bigint_mul(_2009658823781841806046, _3306482560329563044902 );
		bigint_to_string(_4078583600214984937946, 10, buffer);
		printf("trying ");
		puts("mul(-97, 13534450)");
		puts(buffer);
		assert(strcmp(buffer, "-1312841650") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2009658823781841806046);
		bigint_free(_3306482560329563044902);
		bigint_free(_4078583600214984937946);

	

		bigint_t* _4199796236232296577195;
		bigint_t* _2412198445934545218075 = bigint(-97);
		bigint_t* _2619466647222881587766 = bigint(13534450);
		bigint_t* _4680699864595047800551 = bigint_add(_2412198445934545218075, _2619466647222881587766 );
		bigint_to_string(_4680699864595047800551, 10, buffer);
		printf("trying ");
		puts("add(-97, 13534450)");
		puts(buffer);
		assert(strcmp(buffer, "13534353") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2412198445934545218075);
		bigint_free(_2619466647222881587766);
		bigint_free(_4680699864595047800551);

	

		bigint_t* _1644458749419018783273;
		bigint_t* _4141743620889121562198 = bigint(-97);
		bigint_t* _2621027556613349917690 = bigint(13534450);
		bigint_t* _1767172667931000752258 = bigint_sub(_4141743620889121562198, _2621027556613349917690 );
		bigint_to_string(_1767172667931000752258, 10, buffer);
		printf("trying ");
		puts("sub(-97, 13534450)");
		puts(buffer);
		assert(strcmp(buffer, "-13534547") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4141743620889121562198);
		bigint_free(_2621027556613349917690);
		bigint_free(_1767172667931000752258);

	

		bigint_t* _2711979097212355338995;
		bigint_t* _3342192993444910206092 = bigint(-207);
		bigint_t* _4399554933780222034783 = bigint(1249379);
		bigint_t* _4324129358604207447040 = bigint_mul(_3342192993444910206092, _4399554933780222034783 );
		bigint_to_string(_4324129358604207447040, 10, buffer);
		printf("trying ");
		puts("mul(-207, 1249379)");
		puts(buffer);
		assert(strcmp(buffer, "-258621453") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3342192993444910206092);
		bigint_free(_4399554933780222034783);
		bigint_free(_4324129358604207447040);

	

		bigint_t* _3447322718450836078498;
		bigint_t* _256135942214638290314 = bigint(-207);
		bigint_t* _3077608144993383174726 = bigint(1249379);
		bigint_t* _4276803463752310247517 = bigint_add(_256135942214638290314, _3077608144993383174726 );
		bigint_to_string(_4276803463752310247517, 10, buffer);
		printf("trying ");
		puts("add(-207, 1249379)");
		puts(buffer);
		assert(strcmp(buffer, "1249172") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_256135942214638290314);
		bigint_free(_3077608144993383174726);
		bigint_free(_4276803463752310247517);

	

		bigint_t* _2149188418802700006756;
		bigint_t* _2503781627957718235237 = bigint(-207);
		bigint_t* _4551608802684707052502 = bigint(1249379);
		bigint_t* _4675777572999386176514 = bigint_sub(_2503781627957718235237, _4551608802684707052502 );
		bigint_to_string(_4675777572999386176514, 10, buffer);
		printf("trying ");
		puts("sub(-207, 1249379)");
		puts(buffer);
		assert(strcmp(buffer, "-1249586") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2503781627957718235237);
		bigint_free(_4551608802684707052502);
		bigint_free(_4675777572999386176514);

	

		bigint_t* _4627560188628548552911;
		bigint_t* _4380716230630177963585 = bigint(-81);
		bigint_t* _948385411850842462194 = bigint(-14707248);
		bigint_t* _448455865207524918564 = bigint_mul(_4380716230630177963585, _948385411850842462194 );
		bigint_to_string(_448455865207524918564, 10, buffer);
		printf("trying ");
		puts("mul(-81, -14707248)");
		puts(buffer);
		assert(strcmp(buffer, "1191287088") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4380716230630177963585);
		bigint_free(_948385411850842462194);
		bigint_free(_448455865207524918564);

	

		bigint_t* _3062810731890569397220;
		bigint_t* _405873185021301323069 = bigint(-81);
		bigint_t* _1658974706691128906678 = bigint(-14707248);
		bigint_t* _1502662656563980610797 = bigint_add(_405873185021301323069, _1658974706691128906678 );
		bigint_to_string(_1502662656563980610797, 10, buffer);
		printf("trying ");
		puts("add(-81, -14707248)");
		puts(buffer);
		assert(strcmp(buffer, "-14707329") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_405873185021301323069);
		bigint_free(_1658974706691128906678);
		bigint_free(_1502662656563980610797);

	

		bigint_t* _2092671583701042142375;
		bigint_t* _1801311580974579022319 = bigint(-81);
		bigint_t* _288986397263205723070 = bigint(-14707248);
		bigint_t* _1618569264724193462257 = bigint_sub(_1801311580974579022319, _288986397263205723070 );
		bigint_to_string(_1618569264724193462257, 10, buffer);
		printf("trying ");
		puts("sub(-81, -14707248)");
		puts(buffer);
		assert(strcmp(buffer, "14707167") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1801311580974579022319);
		bigint_free(_288986397263205723070);
		bigint_free(_1618569264724193462257);

	

		bigint_t* _1100513626238456982340;
		bigint_t* _3471431880625367718555 = bigint(-143);
		bigint_t* _142693948597514787653 = bigint(16282132);
		bigint_t* _2269449447317350747300 = bigint_mul(_3471431880625367718555, _142693948597514787653 );
		bigint_to_string(_2269449447317350747300, 10, buffer);
		printf("trying ");
		puts("mul(-143, 16282132)");
		puts(buffer);
		assert(strcmp(buffer, "-2328344876") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3471431880625367718555);
		bigint_free(_142693948597514787653);
		bigint_free(_2269449447317350747300);

	

		bigint_t* _1552846583829587067749;
		bigint_t* _751081389169890829241 = bigint(-143);
		bigint_t* _868280393334169018143 = bigint(16282132);
		bigint_t* _2841865304069725806288 = bigint_add(_751081389169890829241, _868280393334169018143 );
		bigint_to_string(_2841865304069725806288, 10, buffer);
		printf("trying ");
		puts("add(-143, 16282132)");
		puts(buffer);
		assert(strcmp(buffer, "16281989") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_751081389169890829241);
		bigint_free(_868280393334169018143);
		bigint_free(_2841865304069725806288);

	

		bigint_t* _865494179525235987143;
		bigint_t* _2879935745345306520079 = bigint(-143);
		bigint_t* _2364789464106759402008 = bigint(16282132);
		bigint_t* _4016125992107855588962 = bigint_sub(_2879935745345306520079, _2364789464106759402008 );
		bigint_to_string(_4016125992107855588962, 10, buffer);
		printf("trying ");
		puts("sub(-143, 16282132)");
		puts(buffer);
		assert(strcmp(buffer, "-16282275") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2879935745345306520079);
		bigint_free(_2364789464106759402008);
		bigint_free(_4016125992107855588962);

	

		bigint_t* _1367095184561438857433;
		bigint_t* _1170395495846654805662 = bigint(17);
		bigint_t* _3883444294824704033301 = bigint(15155016);
		bigint_t* _249822792797359901684 = bigint_mul(_1170395495846654805662, _3883444294824704033301 );
		bigint_to_string(_249822792797359901684, 10, buffer);
		printf("trying ");
		puts("mul(17, 15155016)");
		puts(buffer);
		assert(strcmp(buffer, "257635272") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1170395495846654805662);
		bigint_free(_3883444294824704033301);
		bigint_free(_249822792797359901684);

	

		bigint_t* _248966335863126645252;
		bigint_t* _31564566082203094870 = bigint(17);
		bigint_t* _1407098648694308623996 = bigint(15155016);
		bigint_t* _1710871627080550930947 = bigint_add(_31564566082203094870, _1407098648694308623996 );
		bigint_to_string(_1710871627080550930947, 10, buffer);
		printf("trying ");
		puts("add(17, 15155016)");
		puts(buffer);
		assert(strcmp(buffer, "15155033") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_31564566082203094870);
		bigint_free(_1407098648694308623996);
		bigint_free(_1710871627080550930947);

	

		bigint_t* _1558471545106333179586;
		bigint_t* _4215035272351334061215 = bigint(17);
		bigint_t* _4679133272339072916811 = bigint(15155016);
		bigint_t* _13722618577632750337 = bigint_sub(_4215035272351334061215, _4679133272339072916811 );
		bigint_to_string(_13722618577632750337, 10, buffer);
		printf("trying ");
		puts("sub(17, 15155016)");
		puts(buffer);
		assert(strcmp(buffer, "-15154999") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4215035272351334061215);
		bigint_free(_4679133272339072916811);
		bigint_free(_13722618577632750337);

	

		bigint_t* _2658443700883142948660;
		bigint_t* _2583975909433166168962 = bigint(84);
		bigint_t* _2359350266798998620539 = bigint(-9038259);
		bigint_t* _3733107690287162687572 = bigint_mul(_2583975909433166168962, _2359350266798998620539 );
		bigint_to_string(_3733107690287162687572, 10, buffer);
		printf("trying ");
		puts("mul(84, -9038259)");
		puts(buffer);
		assert(strcmp(buffer, "-759213756") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2583975909433166168962);
		bigint_free(_2359350266798998620539);
		bigint_free(_3733107690287162687572);

	

		bigint_t* _1440504196242715141448;
		bigint_t* _1639717327299993174928 = bigint(84);
		bigint_t* _4235690715618033443764 = bigint(-9038259);
		bigint_t* _656205419834350223652 = bigint_add(_1639717327299993174928, _4235690715618033443764 );
		bigint_to_string(_656205419834350223652, 10, buffer);
		printf("trying ");
		puts("add(84, -9038259)");
		puts(buffer);
		assert(strcmp(buffer, "-9038175") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1639717327299993174928);
		bigint_free(_4235690715618033443764);
		bigint_free(_656205419834350223652);

	

		bigint_t* _3326658260351744898882;
		bigint_t* _483375108079691004361 = bigint(84);
		bigint_t* _4618468716684868391825 = bigint(-9038259);
		bigint_t* _496678495631449123211 = bigint_sub(_483375108079691004361, _4618468716684868391825 );
		bigint_to_string(_496678495631449123211, 10, buffer);
		printf("trying ");
		puts("sub(84, -9038259)");
		puts(buffer);
		assert(strcmp(buffer, "9038343") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_483375108079691004361);
		bigint_free(_4618468716684868391825);
		bigint_free(_496678495631449123211);

	

		bigint_t* _2548886703462663270695;
		bigint_t* _4267782003737441792728 = bigint(-177);
		bigint_t* _3315933005259756004264 = bigint(1963710);
		bigint_t* _668578177798317444462 = bigint_mul(_4267782003737441792728, _3315933005259756004264 );
		bigint_to_string(_668578177798317444462, 10, buffer);
		printf("trying ");
		puts("mul(-177, 1963710)");
		puts(buffer);
		assert(strcmp(buffer, "-347576670") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4267782003737441792728);
		bigint_free(_3315933005259756004264);
		bigint_free(_668578177798317444462);

	

		bigint_t* _3971081547373612678163;
		bigint_t* _170677345483551622414 = bigint(-177);
		bigint_t* _3650247244795670220542 = bigint(1963710);
		bigint_t* _1438236966829669952094 = bigint_add(_170677345483551622414, _3650247244795670220542 );
		bigint_to_string(_1438236966829669952094, 10, buffer);
		printf("trying ");
		puts("add(-177, 1963710)");
		puts(buffer);
		assert(strcmp(buffer, "1963533") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_170677345483551622414);
		bigint_free(_3650247244795670220542);
		bigint_free(_1438236966829669952094);

	

		bigint_t* _602203247945873285323;
		bigint_t* _2824023967017779643732 = bigint(-177);
		bigint_t* _3689545369183698229011 = bigint(1963710);
		bigint_t* _3276234831688387533357 = bigint_sub(_2824023967017779643732, _3689545369183698229011 );
		bigint_to_string(_3276234831688387533357, 10, buffer);
		printf("trying ");
		puts("sub(-177, 1963710)");
		puts(buffer);
		assert(strcmp(buffer, "-1963887") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2824023967017779643732);
		bigint_free(_3689545369183698229011);
		bigint_free(_3276234831688387533357);

	

		bigint_t* _3637883863970002966466;
		bigint_t* _1616797153263275111702 = bigint(-206);
		bigint_t* _2272638330365614299529 = bigint(-15850317);
		bigint_t* _3205855816222779686383 = bigint_mul(_1616797153263275111702, _2272638330365614299529 );
		bigint_to_string(_3205855816222779686383, 10, buffer);
		printf("trying ");
		puts("mul(-206, -15850317)");
		puts(buffer);
		assert(strcmp(buffer, "3265165302") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1616797153263275111702);
		bigint_free(_2272638330365614299529);
		bigint_free(_3205855816222779686383);

	

		bigint_t* _178579492334966206987;
		bigint_t* _1900812951739581528574 = bigint(-206);
		bigint_t* _2673658749655967486741 = bigint(-15850317);
		bigint_t* _1915878962953029407626 = bigint_add(_1900812951739581528574, _2673658749655967486741 );
		bigint_to_string(_1915878962953029407626, 10, buffer);
		printf("trying ");
		puts("add(-206, -15850317)");
		puts(buffer);
		assert(strcmp(buffer, "-15850523") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1900812951739581528574);
		bigint_free(_2673658749655967486741);
		bigint_free(_1915878962953029407626);

	

		bigint_t* _4086966438860502588415;
		bigint_t* _4250643418193925099377 = bigint(-206);
		bigint_t* _1827143853540641575486 = bigint(-15850317);
		bigint_t* _112525760443585053572 = bigint_sub(_4250643418193925099377, _1827143853540641575486 );
		bigint_to_string(_112525760443585053572, 10, buffer);
		printf("trying ");
		puts("sub(-206, -15850317)");
		puts(buffer);
		assert(strcmp(buffer, "15850111") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4250643418193925099377);
		bigint_free(_1827143853540641575486);
		bigint_free(_112525760443585053572);

	

		bigint_t* _1980310484799025379396;
		bigint_t* _3027649155574033489176 = bigint(162);
		bigint_t* _3632688856145570289933 = bigint(11969770);
		bigint_t* _521657276564117347902 = bigint_mul(_3027649155574033489176, _3632688856145570289933 );
		bigint_to_string(_521657276564117347902, 10, buffer);
		printf("trying ");
		puts("mul(162, 11969770)");
		puts(buffer);
		assert(strcmp(buffer, "1939102740") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3027649155574033489176);
		bigint_free(_3632688856145570289933);
		bigint_free(_521657276564117347902);

	

		bigint_t* _2147468149594706662352;
		bigint_t* _2205244844747852552830 = bigint(162);
		bigint_t* _3746687766520117781261 = bigint(11969770);
		bigint_t* _4176900820690672445986 = bigint_add(_2205244844747852552830, _3746687766520117781261 );
		bigint_to_string(_4176900820690672445986, 10, buffer);
		printf("trying ");
		puts("add(162, 11969770)");
		puts(buffer);
		assert(strcmp(buffer, "11969932") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2205244844747852552830);
		bigint_free(_3746687766520117781261);
		bigint_free(_4176900820690672445986);

	

		bigint_t* _728382202042700238499;
		bigint_t* _254852917281549212890 = bigint(162);
		bigint_t* _286332169327328985275 = bigint(11969770);
		bigint_t* _4006554328336415647994 = bigint_sub(_254852917281549212890, _286332169327328985275 );
		bigint_to_string(_4006554328336415647994, 10, buffer);
		printf("trying ");
		puts("sub(162, 11969770)");
		puts(buffer);
		assert(strcmp(buffer, "-11969608") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_254852917281549212890);
		bigint_free(_286332169327328985275);
		bigint_free(_4006554328336415647994);

	

		bigint_t* _3612223938601033221252;
		bigint_t* _443378567453109557063 = bigint(-80);
		bigint_t* _2879002779896682757573 = bigint(-12925930);
		bigint_t* _2663366580944003480999 = bigint_mul(_443378567453109557063, _2879002779896682757573 );
		bigint_to_string(_2663366580944003480999, 10, buffer);
		printf("trying ");
		puts("mul(-80, -12925930)");
		puts(buffer);
		assert(strcmp(buffer, "1034074400") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_443378567453109557063);
		bigint_free(_2879002779896682757573);
		bigint_free(_2663366580944003480999);

	

		bigint_t* _1831749966725148489143;
		bigint_t* _3365891556706279285090 = bigint(-80);
		bigint_t* _2275622152898222945685 = bigint(-12925930);
		bigint_t* _2098785958574173277284 = bigint_add(_3365891556706279285090, _2275622152898222945685 );
		bigint_to_string(_2098785958574173277284, 10, buffer);
		printf("trying ");
		puts("add(-80, -12925930)");
		puts(buffer);
		assert(strcmp(buffer, "-12926010") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3365891556706279285090);
		bigint_free(_2275622152898222945685);
		bigint_free(_2098785958574173277284);

	

		bigint_t* _1021092734636635019471;
		bigint_t* _2996556193189537782738 = bigint(-80);
		bigint_t* _3064978895843623774531 = bigint(-12925930);
		bigint_t* _438136511984140937848 = bigint_sub(_2996556193189537782738, _3064978895843623774531 );
		bigint_to_string(_438136511984140937848, 10, buffer);
		printf("trying ");
		puts("sub(-80, -12925930)");
		puts(buffer);
		assert(strcmp(buffer, "12925850") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2996556193189537782738);
		bigint_free(_3064978895843623774531);
		bigint_free(_438136511984140937848);

	

		bigint_t* _92210779235217959861;
		bigint_t* _592538181749750674301 = bigint(36);
		bigint_t* _2169797518231082802069 = bigint(-4003300);
		bigint_t* _667497526167557985897 = bigint_mul(_592538181749750674301, _2169797518231082802069 );
		bigint_to_string(_667497526167557985897, 10, buffer);
		printf("trying ");
		puts("mul(36, -4003300)");
		puts(buffer);
		assert(strcmp(buffer, "-144118800") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_592538181749750674301);
		bigint_free(_2169797518231082802069);
		bigint_free(_667497526167557985897);

	

		bigint_t* _4624054321131319467122;
		bigint_t* _2745228047505929136351 = bigint(36);
		bigint_t* _3096098981875723254455 = bigint(-4003300);
		bigint_t* _382309137069417219428 = bigint_add(_2745228047505929136351, _3096098981875723254455 );
		bigint_to_string(_382309137069417219428, 10, buffer);
		printf("trying ");
		puts("add(36, -4003300)");
		puts(buffer);
		assert(strcmp(buffer, "-4003264") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2745228047505929136351);
		bigint_free(_3096098981875723254455);
		bigint_free(_382309137069417219428);

	

		bigint_t* _4028970559857230885294;
		bigint_t* _1003799862335192088226 = bigint(36);
		bigint_t* _4194844845799194227502 = bigint(-4003300);
		bigint_t* _3671161154227200910562 = bigint_sub(_1003799862335192088226, _4194844845799194227502 );
		bigint_to_string(_3671161154227200910562, 10, buffer);
		printf("trying ");
		puts("sub(36, -4003300)");
		puts(buffer);
		assert(strcmp(buffer, "4003336") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1003799862335192088226);
		bigint_free(_4194844845799194227502);
		bigint_free(_3671161154227200910562);

	

		bigint_t* _2130867166825662273446;
		bigint_t* _2079670534777809941788 = bigint(57);
		bigint_t* _1439197314188091224492 = bigint(-2944322);
		bigint_t* _3173326568759398470699 = bigint_mul(_2079670534777809941788, _1439197314188091224492 );
		bigint_to_string(_3173326568759398470699, 10, buffer);
		printf("trying ");
		puts("mul(57, -2944322)");
		puts(buffer);
		assert(strcmp(buffer, "-167826354") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2079670534777809941788);
		bigint_free(_1439197314188091224492);
		bigint_free(_3173326568759398470699);

	

		bigint_t* _1685311105025995946717;
		bigint_t* _3575059711856522116667 = bigint(57);
		bigint_t* _1826207260825765888371 = bigint(-2944322);
		bigint_t* _3866209612415965669028 = bigint_add(_3575059711856522116667, _1826207260825765888371 );
		bigint_to_string(_3866209612415965669028, 10, buffer);
		printf("trying ");
		puts("add(57, -2944322)");
		puts(buffer);
		assert(strcmp(buffer, "-2944265") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3575059711856522116667);
		bigint_free(_1826207260825765888371);
		bigint_free(_3866209612415965669028);

	

		bigint_t* _3438561090792596578190;
		bigint_t* _4045326794764684235827 = bigint(57);
		bigint_t* _2482835479338858060778 = bigint(-2944322);
		bigint_t* _835472455644102363165 = bigint_sub(_4045326794764684235827, _2482835479338858060778 );
		bigint_to_string(_835472455644102363165, 10, buffer);
		printf("trying ");
		puts("sub(57, -2944322)");
		puts(buffer);
		assert(strcmp(buffer, "2944379") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4045326794764684235827);
		bigint_free(_2482835479338858060778);
		bigint_free(_835472455644102363165);

	

		bigint_t* _2487237064537156421747;
		bigint_t* _2135391207021217619334 = bigint(21);
		bigint_t* _3342949183261978385090 = bigint(-4059080);
		bigint_t* _2881172501841130646151 = bigint_mul(_2135391207021217619334, _3342949183261978385090 );
		bigint_to_string(_2881172501841130646151, 10, buffer);
		printf("trying ");
		puts("mul(21, -4059080)");
		puts(buffer);
		assert(strcmp(buffer, "-85240680") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2135391207021217619334);
		bigint_free(_3342949183261978385090);
		bigint_free(_2881172501841130646151);

	

		bigint_t* _2546399534255120908297;
		bigint_t* _3318826544971296933002 = bigint(21);
		bigint_t* _2081657837281817215109 = bigint(-4059080);
		bigint_t* _1878789201119866878037 = bigint_add(_3318826544971296933002, _2081657837281817215109 );
		bigint_to_string(_1878789201119866878037, 10, buffer);
		printf("trying ");
		puts("add(21, -4059080)");
		puts(buffer);
		assert(strcmp(buffer, "-4059059") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3318826544971296933002);
		bigint_free(_2081657837281817215109);
		bigint_free(_1878789201119866878037);

	

		bigint_t* _4666429288817320621231;
		bigint_t* _1279172935823322826027 = bigint(21);
		bigint_t* _3135979290894156451312 = bigint(-4059080);
		bigint_t* _4677722164717484584119 = bigint_sub(_1279172935823322826027, _3135979290894156451312 );
		bigint_to_string(_4677722164717484584119, 10, buffer);
		printf("trying ");
		puts("sub(21, -4059080)");
		puts(buffer);
		assert(strcmp(buffer, "4059101") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1279172935823322826027);
		bigint_free(_3135979290894156451312);
		bigint_free(_4677722164717484584119);

	

		bigint_t* _2833189584866517947880;
		bigint_t* _4313583142043492795548 = bigint(18);
		bigint_t* _3092157594918894809650 = bigint(-9852667);
		bigint_t* _380609989965802958795 = bigint_mul(_4313583142043492795548, _3092157594918894809650 );
		bigint_to_string(_380609989965802958795, 10, buffer);
		printf("trying ");
		puts("mul(18, -9852667)");
		puts(buffer);
		assert(strcmp(buffer, "-177348006") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4313583142043492795548);
		bigint_free(_3092157594918894809650);
		bigint_free(_380609989965802958795);

	

		bigint_t* _2016846213483801530040;
		bigint_t* _3838507760652160485978 = bigint(18);
		bigint_t* _1590694117721749507122 = bigint(-9852667);
		bigint_t* _1730504666663972014163 = bigint_add(_3838507760652160485978, _1590694117721749507122 );
		bigint_to_string(_1730504666663972014163, 10, buffer);
		printf("trying ");
		puts("add(18, -9852667)");
		puts(buffer);
		assert(strcmp(buffer, "-9852649") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3838507760652160485978);
		bigint_free(_1590694117721749507122);
		bigint_free(_1730504666663972014163);

	

		bigint_t* _476450364903140116450;
		bigint_t* _3698375111370656030306 = bigint(18);
		bigint_t* _3183528653672773828611 = bigint(-9852667);
		bigint_t* _3155665977083410645445 = bigint_sub(_3698375111370656030306, _3183528653672773828611 );
		bigint_to_string(_3155665977083410645445, 10, buffer);
		printf("trying ");
		puts("sub(18, -9852667)");
		puts(buffer);
		assert(strcmp(buffer, "9852685") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3698375111370656030306);
		bigint_free(_3183528653672773828611);
		bigint_free(_3155665977083410645445);

	

		bigint_t* _3008342304953694151705;
		bigint_t* _2131061918166884168607 = bigint(-6);
		bigint_t* _457413622781170699334 = bigint(7257530);
		bigint_t* _1941143516710867477659 = bigint_mul(_2131061918166884168607, _457413622781170699334 );
		bigint_to_string(_1941143516710867477659, 10, buffer);
		printf("trying ");
		puts("mul(-6, 7257530)");
		puts(buffer);
		assert(strcmp(buffer, "-43545180") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2131061918166884168607);
		bigint_free(_457413622781170699334);
		bigint_free(_1941143516710867477659);

	

		bigint_t* _1354190473181780352876;
		bigint_t* _3732270836168950425915 = bigint(-6);
		bigint_t* _2067282622269581531436 = bigint(7257530);
		bigint_t* _558068293973616921582 = bigint_add(_3732270836168950425915, _2067282622269581531436 );
		bigint_to_string(_558068293973616921582, 10, buffer);
		printf("trying ");
		puts("add(-6, 7257530)");
		puts(buffer);
		assert(strcmp(buffer, "7257524") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3732270836168950425915);
		bigint_free(_2067282622269581531436);
		bigint_free(_558068293973616921582);

	

		bigint_t* _4192955516542626159584;
		bigint_t* _1045014432580589227498 = bigint(-6);
		bigint_t* _387540813229063532250 = bigint(7257530);
		bigint_t* _457982989331005683014 = bigint_sub(_1045014432580589227498, _387540813229063532250 );
		bigint_to_string(_457982989331005683014, 10, buffer);
		printf("trying ");
		puts("sub(-6, 7257530)");
		puts(buffer);
		assert(strcmp(buffer, "-7257536") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1045014432580589227498);
		bigint_free(_387540813229063532250);
		bigint_free(_457982989331005683014);

	

		bigint_t* _240131680962659601528;
		bigint_t* _60855356646831142971 = bigint(-70);
		bigint_t* _4028948012620053907482 = bigint(2302362);
		bigint_t* _2032895769845543556120 = bigint_mul(_60855356646831142971, _4028948012620053907482 );
		bigint_to_string(_2032895769845543556120, 10, buffer);
		printf("trying ");
		puts("mul(-70, 2302362)");
		puts(buffer);
		assert(strcmp(buffer, "-161165340") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_60855356646831142971);
		bigint_free(_4028948012620053907482);
		bigint_free(_2032895769845543556120);

	

		bigint_t* _1156802831169926198917;
		bigint_t* _657950218386272555756 = bigint(-70);
		bigint_t* _4579405085707881240656 = bigint(2302362);
		bigint_t* _4272241609899091523340 = bigint_add(_657950218386272555756, _4579405085707881240656 );
		bigint_to_string(_4272241609899091523340, 10, buffer);
		printf("trying ");
		puts("add(-70, 2302362)");
		puts(buffer);
		assert(strcmp(buffer, "2302292") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_657950218386272555756);
		bigint_free(_4579405085707881240656);
		bigint_free(_4272241609899091523340);

	

		bigint_t* _4080266580859606563357;
		bigint_t* _3404905589697387391738 = bigint(-70);
		bigint_t* _776886689552071937758 = bigint(2302362);
		bigint_t* _177529162950430841502 = bigint_sub(_3404905589697387391738, _776886689552071937758 );
		bigint_to_string(_177529162950430841502, 10, buffer);
		printf("trying ");
		puts("sub(-70, 2302362)");
		puts(buffer);
		assert(strcmp(buffer, "-2302432") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3404905589697387391738);
		bigint_free(_776886689552071937758);
		bigint_free(_177529162950430841502);

	

		bigint_t* _585871377454629340529;
		bigint_t* _718549232045010420805 = bigint(180);
		bigint_t* _4120226168172222813605 = bigint(7777374);
		bigint_t* _2852891702209084559139 = bigint_mul(_718549232045010420805, _4120226168172222813605 );
		bigint_to_string(_2852891702209084559139, 10, buffer);
		printf("trying ");
		puts("mul(180, 7777374)");
		puts(buffer);
		assert(strcmp(buffer, "1399927320") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_718549232045010420805);
		bigint_free(_4120226168172222813605);
		bigint_free(_2852891702209084559139);

	

		bigint_t* _3647920374077410883144;
		bigint_t* _1225000261002117933551 = bigint(180);
		bigint_t* _1551672636044822257595 = bigint(7777374);
		bigint_t* _198211434350875479545 = bigint_add(_1225000261002117933551, _1551672636044822257595 );
		bigint_to_string(_198211434350875479545, 10, buffer);
		printf("trying ");
		puts("add(180, 7777374)");
		puts(buffer);
		assert(strcmp(buffer, "7777554") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1225000261002117933551);
		bigint_free(_1551672636044822257595);
		bigint_free(_198211434350875479545);

	

		bigint_t* _2548371011910707974728;
		bigint_t* _427230171070674631776 = bigint(180);
		bigint_t* _1669225752190154620326 = bigint(7777374);
		bigint_t* _4256099280691125219064 = bigint_sub(_427230171070674631776, _1669225752190154620326 );
		bigint_to_string(_4256099280691125219064, 10, buffer);
		printf("trying ");
		puts("sub(180, 7777374)");
		puts(buffer);
		assert(strcmp(buffer, "-7777194") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_427230171070674631776);
		bigint_free(_1669225752190154620326);
		bigint_free(_4256099280691125219064);

	

		bigint_t* _1591403015349049017421;
		bigint_t* _3550572474683541636665 = bigint(178);
		bigint_t* _2448120935340853068904 = bigint(-737484);
		bigint_t* _46349479206318806894 = bigint_mul(_3550572474683541636665, _2448120935340853068904 );
		bigint_to_string(_46349479206318806894, 10, buffer);
		printf("trying ");
		puts("mul(178, -737484)");
		puts(buffer);
		assert(strcmp(buffer, "-131272152") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3550572474683541636665);
		bigint_free(_2448120935340853068904);
		bigint_free(_46349479206318806894);

	

		bigint_t* _1862706113694567975388;
		bigint_t* _3390397670165306765062 = bigint(178);
		bigint_t* _3829440840016383168702 = bigint(-737484);
		bigint_t* _2479007202389826785134 = bigint_add(_3390397670165306765062, _3829440840016383168702 );
		bigint_to_string(_2479007202389826785134, 10, buffer);
		printf("trying ");
		puts("add(178, -737484)");
		puts(buffer);
		assert(strcmp(buffer, "-737306") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3390397670165306765062);
		bigint_free(_3829440840016383168702);
		bigint_free(_2479007202389826785134);

	

		bigint_t* _2386805376135465055057;
		bigint_t* _4266681545165975913424 = bigint(178);
		bigint_t* _3282465943091368094188 = bigint(-737484);
		bigint_t* _3904941746880431868314 = bigint_sub(_4266681545165975913424, _3282465943091368094188 );
		bigint_to_string(_3904941746880431868314, 10, buffer);
		printf("trying ");
		puts("sub(178, -737484)");
		puts(buffer);
		assert(strcmp(buffer, "737662") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4266681545165975913424);
		bigint_free(_3282465943091368094188);
		bigint_free(_3904941746880431868314);

	

		bigint_t* _4327163990678331726070;
		bigint_t* _2312081290035925646778 = bigint(-155);
		bigint_t* _3958778652283713090695 = bigint(1882164);
		bigint_t* _316334824627567849073 = bigint_mul(_2312081290035925646778, _3958778652283713090695 );
		bigint_to_string(_316334824627567849073, 10, buffer);
		printf("trying ");
		puts("mul(-155, 1882164)");
		puts(buffer);
		assert(strcmp(buffer, "-291735420") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2312081290035925646778);
		bigint_free(_3958778652283713090695);
		bigint_free(_316334824627567849073);

	

		bigint_t* _1942080112722553311880;
		bigint_t* _1781582845002869279037 = bigint(-155);
		bigint_t* _3629528102050435239856 = bigint(1882164);
		bigint_t* _2119824510826351027492 = bigint_add(_1781582845002869279037, _3629528102050435239856 );
		bigint_to_string(_2119824510826351027492, 10, buffer);
		printf("trying ");
		puts("add(-155, 1882164)");
		puts(buffer);
		assert(strcmp(buffer, "1882009") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1781582845002869279037);
		bigint_free(_3629528102050435239856);
		bigint_free(_2119824510826351027492);

	

		bigint_t* _850232606461727644948;
		bigint_t* _1686318286698888413501 = bigint(-155);
		bigint_t* _1560815590654540503764 = bigint(1882164);
		bigint_t* _1047871078652342287005 = bigint_sub(_1686318286698888413501, _1560815590654540503764 );
		bigint_to_string(_1047871078652342287005, 10, buffer);
		printf("trying ");
		puts("sub(-155, 1882164)");
		puts(buffer);
		assert(strcmp(buffer, "-1882319") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1686318286698888413501);
		bigint_free(_1560815590654540503764);
		bigint_free(_1047871078652342287005);

	

		bigint_t* _644346729965086694475;
		bigint_t* _1180719854447429574543 = bigint(87);
		bigint_t* _1108088844327715094388 = bigint(12524162);
		bigint_t* _4689937297320846100714 = bigint_mul(_1180719854447429574543, _1108088844327715094388 );
		bigint_to_string(_4689937297320846100714, 10, buffer);
		printf("trying ");
		puts("mul(87, 12524162)");
		puts(buffer);
		assert(strcmp(buffer, "1089602094") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1180719854447429574543);
		bigint_free(_1108088844327715094388);
		bigint_free(_4689937297320846100714);

	

		bigint_t* _2999122541067061083950;
		bigint_t* _3302881725542911489374 = bigint(87);
		bigint_t* _4461949592362157289551 = bigint(12524162);
		bigint_t* _3346179614838335834384 = bigint_add(_3302881725542911489374, _4461949592362157289551 );
		bigint_to_string(_3346179614838335834384, 10, buffer);
		printf("trying ");
		puts("add(87, 12524162)");
		puts(buffer);
		assert(strcmp(buffer, "12524249") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3302881725542911489374);
		bigint_free(_4461949592362157289551);
		bigint_free(_3346179614838335834384);

	

		bigint_t* _3009903703196949603570;
		bigint_t* _1795101536522254254310 = bigint(87);
		bigint_t* _293327673613308792867 = bigint(12524162);
		bigint_t* _67034039680507766976 = bigint_sub(_1795101536522254254310, _293327673613308792867 );
		bigint_to_string(_67034039680507766976, 10, buffer);
		printf("trying ");
		puts("sub(87, 12524162)");
		puts(buffer);
		assert(strcmp(buffer, "-12524075") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1795101536522254254310);
		bigint_free(_293327673613308792867);
		bigint_free(_67034039680507766976);

	

		bigint_t* _1342386455870397187285;
		bigint_t* _3220593015143075786182 = bigint(249);
		bigint_t* _3875602122634114626587 = bigint(-3929052);
		bigint_t* _2505839949355447741288 = bigint_mul(_3220593015143075786182, _3875602122634114626587 );
		bigint_to_string(_2505839949355447741288, 10, buffer);
		printf("trying ");
		puts("mul(249, -3929052)");
		puts(buffer);
		assert(strcmp(buffer, "-978333948") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3220593015143075786182);
		bigint_free(_3875602122634114626587);
		bigint_free(_2505839949355447741288);

	

		bigint_t* _2902839334903370407123;
		bigint_t* _3449217661001265221792 = bigint(249);
		bigint_t* _2995658074374739075190 = bigint(-3929052);
		bigint_t* _3168368654077947207247 = bigint_add(_3449217661001265221792, _2995658074374739075190 );
		bigint_to_string(_3168368654077947207247, 10, buffer);
		printf("trying ");
		puts("add(249, -3929052)");
		puts(buffer);
		assert(strcmp(buffer, "-3928803") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3449217661001265221792);
		bigint_free(_2995658074374739075190);
		bigint_free(_3168368654077947207247);

	

		bigint_t* _3185326765626531182827;
		bigint_t* _891638923145076953631 = bigint(249);
		bigint_t* _1199886038360944831605 = bigint(-3929052);
		bigint_t* _2024664940683809097503 = bigint_sub(_891638923145076953631, _1199886038360944831605 );
		bigint_to_string(_2024664940683809097503, 10, buffer);
		printf("trying ");
		puts("sub(249, -3929052)");
		puts(buffer);
		assert(strcmp(buffer, "3929301") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_891638923145076953631);
		bigint_free(_1199886038360944831605);
		bigint_free(_2024664940683809097503);

	

		bigint_t* _1440626881047727781645;
		bigint_t* _3716542458771084516361 = bigint(176);
		bigint_t* _4255725096442545105372 = bigint(-15364640);
		bigint_t* _2871971976923471430806 = bigint_mul(_3716542458771084516361, _4255725096442545105372 );
		bigint_to_string(_2871971976923471430806, 10, buffer);
		printf("trying ");
		puts("mul(176, -15364640)");
		puts(buffer);
		assert(strcmp(buffer, "-2704176640") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3716542458771084516361);
		bigint_free(_4255725096442545105372);
		bigint_free(_2871971976923471430806);

	

		bigint_t* _1661395032193818271222;
		bigint_t* _265222837117639670425 = bigint(176);
		bigint_t* _2869298419702507671234 = bigint(-15364640);
		bigint_t* _3184698452877174764951 = bigint_add(_265222837117639670425, _2869298419702507671234 );
		bigint_to_string(_3184698452877174764951, 10, buffer);
		printf("trying ");
		puts("add(176, -15364640)");
		puts(buffer);
		assert(strcmp(buffer, "-15364464") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_265222837117639670425);
		bigint_free(_2869298419702507671234);
		bigint_free(_3184698452877174764951);

	

		bigint_t* _2818869643252230360517;
		bigint_t* _7872412487988442269 = bigint(176);
		bigint_t* _2162228980650002237974 = bigint(-15364640);
		bigint_t* _1728794333064340863885 = bigint_sub(_7872412487988442269, _2162228980650002237974 );
		bigint_to_string(_1728794333064340863885, 10, buffer);
		printf("trying ");
		puts("sub(176, -15364640)");
		puts(buffer);
		assert(strcmp(buffer, "15364816") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_7872412487988442269);
		bigint_free(_2162228980650002237974);
		bigint_free(_1728794333064340863885);

	

		bigint_t* _340609128964144763507;
		bigint_t* _1470858991723062024802 = bigint(-85);
		bigint_t* _2172687249775596047191 = bigint(13236144);
		bigint_t* _3541079067449158992085 = bigint_mul(_1470858991723062024802, _2172687249775596047191 );
		bigint_to_string(_3541079067449158992085, 10, buffer);
		printf("trying ");
		puts("mul(-85, 13236144)");
		puts(buffer);
		assert(strcmp(buffer, "-1125072240") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1470858991723062024802);
		bigint_free(_2172687249775596047191);
		bigint_free(_3541079067449158992085);

	

		bigint_t* _1687799451068562272495;
		bigint_t* _4382432137117825447769 = bigint(-85);
		bigint_t* _3310056952267000085006 = bigint(13236144);
		bigint_t* _3543345029106905514168 = bigint_add(_4382432137117825447769, _3310056952267000085006 );
		bigint_to_string(_3543345029106905514168, 10, buffer);
		printf("trying ");
		puts("add(-85, 13236144)");
		puts(buffer);
		assert(strcmp(buffer, "13236059") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4382432137117825447769);
		bigint_free(_3310056952267000085006);
		bigint_free(_3543345029106905514168);

	

		bigint_t* _3806837677390428887341;
		bigint_t* _2513035480681954389401 = bigint(-85);
		bigint_t* _2845908089059520508701 = bigint(13236144);
		bigint_t* _704237540989445922744 = bigint_sub(_2513035480681954389401, _2845908089059520508701 );
		bigint_to_string(_704237540989445922744, 10, buffer);
		printf("trying ");
		puts("sub(-85, 13236144)");
		puts(buffer);
		assert(strcmp(buffer, "-13236229") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2513035480681954389401);
		bigint_free(_2845908089059520508701);
		bigint_free(_704237540989445922744);

	

		bigint_t* _225052528233996496077;
		bigint_t* _1588719819348181891902 = bigint(59);
		bigint_t* _3279131460266572231303 = bigint(-3412201);
		bigint_t* _4004596709341970634222 = bigint_mul(_1588719819348181891902, _3279131460266572231303 );
		bigint_to_string(_4004596709341970634222, 10, buffer);
		printf("trying ");
		puts("mul(59, -3412201)");
		puts(buffer);
		assert(strcmp(buffer, "-201319859") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1588719819348181891902);
		bigint_free(_3279131460266572231303);
		bigint_free(_4004596709341970634222);

	

		bigint_t* _241394530961676491293;
		bigint_t* _3938708907733297485122 = bigint(59);
		bigint_t* _2689171033545476219529 = bigint(-3412201);
		bigint_t* _1981212640648589793019 = bigint_add(_3938708907733297485122, _2689171033545476219529 );
		bigint_to_string(_1981212640648589793019, 10, buffer);
		printf("trying ");
		puts("add(59, -3412201)");
		puts(buffer);
		assert(strcmp(buffer, "-3412142") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3938708907733297485122);
		bigint_free(_2689171033545476219529);
		bigint_free(_1981212640648589793019);

	

		bigint_t* _568203819752516204404;
		bigint_t* _1282374805209065615317 = bigint(59);
		bigint_t* _2307170432500950138299 = bigint(-3412201);
		bigint_t* _3351828070242344562054 = bigint_sub(_1282374805209065615317, _2307170432500950138299 );
		bigint_to_string(_3351828070242344562054, 10, buffer);
		printf("trying ");
		puts("sub(59, -3412201)");
		puts(buffer);
		assert(strcmp(buffer, "3412260") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1282374805209065615317);
		bigint_free(_2307170432500950138299);
		bigint_free(_3351828070242344562054);

	

		bigint_t* _1728038244669679092906;
		bigint_t* _3785051379673867944148 = bigint(118);
		bigint_t* _542050131072263139385 = bigint(-15647641);
		bigint_t* _29108833883138672256 = bigint_mul(_3785051379673867944148, _542050131072263139385 );
		bigint_to_string(_29108833883138672256, 10, buffer);
		printf("trying ");
		puts("mul(118, -15647641)");
		puts(buffer);
		assert(strcmp(buffer, "-1846421638") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3785051379673867944148);
		bigint_free(_542050131072263139385);
		bigint_free(_29108833883138672256);

	

		bigint_t* _1440928642140261672401;
		bigint_t* _1253221613094860940483 = bigint(118);
		bigint_t* _3872342028936472879822 = bigint(-15647641);
		bigint_t* _1599606307029940097907 = bigint_add(_1253221613094860940483, _3872342028936472879822 );
		bigint_to_string(_1599606307029940097907, 10, buffer);
		printf("trying ");
		puts("add(118, -15647641)");
		puts(buffer);
		assert(strcmp(buffer, "-15647523") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1253221613094860940483);
		bigint_free(_3872342028936472879822);
		bigint_free(_1599606307029940097907);

	

		bigint_t* _1570343481097308123330;
		bigint_t* _1387481253246012084904 = bigint(118);
		bigint_t* _3249965264703990414573 = bigint(-15647641);
		bigint_t* _2241737022529801550709 = bigint_sub(_1387481253246012084904, _3249965264703990414573 );
		bigint_to_string(_2241737022529801550709, 10, buffer);
		printf("trying ");
		puts("sub(118, -15647641)");
		puts(buffer);
		assert(strcmp(buffer, "15647759") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1387481253246012084904);
		bigint_free(_3249965264703990414573);
		bigint_free(_2241737022529801550709);

	

		bigint_t* _1642675936993576486033;
		bigint_t* _2885853801383230094162 = bigint(-154);
		bigint_t* _954104780834205459026 = bigint(-16512003);
		bigint_t* _3543578647693229501962 = bigint_mul(_2885853801383230094162, _954104780834205459026 );
		bigint_to_string(_3543578647693229501962, 10, buffer);
		printf("trying ");
		puts("mul(-154, -16512003)");
		puts(buffer);
		assert(strcmp(buffer, "2542848462") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2885853801383230094162);
		bigint_free(_954104780834205459026);
		bigint_free(_3543578647693229501962);

	

		bigint_t* _1887726919544469619150;
		bigint_t* _1611057746817310329770 = bigint(-154);
		bigint_t* _1175266151235835118611 = bigint(-16512003);
		bigint_t* _532437719685535171162 = bigint_add(_1611057746817310329770, _1175266151235835118611 );
		bigint_to_string(_532437719685535171162, 10, buffer);
		printf("trying ");
		puts("add(-154, -16512003)");
		puts(buffer);
		assert(strcmp(buffer, "-16512157") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1611057746817310329770);
		bigint_free(_1175266151235835118611);
		bigint_free(_532437719685535171162);

	

		bigint_t* _3805145341232724433794;
		bigint_t* _612766712800734892632 = bigint(-154);
		bigint_t* _4402150746114958132251 = bigint(-16512003);
		bigint_t* _4011183558166824613808 = bigint_sub(_612766712800734892632, _4402150746114958132251 );
		bigint_to_string(_4011183558166824613808, 10, buffer);
		printf("trying ");
		puts("sub(-154, -16512003)");
		puts(buffer);
		assert(strcmp(buffer, "16511849") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_612766712800734892632);
		bigint_free(_4402150746114958132251);
		bigint_free(_4011183558166824613808);

	

		bigint_t* _2302991519720252820280;
		bigint_t* _1069919453694278860362 = bigint(157);
		bigint_t* _1937904238183697069079 = bigint(-8923421);
		bigint_t* _2983037110909532349843 = bigint_mul(_1069919453694278860362, _1937904238183697069079 );
		bigint_to_string(_2983037110909532349843, 10, buffer);
		printf("trying ");
		puts("mul(157, -8923421)");
		puts(buffer);
		assert(strcmp(buffer, "-1400977097") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1069919453694278860362);
		bigint_free(_1937904238183697069079);
		bigint_free(_2983037110909532349843);

	

		bigint_t* _2617065317484378690232;
		bigint_t* _4183391070579434982469 = bigint(157);
		bigint_t* _4243799308684095250872 = bigint(-8923421);
		bigint_t* _1096061741175112688252 = bigint_add(_4183391070579434982469, _4243799308684095250872 );
		bigint_to_string(_1096061741175112688252, 10, buffer);
		printf("trying ");
		puts("add(157, -8923421)");
		puts(buffer);
		assert(strcmp(buffer, "-8923264") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4183391070579434982469);
		bigint_free(_4243799308684095250872);
		bigint_free(_1096061741175112688252);

	

		bigint_t* _4594930310780252760102;
		bigint_t* _791434166597839453269 = bigint(157);
		bigint_t* _194309558363805808958 = bigint(-8923421);
		bigint_t* _4340363020086844970988 = bigint_sub(_791434166597839453269, _194309558363805808958 );
		bigint_to_string(_4340363020086844970988, 10, buffer);
		printf("trying ");
		puts("sub(157, -8923421)");
		puts(buffer);
		assert(strcmp(buffer, "8923578") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_791434166597839453269);
		bigint_free(_194309558363805808958);
		bigint_free(_4340363020086844970988);

	

		bigint_t* _79783159356320963659;
		bigint_t* _415892977538284704185 = bigint(155);
		bigint_t* _3080742242715206530015 = bigint(-12149015);
		bigint_t* _4204639658632430431206 = bigint_mul(_415892977538284704185, _3080742242715206530015 );
		bigint_to_string(_4204639658632430431206, 10, buffer);
		printf("trying ");
		puts("mul(155, -12149015)");
		puts(buffer);
		assert(strcmp(buffer, "-1883097325") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_415892977538284704185);
		bigint_free(_3080742242715206530015);
		bigint_free(_4204639658632430431206);

	

		bigint_t* _1235020398044515054949;
		bigint_t* _4042278305668350660197 = bigint(155);
		bigint_t* _4603994965794990547886 = bigint(-12149015);
		bigint_t* _585548846138814910964 = bigint_add(_4042278305668350660197, _4603994965794990547886 );
		bigint_to_string(_585548846138814910964, 10, buffer);
		printf("trying ");
		puts("add(155, -12149015)");
		puts(buffer);
		assert(strcmp(buffer, "-12148860") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4042278305668350660197);
		bigint_free(_4603994965794990547886);
		bigint_free(_585548846138814910964);

	

		bigint_t* _1624631725470808402086;
		bigint_t* _2797051109407143466742 = bigint(155);
		bigint_t* _3693970423691650498697 = bigint(-12149015);
		bigint_t* _592933292042000490711 = bigint_sub(_2797051109407143466742, _3693970423691650498697 );
		bigint_to_string(_592933292042000490711, 10, buffer);
		printf("trying ");
		puts("sub(155, -12149015)");
		puts(buffer);
		assert(strcmp(buffer, "12149170") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2797051109407143466742);
		bigint_free(_3693970423691650498697);
		bigint_free(_592933292042000490711);

	

		bigint_t* _149023383485463129913;
		bigint_t* _1402436563024741902621 = bigint(160);
		bigint_t* _3971256035373703161296 = bigint(2685582);
		bigint_t* _4701729300972763084664 = bigint_mul(_1402436563024741902621, _3971256035373703161296 );
		bigint_to_string(_4701729300972763084664, 10, buffer);
		printf("trying ");
		puts("mul(160, 2685582)");
		puts(buffer);
		assert(strcmp(buffer, "429693120") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1402436563024741902621);
		bigint_free(_3971256035373703161296);
		bigint_free(_4701729300972763084664);

	

		bigint_t* _969167101543572905495;
		bigint_t* _4283285205090229849304 = bigint(160);
		bigint_t* _4544126869270596508527 = bigint(2685582);
		bigint_t* _1185220375493882523373 = bigint_add(_4283285205090229849304, _4544126869270596508527 );
		bigint_to_string(_1185220375493882523373, 10, buffer);
		printf("trying ");
		puts("add(160, 2685582)");
		puts(buffer);
		assert(strcmp(buffer, "2685742") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4283285205090229849304);
		bigint_free(_4544126869270596508527);
		bigint_free(_1185220375493882523373);

	

		bigint_t* _3476504620576609648676;
		bigint_t* _1089458111887312118920 = bigint(160);
		bigint_t* _250212648894789507687 = bigint(2685582);
		bigint_t* _1548891843889015971721 = bigint_sub(_1089458111887312118920, _250212648894789507687 );
		bigint_to_string(_1548891843889015971721, 10, buffer);
		printf("trying ");
		puts("sub(160, 2685582)");
		puts(buffer);
		assert(strcmp(buffer, "-2685422") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1089458111887312118920);
		bigint_free(_250212648894789507687);
		bigint_free(_1548891843889015971721);

	

		bigint_t* _3256615563017070562484;
		bigint_t* _623268232972724669538 = bigint(-194);
		bigint_t* _4475927817996117197830 = bigint(-6356880);
		bigint_t* _494346309774786842691 = bigint_mul(_623268232972724669538, _4475927817996117197830 );
		bigint_to_string(_494346309774786842691, 10, buffer);
		printf("trying ");
		puts("mul(-194, -6356880)");
		puts(buffer);
		assert(strcmp(buffer, "1233234720") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_623268232972724669538);
		bigint_free(_4475927817996117197830);
		bigint_free(_494346309774786842691);

	

		bigint_t* _2956771147181135652023;
		bigint_t* _1263227950654901843417 = bigint(-194);
		bigint_t* _4331969446070983593907 = bigint(-6356880);
		bigint_t* _4142058015508374134634 = bigint_add(_1263227950654901843417, _4331969446070983593907 );
		bigint_to_string(_4142058015508374134634, 10, buffer);
		printf("trying ");
		puts("add(-194, -6356880)");
		puts(buffer);
		assert(strcmp(buffer, "-6357074") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1263227950654901843417);
		bigint_free(_4331969446070983593907);
		bigint_free(_4142058015508374134634);

	

		bigint_t* _683310645323562821065;
		bigint_t* _4120577692059604012349 = bigint(-194);
		bigint_t* _307234069385876092271 = bigint(-6356880);
		bigint_t* _1104439420842229678713 = bigint_sub(_4120577692059604012349, _307234069385876092271 );
		bigint_to_string(_1104439420842229678713, 10, buffer);
		printf("trying ");
		puts("sub(-194, -6356880)");
		puts(buffer);
		assert(strcmp(buffer, "6356686") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4120577692059604012349);
		bigint_free(_307234069385876092271);
		bigint_free(_1104439420842229678713);

	

		bigint_t* _1682022960800018772882;
		bigint_t* _1527153238436240841333 = bigint(1);
		bigint_t* _4184545701710045147726 = bigint(16421814);
		bigint_t* _167036964774788926925 = bigint_mul(_1527153238436240841333, _4184545701710045147726 );
		bigint_to_string(_167036964774788926925, 10, buffer);
		printf("trying ");
		puts("mul(1, 16421814)");
		puts(buffer);
		assert(strcmp(buffer, "16421814") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1527153238436240841333);
		bigint_free(_4184545701710045147726);
		bigint_free(_167036964774788926925);

	

		bigint_t* _1446605524705074441333;
		bigint_t* _3248675205045706565617 = bigint(1);
		bigint_t* _4349845528714092543482 = bigint(16421814);
		bigint_t* _1906321861698794295371 = bigint_add(_3248675205045706565617, _4349845528714092543482 );
		bigint_to_string(_1906321861698794295371, 10, buffer);
		printf("trying ");
		puts("add(1, 16421814)");
		puts(buffer);
		assert(strcmp(buffer, "16421815") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3248675205045706565617);
		bigint_free(_4349845528714092543482);
		bigint_free(_1906321861698794295371);

	

		bigint_t* _2240819127282063760063;
		bigint_t* _849295862528644230937 = bigint(1);
		bigint_t* _4361258156493551993468 = bigint(16421814);
		bigint_t* _4522695458755103352034 = bigint_sub(_849295862528644230937, _4361258156493551993468 );
		bigint_to_string(_4522695458755103352034, 10, buffer);
		printf("trying ");
		puts("sub(1, 16421814)");
		puts(buffer);
		assert(strcmp(buffer, "-16421813") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_849295862528644230937);
		bigint_free(_4361258156493551993468);
		bigint_free(_4522695458755103352034);

	

		bigint_t* _4563628239015275565846;
		bigint_t* _4106356879654548538257 = bigint(238);
		bigint_t* _3647198783127011375072 = bigint(1659587);
		bigint_t* _2577190365201296271093 = bigint_mul(_4106356879654548538257, _3647198783127011375072 );
		bigint_to_string(_2577190365201296271093, 10, buffer);
		printf("trying ");
		puts("mul(238, 1659587)");
		puts(buffer);
		assert(strcmp(buffer, "394981706") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4106356879654548538257);
		bigint_free(_3647198783127011375072);
		bigint_free(_2577190365201296271093);

	

		bigint_t* _3054292397329041400854;
		bigint_t* _2574182873477136574758 = bigint(238);
		bigint_t* _920757033431411812839 = bigint(1659587);
		bigint_t* _2607532246986415141564 = bigint_add(_2574182873477136574758, _920757033431411812839 );
		bigint_to_string(_2607532246986415141564, 10, buffer);
		printf("trying ");
		puts("add(238, 1659587)");
		puts(buffer);
		assert(strcmp(buffer, "1659825") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2574182873477136574758);
		bigint_free(_920757033431411812839);
		bigint_free(_2607532246986415141564);

	

		bigint_t* _2322886213387297427132;
		bigint_t* _4391124360235780925304 = bigint(238);
		bigint_t* _3596585279297678904969 = bigint(1659587);
		bigint_t* _1857213095204732540479 = bigint_sub(_4391124360235780925304, _3596585279297678904969 );
		bigint_to_string(_1857213095204732540479, 10, buffer);
		printf("trying ");
		puts("sub(238, 1659587)");
		puts(buffer);
		assert(strcmp(buffer, "-1659349") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4391124360235780925304);
		bigint_free(_3596585279297678904969);
		bigint_free(_1857213095204732540479);

	

		bigint_t* _2626262722995892192027;
		bigint_t* _3511054276890237912747 = bigint(182);
		bigint_t* _4093809897296302734509 = bigint(-10480946);
		bigint_t* _2398068475789114337963 = bigint_mul(_3511054276890237912747, _4093809897296302734509 );
		bigint_to_string(_2398068475789114337963, 10, buffer);
		printf("trying ");
		puts("mul(182, -10480946)");
		puts(buffer);
		assert(strcmp(buffer, "-1907532172") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3511054276890237912747);
		bigint_free(_4093809897296302734509);
		bigint_free(_2398068475789114337963);

	

		bigint_t* _2438303824194516761476;
		bigint_t* _3264425950162135905772 = bigint(182);
		bigint_t* _3045346954105943197495 = bigint(-10480946);
		bigint_t* _2737428132165554038760 = bigint_add(_3264425950162135905772, _3045346954105943197495 );
		bigint_to_string(_2737428132165554038760, 10, buffer);
		printf("trying ");
		puts("add(182, -10480946)");
		puts(buffer);
		assert(strcmp(buffer, "-10480764") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3264425950162135905772);
		bigint_free(_3045346954105943197495);
		bigint_free(_2737428132165554038760);

	

		bigint_t* _2145730801946937088583;
		bigint_t* _2821705716061540422632 = bigint(182);
		bigint_t* _4387686476678875104198 = bigint(-10480946);
		bigint_t* _449371932383849163472 = bigint_sub(_2821705716061540422632, _4387686476678875104198 );
		bigint_to_string(_449371932383849163472, 10, buffer);
		printf("trying ");
		puts("sub(182, -10480946)");
		puts(buffer);
		assert(strcmp(buffer, "10481128") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2821705716061540422632);
		bigint_free(_4387686476678875104198);
		bigint_free(_449371932383849163472);

	

		bigint_t* _4082469273248297585474;
		bigint_t* _2681091791745176816745 = bigint(-73);
		bigint_t* _3136976479626842499455 = bigint(12093532);
		bigint_t* _2980087922110561370437 = bigint_mul(_2681091791745176816745, _3136976479626842499455 );
		bigint_to_string(_2980087922110561370437, 10, buffer);
		printf("trying ");
		puts("mul(-73, 12093532)");
		puts(buffer);
		assert(strcmp(buffer, "-882827836") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2681091791745176816745);
		bigint_free(_3136976479626842499455);
		bigint_free(_2980087922110561370437);

	

		bigint_t* _121681158454187238729;
		bigint_t* _2472933568079502836193 = bigint(-73);
		bigint_t* _3944952220647833341090 = bigint(12093532);
		bigint_t* _1759960319318458254013 = bigint_add(_2472933568079502836193, _3944952220647833341090 );
		bigint_to_string(_1759960319318458254013, 10, buffer);
		printf("trying ");
		puts("add(-73, 12093532)");
		puts(buffer);
		assert(strcmp(buffer, "12093459") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2472933568079502836193);
		bigint_free(_3944952220647833341090);
		bigint_free(_1759960319318458254013);

	

		bigint_t* _2039561351729760536703;
		bigint_t* _841454918297385496014 = bigint(-73);
		bigint_t* _4705137583394400858049 = bigint(12093532);
		bigint_t* _2376244554261361544603 = bigint_sub(_841454918297385496014, _4705137583394400858049 );
		bigint_to_string(_2376244554261361544603, 10, buffer);
		printf("trying ");
		puts("sub(-73, 12093532)");
		puts(buffer);
		assert(strcmp(buffer, "-12093605") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_841454918297385496014);
		bigint_free(_4705137583394400858049);
		bigint_free(_2376244554261361544603);

	

		bigint_t* _3025967226424901202233;
		bigint_t* _3279546454889383857862 = bigint(31);
		bigint_t* _640758874881768967885 = bigint(-2817393);
		bigint_t* _1096353739646117181528 = bigint_mul(_3279546454889383857862, _640758874881768967885 );
		bigint_to_string(_1096353739646117181528, 10, buffer);
		printf("trying ");
		puts("mul(31, -2817393)");
		puts(buffer);
		assert(strcmp(buffer, "-87339183") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3279546454889383857862);
		bigint_free(_640758874881768967885);
		bigint_free(_1096353739646117181528);

	

		bigint_t* _1938620951226532868887;
		bigint_t* _2217395755431541114544 = bigint(31);
		bigint_t* _1086990063760261822085 = bigint(-2817393);
		bigint_t* _1974343150625506190003 = bigint_add(_2217395755431541114544, _1086990063760261822085 );
		bigint_to_string(_1974343150625506190003, 10, buffer);
		printf("trying ");
		puts("add(31, -2817393)");
		puts(buffer);
		assert(strcmp(buffer, "-2817362") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2217395755431541114544);
		bigint_free(_1086990063760261822085);
		bigint_free(_1974343150625506190003);

	

		bigint_t* _549395008321261355863;
		bigint_t* _4090238304737633582963 = bigint(31);
		bigint_t* _2476926107248029658979 = bigint(-2817393);
		bigint_t* _1680140222436798836509 = bigint_sub(_4090238304737633582963, _2476926107248029658979 );
		bigint_to_string(_1680140222436798836509, 10, buffer);
		printf("trying ");
		puts("sub(31, -2817393)");
		puts(buffer);
		assert(strcmp(buffer, "2817424") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4090238304737633582963);
		bigint_free(_2476926107248029658979);
		bigint_free(_1680140222436798836509);

	

		bigint_t* _311516335527216324942;
		bigint_t* _1021416911548091414611 = bigint(164);
		bigint_t* _3867950856939633634015 = bigint(-6587156);
		bigint_t* _1408177708119766366506 = bigint_mul(_1021416911548091414611, _3867950856939633634015 );
		bigint_to_string(_1408177708119766366506, 10, buffer);
		printf("trying ");
		puts("mul(164, -6587156)");
		puts(buffer);
		assert(strcmp(buffer, "-1080293584") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1021416911548091414611);
		bigint_free(_3867950856939633634015);
		bigint_free(_1408177708119766366506);

	

		bigint_t* _697859702041395811134;
		bigint_t* _310477068494871226533 = bigint(164);
		bigint_t* _3989088076364205154541 = bigint(-6587156);
		bigint_t* _2756875264001620465378 = bigint_add(_310477068494871226533, _3989088076364205154541 );
		bigint_to_string(_2756875264001620465378, 10, buffer);
		printf("trying ");
		puts("add(164, -6587156)");
		puts(buffer);
		assert(strcmp(buffer, "-6586992") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_310477068494871226533);
		bigint_free(_3989088076364205154541);
		bigint_free(_2756875264001620465378);

	

		bigint_t* _803063243866208373611;
		bigint_t* _2464335655168245581336 = bigint(164);
		bigint_t* _3229007727570393520073 = bigint(-6587156);
		bigint_t* _487925433535952994351 = bigint_sub(_2464335655168245581336, _3229007727570393520073 );
		bigint_to_string(_487925433535952994351, 10, buffer);
		printf("trying ");
		puts("sub(164, -6587156)");
		puts(buffer);
		assert(strcmp(buffer, "6587320") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2464335655168245581336);
		bigint_free(_3229007727570393520073);
		bigint_free(_487925433535952994351);

	

		bigint_t* _3680686129681657302560;
		bigint_t* _147459452520347382738 = bigint(-91);
		bigint_t* _3495044698576829202207 = bigint(-11010994);
		bigint_t* _1124819144875448046290 = bigint_mul(_147459452520347382738, _3495044698576829202207 );
		bigint_to_string(_1124819144875448046290, 10, buffer);
		printf("trying ");
		puts("mul(-91, -11010994)");
		puts(buffer);
		assert(strcmp(buffer, "1002000454") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_147459452520347382738);
		bigint_free(_3495044698576829202207);
		bigint_free(_1124819144875448046290);

	

		bigint_t* _1726894479061231473000;
		bigint_t* _3199856462421199323589 = bigint(-91);
		bigint_t* _3521991789957217625391 = bigint(-11010994);
		bigint_t* _2234931040392516257631 = bigint_add(_3199856462421199323589, _3521991789957217625391 );
		bigint_to_string(_2234931040392516257631, 10, buffer);
		printf("trying ");
		puts("add(-91, -11010994)");
		puts(buffer);
		assert(strcmp(buffer, "-11011085") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3199856462421199323589);
		bigint_free(_3521991789957217625391);
		bigint_free(_2234931040392516257631);

	

		bigint_t* _745786215378803869650;
		bigint_t* _181122648037024514948 = bigint(-91);
		bigint_t* _1159679827265056424820 = bigint(-11010994);
		bigint_t* _1039193230651039772745 = bigint_sub(_181122648037024514948, _1159679827265056424820 );
		bigint_to_string(_1039193230651039772745, 10, buffer);
		printf("trying ");
		puts("sub(-91, -11010994)");
		puts(buffer);
		assert(strcmp(buffer, "11010903") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_181122648037024514948);
		bigint_free(_1159679827265056424820);
		bigint_free(_1039193230651039772745);

	

		bigint_t* _1416779302804198744069;
		bigint_t* _1470061634016947546987 = bigint(-20);
		bigint_t* _4169573825745349811119 = bigint(-12159883);
		bigint_t* _1471914836696234773632 = bigint_mul(_1470061634016947546987, _4169573825745349811119 );
		bigint_to_string(_1471914836696234773632, 10, buffer);
		printf("trying ");
		puts("mul(-20, -12159883)");
		puts(buffer);
		assert(strcmp(buffer, "243197660") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1470061634016947546987);
		bigint_free(_4169573825745349811119);
		bigint_free(_1471914836696234773632);

	

		bigint_t* _869237804277183321644;
		bigint_t* _4450117270300810061104 = bigint(-20);
		bigint_t* _2036900592415087836899 = bigint(-12159883);
		bigint_t* _193797374291197493289 = bigint_add(_4450117270300810061104, _2036900592415087836899 );
		bigint_to_string(_193797374291197493289, 10, buffer);
		printf("trying ");
		puts("add(-20, -12159883)");
		puts(buffer);
		assert(strcmp(buffer, "-12159903") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4450117270300810061104);
		bigint_free(_2036900592415087836899);
		bigint_free(_193797374291197493289);

	

		bigint_t* _1841485308844885135809;
		bigint_t* _3404813255163700896952 = bigint(-20);
		bigint_t* _882090843429593964731 = bigint(-12159883);
		bigint_t* _2053710037453673886508 = bigint_sub(_3404813255163700896952, _882090843429593964731 );
		bigint_to_string(_2053710037453673886508, 10, buffer);
		printf("trying ");
		puts("sub(-20, -12159883)");
		puts(buffer);
		assert(strcmp(buffer, "12159863") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3404813255163700896952);
		bigint_free(_882090843429593964731);
		bigint_free(_2053710037453673886508);

	

		bigint_t* _3663584008146369929291;
		bigint_t* _2844860084244553209323 = bigint(-55);
		bigint_t* _1961328574119089423347 = bigint(9945886);
		bigint_t* _2381891409383078712094 = bigint_mul(_2844860084244553209323, _1961328574119089423347 );
		bigint_to_string(_2381891409383078712094, 10, buffer);
		printf("trying ");
		puts("mul(-55, 9945886)");
		puts(buffer);
		assert(strcmp(buffer, "-547023730") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2844860084244553209323);
		bigint_free(_1961328574119089423347);
		bigint_free(_2381891409383078712094);

	

		bigint_t* _1929266794031354449188;
		bigint_t* _468476813544349274306 = bigint(-55);
		bigint_t* _1503444561504444405140 = bigint(9945886);
		bigint_t* _3388165930651366354553 = bigint_add(_468476813544349274306, _1503444561504444405140 );
		bigint_to_string(_3388165930651366354553, 10, buffer);
		printf("trying ");
		puts("add(-55, 9945886)");
		puts(buffer);
		assert(strcmp(buffer, "9945831") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_468476813544349274306);
		bigint_free(_1503444561504444405140);
		bigint_free(_3388165930651366354553);

	

		bigint_t* _1615127617311874605989;
		bigint_t* _3415679223862337614308 = bigint(-55);
		bigint_t* _3565130037283453751839 = bigint(9945886);
		bigint_t* _1420322875890501418363 = bigint_sub(_3415679223862337614308, _3565130037283453751839 );
		bigint_to_string(_1420322875890501418363, 10, buffer);
		printf("trying ");
		puts("sub(-55, 9945886)");
		puts(buffer);
		assert(strcmp(buffer, "-9945941") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3415679223862337614308);
		bigint_free(_3565130037283453751839);
		bigint_free(_1420322875890501418363);

	

		bigint_t* _3764296117898652198658;
		bigint_t* _4590885595545156574499 = bigint(72);
		bigint_t* _1259696980134403691437 = bigint(197214);
		bigint_t* _2453566159041722167070 = bigint_mul(_4590885595545156574499, _1259696980134403691437 );
		bigint_to_string(_2453566159041722167070, 10, buffer);
		printf("trying ");
		puts("mul(72, 197214)");
		puts(buffer);
		assert(strcmp(buffer, "14199408") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4590885595545156574499);
		bigint_free(_1259696980134403691437);
		bigint_free(_2453566159041722167070);

	

		bigint_t* _1496167662087966899240;
		bigint_t* _956789736143815686871 = bigint(72);
		bigint_t* _1532098379339267560458 = bigint(197214);
		bigint_t* _3444632583256921018829 = bigint_add(_956789736143815686871, _1532098379339267560458 );
		bigint_to_string(_3444632583256921018829, 10, buffer);
		printf("trying ");
		puts("add(72, 197214)");
		puts(buffer);
		assert(strcmp(buffer, "197286") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_956789736143815686871);
		bigint_free(_1532098379339267560458);
		bigint_free(_3444632583256921018829);

	

		bigint_t* _2827160193284116682235;
		bigint_t* _1942929503640106971280 = bigint(72);
		bigint_t* _321594755376492316545 = bigint(197214);
		bigint_t* _4224784239851258217741 = bigint_sub(_1942929503640106971280, _321594755376492316545 );
		bigint_to_string(_4224784239851258217741, 10, buffer);
		printf("trying ");
		puts("sub(72, 197214)");
		puts(buffer);
		assert(strcmp(buffer, "-197142") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1942929503640106971280);
		bigint_free(_321594755376492316545);
		bigint_free(_4224784239851258217741);

	

		bigint_t* _392285673774837941210;
		bigint_t* _51246574220450022311 = bigint(-2);
		bigint_t* _3676079885483497731289 = bigint(14635852);
		bigint_t* _2771974170111371587900 = bigint_mul(_51246574220450022311, _3676079885483497731289 );
		bigint_to_string(_2771974170111371587900, 10, buffer);
		printf("trying ");
		puts("mul(-2, 14635852)");
		puts(buffer);
		assert(strcmp(buffer, "-29271704") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_51246574220450022311);
		bigint_free(_3676079885483497731289);
		bigint_free(_2771974170111371587900);

	

		bigint_t* _2738685681962495762504;
		bigint_t* _2921097092821202586343 = bigint(-2);
		bigint_t* _50897445438506549613 = bigint(14635852);
		bigint_t* _2920984905806115844422 = bigint_add(_2921097092821202586343, _50897445438506549613 );
		bigint_to_string(_2920984905806115844422, 10, buffer);
		printf("trying ");
		puts("add(-2, 14635852)");
		puts(buffer);
		assert(strcmp(buffer, "14635850") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2921097092821202586343);
		bigint_free(_50897445438506549613);
		bigint_free(_2920984905806115844422);

	

		bigint_t* _1695541353059630421638;
		bigint_t* _3597728712086100715616 = bigint(-2);
		bigint_t* _172780071728020719824 = bigint(14635852);
		bigint_t* _2777478326169561137741 = bigint_sub(_3597728712086100715616, _172780071728020719824 );
		bigint_to_string(_2777478326169561137741, 10, buffer);
		printf("trying ");
		puts("sub(-2, 14635852)");
		puts(buffer);
		assert(strcmp(buffer, "-14635854") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3597728712086100715616);
		bigint_free(_172780071728020719824);
		bigint_free(_2777478326169561137741);

	

		bigint_t* _4434874254634127072240;
		bigint_t* _4143131506221059212715 = bigint(-211);
		bigint_t* _4061330106828729523103 = bigint(-8049384);
		bigint_t* _4228198229867940741893 = bigint_mul(_4143131506221059212715, _4061330106828729523103 );
		bigint_to_string(_4228198229867940741893, 10, buffer);
		printf("trying ");
		puts("mul(-211, -8049384)");
		puts(buffer);
		assert(strcmp(buffer, "1698420024") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4143131506221059212715);
		bigint_free(_4061330106828729523103);
		bigint_free(_4228198229867940741893);

	

		bigint_t* _599398102795086868031;
		bigint_t* _1891153336854784732119 = bigint(-211);
		bigint_t* _1242740833442589234312 = bigint(-8049384);
		bigint_t* _760591133050866631347 = bigint_add(_1891153336854784732119, _1242740833442589234312 );
		bigint_to_string(_760591133050866631347, 10, buffer);
		printf("trying ");
		puts("add(-211, -8049384)");
		puts(buffer);
		assert(strcmp(buffer, "-8049595") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1891153336854784732119);
		bigint_free(_1242740833442589234312);
		bigint_free(_760591133050866631347);

	

		bigint_t* _4166807274331067321437;
		bigint_t* _3311595526908469046217 = bigint(-211);
		bigint_t* _3351213068882684885932 = bigint(-8049384);
		bigint_t* _3166221213593840647797 = bigint_sub(_3311595526908469046217, _3351213068882684885932 );
		bigint_to_string(_3166221213593840647797, 10, buffer);
		printf("trying ");
		puts("sub(-211, -8049384)");
		puts(buffer);
		assert(strcmp(buffer, "8049173") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3311595526908469046217);
		bigint_free(_3351213068882684885932);
		bigint_free(_3166221213593840647797);

	

		bigint_t* _3138672289967775538832;
		bigint_t* _519532596879663439331 = bigint(20);
		bigint_t* _2362920816391163537170 = bigint(3504673);
		bigint_t* _2053004797192763833661 = bigint_mul(_519532596879663439331, _2362920816391163537170 );
		bigint_to_string(_2053004797192763833661, 10, buffer);
		printf("trying ");
		puts("mul(20, 3504673)");
		puts(buffer);
		assert(strcmp(buffer, "70093460") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_519532596879663439331);
		bigint_free(_2362920816391163537170);
		bigint_free(_2053004797192763833661);

	

		bigint_t* _746028742040329913863;
		bigint_t* _611938283886122677085 = bigint(20);
		bigint_t* _2784396374655122222012 = bigint(3504673);
		bigint_t* _3947750506055105639120 = bigint_add(_611938283886122677085, _2784396374655122222012 );
		bigint_to_string(_3947750506055105639120, 10, buffer);
		printf("trying ");
		puts("add(20, 3504673)");
		puts(buffer);
		assert(strcmp(buffer, "3504693") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_611938283886122677085);
		bigint_free(_2784396374655122222012);
		bigint_free(_3947750506055105639120);

	

		bigint_t* _4334859297104689823099;
		bigint_t* _2114758169966741533869 = bigint(20);
		bigint_t* _666448272531680657807 = bigint(3504673);
		bigint_t* _3658056496316202079403 = bigint_sub(_2114758169966741533869, _666448272531680657807 );
		bigint_to_string(_3658056496316202079403, 10, buffer);
		printf("trying ");
		puts("sub(20, 3504673)");
		puts(buffer);
		assert(strcmp(buffer, "-3504653") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2114758169966741533869);
		bigint_free(_666448272531680657807);
		bigint_free(_3658056496316202079403);

	

		bigint_t* _193166970241549032114;
		bigint_t* _1471992582750679291943 = bigint(-53);
		bigint_t* _748208554361160654582 = bigint(11695039);
		bigint_t* _980445671140272185974 = bigint_mul(_1471992582750679291943, _748208554361160654582 );
		bigint_to_string(_980445671140272185974, 10, buffer);
		printf("trying ");
		puts("mul(-53, 11695039)");
		puts(buffer);
		assert(strcmp(buffer, "-619837067") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1471992582750679291943);
		bigint_free(_748208554361160654582);
		bigint_free(_980445671140272185974);

	

		bigint_t* _2145731501981578010917;
		bigint_t* _3859105561016376461293 = bigint(-53);
		bigint_t* _263572971568293419166 = bigint(11695039);
		bigint_t* _2553912784928341049233 = bigint_add(_3859105561016376461293, _263572971568293419166 );
		bigint_to_string(_2553912784928341049233, 10, buffer);
		printf("trying ");
		puts("add(-53, 11695039)");
		puts(buffer);
		assert(strcmp(buffer, "11694986") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3859105561016376461293);
		bigint_free(_263572971568293419166);
		bigint_free(_2553912784928341049233);

	

		bigint_t* _3151245651100974211333;
		bigint_t* _2247349827553715478200 = bigint(-53);
		bigint_t* _1156109567106368910259 = bigint(11695039);
		bigint_t* _2736547816629510369146 = bigint_sub(_2247349827553715478200, _1156109567106368910259 );
		bigint_to_string(_2736547816629510369146, 10, buffer);
		printf("trying ");
		puts("sub(-53, 11695039)");
		puts(buffer);
		assert(strcmp(buffer, "-11695092") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2247349827553715478200);
		bigint_free(_1156109567106368910259);
		bigint_free(_2736547816629510369146);

	

		bigint_t* _2135937005713853874813;
		bigint_t* _4620268500533303559215 = bigint(-213);
		bigint_t* _695851322377637684802 = bigint(9798231);
		bigint_t* _2709553620094974435568 = bigint_mul(_4620268500533303559215, _695851322377637684802 );
		bigint_to_string(_2709553620094974435568, 10, buffer);
		printf("trying ");
		puts("mul(-213, 9798231)");
		puts(buffer);
		assert(strcmp(buffer, "-2087023203") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4620268500533303559215);
		bigint_free(_695851322377637684802);
		bigint_free(_2709553620094974435568);

	

		bigint_t* _3241965801083954229427;
		bigint_t* _2725007194001484185015 = bigint(-213);
		bigint_t* _3466032738582303804759 = bigint(9798231);
		bigint_t* _3882612833613335319601 = bigint_add(_2725007194001484185015, _3466032738582303804759 );
		bigint_to_string(_3882612833613335319601, 10, buffer);
		printf("trying ");
		puts("add(-213, 9798231)");
		puts(buffer);
		assert(strcmp(buffer, "9798018") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2725007194001484185015);
		bigint_free(_3466032738582303804759);
		bigint_free(_3882612833613335319601);

	

		bigint_t* _2596812726787482147827;
		bigint_t* _242188915232579097017 = bigint(-213);
		bigint_t* _1622559873776400047857 = bigint(9798231);
		bigint_t* _2637945498508046531719 = bigint_sub(_242188915232579097017, _1622559873776400047857 );
		bigint_to_string(_2637945498508046531719, 10, buffer);
		printf("trying ");
		puts("sub(-213, 9798231)");
		puts(buffer);
		assert(strcmp(buffer, "-9798444") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_242188915232579097017);
		bigint_free(_1622559873776400047857);
		bigint_free(_2637945498508046531719);

	

		bigint_t* _1985144660730039684412;
		bigint_t* _2052021243924740631670 = bigint(225);
		bigint_t* _909113177217124008238 = bigint(-2157106);
		bigint_t* _3841105134212580649479 = bigint_mul(_2052021243924740631670, _909113177217124008238 );
		bigint_to_string(_3841105134212580649479, 10, buffer);
		printf("trying ");
		puts("mul(225, -2157106)");
		puts(buffer);
		assert(strcmp(buffer, "-485348850") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2052021243924740631670);
		bigint_free(_909113177217124008238);
		bigint_free(_3841105134212580649479);

	

		bigint_t* _56413783923201965797;
		bigint_t* _2565358205391770042156 = bigint(225);
		bigint_t* _4134805790512435733561 = bigint(-2157106);
		bigint_t* _3334351901719287316526 = bigint_add(_2565358205391770042156, _4134805790512435733561 );
		bigint_to_string(_3334351901719287316526, 10, buffer);
		printf("trying ");
		puts("add(225, -2157106)");
		puts(buffer);
		assert(strcmp(buffer, "-2156881") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2565358205391770042156);
		bigint_free(_4134805790512435733561);
		bigint_free(_3334351901719287316526);

	

		bigint_t* _2081143631835322672578;
		bigint_t* _3392563485371179680727 = bigint(225);
		bigint_t* _2576634385586783341314 = bigint(-2157106);
		bigint_t* _2883348855921726374407 = bigint_sub(_3392563485371179680727, _2576634385586783341314 );
		bigint_to_string(_2883348855921726374407, 10, buffer);
		printf("trying ");
		puts("sub(225, -2157106)");
		puts(buffer);
		assert(strcmp(buffer, "2157331") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3392563485371179680727);
		bigint_free(_2576634385586783341314);
		bigint_free(_2883348855921726374407);

	

		bigint_t* _2539063324333027201810;
		bigint_t* _645285567236683109292 = bigint(-197);
		bigint_t* _4339847992406584956443 = bigint(42092);
		bigint_t* _1285045866814424901179 = bigint_mul(_645285567236683109292, _4339847992406584956443 );
		bigint_to_string(_1285045866814424901179, 10, buffer);
		printf("trying ");
		puts("mul(-197, 42092)");
		puts(buffer);
		assert(strcmp(buffer, "-8292124") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_645285567236683109292);
		bigint_free(_4339847992406584956443);
		bigint_free(_1285045866814424901179);

	

		bigint_t* _126349489869263243747;
		bigint_t* _3047075689484420107617 = bigint(-197);
		bigint_t* _4341931813790328300641 = bigint(42092);
		bigint_t* _1268895033699718186729 = bigint_add(_3047075689484420107617, _4341931813790328300641 );
		bigint_to_string(_1268895033699718186729, 10, buffer);
		printf("trying ");
		puts("add(-197, 42092)");
		puts(buffer);
		assert(strcmp(buffer, "41895") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3047075689484420107617);
		bigint_free(_4341931813790328300641);
		bigint_free(_1268895033699718186729);

	

		bigint_t* _735312111340724118067;
		bigint_t* _1199046259764384406128 = bigint(-197);
		bigint_t* _448972772907036365797 = bigint(42092);
		bigint_t* _3339288694024364479576 = bigint_sub(_1199046259764384406128, _448972772907036365797 );
		bigint_to_string(_3339288694024364479576, 10, buffer);
		printf("trying ");
		puts("sub(-197, 42092)");
		puts(buffer);
		assert(strcmp(buffer, "-42289") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1199046259764384406128);
		bigint_free(_448972772907036365797);
		bigint_free(_3339288694024364479576);

	

		bigint_t* _842800163241693385800;
		bigint_t* _3660632363456502359870 = bigint(-195);
		bigint_t* _1321103060804366838030 = bigint(-1576683);
		bigint_t* _4230218380070901109857 = bigint_mul(_3660632363456502359870, _1321103060804366838030 );
		bigint_to_string(_4230218380070901109857, 10, buffer);
		printf("trying ");
		puts("mul(-195, -1576683)");
		puts(buffer);
		assert(strcmp(buffer, "307453185") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3660632363456502359870);
		bigint_free(_1321103060804366838030);
		bigint_free(_4230218380070901109857);

	

		bigint_t* _1834990701060787518309;
		bigint_t* _557283871979877776130 = bigint(-195);
		bigint_t* _3057068633885230484468 = bigint(-1576683);
		bigint_t* _3361581672921578377501 = bigint_add(_557283871979877776130, _3057068633885230484468 );
		bigint_to_string(_3361581672921578377501, 10, buffer);
		printf("trying ");
		puts("add(-195, -1576683)");
		puts(buffer);
		assert(strcmp(buffer, "-1576878") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_557283871979877776130);
		bigint_free(_3057068633885230484468);
		bigint_free(_3361581672921578377501);

	

		bigint_t* _4061344471951832117108;
		bigint_t* _3113266181092098818574 = bigint(-195);
		bigint_t* _253494663352759882558 = bigint(-1576683);
		bigint_t* _3456056477380689383997 = bigint_sub(_3113266181092098818574, _253494663352759882558 );
		bigint_to_string(_3456056477380689383997, 10, buffer);
		printf("trying ");
		puts("sub(-195, -1576683)");
		puts(buffer);
		assert(strcmp(buffer, "1576488") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3113266181092098818574);
		bigint_free(_253494663352759882558);
		bigint_free(_3456056477380689383997);

	

		bigint_t* _3739158178546488578161;
		bigint_t* _3518741796680504651252 = bigint(82);
		bigint_t* _1628598448822110855018 = bigint(9874298);
		bigint_t* _2014970554333698074519 = bigint_mul(_3518741796680504651252, _1628598448822110855018 );
		bigint_to_string(_2014970554333698074519, 10, buffer);
		printf("trying ");
		puts("mul(82, 9874298)");
		puts(buffer);
		assert(strcmp(buffer, "809692436") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3518741796680504651252);
		bigint_free(_1628598448822110855018);
		bigint_free(_2014970554333698074519);

	

		bigint_t* _2905490411474317885686;
		bigint_t* _1524801374496052122121 = bigint(82);
		bigint_t* _4484181973622767795792 = bigint(9874298);
		bigint_t* _3731821085374370984667 = bigint_add(_1524801374496052122121, _4484181973622767795792 );
		bigint_to_string(_3731821085374370984667, 10, buffer);
		printf("trying ");
		puts("add(82, 9874298)");
		puts(buffer);
		assert(strcmp(buffer, "9874380") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1524801374496052122121);
		bigint_free(_4484181973622767795792);
		bigint_free(_3731821085374370984667);

	

		bigint_t* _2888976555785806538666;
		bigint_t* _1113427715234437892210 = bigint(82);
		bigint_t* _3937688019031557531319 = bigint(9874298);
		bigint_t* _2488355592049114598336 = bigint_sub(_1113427715234437892210, _3937688019031557531319 );
		bigint_to_string(_2488355592049114598336, 10, buffer);
		printf("trying ");
		puts("sub(82, 9874298)");
		puts(buffer);
		assert(strcmp(buffer, "-9874216") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1113427715234437892210);
		bigint_free(_3937688019031557531319);
		bigint_free(_2488355592049114598336);

	

		bigint_t* _2911333405571594595424;
		bigint_t* _2068020401816612247910 = bigint(222);
		bigint_t* _3493159110743065365806 = bigint(-6697753);
		bigint_t* _2967958383311707562781 = bigint_mul(_2068020401816612247910, _3493159110743065365806 );
		bigint_to_string(_2967958383311707562781, 10, buffer);
		printf("trying ");
		puts("mul(222, -6697753)");
		puts(buffer);
		assert(strcmp(buffer, "-1486901166") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2068020401816612247910);
		bigint_free(_3493159110743065365806);
		bigint_free(_2967958383311707562781);

	

		bigint_t* _2737911652034802199416;
		bigint_t* _4192330462306545677002 = bigint(222);
		bigint_t* _2151142324624256904639 = bigint(-6697753);
		bigint_t* _2206297192580019409379 = bigint_add(_4192330462306545677002, _2151142324624256904639 );
		bigint_to_string(_2206297192580019409379, 10, buffer);
		printf("trying ");
		puts("add(222, -6697753)");
		puts(buffer);
		assert(strcmp(buffer, "-6697531") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4192330462306545677002);
		bigint_free(_2151142324624256904639);
		bigint_free(_2206297192580019409379);

	

		bigint_t* _580203425097977008454;
		bigint_t* _544300885882775546097 = bigint(222);
		bigint_t* _1195213628263610457816 = bigint(-6697753);
		bigint_t* _2721988496852748820274 = bigint_sub(_544300885882775546097, _1195213628263610457816 );
		bigint_to_string(_2721988496852748820274, 10, buffer);
		printf("trying ");
		puts("sub(222, -6697753)");
		puts(buffer);
		assert(strcmp(buffer, "6697975") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_544300885882775546097);
		bigint_free(_1195213628263610457816);
		bigint_free(_2721988496852748820274);

	

		bigint_t* _354789108613636390043;
		bigint_t* _2555266801094699195150 = bigint(232);
		bigint_t* _3195619512510701185932 = bigint(-2121308);
		bigint_t* _4574556792217830687503 = bigint_mul(_2555266801094699195150, _3195619512510701185932 );
		bigint_to_string(_4574556792217830687503, 10, buffer);
		printf("trying ");
		puts("mul(232, -2121308)");
		puts(buffer);
		assert(strcmp(buffer, "-492143456") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2555266801094699195150);
		bigint_free(_3195619512510701185932);
		bigint_free(_4574556792217830687503);

	

		bigint_t* _3098356828499661175999;
		bigint_t* _2467624444232518333589 = bigint(232);
		bigint_t* _621117482143928461072 = bigint(-2121308);
		bigint_t* _2130447661440720252754 = bigint_add(_2467624444232518333589, _621117482143928461072 );
		bigint_to_string(_2130447661440720252754, 10, buffer);
		printf("trying ");
		puts("add(232, -2121308)");
		puts(buffer);
		assert(strcmp(buffer, "-2121076") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2467624444232518333589);
		bigint_free(_621117482143928461072);
		bigint_free(_2130447661440720252754);

	

		bigint_t* _4599579757594292985820;
		bigint_t* _337668574823449261862 = bigint(232);
		bigint_t* _2874870431834705989635 = bigint(-2121308);
		bigint_t* _272746175855518615110 = bigint_sub(_337668574823449261862, _2874870431834705989635 );
		bigint_to_string(_272746175855518615110, 10, buffer);
		printf("trying ");
		puts("sub(232, -2121308)");
		puts(buffer);
		assert(strcmp(buffer, "2121540") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_337668574823449261862);
		bigint_free(_2874870431834705989635);
		bigint_free(_272746175855518615110);

	

		bigint_t* _2494704941013590695278;
		bigint_t* _3745234157050077780837 = bigint(-36);
		bigint_t* _3765287018953548384992 = bigint(-4474731);
		bigint_t* _3717925033842726958807 = bigint_mul(_3745234157050077780837, _3765287018953548384992 );
		bigint_to_string(_3717925033842726958807, 10, buffer);
		printf("trying ");
		puts("mul(-36, -4474731)");
		puts(buffer);
		assert(strcmp(buffer, "161090316") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3745234157050077780837);
		bigint_free(_3765287018953548384992);
		bigint_free(_3717925033842726958807);

	

		bigint_t* _4293085203589468931987;
		bigint_t* _1551016838478563963002 = bigint(-36);
		bigint_t* _691914174215038968855 = bigint(-4474731);
		bigint_t* _2515604239812257408931 = bigint_add(_1551016838478563963002, _691914174215038968855 );
		bigint_to_string(_2515604239812257408931, 10, buffer);
		printf("trying ");
		puts("add(-36, -4474731)");
		puts(buffer);
		assert(strcmp(buffer, "-4474767") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1551016838478563963002);
		bigint_free(_691914174215038968855);
		bigint_free(_2515604239812257408931);

	

		bigint_t* _1176589163784912519138;
		bigint_t* _3904907672067391723506 = bigint(-36);
		bigint_t* _2521819666600871688976 = bigint(-4474731);
		bigint_t* _2478516930995603243546 = bigint_sub(_3904907672067391723506, _2521819666600871688976 );
		bigint_to_string(_2478516930995603243546, 10, buffer);
		printf("trying ");
		puts("sub(-36, -4474731)");
		puts(buffer);
		assert(strcmp(buffer, "4474695") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3904907672067391723506);
		bigint_free(_2521819666600871688976);
		bigint_free(_2478516930995603243546);

	

		bigint_t* _1756724484463592676401;
		bigint_t* _1101937093279069722062 = bigint(-27);
		bigint_t* _1178986122820703982735 = bigint(8273404);
		bigint_t* _3581132388008217215008 = bigint_mul(_1101937093279069722062, _1178986122820703982735 );
		bigint_to_string(_3581132388008217215008, 10, buffer);
		printf("trying ");
		puts("mul(-27, 8273404)");
		puts(buffer);
		assert(strcmp(buffer, "-223381908") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1101937093279069722062);
		bigint_free(_1178986122820703982735);
		bigint_free(_3581132388008217215008);

	

		bigint_t* _2315474110457533349832;
		bigint_t* _1207632003267868356048 = bigint(-27);
		bigint_t* _2202474855323731341982 = bigint(8273404);
		bigint_t* _4265351844288526781992 = bigint_add(_1207632003267868356048, _2202474855323731341982 );
		bigint_to_string(_4265351844288526781992, 10, buffer);
		printf("trying ");
		puts("add(-27, 8273404)");
		puts(buffer);
		assert(strcmp(buffer, "8273377") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1207632003267868356048);
		bigint_free(_2202474855323731341982);
		bigint_free(_4265351844288526781992);

	

		bigint_t* _261307738628955263089;
		bigint_t* _23020045077581929333 = bigint(-27);
		bigint_t* _3168785845406472721847 = bigint(8273404);
		bigint_t* _4376422415946009900358 = bigint_sub(_23020045077581929333, _3168785845406472721847 );
		bigint_to_string(_4376422415946009900358, 10, buffer);
		printf("trying ");
		puts("sub(-27, 8273404)");
		puts(buffer);
		assert(strcmp(buffer, "-8273431") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_23020045077581929333);
		bigint_free(_3168785845406472721847);
		bigint_free(_4376422415946009900358);

	

		bigint_t* _3392864322767606684084;
		bigint_t* _2656871039080716013152 = bigint(-159);
		bigint_t* _824889521253397678611 = bigint(11801623);
		bigint_t* _1339634628720518041750 = bigint_mul(_2656871039080716013152, _824889521253397678611 );
		bigint_to_string(_1339634628720518041750, 10, buffer);
		printf("trying ");
		puts("mul(-159, 11801623)");
		puts(buffer);
		assert(strcmp(buffer, "-1876458057") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2656871039080716013152);
		bigint_free(_824889521253397678611);
		bigint_free(_1339634628720518041750);

	

		bigint_t* _4163062343664845163338;
		bigint_t* _1494016478471553102534 = bigint(-159);
		bigint_t* _4689340597149673570520 = bigint(11801623);
		bigint_t* _1976497837870808487096 = bigint_add(_1494016478471553102534, _4689340597149673570520 );
		bigint_to_string(_1976497837870808487096, 10, buffer);
		printf("trying ");
		puts("add(-159, 11801623)");
		puts(buffer);
		assert(strcmp(buffer, "11801464") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1494016478471553102534);
		bigint_free(_4689340597149673570520);
		bigint_free(_1976497837870808487096);

	

		bigint_t* _584619085594948295982;
		bigint_t* _1579954297800394250792 = bigint(-159);
		bigint_t* _3790963407238394879728 = bigint(11801623);
		bigint_t* _3642429115938213770058 = bigint_sub(_1579954297800394250792, _3790963407238394879728 );
		bigint_to_string(_3642429115938213770058, 10, buffer);
		printf("trying ");
		puts("sub(-159, 11801623)");
		puts(buffer);
		assert(strcmp(buffer, "-11801782") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1579954297800394250792);
		bigint_free(_3790963407238394879728);
		bigint_free(_3642429115938213770058);

	

		bigint_t* _4233218701794854501401;
		bigint_t* _1324360682035516077862 = bigint(238);
		bigint_t* _2333503558489168191625 = bigint(-12853902);
		bigint_t* _2276946655956437683284 = bigint_mul(_1324360682035516077862, _2333503558489168191625 );
		bigint_to_string(_2276946655956437683284, 10, buffer);
		printf("trying ");
		puts("mul(238, -12853902)");
		puts(buffer);
		assert(strcmp(buffer, "-3059228676") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1324360682035516077862);
		bigint_free(_2333503558489168191625);
		bigint_free(_2276946655956437683284);

	

		bigint_t* _1021419876839034408916;
		bigint_t* _3288258722971752456660 = bigint(238);
		bigint_t* _2462721439033516375608 = bigint(-12853902);
		bigint_t* _4456501331147171262989 = bigint_add(_3288258722971752456660, _2462721439033516375608 );
		bigint_to_string(_4456501331147171262989, 10, buffer);
		printf("trying ");
		puts("add(238, -12853902)");
		puts(buffer);
		assert(strcmp(buffer, "-12853664") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3288258722971752456660);
		bigint_free(_2462721439033516375608);
		bigint_free(_4456501331147171262989);

	

		bigint_t* _2824445327180785204356;
		bigint_t* _2489628298795614398904 = bigint(238);
		bigint_t* _1208483538589169173729 = bigint(-12853902);
		bigint_t* _1612611641376506388895 = bigint_sub(_2489628298795614398904, _1208483538589169173729 );
		bigint_to_string(_1612611641376506388895, 10, buffer);
		printf("trying ");
		puts("sub(238, -12853902)");
		puts(buffer);
		assert(strcmp(buffer, "12854140") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2489628298795614398904);
		bigint_free(_1208483538589169173729);
		bigint_free(_1612611641376506388895);

	

		bigint_t* _1402667139757272009947;
		bigint_t* _1267251586524362043686 = bigint(224);
		bigint_t* _2367732468315841974049 = bigint(1143368);
		bigint_t* _4421802460803164222222 = bigint_mul(_1267251586524362043686, _2367732468315841974049 );
		bigint_to_string(_4421802460803164222222, 10, buffer);
		printf("trying ");
		puts("mul(224, 1143368)");
		puts(buffer);
		assert(strcmp(buffer, "256114432") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1267251586524362043686);
		bigint_free(_2367732468315841974049);
		bigint_free(_4421802460803164222222);

	

		bigint_t* _3886187592473731875447;
		bigint_t* _2710069651475226909892 = bigint(224);
		bigint_t* _2285220559334952565315 = bigint(1143368);
		bigint_t* _3255075196553796746427 = bigint_add(_2710069651475226909892, _2285220559334952565315 );
		bigint_to_string(_3255075196553796746427, 10, buffer);
		printf("trying ");
		puts("add(224, 1143368)");
		puts(buffer);
		assert(strcmp(buffer, "1143592") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2710069651475226909892);
		bigint_free(_2285220559334952565315);
		bigint_free(_3255075196553796746427);

	

		bigint_t* _3380755340654595977367;
		bigint_t* _1188155500232428839812 = bigint(224);
		bigint_t* _910437063797990761762 = bigint(1143368);
		bigint_t* _1630582917492023453304 = bigint_sub(_1188155500232428839812, _910437063797990761762 );
		bigint_to_string(_1630582917492023453304, 10, buffer);
		printf("trying ");
		puts("sub(224, 1143368)");
		puts(buffer);
		assert(strcmp(buffer, "-1143144") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1188155500232428839812);
		bigint_free(_910437063797990761762);
		bigint_free(_1630582917492023453304);

	

		bigint_t* _4206793720960370078024;
		bigint_t* _546829097523567024440 = bigint(78);
		bigint_t* _3271130101713959896680 = bigint(-11886551);
		bigint_t* _71950595600419178338 = bigint_mul(_546829097523567024440, _3271130101713959896680 );
		bigint_to_string(_71950595600419178338, 10, buffer);
		printf("trying ");
		puts("mul(78, -11886551)");
		puts(buffer);
		assert(strcmp(buffer, "-927150978") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_546829097523567024440);
		bigint_free(_3271130101713959896680);
		bigint_free(_71950595600419178338);

	

		bigint_t* _361680717590394369301;
		bigint_t* _4388364138662514530097 = bigint(78);
		bigint_t* _2488190206464989189101 = bigint(-11886551);
		bigint_t* _4154617067477736671555 = bigint_add(_4388364138662514530097, _2488190206464989189101 );
		bigint_to_string(_4154617067477736671555, 10, buffer);
		printf("trying ");
		puts("add(78, -11886551)");
		puts(buffer);
		assert(strcmp(buffer, "-11886473") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4388364138662514530097);
		bigint_free(_2488190206464989189101);
		bigint_free(_4154617067477736671555);

	

		bigint_t* _25790745991548295558;
		bigint_t* _3097774100313059505567 = bigint(78);
		bigint_t* _3905691332605459387448 = bigint(-11886551);
		bigint_t* _957289172940279643032 = bigint_sub(_3097774100313059505567, _3905691332605459387448 );
		bigint_to_string(_957289172940279643032, 10, buffer);
		printf("trying ");
		puts("sub(78, -11886551)");
		puts(buffer);
		assert(strcmp(buffer, "11886629") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3097774100313059505567);
		bigint_free(_3905691332605459387448);
		bigint_free(_957289172940279643032);

	

		bigint_t* _1824679400912336547270;
		bigint_t* _4493774328478614219758 = bigint(174);
		bigint_t* _550109168231069191987 = bigint(-5525845);
		bigint_t* _4654385294698957942242 = bigint_mul(_4493774328478614219758, _550109168231069191987 );
		bigint_to_string(_4654385294698957942242, 10, buffer);
		printf("trying ");
		puts("mul(174, -5525845)");
		puts(buffer);
		assert(strcmp(buffer, "-961497030") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4493774328478614219758);
		bigint_free(_550109168231069191987);
		bigint_free(_4654385294698957942242);

	

		bigint_t* _3330009088343930318462;
		bigint_t* _4166148728215995362178 = bigint(174);
		bigint_t* _3965748100073889771927 = bigint(-5525845);
		bigint_t* _3544385069063918781706 = bigint_add(_4166148728215995362178, _3965748100073889771927 );
		bigint_to_string(_3544385069063918781706, 10, buffer);
		printf("trying ");
		puts("add(174, -5525845)");
		puts(buffer);
		assert(strcmp(buffer, "-5525671") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4166148728215995362178);
		bigint_free(_3965748100073889771927);
		bigint_free(_3544385069063918781706);

	

		bigint_t* _3967123449916113333642;
		bigint_t* _3012661991990010533993 = bigint(174);
		bigint_t* _451394369589663272410 = bigint(-5525845);
		bigint_t* _409255626462879099303 = bigint_sub(_3012661991990010533993, _451394369589663272410 );
		bigint_to_string(_409255626462879099303, 10, buffer);
		printf("trying ");
		puts("sub(174, -5525845)");
		puts(buffer);
		assert(strcmp(buffer, "5526019") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3012661991990010533993);
		bigint_free(_451394369589663272410);
		bigint_free(_409255626462879099303);

	

		bigint_t* _3654261471272680530953;
		bigint_t* _579848069871533139487 = bigint(-40);
		bigint_t* _4286348858702771965864 = bigint(7976445);
		bigint_t* _4194055236201480368940 = bigint_mul(_579848069871533139487, _4286348858702771965864 );
		bigint_to_string(_4194055236201480368940, 10, buffer);
		printf("trying ");
		puts("mul(-40, 7976445)");
		puts(buffer);
		assert(strcmp(buffer, "-319057800") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_579848069871533139487);
		bigint_free(_4286348858702771965864);
		bigint_free(_4194055236201480368940);

	

		bigint_t* _3604660574414017181948;
		bigint_t* _2269757884721282692365 = bigint(-40);
		bigint_t* _3048484408620658359478 = bigint(7976445);
		bigint_t* _2190970373220753187831 = bigint_add(_2269757884721282692365, _3048484408620658359478 );
		bigint_to_string(_2190970373220753187831, 10, buffer);
		printf("trying ");
		puts("add(-40, 7976445)");
		puts(buffer);
		assert(strcmp(buffer, "7976405") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2269757884721282692365);
		bigint_free(_3048484408620658359478);
		bigint_free(_2190970373220753187831);

	

		bigint_t* _4515102878238109758385;
		bigint_t* _1746868748349357257038 = bigint(-40);
		bigint_t* _4503282665984404686153 = bigint(7976445);
		bigint_t* _1382122104944782936116 = bigint_sub(_1746868748349357257038, _4503282665984404686153 );
		bigint_to_string(_1382122104944782936116, 10, buffer);
		printf("trying ");
		puts("sub(-40, 7976445)");
		puts(buffer);
		assert(strcmp(buffer, "-7976485") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1746868748349357257038);
		bigint_free(_4503282665984404686153);
		bigint_free(_1382122104944782936116);

	

		bigint_t* _494656147317727593399;
		bigint_t* _4418726577157449336990 = bigint(118);
		bigint_t* _2047819615499023958241 = bigint(4230832);
		bigint_t* _2865918111129942425242 = bigint_mul(_4418726577157449336990, _2047819615499023958241 );
		bigint_to_string(_2865918111129942425242, 10, buffer);
		printf("trying ");
		puts("mul(118, 4230832)");
		puts(buffer);
		assert(strcmp(buffer, "499238176") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4418726577157449336990);
		bigint_free(_2047819615499023958241);
		bigint_free(_2865918111129942425242);

	

		bigint_t* _351656934271407292576;
		bigint_t* _238313412457499489423 = bigint(118);
		bigint_t* _3684336783702959714370 = bigint(4230832);
		bigint_t* _2899080554315961825247 = bigint_add(_238313412457499489423, _3684336783702959714370 );
		bigint_to_string(_2899080554315961825247, 10, buffer);
		printf("trying ");
		puts("add(118, 4230832)");
		puts(buffer);
		assert(strcmp(buffer, "4230950") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_238313412457499489423);
		bigint_free(_3684336783702959714370);
		bigint_free(_2899080554315961825247);

	

		bigint_t* _4689874646512484386583;
		bigint_t* _2458804984290368908171 = bigint(118);
		bigint_t* _1577887054397306047423 = bigint(4230832);
		bigint_t* _3158266348119062155192 = bigint_sub(_2458804984290368908171, _1577887054397306047423 );
		bigint_to_string(_3158266348119062155192, 10, buffer);
		printf("trying ");
		puts("sub(118, 4230832)");
		puts(buffer);
		assert(strcmp(buffer, "-4230714") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2458804984290368908171);
		bigint_free(_1577887054397306047423);
		bigint_free(_3158266348119062155192);

	

		bigint_t* _935859832081188058909;
		bigint_t* _806333985175992707456 = bigint(244);
		bigint_t* _1035233035449306860205 = bigint(-7086051);
		bigint_t* _730498704053612330819 = bigint_mul(_806333985175992707456, _1035233035449306860205 );
		bigint_to_string(_730498704053612330819, 10, buffer);
		printf("trying ");
		puts("mul(244, -7086051)");
		puts(buffer);
		assert(strcmp(buffer, "-1728996444") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_806333985175992707456);
		bigint_free(_1035233035449306860205);
		bigint_free(_730498704053612330819);

	

		bigint_t* _3597789417493672471010;
		bigint_t* _1289542435116946352692 = bigint(244);
		bigint_t* _3114700806264702533339 = bigint(-7086051);
		bigint_t* _1144770590826131372949 = bigint_add(_1289542435116946352692, _3114700806264702533339 );
		bigint_to_string(_1144770590826131372949, 10, buffer);
		printf("trying ");
		puts("add(244, -7086051)");
		puts(buffer);
		assert(strcmp(buffer, "-7085807") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1289542435116946352692);
		bigint_free(_3114700806264702533339);
		bigint_free(_1144770590826131372949);

	

		bigint_t* _132081290943656723768;
		bigint_t* _2487244119385090118081 = bigint(244);
		bigint_t* _53011464809054630566 = bigint(-7086051);
		bigint_t* _3287611086340305956459 = bigint_sub(_2487244119385090118081, _53011464809054630566 );
		bigint_to_string(_3287611086340305956459, 10, buffer);
		printf("trying ");
		puts("sub(244, -7086051)");
		puts(buffer);
		assert(strcmp(buffer, "7086295") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2487244119385090118081);
		bigint_free(_53011464809054630566);
		bigint_free(_3287611086340305956459);

	

		bigint_t* _814881380128318463240;
		bigint_t* _1952968151803225187408 = bigint(-56);
		bigint_t* _1518533586731690566066 = bigint(-6365131);
		bigint_t* _2202885128407856779284 = bigint_mul(_1952968151803225187408, _1518533586731690566066 );
		bigint_to_string(_2202885128407856779284, 10, buffer);
		printf("trying ");
		puts("mul(-56, -6365131)");
		puts(buffer);
		assert(strcmp(buffer, "356447336") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1952968151803225187408);
		bigint_free(_1518533586731690566066);
		bigint_free(_2202885128407856779284);

	

		bigint_t* _3423306702127239473521;
		bigint_t* _3049217319390210676722 = bigint(-56);
		bigint_t* _391249662157881643828 = bigint(-6365131);
		bigint_t* _585040872089222354133 = bigint_add(_3049217319390210676722, _391249662157881643828 );
		bigint_to_string(_585040872089222354133, 10, buffer);
		printf("trying ");
		puts("add(-56, -6365131)");
		puts(buffer);
		assert(strcmp(buffer, "-6365187") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3049217319390210676722);
		bigint_free(_391249662157881643828);
		bigint_free(_585040872089222354133);

	

		bigint_t* _568750363208688008599;
		bigint_t* _4623468624524365160111 = bigint(-56);
		bigint_t* _1015980918176310112363 = bigint(-6365131);
		bigint_t* _1676213798122463774502 = bigint_sub(_4623468624524365160111, _1015980918176310112363 );
		bigint_to_string(_1676213798122463774502, 10, buffer);
		printf("trying ");
		puts("sub(-56, -6365131)");
		puts(buffer);
		assert(strcmp(buffer, "6365075") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4623468624524365160111);
		bigint_free(_1015980918176310112363);
		bigint_free(_1676213798122463774502);

	

		bigint_t* _1281627050349198912264;
		bigint_t* _1914444221240936034135 = bigint(237);
		bigint_t* _841849510588401837539 = bigint(7140834);
		bigint_t* _1998673009460325824503 = bigint_mul(_1914444221240936034135, _841849510588401837539 );
		bigint_to_string(_1998673009460325824503, 10, buffer);
		printf("trying ");
		puts("mul(237, 7140834)");
		puts(buffer);
		assert(strcmp(buffer, "1692377658") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1914444221240936034135);
		bigint_free(_841849510588401837539);
		bigint_free(_1998673009460325824503);

	

		bigint_t* _191536779855069874997;
		bigint_t* _4696838763842143931795 = bigint(237);
		bigint_t* _3305432718682930426105 = bigint(7140834);
		bigint_t* _1201874339958308952852 = bigint_add(_4696838763842143931795, _3305432718682930426105 );
		bigint_to_string(_1201874339958308952852, 10, buffer);
		printf("trying ");
		puts("add(237, 7140834)");
		puts(buffer);
		assert(strcmp(buffer, "7141071") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4696838763842143931795);
		bigint_free(_3305432718682930426105);
		bigint_free(_1201874339958308952852);

	

		bigint_t* _3677967107497452421911;
		bigint_t* _4005342876396900135557 = bigint(237);
		bigint_t* _1743332606635660122083 = bigint(7140834);
		bigint_t* _3115777840771008531453 = bigint_sub(_4005342876396900135557, _1743332606635660122083 );
		bigint_to_string(_3115777840771008531453, 10, buffer);
		printf("trying ");
		puts("sub(237, 7140834)");
		puts(buffer);
		assert(strcmp(buffer, "-7140597") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4005342876396900135557);
		bigint_free(_1743332606635660122083);
		bigint_free(_3115777840771008531453);

	

		bigint_t* _1302131037132244571760;
		bigint_t* _3229184321883612172451 = bigint(-22);
		bigint_t* _4592351001859392425992 = bigint(-1196338);
		bigint_t* _4578385324995080513680 = bigint_mul(_3229184321883612172451, _4592351001859392425992 );
		bigint_to_string(_4578385324995080513680, 10, buffer);
		printf("trying ");
		puts("mul(-22, -1196338)");
		puts(buffer);
		assert(strcmp(buffer, "26319436") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3229184321883612172451);
		bigint_free(_4592351001859392425992);
		bigint_free(_4578385324995080513680);

	

		bigint_t* _863430336723563147592;
		bigint_t* _2441057275818063252810 = bigint(-22);
		bigint_t* _609310171559858897066 = bigint(-1196338);
		bigint_t* _4052476215222887904339 = bigint_add(_2441057275818063252810, _609310171559858897066 );
		bigint_to_string(_4052476215222887904339, 10, buffer);
		printf("trying ");
		puts("add(-22, -1196338)");
		puts(buffer);
		assert(strcmp(buffer, "-1196360") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2441057275818063252810);
		bigint_free(_609310171559858897066);
		bigint_free(_4052476215222887904339);

	

		bigint_t* _3078703928363791597261;
		bigint_t* _1717482653095537571942 = bigint(-22);
		bigint_t* _3409274455602828472478 = bigint(-1196338);
		bigint_t* _3787969041527243168028 = bigint_sub(_1717482653095537571942, _3409274455602828472478 );
		bigint_to_string(_3787969041527243168028, 10, buffer);
		printf("trying ");
		puts("sub(-22, -1196338)");
		puts(buffer);
		assert(strcmp(buffer, "1196316") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1717482653095537571942);
		bigint_free(_3409274455602828472478);
		bigint_free(_3787969041527243168028);

	

		bigint_t* _4336274097929145889748;
		bigint_t* _1246173053983096043068 = bigint(-95);
		bigint_t* _1700137654276796273257 = bigint(-16067142);
		bigint_t* _1387205331087765702445 = bigint_mul(_1246173053983096043068, _1700137654276796273257 );
		bigint_to_string(_1387205331087765702445, 10, buffer);
		printf("trying ");
		puts("mul(-95, -16067142)");
		puts(buffer);
		assert(strcmp(buffer, "1526378490") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1246173053983096043068);
		bigint_free(_1700137654276796273257);
		bigint_free(_1387205331087765702445);

	

		bigint_t* _3490972108871236348690;
		bigint_t* _608538573190862225435 = bigint(-95);
		bigint_t* _16436128868380719154 = bigint(-16067142);
		bigint_t* _3585111190800721052917 = bigint_add(_608538573190862225435, _16436128868380719154 );
		bigint_to_string(_3585111190800721052917, 10, buffer);
		printf("trying ");
		puts("add(-95, -16067142)");
		puts(buffer);
		assert(strcmp(buffer, "-16067237") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_608538573190862225435);
		bigint_free(_16436128868380719154);
		bigint_free(_3585111190800721052917);

	

		bigint_t* _4454896981933159417698;
		bigint_t* _4404333318228919444466 = bigint(-95);
		bigint_t* _3705172426022516866158 = bigint(-16067142);
		bigint_t* _1126403444875972517036 = bigint_sub(_4404333318228919444466, _3705172426022516866158 );
		bigint_to_string(_1126403444875972517036, 10, buffer);
		printf("trying ");
		puts("sub(-95, -16067142)");
		puts(buffer);
		assert(strcmp(buffer, "16067047") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4404333318228919444466);
		bigint_free(_3705172426022516866158);
		bigint_free(_1126403444875972517036);

	

		bigint_t* _253167572046107170322;
		bigint_t* _2043062781667839435468 = bigint(107);
		bigint_t* _2015826854481191425300 = bigint(8121076);
		bigint_t* _3375104899560458135889 = bigint_mul(_2043062781667839435468, _2015826854481191425300 );
		bigint_to_string(_3375104899560458135889, 10, buffer);
		printf("trying ");
		puts("mul(107, 8121076)");
		puts(buffer);
		assert(strcmp(buffer, "868955132") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2043062781667839435468);
		bigint_free(_2015826854481191425300);
		bigint_free(_3375104899560458135889);

	

		bigint_t* _3543478753651349033636;
		bigint_t* _757239286236236915141 = bigint(107);
		bigint_t* _1455525229111885952378 = bigint(8121076);
		bigint_t* _3603902758525446500015 = bigint_add(_757239286236236915141, _1455525229111885952378 );
		bigint_to_string(_3603902758525446500015, 10, buffer);
		printf("trying ");
		puts("add(107, 8121076)");
		puts(buffer);
		assert(strcmp(buffer, "8121183") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_757239286236236915141);
		bigint_free(_1455525229111885952378);
		bigint_free(_3603902758525446500015);

	

		bigint_t* _2821769435840705161422;
		bigint_t* _3918396544891593370393 = bigint(107);
		bigint_t* _4461674032815166206168 = bigint(8121076);
		bigint_t* _3941120438082952865908 = bigint_sub(_3918396544891593370393, _4461674032815166206168 );
		bigint_to_string(_3941120438082952865908, 10, buffer);
		printf("trying ");
		puts("sub(107, 8121076)");
		puts(buffer);
		assert(strcmp(buffer, "-8120969") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3918396544891593370393);
		bigint_free(_4461674032815166206168);
		bigint_free(_3941120438082952865908);

	

		bigint_t* _598575279696238488834;
		bigint_t* _1822225380700089149106 = bigint(-253);
		bigint_t* _804942170222695563140 = bigint(2054323);
		bigint_t* _3242543828278242352176 = bigint_mul(_1822225380700089149106, _804942170222695563140 );
		bigint_to_string(_3242543828278242352176, 10, buffer);
		printf("trying ");
		puts("mul(-253, 2054323)");
		puts(buffer);
		assert(strcmp(buffer, "-519743719") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1822225380700089149106);
		bigint_free(_804942170222695563140);
		bigint_free(_3242543828278242352176);

	

		bigint_t* _2926054030346960910451;
		bigint_t* _789264612895374660383 = bigint(-253);
		bigint_t* _1632032387452227451664 = bigint(2054323);
		bigint_t* _3755386076178865197540 = bigint_add(_789264612895374660383, _1632032387452227451664 );
		bigint_to_string(_3755386076178865197540, 10, buffer);
		printf("trying ");
		puts("add(-253, 2054323)");
		puts(buffer);
		assert(strcmp(buffer, "2054070") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_789264612895374660383);
		bigint_free(_1632032387452227451664);
		bigint_free(_3755386076178865197540);

	

		bigint_t* _4720563296937004666378;
		bigint_t* _1754724479134602860141 = bigint(-253);
		bigint_t* _1649057826676933793940 = bigint(2054323);
		bigint_t* _4059940192350608888191 = bigint_sub(_1754724479134602860141, _1649057826676933793940 );
		bigint_to_string(_4059940192350608888191, 10, buffer);
		printf("trying ");
		puts("sub(-253, 2054323)");
		puts(buffer);
		assert(strcmp(buffer, "-2054576") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1754724479134602860141);
		bigint_free(_1649057826676933793940);
		bigint_free(_4059940192350608888191);

	

		bigint_t* _982419639852962154365;
		bigint_t* _1940673114798281110421 = bigint(-55);
		bigint_t* _4234500768511253503739 = bigint(-15206103);
		bigint_t* _3057858087885213366004 = bigint_mul(_1940673114798281110421, _4234500768511253503739 );
		bigint_to_string(_3057858087885213366004, 10, buffer);
		printf("trying ");
		puts("mul(-55, -15206103)");
		puts(buffer);
		assert(strcmp(buffer, "836335665") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1940673114798281110421);
		bigint_free(_4234500768511253503739);
		bigint_free(_3057858087885213366004);

	

		bigint_t* _1075321387880107103713;
		bigint_t* _14723560464685029854 = bigint(-55);
		bigint_t* _4424039275718163239329 = bigint(-15206103);
		bigint_t* _4263978827217705262076 = bigint_add(_14723560464685029854, _4424039275718163239329 );
		bigint_to_string(_4263978827217705262076, 10, buffer);
		printf("trying ");
		puts("add(-55, -15206103)");
		puts(buffer);
		assert(strcmp(buffer, "-15206158") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_14723560464685029854);
		bigint_free(_4424039275718163239329);
		bigint_free(_4263978827217705262076);

	

		bigint_t* _1671098780962756284789;
		bigint_t* _2043139136974984245065 = bigint(-55);
		bigint_t* _4023701492551802197602 = bigint(-15206103);
		bigint_t* _4091116233403354422177 = bigint_sub(_2043139136974984245065, _4023701492551802197602 );
		bigint_to_string(_4091116233403354422177, 10, buffer);
		printf("trying ");
		puts("sub(-55, -15206103)");
		puts(buffer);
		assert(strcmp(buffer, "15206048") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2043139136974984245065);
		bigint_free(_4023701492551802197602);
		bigint_free(_4091116233403354422177);

	

		bigint_t* _1690593404574556963418;
		bigint_t* _3326552696628234764175 = bigint(-217);
		bigint_t* _1126743287382053452465 = bigint(8780242);
		bigint_t* _2146286382971965555106 = bigint_mul(_3326552696628234764175, _1126743287382053452465 );
		bigint_to_string(_2146286382971965555106, 10, buffer);
		printf("trying ");
		puts("mul(-217, 8780242)");
		puts(buffer);
		assert(strcmp(buffer, "-1905312514") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3326552696628234764175);
		bigint_free(_1126743287382053452465);
		bigint_free(_2146286382971965555106);

	

		bigint_t* _4243214515364633305037;
		bigint_t* _1205841122721028609825 = bigint(-217);
		bigint_t* _2969720950582277420284 = bigint(8780242);
		bigint_t* _1699454811715683082241 = bigint_add(_1205841122721028609825, _2969720950582277420284 );
		bigint_to_string(_1699454811715683082241, 10, buffer);
		printf("trying ");
		puts("add(-217, 8780242)");
		puts(buffer);
		assert(strcmp(buffer, "8780025") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1205841122721028609825);
		bigint_free(_2969720950582277420284);
		bigint_free(_1699454811715683082241);

	

		bigint_t* _667246450068225382137;
		bigint_t* _4710475492307424611288 = bigint(-217);
		bigint_t* _4615833744562858745717 = bigint(8780242);
		bigint_t* _2831596418985300264954 = bigint_sub(_4710475492307424611288, _4615833744562858745717 );
		bigint_to_string(_2831596418985300264954, 10, buffer);
		printf("trying ");
		puts("sub(-217, 8780242)");
		puts(buffer);
		assert(strcmp(buffer, "-8780459") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4710475492307424611288);
		bigint_free(_4615833744562858745717);
		bigint_free(_2831596418985300264954);

	

		bigint_t* _269927146645811751075;
		bigint_t* _547339224348174664830 = bigint(21);
		bigint_t* _3471510605772594752810 = bigint(-394861);
		bigint_t* _902228895819091091986 = bigint_mul(_547339224348174664830, _3471510605772594752810 );
		bigint_to_string(_902228895819091091986, 10, buffer);
		printf("trying ");
		puts("mul(21, -394861)");
		puts(buffer);
		assert(strcmp(buffer, "-8292081") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_547339224348174664830);
		bigint_free(_3471510605772594752810);
		bigint_free(_902228895819091091986);

	

		bigint_t* _402020661038003598002;
		bigint_t* _2944023842632446792997 = bigint(21);
		bigint_t* _1453271680551729416850 = bigint(-394861);
		bigint_t* _2254745705660407260957 = bigint_add(_2944023842632446792997, _1453271680551729416850 );
		bigint_to_string(_2254745705660407260957, 10, buffer);
		printf("trying ");
		puts("add(21, -394861)");
		puts(buffer);
		assert(strcmp(buffer, "-394840") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2944023842632446792997);
		bigint_free(_1453271680551729416850);
		bigint_free(_2254745705660407260957);

	

		bigint_t* _1628841722646286005817;
		bigint_t* _3823629720319849736613 = bigint(21);
		bigint_t* _1902401384310463855831 = bigint(-394861);
		bigint_t* _3002918815052867535772 = bigint_sub(_3823629720319849736613, _1902401384310463855831 );
		bigint_to_string(_3002918815052867535772, 10, buffer);
		printf("trying ");
		puts("sub(21, -394861)");
		puts(buffer);
		assert(strcmp(buffer, "394882") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3823629720319849736613);
		bigint_free(_1902401384310463855831);
		bigint_free(_3002918815052867535772);

	

		bigint_t* _100735159375122450166;
		bigint_t* _4455307059473349981314 = bigint(-99);
		bigint_t* _4113555868990262143171 = bigint(11687577);
		bigint_t* _991330408513364476270 = bigint_mul(_4455307059473349981314, _4113555868990262143171 );
		bigint_to_string(_991330408513364476270, 10, buffer);
		printf("trying ");
		puts("mul(-99, 11687577)");
		puts(buffer);
		assert(strcmp(buffer, "-1157070123") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4455307059473349981314);
		bigint_free(_4113555868990262143171);
		bigint_free(_991330408513364476270);

	

		bigint_t* _1408283810540198895769;
		bigint_t* _359922540588462181412 = bigint(-99);
		bigint_t* _4052727777659663979176 = bigint(11687577);
		bigint_t* _1861841764425711616044 = bigint_add(_359922540588462181412, _4052727777659663979176 );
		bigint_to_string(_1861841764425711616044, 10, buffer);
		printf("trying ");
		puts("add(-99, 11687577)");
		puts(buffer);
		assert(strcmp(buffer, "11687478") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_359922540588462181412);
		bigint_free(_4052727777659663979176);
		bigint_free(_1861841764425711616044);

	

		bigint_t* _1590923470451740544449;
		bigint_t* _2704669857797876977931 = bigint(-99);
		bigint_t* _752692914734058998509 = bigint(11687577);
		bigint_t* _1126085680569323198063 = bigint_sub(_2704669857797876977931, _752692914734058998509 );
		bigint_to_string(_1126085680569323198063, 10, buffer);
		printf("trying ");
		puts("sub(-99, 11687577)");
		puts(buffer);
		assert(strcmp(buffer, "-11687676") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2704669857797876977931);
		bigint_free(_752692914734058998509);
		bigint_free(_1126085680569323198063);

	

		bigint_t* _1277419641865580418173;
		bigint_t* _59949227771368663880 = bigint(48);
		bigint_t* _267023862232691290087 = bigint(-8189954);
		bigint_t* _4503807356865097200170 = bigint_mul(_59949227771368663880, _267023862232691290087 );
		bigint_to_string(_4503807356865097200170, 10, buffer);
		printf("trying ");
		puts("mul(48, -8189954)");
		puts(buffer);
		assert(strcmp(buffer, "-393117792") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_59949227771368663880);
		bigint_free(_267023862232691290087);
		bigint_free(_4503807356865097200170);

	

		bigint_t* _514166830401364248518;
		bigint_t* _2915045144524809857072 = bigint(48);
		bigint_t* _1237663873812270294763 = bigint(-8189954);
		bigint_t* _3962081412230295954275 = bigint_add(_2915045144524809857072, _1237663873812270294763 );
		bigint_to_string(_3962081412230295954275, 10, buffer);
		printf("trying ");
		puts("add(48, -8189954)");
		puts(buffer);
		assert(strcmp(buffer, "-8189906") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2915045144524809857072);
		bigint_free(_1237663873812270294763);
		bigint_free(_3962081412230295954275);

	

		bigint_t* _1049590090895328447164;
		bigint_t* _3450698633607249882233 = bigint(48);
		bigint_t* _4416844930646272851514 = bigint(-8189954);
		bigint_t* _4439262968629587453962 = bigint_sub(_3450698633607249882233, _4416844930646272851514 );
		bigint_to_string(_4439262968629587453962, 10, buffer);
		printf("trying ");
		puts("sub(48, -8189954)");
		puts(buffer);
		assert(strcmp(buffer, "8190002") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3450698633607249882233);
		bigint_free(_4416844930646272851514);
		bigint_free(_4439262968629587453962);

	

		bigint_t* _3473477476538662403715;
		bigint_t* _3929593978033305234946 = bigint(215);
		bigint_t* _2595810397221089168709 = bigint(-5517948);
		bigint_t* _1748445277193803084455 = bigint_mul(_3929593978033305234946, _2595810397221089168709 );
		bigint_to_string(_1748445277193803084455, 10, buffer);
		printf("trying ");
		puts("mul(215, -5517948)");
		puts(buffer);
		assert(strcmp(buffer, "-1186358820") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3929593978033305234946);
		bigint_free(_2595810397221089168709);
		bigint_free(_1748445277193803084455);

	

		bigint_t* _165897674790478410875;
		bigint_t* _3550214365119153474209 = bigint(215);
		bigint_t* _3155372404584250322714 = bigint(-5517948);
		bigint_t* _3221267850310519845995 = bigint_add(_3550214365119153474209, _3155372404584250322714 );
		bigint_to_string(_3221267850310519845995, 10, buffer);
		printf("trying ");
		puts("add(215, -5517948)");
		puts(buffer);
		assert(strcmp(buffer, "-5517733") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3550214365119153474209);
		bigint_free(_3155372404584250322714);
		bigint_free(_3221267850310519845995);

	

		bigint_t* _3549807641594714725598;
		bigint_t* _2992299203322051506542 = bigint(215);
		bigint_t* _647594372112710807262 = bigint(-5517948);
		bigint_t* _1825639952198622149213 = bigint_sub(_2992299203322051506542, _647594372112710807262 );
		bigint_to_string(_1825639952198622149213, 10, buffer);
		printf("trying ");
		puts("sub(215, -5517948)");
		puts(buffer);
		assert(strcmp(buffer, "5518163") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2992299203322051506542);
		bigint_free(_647594372112710807262);
		bigint_free(_1825639952198622149213);

	

		bigint_t* _2983835445963730790933;
		bigint_t* _3003695861934455417742 = bigint(168);
		bigint_t* _1840960984860306479927 = bigint(16203166);
		bigint_t* _2153698386229048901865 = bigint_mul(_3003695861934455417742, _1840960984860306479927 );
		bigint_to_string(_2153698386229048901865, 10, buffer);
		printf("trying ");
		puts("mul(168, 16203166)");
		puts(buffer);
		assert(strcmp(buffer, "2722131888") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3003695861934455417742);
		bigint_free(_1840960984860306479927);
		bigint_free(_2153698386229048901865);

	

		bigint_t* _346016467688720376148;
		bigint_t* _3348134884418698455054 = bigint(168);
		bigint_t* _112972053584414206805 = bigint(16203166);
		bigint_t* _2703647639413634196791 = bigint_add(_3348134884418698455054, _112972053584414206805 );
		bigint_to_string(_2703647639413634196791, 10, buffer);
		printf("trying ");
		puts("add(168, 16203166)");
		puts(buffer);
		assert(strcmp(buffer, "16203334") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3348134884418698455054);
		bigint_free(_112972053584414206805);
		bigint_free(_2703647639413634196791);

	

		bigint_t* _1355409442510667046426;
		bigint_t* _4589073807652381539865 = bigint(168);
		bigint_t* _4305864210256012746146 = bigint(16203166);
		bigint_t* _251703206395369819950 = bigint_sub(_4589073807652381539865, _4305864210256012746146 );
		bigint_to_string(_251703206395369819950, 10, buffer);
		printf("trying ");
		puts("sub(168, 16203166)");
		puts(buffer);
		assert(strcmp(buffer, "-16202998") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4589073807652381539865);
		bigint_free(_4305864210256012746146);
		bigint_free(_251703206395369819950);

	

		bigint_t* _1194415055305839937815;
		bigint_t* _2610344396949475987483 = bigint(88);
		bigint_t* _4568255632517094241366 = bigint(7185208);
		bigint_t* _3590854657565215012854 = bigint_mul(_2610344396949475987483, _4568255632517094241366 );
		bigint_to_string(_3590854657565215012854, 10, buffer);
		printf("trying ");
		puts("mul(88, 7185208)");
		puts(buffer);
		assert(strcmp(buffer, "632298304") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2610344396949475987483);
		bigint_free(_4568255632517094241366);
		bigint_free(_3590854657565215012854);

	

		bigint_t* _1853190660148120766216;
		bigint_t* _1117371830970616096854 = bigint(88);
		bigint_t* _2536512782492214770597 = bigint(7185208);
		bigint_t* _3733238836597634718818 = bigint_add(_1117371830970616096854, _2536512782492214770597 );
		bigint_to_string(_3733238836597634718818, 10, buffer);
		printf("trying ");
		puts("add(88, 7185208)");
		puts(buffer);
		assert(strcmp(buffer, "7185296") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1117371830970616096854);
		bigint_free(_2536512782492214770597);
		bigint_free(_3733238836597634718818);

	

		bigint_t* _4250153652649349103612;
		bigint_t* _3056388973044832708321 = bigint(88);
		bigint_t* _857630560297429195073 = bigint(7185208);
		bigint_t* _2592204459470463619129 = bigint_sub(_3056388973044832708321, _857630560297429195073 );
		bigint_to_string(_2592204459470463619129, 10, buffer);
		printf("trying ");
		puts("sub(88, 7185208)");
		puts(buffer);
		assert(strcmp(buffer, "-7185120") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3056388973044832708321);
		bigint_free(_857630560297429195073);
		bigint_free(_2592204459470463619129);

	

		bigint_t* _836701636177251737186;
		bigint_t* _116565737091413373551 = bigint(-247);
		bigint_t* _9593291254895093782 = bigint(10594536);
		bigint_t* _1050437317932542092294 = bigint_mul(_116565737091413373551, _9593291254895093782 );
		bigint_to_string(_1050437317932542092294, 10, buffer);
		printf("trying ");
		puts("mul(-247, 10594536)");
		puts(buffer);
		assert(strcmp(buffer, "-2616850392") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_116565737091413373551);
		bigint_free(_9593291254895093782);
		bigint_free(_1050437317932542092294);

	

		bigint_t* _2419532864732213645904;
		bigint_t* _1803356923478617531212 = bigint(-247);
		bigint_t* _2710549109641575243969 = bigint(10594536);
		bigint_t* _1451066094626121286860 = bigint_add(_1803356923478617531212, _2710549109641575243969 );
		bigint_to_string(_1451066094626121286860, 10, buffer);
		printf("trying ");
		puts("add(-247, 10594536)");
		puts(buffer);
		assert(strcmp(buffer, "10594289") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1803356923478617531212);
		bigint_free(_2710549109641575243969);
		bigint_free(_1451066094626121286860);

	

		bigint_t* _536521322324174410045;
		bigint_t* _3546161115318162953882 = bigint(-247);
		bigint_t* _1424880888088498495222 = bigint(10594536);
		bigint_t* _2094113462642513667303 = bigint_sub(_3546161115318162953882, _1424880888088498495222 );
		bigint_to_string(_2094113462642513667303, 10, buffer);
		printf("trying ");
		puts("sub(-247, 10594536)");
		puts(buffer);
		assert(strcmp(buffer, "-10594783") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3546161115318162953882);
		bigint_free(_1424880888088498495222);
		bigint_free(_2094113462642513667303);

	

		bigint_t* _2977065087163322597547;
		bigint_t* _3936907929003852657142 = bigint(-203);
		bigint_t* _1678000136847255433616 = bigint(-1075824);
		bigint_t* _4510078993531457251794 = bigint_mul(_3936907929003852657142, _1678000136847255433616 );
		bigint_to_string(_4510078993531457251794, 10, buffer);
		printf("trying ");
		puts("mul(-203, -1075824)");
		puts(buffer);
		assert(strcmp(buffer, "218392272") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3936907929003852657142);
		bigint_free(_1678000136847255433616);
		bigint_free(_4510078993531457251794);

	

		bigint_t* _2325312439560339507778;
		bigint_t* _2438000867853457458106 = bigint(-203);
		bigint_t* _3514316819846701626275 = bigint(-1075824);
		bigint_t* _2437429403572897030872 = bigint_add(_2438000867853457458106, _3514316819846701626275 );
		bigint_to_string(_2437429403572897030872, 10, buffer);
		printf("trying ");
		puts("add(-203, -1075824)");
		puts(buffer);
		assert(strcmp(buffer, "-1076027") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2438000867853457458106);
		bigint_free(_3514316819846701626275);
		bigint_free(_2437429403572897030872);

	

		bigint_t* _2051019591149048441365;
		bigint_t* _4446891512107760408557 = bigint(-203);
		bigint_t* _4270347620396515617734 = bigint(-1075824);
		bigint_t* _270141474535148297726 = bigint_sub(_4446891512107760408557, _4270347620396515617734 );
		bigint_to_string(_270141474535148297726, 10, buffer);
		printf("trying ");
		puts("sub(-203, -1075824)");
		puts(buffer);
		assert(strcmp(buffer, "1075621") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4446891512107760408557);
		bigint_free(_4270347620396515617734);
		bigint_free(_270141474535148297726);

	

		bigint_t* _1882719966013608844833;
		bigint_t* _4054705602458222473680 = bigint(-99);
		bigint_t* _682100394024148248353 = bigint(16589840);
		bigint_t* _3581267590532265855030 = bigint_mul(_4054705602458222473680, _682100394024148248353 );
		bigint_to_string(_3581267590532265855030, 10, buffer);
		printf("trying ");
		puts("mul(-99, 16589840)");
		puts(buffer);
		assert(strcmp(buffer, "-1642394160") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4054705602458222473680);
		bigint_free(_682100394024148248353);
		bigint_free(_3581267590532265855030);

	

		bigint_t* _3206811465621143616730;
		bigint_t* _3287880782248550565180 = bigint(-99);
		bigint_t* _1961567073584814265884 = bigint(16589840);
		bigint_t* _1685193006499788543494 = bigint_add(_3287880782248550565180, _1961567073584814265884 );
		bigint_to_string(_1685193006499788543494, 10, buffer);
		printf("trying ");
		puts("add(-99, 16589840)");
		puts(buffer);
		assert(strcmp(buffer, "16589741") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3287880782248550565180);
		bigint_free(_1961567073584814265884);
		bigint_free(_1685193006499788543494);

	

		bigint_t* _784680019469649799914;
		bigint_t* _1758288909476926825059 = bigint(-99);
		bigint_t* _4259822870122802678755 = bigint(16589840);
		bigint_t* _4118731070952358515862 = bigint_sub(_1758288909476926825059, _4259822870122802678755 );
		bigint_to_string(_4118731070952358515862, 10, buffer);
		printf("trying ");
		puts("sub(-99, 16589840)");
		puts(buffer);
		assert(strcmp(buffer, "-16589939") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1758288909476926825059);
		bigint_free(_4259822870122802678755);
		bigint_free(_4118731070952358515862);

	

		bigint_t* _1637325829064849768871;
		bigint_t* _913168195121825445102 = bigint(100);
		bigint_t* _3570478066637609775783 = bigint(1288064);
		bigint_t* _2702286979098601804508 = bigint_mul(_913168195121825445102, _3570478066637609775783 );
		bigint_to_string(_2702286979098601804508, 10, buffer);
		printf("trying ");
		puts("mul(100, 1288064)");
		puts(buffer);
		assert(strcmp(buffer, "128806400") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_913168195121825445102);
		bigint_free(_3570478066637609775783);
		bigint_free(_2702286979098601804508);

	

		bigint_t* _143006191114511351537;
		bigint_t* _637664786143871898732 = bigint(100);
		bigint_t* _241780782187113611407 = bigint(1288064);
		bigint_t* _4468465011361252055881 = bigint_add(_637664786143871898732, _241780782187113611407 );
		bigint_to_string(_4468465011361252055881, 10, buffer);
		printf("trying ");
		puts("add(100, 1288064)");
		puts(buffer);
		assert(strcmp(buffer, "1288164") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_637664786143871898732);
		bigint_free(_241780782187113611407);
		bigint_free(_4468465011361252055881);

	

		bigint_t* _165148519768685655875;
		bigint_t* _3110036170978667909185 = bigint(100);
		bigint_t* _3171706468726229109014 = bigint(1288064);
		bigint_t* _2933824998893203463477 = bigint_sub(_3110036170978667909185, _3171706468726229109014 );
		bigint_to_string(_2933824998893203463477, 10, buffer);
		printf("trying ");
		puts("sub(100, 1288064)");
		puts(buffer);
		assert(strcmp(buffer, "-1287964") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3110036170978667909185);
		bigint_free(_3171706468726229109014);
		bigint_free(_2933824998893203463477);

	

		bigint_t* _486483157307566722031;
		bigint_t* _2097996613730527426455 = bigint(-61);
		bigint_t* _3071832987659919552486 = bigint(9700168);
		bigint_t* _3319040691767018503812 = bigint_mul(_2097996613730527426455, _3071832987659919552486 );
		bigint_to_string(_3319040691767018503812, 10, buffer);
		printf("trying ");
		puts("mul(-61, 9700168)");
		puts(buffer);
		assert(strcmp(buffer, "-591710248") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2097996613730527426455);
		bigint_free(_3071832987659919552486);
		bigint_free(_3319040691767018503812);

	

		bigint_t* _4479116536129930794220;
		bigint_t* _1297350839985582519123 = bigint(-61);
		bigint_t* _1763155639087362278323 = bigint(9700168);
		bigint_t* _4641276621843720171669 = bigint_add(_1297350839985582519123, _1763155639087362278323 );
		bigint_to_string(_4641276621843720171669, 10, buffer);
		printf("trying ");
		puts("add(-61, 9700168)");
		puts(buffer);
		assert(strcmp(buffer, "9700107") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1297350839985582519123);
		bigint_free(_1763155639087362278323);
		bigint_free(_4641276621843720171669);

	

		bigint_t* _3020851662672772141706;
		bigint_t* _1439999002113940348707 = bigint(-61);
		bigint_t* _187857087284304921404 = bigint(9700168);
		bigint_t* _1343248512225451302036 = bigint_sub(_1439999002113940348707, _187857087284304921404 );
		bigint_to_string(_1343248512225451302036, 10, buffer);
		printf("trying ");
		puts("sub(-61, 9700168)");
		puts(buffer);
		assert(strcmp(buffer, "-9700229") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1439999002113940348707);
		bigint_free(_187857087284304921404);
		bigint_free(_1343248512225451302036);

	

		bigint_t* _4077139112716669053681;
		bigint_t* _1212819516337059669536 = bigint(-208);
		bigint_t* _5283336815797123103 = bigint(2448775);
		bigint_t* _1589598963027449612522 = bigint_mul(_1212819516337059669536, _5283336815797123103 );
		bigint_to_string(_1589598963027449612522, 10, buffer);
		printf("trying ");
		puts("mul(-208, 2448775)");
		puts(buffer);
		assert(strcmp(buffer, "-509345200") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1212819516337059669536);
		bigint_free(_5283336815797123103);
		bigint_free(_1589598963027449612522);

	

		bigint_t* _411603832957795559450;
		bigint_t* _333857633012248467412 = bigint(-208);
		bigint_t* _1248762908759627682912 = bigint(2448775);
		bigint_t* _4070352395223595840851 = bigint_add(_333857633012248467412, _1248762908759627682912 );
		bigint_to_string(_4070352395223595840851, 10, buffer);
		printf("trying ");
		puts("add(-208, 2448775)");
		puts(buffer);
		assert(strcmp(buffer, "2448567") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_333857633012248467412);
		bigint_free(_1248762908759627682912);
		bigint_free(_4070352395223595840851);

	

		bigint_t* _3792770244256276923643;
		bigint_t* _2449396033786411261844 = bigint(-208);
		bigint_t* _3716708068644724211110 = bigint(2448775);
		bigint_t* _2770716731044991990059 = bigint_sub(_2449396033786411261844, _3716708068644724211110 );
		bigint_to_string(_2770716731044991990059, 10, buffer);
		printf("trying ");
		puts("sub(-208, 2448775)");
		puts(buffer);
		assert(strcmp(buffer, "-2448983") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2449396033786411261844);
		bigint_free(_3716708068644724211110);
		bigint_free(_2770716731044991990059);

	

		bigint_t* _2704810238964765320989;
		bigint_t* _508019820537866221030 = bigint(-148);
		bigint_t* _3197638887878210093706 = bigint(-14192854);
		bigint_t* _482512617730800985094 = bigint_mul(_508019820537866221030, _3197638887878210093706 );
		bigint_to_string(_482512617730800985094, 10, buffer);
		printf("trying ");
		puts("mul(-148, -14192854)");
		puts(buffer);
		assert(strcmp(buffer, "2100542392") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_508019820537866221030);
		bigint_free(_3197638887878210093706);
		bigint_free(_482512617730800985094);

	

		bigint_t* _4238289792759340602479;
		bigint_t* _4159309732891017504944 = bigint(-148);
		bigint_t* _4044232931568270074551 = bigint(-14192854);
		bigint_t* _210972176342991472527 = bigint_add(_4159309732891017504944, _4044232931568270074551 );
		bigint_to_string(_210972176342991472527, 10, buffer);
		printf("trying ");
		puts("add(-148, -14192854)");
		puts(buffer);
		assert(strcmp(buffer, "-14193002") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4159309732891017504944);
		bigint_free(_4044232931568270074551);
		bigint_free(_210972176342991472527);

	

		bigint_t* _496258354653728093172;
		bigint_t* _516885475723548871758 = bigint(-148);
		bigint_t* _4295632318319876183989 = bigint(-14192854);
		bigint_t* _2995855496122091071049 = bigint_sub(_516885475723548871758, _4295632318319876183989 );
		bigint_to_string(_2995855496122091071049, 10, buffer);
		printf("trying ");
		puts("sub(-148, -14192854)");
		puts(buffer);
		assert(strcmp(buffer, "14192706") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_516885475723548871758);
		bigint_free(_4295632318319876183989);
		bigint_free(_2995855496122091071049);

	

		bigint_t* _329216484182747536203;
		bigint_t* _3011243684867863257207 = bigint(102);
		bigint_t* _4079688975143886914171 = bigint(4660037);
		bigint_t* _3761484428439620720973 = bigint_mul(_3011243684867863257207, _4079688975143886914171 );
		bigint_to_string(_3761484428439620720973, 10, buffer);
		printf("trying ");
		puts("mul(102, 4660037)");
		puts(buffer);
		assert(strcmp(buffer, "475323774") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3011243684867863257207);
		bigint_free(_4079688975143886914171);
		bigint_free(_3761484428439620720973);

	

		bigint_t* _4688350983726818534667;
		bigint_t* _1547488556230250399462 = bigint(102);
		bigint_t* _3017348789276695350168 = bigint(4660037);
		bigint_t* _3271386306941103647863 = bigint_add(_1547488556230250399462, _3017348789276695350168 );
		bigint_to_string(_3271386306941103647863, 10, buffer);
		printf("trying ");
		puts("add(102, 4660037)");
		puts(buffer);
		assert(strcmp(buffer, "4660139") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1547488556230250399462);
		bigint_free(_3017348789276695350168);
		bigint_free(_3271386306941103647863);

	

		bigint_t* _3126782832278989277097;
		bigint_t* _2121741740019104260005 = bigint(102);
		bigint_t* _3145031548343760648259 = bigint(4660037);
		bigint_t* _1843159059261867381724 = bigint_sub(_2121741740019104260005, _3145031548343760648259 );
		bigint_to_string(_1843159059261867381724, 10, buffer);
		printf("trying ");
		puts("sub(102, 4660037)");
		puts(buffer);
		assert(strcmp(buffer, "-4659935") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2121741740019104260005);
		bigint_free(_3145031548343760648259);
		bigint_free(_1843159059261867381724);

	

		bigint_t* _4299839300317692710938;
		bigint_t* _3301398548937413068411 = bigint(122);
		bigint_t* _2531804296713720765010 = bigint(-12060573);
		bigint_t* _4559702420463686810272 = bigint_mul(_3301398548937413068411, _2531804296713720765010 );
		bigint_to_string(_4559702420463686810272, 10, buffer);
		printf("trying ");
		puts("mul(122, -12060573)");
		puts(buffer);
		assert(strcmp(buffer, "-1471389906") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3301398548937413068411);
		bigint_free(_2531804296713720765010);
		bigint_free(_4559702420463686810272);

	

		bigint_t* _1671232694772419973360;
		bigint_t* _4437067629799932350160 = bigint(122);
		bigint_t* _468377213014451643972 = bigint(-12060573);
		bigint_t* _4439864254896284008026 = bigint_add(_4437067629799932350160, _468377213014451643972 );
		bigint_to_string(_4439864254896284008026, 10, buffer);
		printf("trying ");
		puts("add(122, -12060573)");
		puts(buffer);
		assert(strcmp(buffer, "-12060451") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4437067629799932350160);
		bigint_free(_468377213014451643972);
		bigint_free(_4439864254896284008026);

	

		bigint_t* _1692463703662303851040;
		bigint_t* _2799123495961187664399 = bigint(122);
		bigint_t* _1696404857371305639289 = bigint(-12060573);
		bigint_t* _1188179455436174288627 = bigint_sub(_2799123495961187664399, _1696404857371305639289 );
		bigint_to_string(_1188179455436174288627, 10, buffer);
		printf("trying ");
		puts("sub(122, -12060573)");
		puts(buffer);
		assert(strcmp(buffer, "12060695") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2799123495961187664399);
		bigint_free(_1696404857371305639289);
		bigint_free(_1188179455436174288627);

	

		bigint_t* _1435779130779940975172;
		bigint_t* _4512333815907426464114 = bigint(182);
		bigint_t* _2240466347990944987107 = bigint(11644292);
		bigint_t* _835544239438133127492 = bigint_mul(_4512333815907426464114, _2240466347990944987107 );
		bigint_to_string(_835544239438133127492, 10, buffer);
		printf("trying ");
		puts("mul(182, 11644292)");
		puts(buffer);
		assert(strcmp(buffer, "2119261144") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4512333815907426464114);
		bigint_free(_2240466347990944987107);
		bigint_free(_835544239438133127492);

	

		bigint_t* _83594447220349842421;
		bigint_t* _4255362964270257000826 = bigint(182);
		bigint_t* _679916644301357371647 = bigint(11644292);
		bigint_t* _4405716115060457607388 = bigint_add(_4255362964270257000826, _679916644301357371647 );
		bigint_to_string(_4405716115060457607388, 10, buffer);
		printf("trying ");
		puts("add(182, 11644292)");
		puts(buffer);
		assert(strcmp(buffer, "11644474") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4255362964270257000826);
		bigint_free(_679916644301357371647);
		bigint_free(_4405716115060457607388);

	

		bigint_t* _1394850665325672092942;
		bigint_t* _3437446971525036900450 = bigint(182);
		bigint_t* _1846335967874196305310 = bigint(11644292);
		bigint_t* _1316646422328375721652 = bigint_sub(_3437446971525036900450, _1846335967874196305310 );
		bigint_to_string(_1316646422328375721652, 10, buffer);
		printf("trying ");
		puts("sub(182, 11644292)");
		puts(buffer);
		assert(strcmp(buffer, "-11644110") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3437446971525036900450);
		bigint_free(_1846335967874196305310);
		bigint_free(_1316646422328375721652);

	

		bigint_t* _4322085696715044582883;
		bigint_t* _2547322470036159408669 = bigint(-118);
		bigint_t* _1731369196772299435355 = bigint(-6028748);
		bigint_t* _1433107669423735469467 = bigint_mul(_2547322470036159408669, _1731369196772299435355 );
		bigint_to_string(_1433107669423735469467, 10, buffer);
		printf("trying ");
		puts("mul(-118, -6028748)");
		puts(buffer);
		assert(strcmp(buffer, "711392264") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2547322470036159408669);
		bigint_free(_1731369196772299435355);
		bigint_free(_1433107669423735469467);

	

		bigint_t* _2438587058823674566785;
		bigint_t* _4246393629027105618754 = bigint(-118);
		bigint_t* _3260622638842757045982 = bigint(-6028748);
		bigint_t* _4207821672519848534370 = bigint_add(_4246393629027105618754, _3260622638842757045982 );
		bigint_to_string(_4207821672519848534370, 10, buffer);
		printf("trying ");
		puts("add(-118, -6028748)");
		puts(buffer);
		assert(strcmp(buffer, "-6028866") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4246393629027105618754);
		bigint_free(_3260622638842757045982);
		bigint_free(_4207821672519848534370);

	

		bigint_t* _126325104181684794176;
		bigint_t* _1079371799319516513744 = bigint(-118);
		bigint_t* _2052905999385191454336 = bigint(-6028748);
		bigint_t* _2459044119990243561308 = bigint_sub(_1079371799319516513744, _2052905999385191454336 );
		bigint_to_string(_2459044119990243561308, 10, buffer);
		printf("trying ");
		puts("sub(-118, -6028748)");
		puts(buffer);
		assert(strcmp(buffer, "6028630") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1079371799319516513744);
		bigint_free(_2052905999385191454336);
		bigint_free(_2459044119990243561308);

	

		bigint_t* _3967064485751490677080;
		bigint_t* _4229828123132242646951 = bigint(62);
		bigint_t* _1560610436429895679761 = bigint(2538190);
		bigint_t* _1962960580926861655715 = bigint_mul(_4229828123132242646951, _1560610436429895679761 );
		bigint_to_string(_1962960580926861655715, 10, buffer);
		printf("trying ");
		puts("mul(62, 2538190)");
		puts(buffer);
		assert(strcmp(buffer, "157367780") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4229828123132242646951);
		bigint_free(_1560610436429895679761);
		bigint_free(_1962960580926861655715);

	

		bigint_t* _4560774037760411074370;
		bigint_t* _4513805854278236680877 = bigint(62);
		bigint_t* _2202846655296053420072 = bigint(2538190);
		bigint_t* _446177366902986877000 = bigint_add(_4513805854278236680877, _2202846655296053420072 );
		bigint_to_string(_446177366902986877000, 10, buffer);
		printf("trying ");
		puts("add(62, 2538190)");
		puts(buffer);
		assert(strcmp(buffer, "2538252") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4513805854278236680877);
		bigint_free(_2202846655296053420072);
		bigint_free(_446177366902986877000);

	

		bigint_t* _3320063417162600846429;
		bigint_t* _4424486867199804793488 = bigint(62);
		bigint_t* _2311478842291311408739 = bigint(2538190);
		bigint_t* _2876814898425813040669 = bigint_sub(_4424486867199804793488, _2311478842291311408739 );
		bigint_to_string(_2876814898425813040669, 10, buffer);
		printf("trying ");
		puts("sub(62, 2538190)");
		puts(buffer);
		assert(strcmp(buffer, "-2538128") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4424486867199804793488);
		bigint_free(_2311478842291311408739);
		bigint_free(_2876814898425813040669);

	

		bigint_t* _3104728385730078551698;
		bigint_t* _1434595633374241957461 = bigint(-109);
		bigint_t* _2443106326456024462188 = bigint(-16306014);
		bigint_t* _2998627271981359305769 = bigint_mul(_1434595633374241957461, _2443106326456024462188 );
		bigint_to_string(_2998627271981359305769, 10, buffer);
		printf("trying ");
		puts("mul(-109, -16306014)");
		puts(buffer);
		assert(strcmp(buffer, "1777355526") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1434595633374241957461);
		bigint_free(_2443106326456024462188);
		bigint_free(_2998627271981359305769);

	

		bigint_t* _3054348120347080844503;
		bigint_t* _3156788548787650726881 = bigint(-109);
		bigint_t* _3481377788490188141236 = bigint(-16306014);
		bigint_t* _2054966741529095093696 = bigint_add(_3156788548787650726881, _3481377788490188141236 );
		bigint_to_string(_2054966741529095093696, 10, buffer);
		printf("trying ");
		puts("add(-109, -16306014)");
		puts(buffer);
		assert(strcmp(buffer, "-16306123") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3156788548787650726881);
		bigint_free(_3481377788490188141236);
		bigint_free(_2054966741529095093696);

	

		bigint_t* _4704917290951626798797;
		bigint_t* _3904998510326875650677 = bigint(-109);
		bigint_t* _3948636642757136780787 = bigint(-16306014);
		bigint_t* _2733188768092770583533 = bigint_sub(_3904998510326875650677, _3948636642757136780787 );
		bigint_to_string(_2733188768092770583533, 10, buffer);
		printf("trying ");
		puts("sub(-109, -16306014)");
		puts(buffer);
		assert(strcmp(buffer, "16305905") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3904998510326875650677);
		bigint_free(_3948636642757136780787);
		bigint_free(_2733188768092770583533);

	

		bigint_t* _513319464965884924997;
		bigint_t* _742398939743832427123 = bigint(-61);
		bigint_t* _1577862135885324531014 = bigint(15983942);
		bigint_t* _4184528306034371444735 = bigint_mul(_742398939743832427123, _1577862135885324531014 );
		bigint_to_string(_4184528306034371444735, 10, buffer);
		printf("trying ");
		puts("mul(-61, 15983942)");
		puts(buffer);
		assert(strcmp(buffer, "-975020462") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_742398939743832427123);
		bigint_free(_1577862135885324531014);
		bigint_free(_4184528306034371444735);

	

		bigint_t* _3401884262905213344217;
		bigint_t* _4672733381895697051560 = bigint(-61);
		bigint_t* _2884328823500941725095 = bigint(15983942);
		bigint_t* _20015937099108602223 = bigint_add(_4672733381895697051560, _2884328823500941725095 );
		bigint_to_string(_20015937099108602223, 10, buffer);
		printf("trying ");
		puts("add(-61, 15983942)");
		puts(buffer);
		assert(strcmp(buffer, "15983881") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4672733381895697051560);
		bigint_free(_2884328823500941725095);
		bigint_free(_20015937099108602223);

	

		bigint_t* _2080239887744163601727;
		bigint_t* _1894648220462518975571 = bigint(-61);
		bigint_t* _4261747565987451938902 = bigint(15983942);
		bigint_t* _896223537486411265007 = bigint_sub(_1894648220462518975571, _4261747565987451938902 );
		bigint_to_string(_896223537486411265007, 10, buffer);
		printf("trying ");
		puts("sub(-61, 15983942)");
		puts(buffer);
		assert(strcmp(buffer, "-15984003") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1894648220462518975571);
		bigint_free(_4261747565987451938902);
		bigint_free(_896223537486411265007);

	

		bigint_t* _3717210609749012973004;
		bigint_t* _1217741401506308261377 = bigint(-131);
		bigint_t* _2155423051209625006828 = bigint(2077178);
		bigint_t* _2683395892747110765424 = bigint_mul(_1217741401506308261377, _2155423051209625006828 );
		bigint_to_string(_2683395892747110765424, 10, buffer);
		printf("trying ");
		puts("mul(-131, 2077178)");
		puts(buffer);
		assert(strcmp(buffer, "-272110318") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1217741401506308261377);
		bigint_free(_2155423051209625006828);
		bigint_free(_2683395892747110765424);

	

		bigint_t* _4225096193382774979283;
		bigint_t* _650629551326517618575 = bigint(-131);
		bigint_t* _194343469399681519150 = bigint(2077178);
		bigint_t* _1102771310842460177090 = bigint_add(_650629551326517618575, _194343469399681519150 );
		bigint_to_string(_1102771310842460177090, 10, buffer);
		printf("trying ");
		puts("add(-131, 2077178)");
		puts(buffer);
		assert(strcmp(buffer, "2077047") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_650629551326517618575);
		bigint_free(_194343469399681519150);
		bigint_free(_1102771310842460177090);

	

		bigint_t* _352777309676560848057;
		bigint_t* _3159127218379915852752 = bigint(-131);
		bigint_t* _543484981911940253895 = bigint(2077178);
		bigint_t* _3834605193969911979985 = bigint_sub(_3159127218379915852752, _543484981911940253895 );
		bigint_to_string(_3834605193969911979985, 10, buffer);
		printf("trying ");
		puts("sub(-131, 2077178)");
		puts(buffer);
		assert(strcmp(buffer, "-2077309") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3159127218379915852752);
		bigint_free(_543484981911940253895);
		bigint_free(_3834605193969911979985);

	

		bigint_t* _3503422352198643553730;
		bigint_t* _2150568654431066203344 = bigint(-110);
		bigint_t* _554911491478505288002 = bigint(242656);
		bigint_t* _1431188994845927073891 = bigint_mul(_2150568654431066203344, _554911491478505288002 );
		bigint_to_string(_1431188994845927073891, 10, buffer);
		printf("trying ");
		puts("mul(-110, 242656)");
		puts(buffer);
		assert(strcmp(buffer, "-26692160") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2150568654431066203344);
		bigint_free(_554911491478505288002);
		bigint_free(_1431188994845927073891);

	

		bigint_t* _4646382391048868055314;
		bigint_t* _972803877317166120304 = bigint(-110);
		bigint_t* _1119912857194652143944 = bigint(242656);
		bigint_t* _3498898259921703254658 = bigint_add(_972803877317166120304, _1119912857194652143944 );
		bigint_to_string(_3498898259921703254658, 10, buffer);
		printf("trying ");
		puts("add(-110, 242656)");
		puts(buffer);
		assert(strcmp(buffer, "242546") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_972803877317166120304);
		bigint_free(_1119912857194652143944);
		bigint_free(_3498898259921703254658);

	

		bigint_t* _4406879247237420430506;
		bigint_t* _2037437929949284039193 = bigint(-110);
		bigint_t* _3965609127840916193074 = bigint(242656);
		bigint_t* _400217559530969177421 = bigint_sub(_2037437929949284039193, _3965609127840916193074 );
		bigint_to_string(_400217559530969177421, 10, buffer);
		printf("trying ");
		puts("sub(-110, 242656)");
		puts(buffer);
		assert(strcmp(buffer, "-242766") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2037437929949284039193);
		bigint_free(_3965609127840916193074);
		bigint_free(_400217559530969177421);

	

		bigint_t* _502709552196358007147;
		bigint_t* _712243332419551008351 = bigint(-154);
		bigint_t* _2199911724907520532885 = bigint(-15641377);
		bigint_t* _1226574904162734908050 = bigint_mul(_712243332419551008351, _2199911724907520532885 );
		bigint_to_string(_1226574904162734908050, 10, buffer);
		printf("trying ");
		puts("mul(-154, -15641377)");
		puts(buffer);
		assert(strcmp(buffer, "2408772058") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_712243332419551008351);
		bigint_free(_2199911724907520532885);
		bigint_free(_1226574904162734908050);

	

		bigint_t* _4696238649470313729952;
		bigint_t* _1934489728314951742329 = bigint(-154);
		bigint_t* _800945359841863607259 = bigint(-15641377);
		bigint_t* _4495976103491721717707 = bigint_add(_1934489728314951742329, _800945359841863607259 );
		bigint_to_string(_4495976103491721717707, 10, buffer);
		printf("trying ");
		puts("add(-154, -15641377)");
		puts(buffer);
		assert(strcmp(buffer, "-15641531") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1934489728314951742329);
		bigint_free(_800945359841863607259);
		bigint_free(_4495976103491721717707);

	

		bigint_t* _3697739770271671030770;
		bigint_t* _3632159767419176670562 = bigint(-154);
		bigint_t* _82725228957529725817 = bigint(-15641377);
		bigint_t* _2678434397686814472694 = bigint_sub(_3632159767419176670562, _82725228957529725817 );
		bigint_to_string(_2678434397686814472694, 10, buffer);
		printf("trying ");
		puts("sub(-154, -15641377)");
		puts(buffer);
		assert(strcmp(buffer, "15641223") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3632159767419176670562);
		bigint_free(_82725228957529725817);
		bigint_free(_2678434397686814472694);

	

		bigint_t* _3446362661688605367992;
		bigint_t* _3629735446875451624403 = bigint(-104);
		bigint_t* _3941593574900942673838 = bigint(-887393);
		bigint_t* _3658721776749035197314 = bigint_mul(_3629735446875451624403, _3941593574900942673838 );
		bigint_to_string(_3658721776749035197314, 10, buffer);
		printf("trying ");
		puts("mul(-104, -887393)");
		puts(buffer);
		assert(strcmp(buffer, "92288872") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3629735446875451624403);
		bigint_free(_3941593574900942673838);
		bigint_free(_3658721776749035197314);

	

		bigint_t* _1754007796147518046536;
		bigint_t* _4149219325899203460505 = bigint(-104);
		bigint_t* _3973028369618356720111 = bigint(-887393);
		bigint_t* _302349849783819659396 = bigint_add(_4149219325899203460505, _3973028369618356720111 );
		bigint_to_string(_302349849783819659396, 10, buffer);
		printf("trying ");
		puts("add(-104, -887393)");
		puts(buffer);
		assert(strcmp(buffer, "-887497") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4149219325899203460505);
		bigint_free(_3973028369618356720111);
		bigint_free(_302349849783819659396);

	

		bigint_t* _2574816894779213546937;
		bigint_t* _3821521366891754385154 = bigint(-104);
		bigint_t* _2589125442941364759732 = bigint(-887393);
		bigint_t* _1220054055895677342358 = bigint_sub(_3821521366891754385154, _2589125442941364759732 );
		bigint_to_string(_1220054055895677342358, 10, buffer);
		printf("trying ");
		puts("sub(-104, -887393)");
		puts(buffer);
		assert(strcmp(buffer, "887289") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3821521366891754385154);
		bigint_free(_2589125442941364759732);
		bigint_free(_1220054055895677342358);

	

		bigint_t* _2771619268390813825407;
		bigint_t* _4399699289239755726385 = bigint(-157);
		bigint_t* _2807139218718721315431 = bigint(-10902912);
		bigint_t* _984397393818367431207 = bigint_mul(_4399699289239755726385, _2807139218718721315431 );
		bigint_to_string(_984397393818367431207, 10, buffer);
		printf("trying ");
		puts("mul(-157, -10902912)");
		puts(buffer);
		assert(strcmp(buffer, "1711757184") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4399699289239755726385);
		bigint_free(_2807139218718721315431);
		bigint_free(_984397393818367431207);

	

		bigint_t* _3552048803590303033659;
		bigint_t* _1261741724488085393577 = bigint(-157);
		bigint_t* _3591308960461328216493 = bigint(-10902912);
		bigint_t* _601879018630919705214 = bigint_add(_1261741724488085393577, _3591308960461328216493 );
		bigint_to_string(_601879018630919705214, 10, buffer);
		printf("trying ");
		puts("add(-157, -10902912)");
		puts(buffer);
		assert(strcmp(buffer, "-10903069") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1261741724488085393577);
		bigint_free(_3591308960461328216493);
		bigint_free(_601879018630919705214);

	

		bigint_t* _540114284464826597362;
		bigint_t* _2962187524758888277149 = bigint(-157);
		bigint_t* _3759847169909150478014 = bigint(-10902912);
		bigint_t* _3243636992538094286666 = bigint_sub(_2962187524758888277149, _3759847169909150478014 );
		bigint_to_string(_3243636992538094286666, 10, buffer);
		printf("trying ");
		puts("sub(-157, -10902912)");
		puts(buffer);
		assert(strcmp(buffer, "10902755") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2962187524758888277149);
		bigint_free(_3759847169909150478014);
		bigint_free(_3243636992538094286666);

	

		bigint_t* _2695120651897954072526;
		bigint_t* _4134807308917392367226 = bigint(115);
		bigint_t* _2346466085235988396877 = bigint(2833034);
		bigint_t* _2191435662420516417068 = bigint_mul(_4134807308917392367226, _2346466085235988396877 );
		bigint_to_string(_2191435662420516417068, 10, buffer);
		printf("trying ");
		puts("mul(115, 2833034)");
		puts(buffer);
		assert(strcmp(buffer, "325798910") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4134807308917392367226);
		bigint_free(_2346466085235988396877);
		bigint_free(_2191435662420516417068);

	

		bigint_t* _891520364168695573929;
		bigint_t* _1633153872178875876764 = bigint(115);
		bigint_t* _3417231879108997552134 = bigint(2833034);
		bigint_t* _976970365148602245492 = bigint_add(_1633153872178875876764, _3417231879108997552134 );
		bigint_to_string(_976970365148602245492, 10, buffer);
		printf("trying ");
		puts("add(115, 2833034)");
		puts(buffer);
		assert(strcmp(buffer, "2833149") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1633153872178875876764);
		bigint_free(_3417231879108997552134);
		bigint_free(_976970365148602245492);

	

		bigint_t* _164822829380473849017;
		bigint_t* _3165865455914534502268 = bigint(115);
		bigint_t* _4032992476486038464466 = bigint(2833034);
		bigint_t* _1854221174823161356027 = bigint_sub(_3165865455914534502268, _4032992476486038464466 );
		bigint_to_string(_1854221174823161356027, 10, buffer);
		printf("trying ");
		puts("sub(115, 2833034)");
		puts(buffer);
		assert(strcmp(buffer, "-2832919") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3165865455914534502268);
		bigint_free(_4032992476486038464466);
		bigint_free(_1854221174823161356027);

	

		bigint_t* _3871725844584385286285;
		bigint_t* _1708081838083553384712 = bigint(-229);
		bigint_t* _2619446567575241458951 = bigint(-11058284);
		bigint_t* _1046292609907701650737 = bigint_mul(_1708081838083553384712, _2619446567575241458951 );
		bigint_to_string(_1046292609907701650737, 10, buffer);
		printf("trying ");
		puts("mul(-229, -11058284)");
		puts(buffer);
		assert(strcmp(buffer, "2532347036") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1708081838083553384712);
		bigint_free(_2619446567575241458951);
		bigint_free(_1046292609907701650737);

	

		bigint_t* _4155087796723805968610;
		bigint_t* _1337928021200153091043 = bigint(-229);
		bigint_t* _4501312536642098850293 = bigint(-11058284);
		bigint_t* _3524933558349895477772 = bigint_add(_1337928021200153091043, _4501312536642098850293 );
		bigint_to_string(_3524933558349895477772, 10, buffer);
		printf("trying ");
		puts("add(-229, -11058284)");
		puts(buffer);
		assert(strcmp(buffer, "-11058513") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1337928021200153091043);
		bigint_free(_4501312536642098850293);
		bigint_free(_3524933558349895477772);

	

		bigint_t* _825169554862732787827;
		bigint_t* _3858331910613164453395 = bigint(-229);
		bigint_t* _1175004073920556138203 = bigint(-11058284);
		bigint_t* _2209462739242955252451 = bigint_sub(_3858331910613164453395, _1175004073920556138203 );
		bigint_to_string(_2209462739242955252451, 10, buffer);
		printf("trying ");
		puts("sub(-229, -11058284)");
		puts(buffer);
		assert(strcmp(buffer, "11058055") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3858331910613164453395);
		bigint_free(_1175004073920556138203);
		bigint_free(_2209462739242955252451);

	

		bigint_t* _903909433347802540018;
		bigint_t* _2499407238439607694116 = bigint(165);
		bigint_t* _287794506345190999287 = bigint(2710656);
		bigint_t* _3913858616906128335149 = bigint_mul(_2499407238439607694116, _287794506345190999287 );
		bigint_to_string(_3913858616906128335149, 10, buffer);
		printf("trying ");
		puts("mul(165, 2710656)");
		puts(buffer);
		assert(strcmp(buffer, "447258240") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2499407238439607694116);
		bigint_free(_287794506345190999287);
		bigint_free(_3913858616906128335149);

	

		bigint_t* _322194171599639860680;
		bigint_t* _2179625243341816812000 = bigint(165);
		bigint_t* _3578103359190879230477 = bigint(2710656);
		bigint_t* _3731230215659855304819 = bigint_add(_2179625243341816812000, _3578103359190879230477 );
		bigint_to_string(_3731230215659855304819, 10, buffer);
		printf("trying ");
		puts("add(165, 2710656)");
		puts(buffer);
		assert(strcmp(buffer, "2710821") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2179625243341816812000);
		bigint_free(_3578103359190879230477);
		bigint_free(_3731230215659855304819);

	

		bigint_t* _4632029951461850914025;
		bigint_t* _3874874431334546042041 = bigint(165);
		bigint_t* _4562591181577035130414 = bigint(2710656);
		bigint_t* _1601247405714278984489 = bigint_sub(_3874874431334546042041, _4562591181577035130414 );
		bigint_to_string(_1601247405714278984489, 10, buffer);
		printf("trying ");
		puts("sub(165, 2710656)");
		puts(buffer);
		assert(strcmp(buffer, "-2710491") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3874874431334546042041);
		bigint_free(_4562591181577035130414);
		bigint_free(_1601247405714278984489);

	

		bigint_t* _3863986738457359153472;
		bigint_t* _2304752290427969940017 = bigint(99);
		bigint_t* _4481863622351790565095 = bigint(-2257147);
		bigint_t* _234993183096325446021 = bigint_mul(_2304752290427969940017, _4481863622351790565095 );
		bigint_to_string(_234993183096325446021, 10, buffer);
		printf("trying ");
		puts("mul(99, -2257147)");
		puts(buffer);
		assert(strcmp(buffer, "-223457553") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2304752290427969940017);
		bigint_free(_4481863622351790565095);
		bigint_free(_234993183096325446021);

	

		bigint_t* _3352412225494679174859;
		bigint_t* _1517693328587059773491 = bigint(99);
		bigint_t* _519720825319167414542 = bigint(-2257147);
		bigint_t* _3639225930208430026330 = bigint_add(_1517693328587059773491, _519720825319167414542 );
		bigint_to_string(_3639225930208430026330, 10, buffer);
		printf("trying ");
		puts("add(99, -2257147)");
		puts(buffer);
		assert(strcmp(buffer, "-2257048") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1517693328587059773491);
		bigint_free(_519720825319167414542);
		bigint_free(_3639225930208430026330);

	

		bigint_t* _2469144229624591409517;
		bigint_t* _2240420464013683481274 = bigint(99);
		bigint_t* _3783012421548248825235 = bigint(-2257147);
		bigint_t* _3711553538001730653449 = bigint_sub(_2240420464013683481274, _3783012421548248825235 );
		bigint_to_string(_3711553538001730653449, 10, buffer);
		printf("trying ");
		puts("sub(99, -2257147)");
		puts(buffer);
		assert(strcmp(buffer, "2257246") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2240420464013683481274);
		bigint_free(_3783012421548248825235);
		bigint_free(_3711553538001730653449);

	

		bigint_t* _619605160830974498879;
		bigint_t* _860809789430221726527 = bigint(24);
		bigint_t* _1903190008960677262736 = bigint(-14972941);
		bigint_t* _4332701313419143880029 = bigint_mul(_860809789430221726527, _1903190008960677262736 );
		bigint_to_string(_4332701313419143880029, 10, buffer);
		printf("trying ");
		puts("mul(24, -14972941)");
		puts(buffer);
		assert(strcmp(buffer, "-359350584") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_860809789430221726527);
		bigint_free(_1903190008960677262736);
		bigint_free(_4332701313419143880029);

	

		bigint_t* _1600020870648310516668;
		bigint_t* _2934617475171992709086 = bigint(24);
		bigint_t* _3960411165493289014604 = bigint(-14972941);
		bigint_t* _703151209578412260722 = bigint_add(_2934617475171992709086, _3960411165493289014604 );
		bigint_to_string(_703151209578412260722, 10, buffer);
		printf("trying ");
		puts("add(24, -14972941)");
		puts(buffer);
		assert(strcmp(buffer, "-14972917") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2934617475171992709086);
		bigint_free(_3960411165493289014604);
		bigint_free(_703151209578412260722);

	

		bigint_t* _4380249669206773746686;
		bigint_t* _3022454875998923666933 = bigint(24);
		bigint_t* _1023442099306961665286 = bigint(-14972941);
		bigint_t* _1633144286065409174671 = bigint_sub(_3022454875998923666933, _1023442099306961665286 );
		bigint_to_string(_1633144286065409174671, 10, buffer);
		printf("trying ");
		puts("sub(24, -14972941)");
		puts(buffer);
		assert(strcmp(buffer, "14972965") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3022454875998923666933);
		bigint_free(_1023442099306961665286);
		bigint_free(_1633144286065409174671);

	

		bigint_t* _3217273879845011899801;
		bigint_t* _2373477812763275663209 = bigint(-39);
		bigint_t* _3668542396944453781824 = bigint(3731217);
		bigint_t* _3784227846629146558617 = bigint_mul(_2373477812763275663209, _3668542396944453781824 );
		bigint_to_string(_3784227846629146558617, 10, buffer);
		printf("trying ");
		puts("mul(-39, 3731217)");
		puts(buffer);
		assert(strcmp(buffer, "-145517463") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2373477812763275663209);
		bigint_free(_3668542396944453781824);
		bigint_free(_3784227846629146558617);

	

		bigint_t* _2847546147310326954641;
		bigint_t* _2578314698510810703014 = bigint(-39);
		bigint_t* _3241658521533363925669 = bigint(3731217);
		bigint_t* _2737431454940361985777 = bigint_add(_2578314698510810703014, _3241658521533363925669 );
		bigint_to_string(_2737431454940361985777, 10, buffer);
		printf("trying ");
		puts("add(-39, 3731217)");
		puts(buffer);
		assert(strcmp(buffer, "3731178") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2578314698510810703014);
		bigint_free(_3241658521533363925669);
		bigint_free(_2737431454940361985777);

	

		bigint_t* _1731963660662234733216;
		bigint_t* _842078395045898476993 = bigint(-39);
		bigint_t* _3552293256365579093311 = bigint(3731217);
		bigint_t* _1753353407272745033168 = bigint_sub(_842078395045898476993, _3552293256365579093311 );
		bigint_to_string(_1753353407272745033168, 10, buffer);
		printf("trying ");
		puts("sub(-39, 3731217)");
		puts(buffer);
		assert(strcmp(buffer, "-3731256") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_842078395045898476993);
		bigint_free(_3552293256365579093311);
		bigint_free(_1753353407272745033168);

	

		bigint_t* _4491955494006359282402;
		bigint_t* _2877015936503337897009 = bigint(-232);
		bigint_t* _1454359648438357181336 = bigint(-13726667);
		bigint_t* _4250088564473399438644 = bigint_mul(_2877015936503337897009, _1454359648438357181336 );
		bigint_to_string(_4250088564473399438644, 10, buffer);
		printf("trying ");
		puts("mul(-232, -13726667)");
		puts(buffer);
		assert(strcmp(buffer, "3184586744") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2877015936503337897009);
		bigint_free(_1454359648438357181336);
		bigint_free(_4250088564473399438644);

	

		bigint_t* _1244573447138019501533;
		bigint_t* _3836413352279578652897 = bigint(-232);
		bigint_t* _1000691652645336318576 = bigint(-13726667);
		bigint_t* _634461234357640597938 = bigint_add(_3836413352279578652897, _1000691652645336318576 );
		bigint_to_string(_634461234357640597938, 10, buffer);
		printf("trying ");
		puts("add(-232, -13726667)");
		puts(buffer);
		assert(strcmp(buffer, "-13726899") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3836413352279578652897);
		bigint_free(_1000691652645336318576);
		bigint_free(_634461234357640597938);

	

		bigint_t* _3173422239909636308546;
		bigint_t* _3276889647634971803136 = bigint(-232);
		bigint_t* _946443500184916728365 = bigint(-13726667);
		bigint_t* _604978879794770498354 = bigint_sub(_3276889647634971803136, _946443500184916728365 );
		bigint_to_string(_604978879794770498354, 10, buffer);
		printf("trying ");
		puts("sub(-232, -13726667)");
		puts(buffer);
		assert(strcmp(buffer, "13726435") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3276889647634971803136);
		bigint_free(_946443500184916728365);
		bigint_free(_604978879794770498354);

	

		bigint_t* _1349238957026644117333;
		bigint_t* _413201062517574747386 = bigint(-6);
		bigint_t* _255929901556801532660 = bigint(14024730);
		bigint_t* _477524604454682237136 = bigint_mul(_413201062517574747386, _255929901556801532660 );
		bigint_to_string(_477524604454682237136, 10, buffer);
		printf("trying ");
		puts("mul(-6, 14024730)");
		puts(buffer);
		assert(strcmp(buffer, "-84148380") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_413201062517574747386);
		bigint_free(_255929901556801532660);
		bigint_free(_477524604454682237136);

	

		bigint_t* _4420483067782966078985;
		bigint_t* _3569363062209385774443 = bigint(-6);
		bigint_t* _479723486170631852646 = bigint(14024730);
		bigint_t* _4424716573767376306210 = bigint_add(_3569363062209385774443, _479723486170631852646 );
		bigint_to_string(_4424716573767376306210, 10, buffer);
		printf("trying ");
		puts("add(-6, 14024730)");
		puts(buffer);
		assert(strcmp(buffer, "14024724") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3569363062209385774443);
		bigint_free(_479723486170631852646);
		bigint_free(_4424716573767376306210);

	

		bigint_t* _4380730089938966110287;
		bigint_t* _3100459346050191191864 = bigint(-6);
		bigint_t* _2012405114728912164419 = bigint(14024730);
		bigint_t* _2571543017757488397869 = bigint_sub(_3100459346050191191864, _2012405114728912164419 );
		bigint_to_string(_2571543017757488397869, 10, buffer);
		printf("trying ");
		puts("sub(-6, 14024730)");
		puts(buffer);
		assert(strcmp(buffer, "-14024736") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3100459346050191191864);
		bigint_free(_2012405114728912164419);
		bigint_free(_2571543017757488397869);

	

		bigint_t* _3471107028026107933969;
		bigint_t* _2884769945503090565631 = bigint(-114);
		bigint_t* _4523848892647325742563 = bigint(13107704);
		bigint_t* _2451662041734728507092 = bigint_mul(_2884769945503090565631, _4523848892647325742563 );
		bigint_to_string(_2451662041734728507092, 10, buffer);
		printf("trying ");
		puts("mul(-114, 13107704)");
		puts(buffer);
		assert(strcmp(buffer, "-1494278256") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2884769945503090565631);
		bigint_free(_4523848892647325742563);
		bigint_free(_2451662041734728507092);

	

		bigint_t* _3795259478260408861111;
		bigint_t* _532392555771090201479 = bigint(-114);
		bigint_t* _1313474957357876227354 = bigint(13107704);
		bigint_t* _92255712127715999915 = bigint_add(_532392555771090201479, _1313474957357876227354 );
		bigint_to_string(_92255712127715999915, 10, buffer);
		printf("trying ");
		puts("add(-114, 13107704)");
		puts(buffer);
		assert(strcmp(buffer, "13107590") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_532392555771090201479);
		bigint_free(_1313474957357876227354);
		bigint_free(_92255712127715999915);

	

		bigint_t* _4314117348348754378194;
		bigint_t* _2259696156269902482104 = bigint(-114);
		bigint_t* _2063069300585055183273 = bigint(13107704);
		bigint_t* _28295866016359278197 = bigint_sub(_2259696156269902482104, _2063069300585055183273 );
		bigint_to_string(_28295866016359278197, 10, buffer);
		printf("trying ");
		puts("sub(-114, 13107704)");
		puts(buffer);
		assert(strcmp(buffer, "-13107818") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2259696156269902482104);
		bigint_free(_2063069300585055183273);
		bigint_free(_28295866016359278197);

	

		bigint_t* _2283082794685746783342;
		bigint_t* _91122155850355053702 = bigint(-217);
		bigint_t* _1851738594958487576774 = bigint(-586174);
		bigint_t* _3467916596064069501466 = bigint_mul(_91122155850355053702, _1851738594958487576774 );
		bigint_to_string(_3467916596064069501466, 10, buffer);
		printf("trying ");
		puts("mul(-217, -586174)");
		puts(buffer);
		assert(strcmp(buffer, "127199758") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_91122155850355053702);
		bigint_free(_1851738594958487576774);
		bigint_free(_3467916596064069501466);

	

		bigint_t* _3063580866536348783747;
		bigint_t* _4459746005772563212628 = bigint(-217);
		bigint_t* _4496083797889735706561 = bigint(-586174);
		bigint_t* _2950174081254626235870 = bigint_add(_4459746005772563212628, _4496083797889735706561 );
		bigint_to_string(_2950174081254626235870, 10, buffer);
		printf("trying ");
		puts("add(-217, -586174)");
		puts(buffer);
		assert(strcmp(buffer, "-586391") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4459746005772563212628);
		bigint_free(_4496083797889735706561);
		bigint_free(_2950174081254626235870);

	

		bigint_t* _2936145318572257407997;
		bigint_t* _1963111959394887174446 = bigint(-217);
		bigint_t* _389638474151620601068 = bigint(-586174);
		bigint_t* _1424056018778625943316 = bigint_sub(_1963111959394887174446, _389638474151620601068 );
		bigint_to_string(_1424056018778625943316, 10, buffer);
		printf("trying ");
		puts("sub(-217, -586174)");
		puts(buffer);
		assert(strcmp(buffer, "585957") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1963111959394887174446);
		bigint_free(_389638474151620601068);
		bigint_free(_1424056018778625943316);

	

		bigint_t* _2387781570753130466786;
		bigint_t* _3773605989458192665536 = bigint(-226);
		bigint_t* _1927563448477552710992 = bigint(6276768);
		bigint_t* _4161513551724322403549 = bigint_mul(_3773605989458192665536, _1927563448477552710992 );
		bigint_to_string(_4161513551724322403549, 10, buffer);
		printf("trying ");
		puts("mul(-226, 6276768)");
		puts(buffer);
		assert(strcmp(buffer, "-1418549568") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3773605989458192665536);
		bigint_free(_1927563448477552710992);
		bigint_free(_4161513551724322403549);

	

		bigint_t* _3291357181374536104651;
		bigint_t* _1619089329760987539407 = bigint(-226);
		bigint_t* _3509565851451727980077 = bigint(6276768);
		bigint_t* _2623464007397061447106 = bigint_add(_1619089329760987539407, _3509565851451727980077 );
		bigint_to_string(_2623464007397061447106, 10, buffer);
		printf("trying ");
		puts("add(-226, 6276768)");
		puts(buffer);
		assert(strcmp(buffer, "6276542") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1619089329760987539407);
		bigint_free(_3509565851451727980077);
		bigint_free(_2623464007397061447106);

	

		bigint_t* _1540981019722706127687;
		bigint_t* _3704186679062057390080 = bigint(-226);
		bigint_t* _3172730497224472909350 = bigint(6276768);
		bigint_t* _3784311935426017214739 = bigint_sub(_3704186679062057390080, _3172730497224472909350 );
		bigint_to_string(_3784311935426017214739, 10, buffer);
		printf("trying ");
		puts("sub(-226, 6276768)");
		puts(buffer);
		assert(strcmp(buffer, "-6276994") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3704186679062057390080);
		bigint_free(_3172730497224472909350);
		bigint_free(_3784311935426017214739);

	

		bigint_t* _4334396398015252447749;
		bigint_t* _1031319996149050284464 = bigint(-45);
		bigint_t* _2134233653317356563605 = bigint(10864992);
		bigint_t* _461797016325153955728 = bigint_mul(_1031319996149050284464, _2134233653317356563605 );
		bigint_to_string(_461797016325153955728, 10, buffer);
		printf("trying ");
		puts("mul(-45, 10864992)");
		puts(buffer);
		assert(strcmp(buffer, "-488924640") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1031319996149050284464);
		bigint_free(_2134233653317356563605);
		bigint_free(_461797016325153955728);

	

		bigint_t* _3124917280466091123361;
		bigint_t* _4317306726652906146110 = bigint(-45);
		bigint_t* _2275000748036454732285 = bigint(10864992);
		bigint_t* _840264694404513717791 = bigint_add(_4317306726652906146110, _2275000748036454732285 );
		bigint_to_string(_840264694404513717791, 10, buffer);
		printf("trying ");
		puts("add(-45, 10864992)");
		puts(buffer);
		assert(strcmp(buffer, "10864947") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4317306726652906146110);
		bigint_free(_2275000748036454732285);
		bigint_free(_840264694404513717791);

	

		bigint_t* _4240095342737127298158;
		bigint_t* _2514053690850653002585 = bigint(-45);
		bigint_t* _2584481337369148670344 = bigint(10864992);
		bigint_t* _317209384125495285601 = bigint_sub(_2514053690850653002585, _2584481337369148670344 );
		bigint_to_string(_317209384125495285601, 10, buffer);
		printf("trying ");
		puts("sub(-45, 10864992)");
		puts(buffer);
		assert(strcmp(buffer, "-10865037") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2514053690850653002585);
		bigint_free(_2584481337369148670344);
		bigint_free(_317209384125495285601);

	

		bigint_t* _1612292984242199410489;
		bigint_t* _4249459296529925040583 = bigint(240);
		bigint_t* _2737520604464737644876 = bigint(-12289556);
		bigint_t* _4044914926855308838141 = bigint_mul(_4249459296529925040583, _2737520604464737644876 );
		bigint_to_string(_4044914926855308838141, 10, buffer);
		printf("trying ");
		puts("mul(240, -12289556)");
		puts(buffer);
		assert(strcmp(buffer, "-2949493440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4249459296529925040583);
		bigint_free(_2737520604464737644876);
		bigint_free(_4044914926855308838141);

	

		bigint_t* _3166113604797324855524;
		bigint_t* _380467451541844688566 = bigint(240);
		bigint_t* _4653616699440561191096 = bigint(-12289556);
		bigint_t* _4545423304250285762386 = bigint_add(_380467451541844688566, _4653616699440561191096 );
		bigint_to_string(_4545423304250285762386, 10, buffer);
		printf("trying ");
		puts("add(240, -12289556)");
		puts(buffer);
		assert(strcmp(buffer, "-12289316") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_380467451541844688566);
		bigint_free(_4653616699440561191096);
		bigint_free(_4545423304250285762386);

	

		bigint_t* _3969865106254035695012;
		bigint_t* _3527600205179114930873 = bigint(240);
		bigint_t* _2529949193858216631327 = bigint(-12289556);
		bigint_t* _2088005242491053191568 = bigint_sub(_3527600205179114930873, _2529949193858216631327 );
		bigint_to_string(_2088005242491053191568, 10, buffer);
		printf("trying ");
		puts("sub(240, -12289556)");
		puts(buffer);
		assert(strcmp(buffer, "12289796") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3527600205179114930873);
		bigint_free(_2529949193858216631327);
		bigint_free(_2088005242491053191568);

	

		bigint_t* _908777360198226656226;
		bigint_t* _608468186113067878660 = bigint(-132);
		bigint_t* _1961051790507102289344 = bigint(12672231);
		bigint_t* _1383170333896329598723 = bigint_mul(_608468186113067878660, _1961051790507102289344 );
		bigint_to_string(_1383170333896329598723, 10, buffer);
		printf("trying ");
		puts("mul(-132, 12672231)");
		puts(buffer);
		assert(strcmp(buffer, "-1672734492") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_608468186113067878660);
		bigint_free(_1961051790507102289344);
		bigint_free(_1383170333896329598723);

	

		bigint_t* _3991192490078924638151;
		bigint_t* _3963115828744385074727 = bigint(-132);
		bigint_t* _932131755168495726162 = bigint(12672231);
		bigint_t* _43488428552754830859 = bigint_add(_3963115828744385074727, _932131755168495726162 );
		bigint_to_string(_43488428552754830859, 10, buffer);
		printf("trying ");
		puts("add(-132, 12672231)");
		puts(buffer);
		assert(strcmp(buffer, "12672099") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3963115828744385074727);
		bigint_free(_932131755168495726162);
		bigint_free(_43488428552754830859);

	

		bigint_t* _1068969857502813231300;
		bigint_t* _805953375637912078620 = bigint(-132);
		bigint_t* _2982520239063642925126 = bigint(12672231);
		bigint_t* _2895993724968448959713 = bigint_sub(_805953375637912078620, _2982520239063642925126 );
		bigint_to_string(_2895993724968448959713, 10, buffer);
		printf("trying ");
		puts("sub(-132, 12672231)");
		puts(buffer);
		assert(strcmp(buffer, "-12672363") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_805953375637912078620);
		bigint_free(_2982520239063642925126);
		bigint_free(_2895993724968448959713);

	

		bigint_t* _3308884910001252107781;
		bigint_t* _274804194037057238769 = bigint(-129);
		bigint_t* _2149853212784241271856 = bigint(-13344466);
		bigint_t* _319771394857837920896 = bigint_mul(_274804194037057238769, _2149853212784241271856 );
		bigint_to_string(_319771394857837920896, 10, buffer);
		printf("trying ");
		puts("mul(-129, -13344466)");
		puts(buffer);
		assert(strcmp(buffer, "1721436114") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_274804194037057238769);
		bigint_free(_2149853212784241271856);
		bigint_free(_319771394857837920896);

	

		bigint_t* _3634683701861245352514;
		bigint_t* _2825533595780752239461 = bigint(-129);
		bigint_t* _3487705330343675714603 = bigint(-13344466);
		bigint_t* _4121511504321133967983 = bigint_add(_2825533595780752239461, _3487705330343675714603 );
		bigint_to_string(_4121511504321133967983, 10, buffer);
		printf("trying ");
		puts("add(-129, -13344466)");
		puts(buffer);
		assert(strcmp(buffer, "-13344595") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2825533595780752239461);
		bigint_free(_3487705330343675714603);
		bigint_free(_4121511504321133967983);

	

		bigint_t* _1787155894300362392690;
		bigint_t* _3168233803857735235945 = bigint(-129);
		bigint_t* _2699718495928546797719 = bigint(-13344466);
		bigint_t* _528720237400218216738 = bigint_sub(_3168233803857735235945, _2699718495928546797719 );
		bigint_to_string(_528720237400218216738, 10, buffer);
		printf("trying ");
		puts("sub(-129, -13344466)");
		puts(buffer);
		assert(strcmp(buffer, "13344337") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3168233803857735235945);
		bigint_free(_2699718495928546797719);
		bigint_free(_528720237400218216738);

	

		bigint_t* _1063233654327977314225;
		bigint_t* _4547893161800005230793 = bigint(-68);
		bigint_t* _55240373222914774707 = bigint(-10114794);
		bigint_t* _3086160129979791077406 = bigint_mul(_4547893161800005230793, _55240373222914774707 );
		bigint_to_string(_3086160129979791077406, 10, buffer);
		printf("trying ");
		puts("mul(-68, -10114794)");
		puts(buffer);
		assert(strcmp(buffer, "687805992") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4547893161800005230793);
		bigint_free(_55240373222914774707);
		bigint_free(_3086160129979791077406);

	

		bigint_t* _1817281349249058629920;
		bigint_t* _1554342678765275141395 = bigint(-68);
		bigint_t* _1084829440749878156634 = bigint(-10114794);
		bigint_t* _2579802175670071745467 = bigint_add(_1554342678765275141395, _1084829440749878156634 );
		bigint_to_string(_2579802175670071745467, 10, buffer);
		printf("trying ");
		puts("add(-68, -10114794)");
		puts(buffer);
		assert(strcmp(buffer, "-10114862") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1554342678765275141395);
		bigint_free(_1084829440749878156634);
		bigint_free(_2579802175670071745467);

	

		bigint_t* _4175202139171669404692;
		bigint_t* _3148553145881119015941 = bigint(-68);
		bigint_t* _1992122208240749795083 = bigint(-10114794);
		bigint_t* _1693350577435655285883 = bigint_sub(_3148553145881119015941, _1992122208240749795083 );
		bigint_to_string(_1693350577435655285883, 10, buffer);
		printf("trying ");
		puts("sub(-68, -10114794)");
		puts(buffer);
		assert(strcmp(buffer, "10114726") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3148553145881119015941);
		bigint_free(_1992122208240749795083);
		bigint_free(_1693350577435655285883);

	

		bigint_t* _1235997194824242091221;
		bigint_t* _2357717535285757123353 = bigint(-165);
		bigint_t* _4322368535325328355556 = bigint(-12524443);
		bigint_t* _2846680879014931226809 = bigint_mul(_2357717535285757123353, _4322368535325328355556 );
		bigint_to_string(_2846680879014931226809, 10, buffer);
		printf("trying ");
		puts("mul(-165, -12524443)");
		puts(buffer);
		assert(strcmp(buffer, "2066533095") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2357717535285757123353);
		bigint_free(_4322368535325328355556);
		bigint_free(_2846680879014931226809);

	

		bigint_t* _2891497953289714672389;
		bigint_t* _2979161889020457055501 = bigint(-165);
		bigint_t* _1112749897310035370994 = bigint(-12524443);
		bigint_t* _2503474357469125498472 = bigint_add(_2979161889020457055501, _1112749897310035370994 );
		bigint_to_string(_2503474357469125498472, 10, buffer);
		printf("trying ");
		puts("add(-165, -12524443)");
		puts(buffer);
		assert(strcmp(buffer, "-12524608") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2979161889020457055501);
		bigint_free(_1112749897310035370994);
		bigint_free(_2503474357469125498472);

	

		bigint_t* _3621026208469352615813;
		bigint_t* _4679999351859849471629 = bigint(-165);
		bigint_t* _3341537216549865896407 = bigint(-12524443);
		bigint_t* _1552469587561046785438 = bigint_sub(_4679999351859849471629, _3341537216549865896407 );
		bigint_to_string(_1552469587561046785438, 10, buffer);
		printf("trying ");
		puts("sub(-165, -12524443)");
		puts(buffer);
		assert(strcmp(buffer, "12524278") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4679999351859849471629);
		bigint_free(_3341537216549865896407);
		bigint_free(_1552469587561046785438);

	

		bigint_t* _3642442402232481850872;
		bigint_t* _750920055212288377260 = bigint(232);
		bigint_t* _852009053535019368078 = bigint(1796970);
		bigint_t* _2194039561986381800648 = bigint_mul(_750920055212288377260, _852009053535019368078 );
		bigint_to_string(_2194039561986381800648, 10, buffer);
		printf("trying ");
		puts("mul(232, 1796970)");
		puts(buffer);
		assert(strcmp(buffer, "416897040") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_750920055212288377260);
		bigint_free(_852009053535019368078);
		bigint_free(_2194039561986381800648);

	

		bigint_t* _4046389293145722123768;
		bigint_t* _1226558443865507500418 = bigint(232);
		bigint_t* _3989906446416422517224 = bigint(1796970);
		bigint_t* _4558833900440072594287 = bigint_add(_1226558443865507500418, _3989906446416422517224 );
		bigint_to_string(_4558833900440072594287, 10, buffer);
		printf("trying ");
		puts("add(232, 1796970)");
		puts(buffer);
		assert(strcmp(buffer, "1797202") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1226558443865507500418);
		bigint_free(_3989906446416422517224);
		bigint_free(_4558833900440072594287);

	

		bigint_t* _2899727916611642051306;
		bigint_t* _3216093748617935378047 = bigint(232);
		bigint_t* _899000433085126117911 = bigint(1796970);
		bigint_t* _3191494994097188269137 = bigint_sub(_3216093748617935378047, _899000433085126117911 );
		bigint_to_string(_3191494994097188269137, 10, buffer);
		printf("trying ");
		puts("sub(232, 1796970)");
		puts(buffer);
		assert(strcmp(buffer, "-1796738") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3216093748617935378047);
		bigint_free(_899000433085126117911);
		bigint_free(_3191494994097188269137);

	

		bigint_t* _619765965682174809890;
		bigint_t* _566568758510509199325 = bigint(-26);
		bigint_t* _351423753574021704805 = bigint(15972283);
		bigint_t* _369066775554312883396 = bigint_mul(_566568758510509199325, _351423753574021704805 );
		bigint_to_string(_369066775554312883396, 10, buffer);
		printf("trying ");
		puts("mul(-26, 15972283)");
		puts(buffer);
		assert(strcmp(buffer, "-415279358") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_566568758510509199325);
		bigint_free(_351423753574021704805);
		bigint_free(_369066775554312883396);

	

		bigint_t* _318237942344385892593;
		bigint_t* _3656196940893190029181 = bigint(-26);
		bigint_t* _863441943281102840526 = bigint(15972283);
		bigint_t* _135059913029544885704 = bigint_add(_3656196940893190029181, _863441943281102840526 );
		bigint_to_string(_135059913029544885704, 10, buffer);
		printf("trying ");
		puts("add(-26, 15972283)");
		puts(buffer);
		assert(strcmp(buffer, "15972257") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3656196940893190029181);
		bigint_free(_863441943281102840526);
		bigint_free(_135059913029544885704);

	

		bigint_t* _3796278593290028720640;
		bigint_t* _1432740111523552732124 = bigint(-26);
		bigint_t* _3739880830243072433776 = bigint(15972283);
		bigint_t* _3149930155995447367381 = bigint_sub(_1432740111523552732124, _3739880830243072433776 );
		bigint_to_string(_3149930155995447367381, 10, buffer);
		printf("trying ");
		puts("sub(-26, 15972283)");
		puts(buffer);
		assert(strcmp(buffer, "-15972309") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1432740111523552732124);
		bigint_free(_3739880830243072433776);
		bigint_free(_3149930155995447367381);

	

		bigint_t* _324542415843951053058;
		bigint_t* _4095652039849868486196 = bigint(207);
		bigint_t* _4211031734080566697327 = bigint(11812424);
		bigint_t* _3532850903382803851920 = bigint_mul(_4095652039849868486196, _4211031734080566697327 );
		bigint_to_string(_3532850903382803851920, 10, buffer);
		printf("trying ");
		puts("mul(207, 11812424)");
		puts(buffer);
		assert(strcmp(buffer, "2445171768") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4095652039849868486196);
		bigint_free(_4211031734080566697327);
		bigint_free(_3532850903382803851920);

	

		bigint_t* _3136895607483421268075;
		bigint_t* _1367899022923313926161 = bigint(207);
		bigint_t* _3398042448782631174668 = bigint(11812424);
		bigint_t* _33178399130552173574 = bigint_add(_1367899022923313926161, _3398042448782631174668 );
		bigint_to_string(_33178399130552173574, 10, buffer);
		printf("trying ");
		puts("add(207, 11812424)");
		puts(buffer);
		assert(strcmp(buffer, "11812631") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1367899022923313926161);
		bigint_free(_3398042448782631174668);
		bigint_free(_33178399130552173574);

	

		bigint_t* _3402232407801344873159;
		bigint_t* _4209625190973047954845 = bigint(207);
		bigint_t* _306033035294357045229 = bigint(11812424);
		bigint_t* _226713397365135285774 = bigint_sub(_4209625190973047954845, _306033035294357045229 );
		bigint_to_string(_226713397365135285774, 10, buffer);
		printf("trying ");
		puts("sub(207, 11812424)");
		puts(buffer);
		assert(strcmp(buffer, "-11812217") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4209625190973047954845);
		bigint_free(_306033035294357045229);
		bigint_free(_226713397365135285774);

	

		bigint_t* _4253558991915055002325;
		bigint_t* _239131985515565190716 = bigint(110);
		bigint_t* _2661199552699050893412 = bigint(4743135);
		bigint_t* _3898936034404719278283 = bigint_mul(_239131985515565190716, _2661199552699050893412 );
		bigint_to_string(_3898936034404719278283, 10, buffer);
		printf("trying ");
		puts("mul(110, 4743135)");
		puts(buffer);
		assert(strcmp(buffer, "521744850") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_239131985515565190716);
		bigint_free(_2661199552699050893412);
		bigint_free(_3898936034404719278283);

	

		bigint_t* _2762420609781519637293;
		bigint_t* _1188042131713738602369 = bigint(110);
		bigint_t* _226630429208327798183 = bigint(4743135);
		bigint_t* _1371537610943924690216 = bigint_add(_1188042131713738602369, _226630429208327798183 );
		bigint_to_string(_1371537610943924690216, 10, buffer);
		printf("trying ");
		puts("add(110, 4743135)");
		puts(buffer);
		assert(strcmp(buffer, "4743245") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1188042131713738602369);
		bigint_free(_226630429208327798183);
		bigint_free(_1371537610943924690216);

	

		bigint_t* _3005317249443621293966;
		bigint_t* _2949785593524048884307 = bigint(110);
		bigint_t* _4342672690029313238780 = bigint(4743135);
		bigint_t* _1238507760123007460199 = bigint_sub(_2949785593524048884307, _4342672690029313238780 );
		bigint_to_string(_1238507760123007460199, 10, buffer);
		printf("trying ");
		puts("sub(110, 4743135)");
		puts(buffer);
		assert(strcmp(buffer, "-4743025") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2949785593524048884307);
		bigint_free(_4342672690029313238780);
		bigint_free(_1238507760123007460199);

	

		bigint_t* _1728646865588091265384;
		bigint_t* _1313407354973817252389 = bigint(-232);
		bigint_t* _4526714771435413200199 = bigint(16723163);
		bigint_t* _2981704192333618430535 = bigint_mul(_1313407354973817252389, _4526714771435413200199 );
		bigint_to_string(_2981704192333618430535, 10, buffer);
		printf("trying ");
		puts("mul(-232, 16723163)");
		puts(buffer);
		assert(strcmp(buffer, "-3879773816") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1313407354973817252389);
		bigint_free(_4526714771435413200199);
		bigint_free(_2981704192333618430535);

	

		bigint_t* _2409760119439838718376;
		bigint_t* _1730006143218082656372 = bigint(-232);
		bigint_t* _3236078610917017712532 = bigint(16723163);
		bigint_t* _4644732862552405896727 = bigint_add(_1730006143218082656372, _3236078610917017712532 );
		bigint_to_string(_4644732862552405896727, 10, buffer);
		printf("trying ");
		puts("add(-232, 16723163)");
		puts(buffer);
		assert(strcmp(buffer, "16722931") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1730006143218082656372);
		bigint_free(_3236078610917017712532);
		bigint_free(_4644732862552405896727);

	

		bigint_t* _3859853821466550693915;
		bigint_t* _1740648224607878714896 = bigint(-232);
		bigint_t* _2507908218800536652371 = bigint(16723163);
		bigint_t* _249999566406690172950 = bigint_sub(_1740648224607878714896, _2507908218800536652371 );
		bigint_to_string(_249999566406690172950, 10, buffer);
		printf("trying ");
		puts("sub(-232, 16723163)");
		puts(buffer);
		assert(strcmp(buffer, "-16723395") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1740648224607878714896);
		bigint_free(_2507908218800536652371);
		bigint_free(_249999566406690172950);

	

		bigint_t* _685779703111804462334;
		bigint_t* _3836188764304531591808 = bigint(-91);
		bigint_t* _3735017233079653874011 = bigint(11606175);
		bigint_t* _204409583537292913138 = bigint_mul(_3836188764304531591808, _3735017233079653874011 );
		bigint_to_string(_204409583537292913138, 10, buffer);
		printf("trying ");
		puts("mul(-91, 11606175)");
		puts(buffer);
		assert(strcmp(buffer, "-1056161925") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3836188764304531591808);
		bigint_free(_3735017233079653874011);
		bigint_free(_204409583537292913138);

	

		bigint_t* _1244277741870471690676;
		bigint_t* _2944069859999413685091 = bigint(-91);
		bigint_t* _2009920127206174007876 = bigint(11606175);
		bigint_t* _308752442533641980473 = bigint_add(_2944069859999413685091, _2009920127206174007876 );
		bigint_to_string(_308752442533641980473, 10, buffer);
		printf("trying ");
		puts("add(-91, 11606175)");
		puts(buffer);
		assert(strcmp(buffer, "11606084") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2944069859999413685091);
		bigint_free(_2009920127206174007876);
		bigint_free(_308752442533641980473);

	

		bigint_t* _1266527921641283247964;
		bigint_t* _3089382438413276790887 = bigint(-91);
		bigint_t* _744599707880402053458 = bigint(11606175);
		bigint_t* _2376604150917607823525 = bigint_sub(_3089382438413276790887, _744599707880402053458 );
		bigint_to_string(_2376604150917607823525, 10, buffer);
		printf("trying ");
		puts("sub(-91, 11606175)");
		puts(buffer);
		assert(strcmp(buffer, "-11606266") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3089382438413276790887);
		bigint_free(_744599707880402053458);
		bigint_free(_2376604150917607823525);

	

		bigint_t* _374473558621250754287;
		bigint_t* _2518716060953204084618 = bigint(137);
		bigint_t* _926070624181792359243 = bigint(10059443);
		bigint_t* _435176613368540304481 = bigint_mul(_2518716060953204084618, _926070624181792359243 );
		bigint_to_string(_435176613368540304481, 10, buffer);
		printf("trying ");
		puts("mul(137, 10059443)");
		puts(buffer);
		assert(strcmp(buffer, "1378143691") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2518716060953204084618);
		bigint_free(_926070624181792359243);
		bigint_free(_435176613368540304481);

	

		bigint_t* _3586526215615839286475;
		bigint_t* _1517942107937168945588 = bigint(137);
		bigint_t* _261772637313320187099 = bigint(10059443);
		bigint_t* _91439567187031530961 = bigint_add(_1517942107937168945588, _261772637313320187099 );
		bigint_to_string(_91439567187031530961, 10, buffer);
		printf("trying ");
		puts("add(137, 10059443)");
		puts(buffer);
		assert(strcmp(buffer, "10059580") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1517942107937168945588);
		bigint_free(_261772637313320187099);
		bigint_free(_91439567187031530961);

	

		bigint_t* _2088257119623082973246;
		bigint_t* _1198801659416085574908 = bigint(137);
		bigint_t* _4005833584850418515430 = bigint(10059443);
		bigint_t* _366223442330312429565 = bigint_sub(_1198801659416085574908, _4005833584850418515430 );
		bigint_to_string(_366223442330312429565, 10, buffer);
		printf("trying ");
		puts("sub(137, 10059443)");
		puts(buffer);
		assert(strcmp(buffer, "-10059306") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1198801659416085574908);
		bigint_free(_4005833584850418515430);
		bigint_free(_366223442330312429565);

	

		bigint_t* _2257347478474626473;
		bigint_t* _608251887640320155767 = bigint(11);
		bigint_t* _3889870144853862952110 = bigint(5644187);
		bigint_t* _3986659988105120532037 = bigint_mul(_608251887640320155767, _3889870144853862952110 );
		bigint_to_string(_3986659988105120532037, 10, buffer);
		printf("trying ");
		puts("mul(11, 5644187)");
		puts(buffer);
		assert(strcmp(buffer, "62086057") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_608251887640320155767);
		bigint_free(_3889870144853862952110);
		bigint_free(_3986659988105120532037);

	

		bigint_t* _245880929194518720782;
		bigint_t* _3042982446511244018381 = bigint(11);
		bigint_t* _1569157557159173935270 = bigint(5644187);
		bigint_t* _2707662510382372217043 = bigint_add(_3042982446511244018381, _1569157557159173935270 );
		bigint_to_string(_2707662510382372217043, 10, buffer);
		printf("trying ");
		puts("add(11, 5644187)");
		puts(buffer);
		assert(strcmp(buffer, "5644198") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3042982446511244018381);
		bigint_free(_1569157557159173935270);
		bigint_free(_2707662510382372217043);

	

		bigint_t* _1761472858449270245359;
		bigint_t* _1525365969669947014226 = bigint(11);
		bigint_t* _1372613491286172044457 = bigint(5644187);
		bigint_t* _517069823330425423670 = bigint_sub(_1525365969669947014226, _1372613491286172044457 );
		bigint_to_string(_517069823330425423670, 10, buffer);
		printf("trying ");
		puts("sub(11, 5644187)");
		puts(buffer);
		assert(strcmp(buffer, "-5644176") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1525365969669947014226);
		bigint_free(_1372613491286172044457);
		bigint_free(_517069823330425423670);

	

		bigint_t* _962200230367208365749;
		bigint_t* _4328073577044892734873 = bigint(228);
		bigint_t* _1542060159780965185373 = bigint(-13616643);
		bigint_t* _1453978032303852667987 = bigint_mul(_4328073577044892734873, _1542060159780965185373 );
		bigint_to_string(_1453978032303852667987, 10, buffer);
		printf("trying ");
		puts("mul(228, -13616643)");
		puts(buffer);
		assert(strcmp(buffer, "-3104594604") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4328073577044892734873);
		bigint_free(_1542060159780965185373);
		bigint_free(_1453978032303852667987);

	

		bigint_t* _2774968242756546444489;
		bigint_t* _4450884044365930709513 = bigint(228);
		bigint_t* _174283751436765614137 = bigint(-13616643);
		bigint_t* _4336349868961057419560 = bigint_add(_4450884044365930709513, _174283751436765614137 );
		bigint_to_string(_4336349868961057419560, 10, buffer);
		printf("trying ");
		puts("add(228, -13616643)");
		puts(buffer);
		assert(strcmp(buffer, "-13616415") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4450884044365930709513);
		bigint_free(_174283751436765614137);
		bigint_free(_4336349868961057419560);

	

		bigint_t* _703394936797564814407;
		bigint_t* _2343533124425062488488 = bigint(228);
		bigint_t* _1477160023026539604660 = bigint(-13616643);
		bigint_t* _3300717577852105777737 = bigint_sub(_2343533124425062488488, _1477160023026539604660 );
		bigint_to_string(_3300717577852105777737, 10, buffer);
		printf("trying ");
		puts("sub(228, -13616643)");
		puts(buffer);
		assert(strcmp(buffer, "13616871") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2343533124425062488488);
		bigint_free(_1477160023026539604660);
		bigint_free(_3300717577852105777737);

	

		bigint_t* _3467064894529193586038;
		bigint_t* _171893002600729528525 = bigint(81);
		bigint_t* _1933239654075679563427 = bigint(-3920796);
		bigint_t* _889018010517819242941 = bigint_mul(_171893002600729528525, _1933239654075679563427 );
		bigint_to_string(_889018010517819242941, 10, buffer);
		printf("trying ");
		puts("mul(81, -3920796)");
		puts(buffer);
		assert(strcmp(buffer, "-317584476") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_171893002600729528525);
		bigint_free(_1933239654075679563427);
		bigint_free(_889018010517819242941);

	

		bigint_t* _1181996378938186622240;
		bigint_t* _1467132951154760507086 = bigint(81);
		bigint_t* _3622714913801708750411 = bigint(-3920796);
		bigint_t* _3756475284866654618667 = bigint_add(_1467132951154760507086, _3622714913801708750411 );
		bigint_to_string(_3756475284866654618667, 10, buffer);
		printf("trying ");
		puts("add(81, -3920796)");
		puts(buffer);
		assert(strcmp(buffer, "-3920715") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1467132951154760507086);
		bigint_free(_3622714913801708750411);
		bigint_free(_3756475284866654618667);

	

		bigint_t* _2813950129812924143159;
		bigint_t* _3582533571429112730589 = bigint(81);
		bigint_t* _921482300134262379720 = bigint(-3920796);
		bigint_t* _910955887666813666764 = bigint_sub(_3582533571429112730589, _921482300134262379720 );
		bigint_to_string(_910955887666813666764, 10, buffer);
		printf("trying ");
		puts("sub(81, -3920796)");
		puts(buffer);
		assert(strcmp(buffer, "3920877") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3582533571429112730589);
		bigint_free(_921482300134262379720);
		bigint_free(_910955887666813666764);

	

		bigint_t* _3762028964531151525346;
		bigint_t* _4440777320476944168325 = bigint(-103);
		bigint_t* _991623960958839561631 = bigint(-15747085);
		bigint_t* _2425769203836813465654 = bigint_mul(_4440777320476944168325, _991623960958839561631 );
		bigint_to_string(_2425769203836813465654, 10, buffer);
		printf("trying ");
		puts("mul(-103, -15747085)");
		puts(buffer);
		assert(strcmp(buffer, "1621949755") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4440777320476944168325);
		bigint_free(_991623960958839561631);
		bigint_free(_2425769203836813465654);

	

		bigint_t* _1428253735588258239337;
		bigint_t* _55806878296776977500 = bigint(-103);
		bigint_t* _2332542511100438780737 = bigint(-15747085);
		bigint_t* _1799055555997303736552 = bigint_add(_55806878296776977500, _2332542511100438780737 );
		bigint_to_string(_1799055555997303736552, 10, buffer);
		printf("trying ");
		puts("add(-103, -15747085)");
		puts(buffer);
		assert(strcmp(buffer, "-15747188") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_55806878296776977500);
		bigint_free(_2332542511100438780737);
		bigint_free(_1799055555997303736552);

	

		bigint_t* _1887513736150338737627;
		bigint_t* _147969036777684426555 = bigint(-103);
		bigint_t* _4389256084689490030083 = bigint(-15747085);
		bigint_t* _1830557321477595892813 = bigint_sub(_147969036777684426555, _4389256084689490030083 );
		bigint_to_string(_1830557321477595892813, 10, buffer);
		printf("trying ");
		puts("sub(-103, -15747085)");
		puts(buffer);
		assert(strcmp(buffer, "15746982") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_147969036777684426555);
		bigint_free(_4389256084689490030083);
		bigint_free(_1830557321477595892813);

	

		bigint_t* _4083504633784590283850;
		bigint_t* _2843527721619982125521 = bigint(-245);
		bigint_t* _1832876678504727489602 = bigint(10702512);
		bigint_t* _3467251373793602287448 = bigint_mul(_2843527721619982125521, _1832876678504727489602 );
		bigint_to_string(_3467251373793602287448, 10, buffer);
		printf("trying ");
		puts("mul(-245, 10702512)");
		puts(buffer);
		assert(strcmp(buffer, "-2622115440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2843527721619982125521);
		bigint_free(_1832876678504727489602);
		bigint_free(_3467251373793602287448);

	

		bigint_t* _2642549097806285199690;
		bigint_t* _4081894773596462323635 = bigint(-245);
		bigint_t* _405168611884210832549 = bigint(10702512);
		bigint_t* _2619309699744693499955 = bigint_add(_4081894773596462323635, _405168611884210832549 );
		bigint_to_string(_2619309699744693499955, 10, buffer);
		printf("trying ");
		puts("add(-245, 10702512)");
		puts(buffer);
		assert(strcmp(buffer, "10702267") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4081894773596462323635);
		bigint_free(_405168611884210832549);
		bigint_free(_2619309699744693499955);

	

		bigint_t* _1164774701754235856586;
		bigint_t* _3095589087336264706483 = bigint(-245);
		bigint_t* _2143897038179213382107 = bigint(10702512);
		bigint_t* _877932582703811837557 = bigint_sub(_3095589087336264706483, _2143897038179213382107 );
		bigint_to_string(_877932582703811837557, 10, buffer);
		printf("trying ");
		puts("sub(-245, 10702512)");
		puts(buffer);
		assert(strcmp(buffer, "-10702757") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3095589087336264706483);
		bigint_free(_2143897038179213382107);
		bigint_free(_877932582703811837557);

	

		bigint_t* _1479139868608369055288;
		bigint_t* _92837730729196539767 = bigint(-251);
		bigint_t* _2266144335972557320417 = bigint(-13127676);
		bigint_t* _4062334591005837003285 = bigint_mul(_92837730729196539767, _2266144335972557320417 );
		bigint_to_string(_4062334591005837003285, 10, buffer);
		printf("trying ");
		puts("mul(-251, -13127676)");
		puts(buffer);
		assert(strcmp(buffer, "3295046676") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_92837730729196539767);
		bigint_free(_2266144335972557320417);
		bigint_free(_4062334591005837003285);

	

		bigint_t* _3149580674857449786309;
		bigint_t* _3072923873977192137496 = bigint(-251);
		bigint_t* _3472669562519256329200 = bigint(-13127676);
		bigint_t* _3119185165741927289249 = bigint_add(_3072923873977192137496, _3472669562519256329200 );
		bigint_to_string(_3119185165741927289249, 10, buffer);
		printf("trying ");
		puts("add(-251, -13127676)");
		puts(buffer);
		assert(strcmp(buffer, "-13127927") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3072923873977192137496);
		bigint_free(_3472669562519256329200);
		bigint_free(_3119185165741927289249);

	

		bigint_t* _2955052518992891146258;
		bigint_t* _1792777190448825944303 = bigint(-251);
		bigint_t* _1268875977010251403479 = bigint(-13127676);
		bigint_t* _4065534041272538152170 = bigint_sub(_1792777190448825944303, _1268875977010251403479 );
		bigint_to_string(_4065534041272538152170, 10, buffer);
		printf("trying ");
		puts("sub(-251, -13127676)");
		puts(buffer);
		assert(strcmp(buffer, "13127425") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1792777190448825944303);
		bigint_free(_1268875977010251403479);
		bigint_free(_4065534041272538152170);

	

		bigint_t* _131923738615812565741;
		bigint_t* _1947224860003460641824 = bigint(-76);
		bigint_t* _3599294306957255880028 = bigint(-4543570);
		bigint_t* _2103890941844162571029 = bigint_mul(_1947224860003460641824, _3599294306957255880028 );
		bigint_to_string(_2103890941844162571029, 10, buffer);
		printf("trying ");
		puts("mul(-76, -4543570)");
		puts(buffer);
		assert(strcmp(buffer, "345311320") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1947224860003460641824);
		bigint_free(_3599294306957255880028);
		bigint_free(_2103890941844162571029);

	

		bigint_t* _4695241722710706701496;
		bigint_t* _3988686577398011864855 = bigint(-76);
		bigint_t* _3677264957717489501070 = bigint(-4543570);
		bigint_t* _2223517893678093581154 = bigint_add(_3988686577398011864855, _3677264957717489501070 );
		bigint_to_string(_2223517893678093581154, 10, buffer);
		printf("trying ");
		puts("add(-76, -4543570)");
		puts(buffer);
		assert(strcmp(buffer, "-4543646") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3988686577398011864855);
		bigint_free(_3677264957717489501070);
		bigint_free(_2223517893678093581154);

	

		bigint_t* _1921644449846224610493;
		bigint_t* _50873581411268190399 = bigint(-76);
		bigint_t* _258935798674246237216 = bigint(-4543570);
		bigint_t* _23044107616179115623 = bigint_sub(_50873581411268190399, _258935798674246237216 );
		bigint_to_string(_23044107616179115623, 10, buffer);
		printf("trying ");
		puts("sub(-76, -4543570)");
		puts(buffer);
		assert(strcmp(buffer, "4543494") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_50873581411268190399);
		bigint_free(_258935798674246237216);
		bigint_free(_23044107616179115623);

	

		bigint_t* _1820164093222490624340;
		bigint_t* _2181388617423209715700 = bigint(32);
		bigint_t* _1623685858966547216106 = bigint(-4861404);
		bigint_t* _4719933931012512146322 = bigint_mul(_2181388617423209715700, _1623685858966547216106 );
		bigint_to_string(_4719933931012512146322, 10, buffer);
		printf("trying ");
		puts("mul(32, -4861404)");
		puts(buffer);
		assert(strcmp(buffer, "-155564928") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2181388617423209715700);
		bigint_free(_1623685858966547216106);
		bigint_free(_4719933931012512146322);

	

		bigint_t* _259139226957596125302;
		bigint_t* _3823924058934417627920 = bigint(32);
		bigint_t* _4341172070929435044098 = bigint(-4861404);
		bigint_t* _4618579492555121149031 = bigint_add(_3823924058934417627920, _4341172070929435044098 );
		bigint_to_string(_4618579492555121149031, 10, buffer);
		printf("trying ");
		puts("add(32, -4861404)");
		puts(buffer);
		assert(strcmp(buffer, "-4861372") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3823924058934417627920);
		bigint_free(_4341172070929435044098);
		bigint_free(_4618579492555121149031);

	

		bigint_t* _2240128871451041696969;
		bigint_t* _4613098589607489122656 = bigint(32);
		bigint_t* _988332762424639864093 = bigint(-4861404);
		bigint_t* _1436679629826531408251 = bigint_sub(_4613098589607489122656, _988332762424639864093 );
		bigint_to_string(_1436679629826531408251, 10, buffer);
		printf("trying ");
		puts("sub(32, -4861404)");
		puts(buffer);
		assert(strcmp(buffer, "4861436") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4613098589607489122656);
		bigint_free(_988332762424639864093);
		bigint_free(_1436679629826531408251);

	

		bigint_t* _623645140884031991676;
		bigint_t* _2693658853323683505545 = bigint(246);
		bigint_t* _3919442494557282924794 = bigint(-504899);
		bigint_t* _921648093792935195241 = bigint_mul(_2693658853323683505545, _3919442494557282924794 );
		bigint_to_string(_921648093792935195241, 10, buffer);
		printf("trying ");
		puts("mul(246, -504899)");
		puts(buffer);
		assert(strcmp(buffer, "-124205154") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2693658853323683505545);
		bigint_free(_3919442494557282924794);
		bigint_free(_921648093792935195241);

	

		bigint_t* _2318699105363020317482;
		bigint_t* _2005506797246907854065 = bigint(246);
		bigint_t* _2183883047078427174711 = bigint(-504899);
		bigint_t* _2873961299753450184434 = bigint_add(_2005506797246907854065, _2183883047078427174711 );
		bigint_to_string(_2873961299753450184434, 10, buffer);
		printf("trying ");
		puts("add(246, -504899)");
		puts(buffer);
		assert(strcmp(buffer, "-504653") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2005506797246907854065);
		bigint_free(_2183883047078427174711);
		bigint_free(_2873961299753450184434);

	

		bigint_t* _3458501436746980382840;
		bigint_t* _710243783592814795679 = bigint(246);
		bigint_t* _3342321022044250875966 = bigint(-504899);
		bigint_t* _3918789850336602717078 = bigint_sub(_710243783592814795679, _3342321022044250875966 );
		bigint_to_string(_3918789850336602717078, 10, buffer);
		printf("trying ");
		puts("sub(246, -504899)");
		puts(buffer);
		assert(strcmp(buffer, "505145") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_710243783592814795679);
		bigint_free(_3342321022044250875966);
		bigint_free(_3918789850336602717078);

	

		bigint_t* _3342316701736875490181;
		bigint_t* _1760598678950821240097 = bigint(200);
		bigint_t* _2675072343053199925636 = bigint(-6007747);
		bigint_t* _4507157807463642700203 = bigint_mul(_1760598678950821240097, _2675072343053199925636 );
		bigint_to_string(_4507157807463642700203, 10, buffer);
		printf("trying ");
		puts("mul(200, -6007747)");
		puts(buffer);
		assert(strcmp(buffer, "-1201549400") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1760598678950821240097);
		bigint_free(_2675072343053199925636);
		bigint_free(_4507157807463642700203);

	

		bigint_t* _262754306270253132223;
		bigint_t* _236613506091220453606 = bigint(200);
		bigint_t* _4425886876837299534529 = bigint(-6007747);
		bigint_t* _1114321036022081078150 = bigint_add(_236613506091220453606, _4425886876837299534529 );
		bigint_to_string(_1114321036022081078150, 10, buffer);
		printf("trying ");
		puts("add(200, -6007747)");
		puts(buffer);
		assert(strcmp(buffer, "-6007547") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_236613506091220453606);
		bigint_free(_4425886876837299534529);
		bigint_free(_1114321036022081078150);

	

		bigint_t* _2855043583603340486924;
		bigint_t* _2799804332753445688299 = bigint(200);
		bigint_t* _353540998432661084855 = bigint(-6007747);
		bigint_t* _1542178270273364489377 = bigint_sub(_2799804332753445688299, _353540998432661084855 );
		bigint_to_string(_1542178270273364489377, 10, buffer);
		printf("trying ");
		puts("sub(200, -6007747)");
		puts(buffer);
		assert(strcmp(buffer, "6007947") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2799804332753445688299);
		bigint_free(_353540998432661084855);
		bigint_free(_1542178270273364489377);

	

		bigint_t* _2810127062846241159820;
		bigint_t* _1228677937639901990627 = bigint(227);
		bigint_t* _4060489408185334200054 = bigint(9600393);
		bigint_t* _2405032271332993357409 = bigint_mul(_1228677937639901990627, _4060489408185334200054 );
		bigint_to_string(_2405032271332993357409, 10, buffer);
		printf("trying ");
		puts("mul(227, 9600393)");
		puts(buffer);
		assert(strcmp(buffer, "2179289211") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1228677937639901990627);
		bigint_free(_4060489408185334200054);
		bigint_free(_2405032271332993357409);

	

		bigint_t* _3411929086124356343332;
		bigint_t* _4263794668409211517990 = bigint(227);
		bigint_t* _2820628379648562487576 = bigint(9600393);
		bigint_t* _371818008452400480593 = bigint_add(_4263794668409211517990, _2820628379648562487576 );
		bigint_to_string(_371818008452400480593, 10, buffer);
		printf("trying ");
		puts("add(227, 9600393)");
		puts(buffer);
		assert(strcmp(buffer, "9600620") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4263794668409211517990);
		bigint_free(_2820628379648562487576);
		bigint_free(_371818008452400480593);

	

		bigint_t* _2088258335690559247703;
		bigint_t* _1420263120787807162165 = bigint(227);
		bigint_t* _2491418949927854901769 = bigint(9600393);
		bigint_t* _3652906070433609001942 = bigint_sub(_1420263120787807162165, _2491418949927854901769 );
		bigint_to_string(_3652906070433609001942, 10, buffer);
		printf("trying ");
		puts("sub(227, 9600393)");
		puts(buffer);
		assert(strcmp(buffer, "-9600166") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1420263120787807162165);
		bigint_free(_2491418949927854901769);
		bigint_free(_3652906070433609001942);

	

		bigint_t* _4052431553644409924096;
		bigint_t* _4079099640607891791018 = bigint(96);
		bigint_t* _3057192129445386758328 = bigint(-11692707);
		bigint_t* _4423742675846849832864 = bigint_mul(_4079099640607891791018, _3057192129445386758328 );
		bigint_to_string(_4423742675846849832864, 10, buffer);
		printf("trying ");
		puts("mul(96, -11692707)");
		puts(buffer);
		assert(strcmp(buffer, "-1122499872") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4079099640607891791018);
		bigint_free(_3057192129445386758328);
		bigint_free(_4423742675846849832864);

	

		bigint_t* _2313244587822940346175;
		bigint_t* _4211857840735196816038 = bigint(96);
		bigint_t* _2315251343019368241380 = bigint(-11692707);
		bigint_t* _2886437554574985944005 = bigint_add(_4211857840735196816038, _2315251343019368241380 );
		bigint_to_string(_2886437554574985944005, 10, buffer);
		printf("trying ");
		puts("add(96, -11692707)");
		puts(buffer);
		assert(strcmp(buffer, "-11692611") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4211857840735196816038);
		bigint_free(_2315251343019368241380);
		bigint_free(_2886437554574985944005);

	

		bigint_t* _1954489883682469216728;
		bigint_t* _332502771849476507677 = bigint(96);
		bigint_t* _2433737052436718667381 = bigint(-11692707);
		bigint_t* _4288053106193601207275 = bigint_sub(_332502771849476507677, _2433737052436718667381 );
		bigint_to_string(_4288053106193601207275, 10, buffer);
		printf("trying ");
		puts("sub(96, -11692707)");
		puts(buffer);
		assert(strcmp(buffer, "11692803") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_332502771849476507677);
		bigint_free(_2433737052436718667381);
		bigint_free(_4288053106193601207275);

	

		bigint_t* _3713285278305425443360;
		bigint_t* _3335883649955430758319 = bigint(51);
		bigint_t* _546378102880714871816 = bigint(2066760);
		bigint_t* _3435829650088928321757 = bigint_mul(_3335883649955430758319, _546378102880714871816 );
		bigint_to_string(_3435829650088928321757, 10, buffer);
		printf("trying ");
		puts("mul(51, 2066760)");
		puts(buffer);
		assert(strcmp(buffer, "105404760") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3335883649955430758319);
		bigint_free(_546378102880714871816);
		bigint_free(_3435829650088928321757);

	

		bigint_t* _1583827805815122509783;
		bigint_t* _2130032265056643170191 = bigint(51);
		bigint_t* _720174902006617736869 = bigint(2066760);
		bigint_t* _259452601341626928556 = bigint_add(_2130032265056643170191, _720174902006617736869 );
		bigint_to_string(_259452601341626928556, 10, buffer);
		printf("trying ");
		puts("add(51, 2066760)");
		puts(buffer);
		assert(strcmp(buffer, "2066811") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2130032265056643170191);
		bigint_free(_720174902006617736869);
		bigint_free(_259452601341626928556);

	

		bigint_t* _2548460959394130086693;
		bigint_t* _2678297891824017964015 = bigint(51);
		bigint_t* _1529127225872459161589 = bigint(2066760);
		bigint_t* _4001383638885146563811 = bigint_sub(_2678297891824017964015, _1529127225872459161589 );
		bigint_to_string(_4001383638885146563811, 10, buffer);
		printf("trying ");
		puts("sub(51, 2066760)");
		puts(buffer);
		assert(strcmp(buffer, "-2066709") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2678297891824017964015);
		bigint_free(_1529127225872459161589);
		bigint_free(_4001383638885146563811);

	

		bigint_t* _1799758812900962336589;
		bigint_t* _229262572350613486565 = bigint(-156);
		bigint_t* _3325830997445912993936 = bigint(-13830014);
		bigint_t* _944811036711637477649 = bigint_mul(_229262572350613486565, _3325830997445912993936 );
		bigint_to_string(_944811036711637477649, 10, buffer);
		printf("trying ");
		puts("mul(-156, -13830014)");
		puts(buffer);
		assert(strcmp(buffer, "2157482184") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_229262572350613486565);
		bigint_free(_3325830997445912993936);
		bigint_free(_944811036711637477649);

	

		bigint_t* _4647036752306039725930;
		bigint_t* _825709876199322189575 = bigint(-156);
		bigint_t* _1970290043387704287145 = bigint(-13830014);
		bigint_t* _1850571931251223170763 = bigint_add(_825709876199322189575, _1970290043387704287145 );
		bigint_to_string(_1850571931251223170763, 10, buffer);
		printf("trying ");
		puts("add(-156, -13830014)");
		puts(buffer);
		assert(strcmp(buffer, "-13830170") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_825709876199322189575);
		bigint_free(_1970290043387704287145);
		bigint_free(_1850571931251223170763);

	

		bigint_t* _4428673381605258065991;
		bigint_t* _4109775958472002400774 = bigint(-156);
		bigint_t* _2279181886587031981275 = bigint(-13830014);
		bigint_t* _1050387873889453042633 = bigint_sub(_4109775958472002400774, _2279181886587031981275 );
		bigint_to_string(_1050387873889453042633, 10, buffer);
		printf("trying ");
		puts("sub(-156, -13830014)");
		puts(buffer);
		assert(strcmp(buffer, "13829858") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4109775958472002400774);
		bigint_free(_2279181886587031981275);
		bigint_free(_1050387873889453042633);

	

		bigint_t* _955701427292440267211;
		bigint_t* _3221685640314251440268 = bigint(-164);
		bigint_t* _1001178821010711572551 = bigint(-2260598);
		bigint_t* _2249376155511882287773 = bigint_mul(_3221685640314251440268, _1001178821010711572551 );
		bigint_to_string(_2249376155511882287773, 10, buffer);
		printf("trying ");
		puts("mul(-164, -2260598)");
		puts(buffer);
		assert(strcmp(buffer, "370738072") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3221685640314251440268);
		bigint_free(_1001178821010711572551);
		bigint_free(_2249376155511882287773);

	

		bigint_t* _3787465240696281679949;
		bigint_t* _2490405350079241232765 = bigint(-164);
		bigint_t* _844688328253011375239 = bigint(-2260598);
		bigint_t* _4182115839386939423842 = bigint_add(_2490405350079241232765, _844688328253011375239 );
		bigint_to_string(_4182115839386939423842, 10, buffer);
		printf("trying ");
		puts("add(-164, -2260598)");
		puts(buffer);
		assert(strcmp(buffer, "-2260762") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2490405350079241232765);
		bigint_free(_844688328253011375239);
		bigint_free(_4182115839386939423842);

	

		bigint_t* _3924150634117752330129;
		bigint_t* _3027996475262144101134 = bigint(-164);
		bigint_t* _9659684404946741253 = bigint(-2260598);
		bigint_t* _4673717223362236311769 = bigint_sub(_3027996475262144101134, _9659684404946741253 );
		bigint_to_string(_4673717223362236311769, 10, buffer);
		printf("trying ");
		puts("sub(-164, -2260598)");
		puts(buffer);
		assert(strcmp(buffer, "2260434") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3027996475262144101134);
		bigint_free(_9659684404946741253);
		bigint_free(_4673717223362236311769);

	

		bigint_t* _2174555016476737324314;
		bigint_t* _2583934681758806507016 = bigint(197);
		bigint_t* _1580079770201314775573 = bigint(-13663646);
		bigint_t* _1242438729445590822035 = bigint_mul(_2583934681758806507016, _1580079770201314775573 );
		bigint_to_string(_1242438729445590822035, 10, buffer);
		printf("trying ");
		puts("mul(197, -13663646)");
		puts(buffer);
		assert(strcmp(buffer, "-2691738262") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2583934681758806507016);
		bigint_free(_1580079770201314775573);
		bigint_free(_1242438729445590822035);

	

		bigint_t* _1817477980799383902191;
		bigint_t* _2861701398149381563662 = bigint(197);
		bigint_t* _3071004185926877737613 = bigint(-13663646);
		bigint_t* _2872974161845156156564 = bigint_add(_2861701398149381563662, _3071004185926877737613 );
		bigint_to_string(_2872974161845156156564, 10, buffer);
		printf("trying ");
		puts("add(197, -13663646)");
		puts(buffer);
		assert(strcmp(buffer, "-13663449") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2861701398149381563662);
		bigint_free(_3071004185926877737613);
		bigint_free(_2872974161845156156564);

	

		bigint_t* _1671561217511338062112;
		bigint_t* _656941428638993766402 = bigint(197);
		bigint_t* _2776863089004194181535 = bigint(-13663646);
		bigint_t* _2107383444385553630206 = bigint_sub(_656941428638993766402, _2776863089004194181535 );
		bigint_to_string(_2107383444385553630206, 10, buffer);
		printf("trying ");
		puts("sub(197, -13663646)");
		puts(buffer);
		assert(strcmp(buffer, "13663843") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_656941428638993766402);
		bigint_free(_2776863089004194181535);
		bigint_free(_2107383444385553630206);

	

		bigint_t* _3389295392665104751379;
		bigint_t* _4396418214632941736281 = bigint(-252);
		bigint_t* _4583838088438795432485 = bigint(-15084049);
		bigint_t* _3677421587040162028824 = bigint_mul(_4396418214632941736281, _4583838088438795432485 );
		bigint_to_string(_3677421587040162028824, 10, buffer);
		printf("trying ");
		puts("mul(-252, -15084049)");
		puts(buffer);
		assert(strcmp(buffer, "3801180348") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4396418214632941736281);
		bigint_free(_4583838088438795432485);
		bigint_free(_3677421587040162028824);

	

		bigint_t* _2104252272121982686055;
		bigint_t* _4042696634423167320999 = bigint(-252);
		bigint_t* _1176553413229699665000 = bigint(-15084049);
		bigint_t* _859847144801836785995 = bigint_add(_4042696634423167320999, _1176553413229699665000 );
		bigint_to_string(_859847144801836785995, 10, buffer);
		printf("trying ");
		puts("add(-252, -15084049)");
		puts(buffer);
		assert(strcmp(buffer, "-15084301") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4042696634423167320999);
		bigint_free(_1176553413229699665000);
		bigint_free(_859847144801836785995);

	

		bigint_t* _2667817871499545502576;
		bigint_t* _2159332238873599014704 = bigint(-252);
		bigint_t* _1543779319221039156845 = bigint(-15084049);
		bigint_t* _2065710501409963995480 = bigint_sub(_2159332238873599014704, _1543779319221039156845 );
		bigint_to_string(_2065710501409963995480, 10, buffer);
		printf("trying ");
		puts("sub(-252, -15084049)");
		puts(buffer);
		assert(strcmp(buffer, "15083797") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2159332238873599014704);
		bigint_free(_1543779319221039156845);
		bigint_free(_2065710501409963995480);

	

		bigint_t* _741656277986908709590;
		bigint_t* _755565202304926594514 = bigint(142);
		bigint_t* _3830851751556795381844 = bigint(-3581896);
		bigint_t* _2635509580138244880445 = bigint_mul(_755565202304926594514, _3830851751556795381844 );
		bigint_to_string(_2635509580138244880445, 10, buffer);
		printf("trying ");
		puts("mul(142, -3581896)");
		puts(buffer);
		assert(strcmp(buffer, "-508629232") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_755565202304926594514);
		bigint_free(_3830851751556795381844);
		bigint_free(_2635509580138244880445);

	

		bigint_t* _2123622272830417619836;
		bigint_t* _1064393100648058244089 = bigint(142);
		bigint_t* _4629617016779697386282 = bigint(-3581896);
		bigint_t* _2161635448873212644455 = bigint_add(_1064393100648058244089, _4629617016779697386282 );
		bigint_to_string(_2161635448873212644455, 10, buffer);
		printf("trying ");
		puts("add(142, -3581896)");
		puts(buffer);
		assert(strcmp(buffer, "-3581754") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1064393100648058244089);
		bigint_free(_4629617016779697386282);
		bigint_free(_2161635448873212644455);

	

		bigint_t* _2350360781435289971497;
		bigint_t* _2461642741768571061422 = bigint(142);
		bigint_t* _1395031617159454740609 = bigint(-3581896);
		bigint_t* _971452946956887339112 = bigint_sub(_2461642741768571061422, _1395031617159454740609 );
		bigint_to_string(_971452946956887339112, 10, buffer);
		printf("trying ");
		puts("sub(142, -3581896)");
		puts(buffer);
		assert(strcmp(buffer, "3582038") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2461642741768571061422);
		bigint_free(_1395031617159454740609);
		bigint_free(_971452946956887339112);

	

		bigint_t* _4296590226053180813323;
		bigint_t* _153159247236370408995 = bigint(78);
		bigint_t* _15795655340225564647 = bigint(10015532);
		bigint_t* _441999926772451176946 = bigint_mul(_153159247236370408995, _15795655340225564647 );
		bigint_to_string(_441999926772451176946, 10, buffer);
		printf("trying ");
		puts("mul(78, 10015532)");
		puts(buffer);
		assert(strcmp(buffer, "781211496") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_153159247236370408995);
		bigint_free(_15795655340225564647);
		bigint_free(_441999926772451176946);

	

		bigint_t* _1497008050190460680620;
		bigint_t* _2396900839096085198005 = bigint(78);
		bigint_t* _883105363710334964742 = bigint(10015532);
		bigint_t* _59130810736646167579 = bigint_add(_2396900839096085198005, _883105363710334964742 );
		bigint_to_string(_59130810736646167579, 10, buffer);
		printf("trying ");
		puts("add(78, 10015532)");
		puts(buffer);
		assert(strcmp(buffer, "10015610") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2396900839096085198005);
		bigint_free(_883105363710334964742);
		bigint_free(_59130810736646167579);

	

		bigint_t* _1442363093369250588097;
		bigint_t* _330503590364758403897 = bigint(78);
		bigint_t* _3786734072278880825023 = bigint(10015532);
		bigint_t* _2573289033832677910561 = bigint_sub(_330503590364758403897, _3786734072278880825023 );
		bigint_to_string(_2573289033832677910561, 10, buffer);
		printf("trying ");
		puts("sub(78, 10015532)");
		puts(buffer);
		assert(strcmp(buffer, "-10015454") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_330503590364758403897);
		bigint_free(_3786734072278880825023);
		bigint_free(_2573289033832677910561);

	

		bigint_t* _831689810301061913038;
		bigint_t* _3543348640815756616723 = bigint(210);
		bigint_t* _4328342277112051363776 = bigint(-13777069);
		bigint_t* _481320112917211698058 = bigint_mul(_3543348640815756616723, _4328342277112051363776 );
		bigint_to_string(_481320112917211698058, 10, buffer);
		printf("trying ");
		puts("mul(210, -13777069)");
		puts(buffer);
		assert(strcmp(buffer, "-2893184490") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3543348640815756616723);
		bigint_free(_4328342277112051363776);
		bigint_free(_481320112917211698058);

	

		bigint_t* _621928421134191246425;
		bigint_t* _3182579058621672553531 = bigint(210);
		bigint_t* _3099969269770208378761 = bigint(-13777069);
		bigint_t* _2851854387802159806055 = bigint_add(_3182579058621672553531, _3099969269770208378761 );
		bigint_to_string(_2851854387802159806055, 10, buffer);
		printf("trying ");
		puts("add(210, -13777069)");
		puts(buffer);
		assert(strcmp(buffer, "-13776859") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3182579058621672553531);
		bigint_free(_3099969269770208378761);
		bigint_free(_2851854387802159806055);

	

		bigint_t* _2769277798102636410920;
		bigint_t* _3865606688898051676743 = bigint(210);
		bigint_t* _2126615677136107826026 = bigint(-13777069);
		bigint_t* _2703315095512394701339 = bigint_sub(_3865606688898051676743, _2126615677136107826026 );
		bigint_to_string(_2703315095512394701339, 10, buffer);
		printf("trying ");
		puts("sub(210, -13777069)");
		puts(buffer);
		assert(strcmp(buffer, "13777279") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3865606688898051676743);
		bigint_free(_2126615677136107826026);
		bigint_free(_2703315095512394701339);

	

		bigint_t* _2846691769256906540553;
		bigint_t* _4298097767648775637727 = bigint(47);
		bigint_t* _3905669219845621998641 = bigint(-9641610);
		bigint_t* _1915136810364729137050 = bigint_mul(_4298097767648775637727, _3905669219845621998641 );
		bigint_to_string(_1915136810364729137050, 10, buffer);
		printf("trying ");
		puts("mul(47, -9641610)");
		puts(buffer);
		assert(strcmp(buffer, "-453155670") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4298097767648775637727);
		bigint_free(_3905669219845621998641);
		bigint_free(_1915136810364729137050);

	

		bigint_t* _528916889848354956026;
		bigint_t* _530828210174711462230 = bigint(47);
		bigint_t* _1104137750938174938734 = bigint(-9641610);
		bigint_t* _4201816044473751888646 = bigint_add(_530828210174711462230, _1104137750938174938734 );
		bigint_to_string(_4201816044473751888646, 10, buffer);
		printf("trying ");
		puts("add(47, -9641610)");
		puts(buffer);
		assert(strcmp(buffer, "-9641563") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_530828210174711462230);
		bigint_free(_1104137750938174938734);
		bigint_free(_4201816044473751888646);

	

		bigint_t* _3253476957489390879996;
		bigint_t* _4169472476345650770464 = bigint(47);
		bigint_t* _3792760602562021298031 = bigint(-9641610);
		bigint_t* _2465759039621208175748 = bigint_sub(_4169472476345650770464, _3792760602562021298031 );
		bigint_to_string(_2465759039621208175748, 10, buffer);
		printf("trying ");
		puts("sub(47, -9641610)");
		puts(buffer);
		assert(strcmp(buffer, "9641657") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4169472476345650770464);
		bigint_free(_3792760602562021298031);
		bigint_free(_2465759039621208175748);

	

		bigint_t* _1894792468317449959139;
		bigint_t* _2016560411087237485463 = bigint(159);
		bigint_t* _1325750506019881422678 = bigint(-15981407);
		bigint_t* _3934064819545782358918 = bigint_mul(_2016560411087237485463, _1325750506019881422678 );
		bigint_to_string(_3934064819545782358918, 10, buffer);
		printf("trying ");
		puts("mul(159, -15981407)");
		puts(buffer);
		assert(strcmp(buffer, "-2541043713") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2016560411087237485463);
		bigint_free(_1325750506019881422678);
		bigint_free(_3934064819545782358918);

	

		bigint_t* _4243022260607840851176;
		bigint_t* _2262594795054534252051 = bigint(159);
		bigint_t* _730281702359440769453 = bigint(-15981407);
		bigint_t* _3378021475091749603272 = bigint_add(_2262594795054534252051, _730281702359440769453 );
		bigint_to_string(_3378021475091749603272, 10, buffer);
		printf("trying ");
		puts("add(159, -15981407)");
		puts(buffer);
		assert(strcmp(buffer, "-15981248") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2262594795054534252051);
		bigint_free(_730281702359440769453);
		bigint_free(_3378021475091749603272);

	

		bigint_t* _484877187798114802287;
		bigint_t* _254224299739223452981 = bigint(159);
		bigint_t* _1683275635985017666432 = bigint(-15981407);
		bigint_t* _4464077779795316924322 = bigint_sub(_254224299739223452981, _1683275635985017666432 );
		bigint_to_string(_4464077779795316924322, 10, buffer);
		printf("trying ");
		puts("sub(159, -15981407)");
		puts(buffer);
		assert(strcmp(buffer, "15981566") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_254224299739223452981);
		bigint_free(_1683275635985017666432);
		bigint_free(_4464077779795316924322);

	

		bigint_t* _3698712609927275068517;
		bigint_t* _4711431452774538825080 = bigint(197);
		bigint_t* _4326062074809349639314 = bigint(-16746476);
		bigint_t* _1014576359531833532086 = bigint_mul(_4711431452774538825080, _4326062074809349639314 );
		bigint_to_string(_1014576359531833532086, 10, buffer);
		printf("trying ");
		puts("mul(197, -16746476)");
		puts(buffer);
		assert(strcmp(buffer, "-3299055772") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4711431452774538825080);
		bigint_free(_4326062074809349639314);
		bigint_free(_1014576359531833532086);

	

		bigint_t* _4104910923733748966361;
		bigint_t* _4660946445365994589324 = bigint(197);
		bigint_t* _1806929943431044636103 = bigint(-16746476);
		bigint_t* _1667349455890071567101 = bigint_add(_4660946445365994589324, _1806929943431044636103 );
		bigint_to_string(_1667349455890071567101, 10, buffer);
		printf("trying ");
		puts("add(197, -16746476)");
		puts(buffer);
		assert(strcmp(buffer, "-16746279") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4660946445365994589324);
		bigint_free(_1806929943431044636103);
		bigint_free(_1667349455890071567101);

	

		bigint_t* _4323549457582569476069;
		bigint_t* _1865558717562375556253 = bigint(197);
		bigint_t* _2336277923797645619778 = bigint(-16746476);
		bigint_t* _330544929656843092445 = bigint_sub(_1865558717562375556253, _2336277923797645619778 );
		bigint_to_string(_330544929656843092445, 10, buffer);
		printf("trying ");
		puts("sub(197, -16746476)");
		puts(buffer);
		assert(strcmp(buffer, "16746673") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1865558717562375556253);
		bigint_free(_2336277923797645619778);
		bigint_free(_330544929656843092445);

	

		bigint_t* _740299974645273743427;
		bigint_t* _986341425015522041320 = bigint(-235);
		bigint_t* _333585612061014008986 = bigint(6242590);
		bigint_t* _4593776476878258139479 = bigint_mul(_986341425015522041320, _333585612061014008986 );
		bigint_to_string(_4593776476878258139479, 10, buffer);
		printf("trying ");
		puts("mul(-235, 6242590)");
		puts(buffer);
		assert(strcmp(buffer, "-1467008650") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_986341425015522041320);
		bigint_free(_333585612061014008986);
		bigint_free(_4593776476878258139479);

	

		bigint_t* _1433278785022234016935;
		bigint_t* _28649077809996899578 = bigint(-235);
		bigint_t* _2682199720710303790895 = bigint(6242590);
		bigint_t* _3403077098294733442064 = bigint_add(_28649077809996899578, _2682199720710303790895 );
		bigint_to_string(_3403077098294733442064, 10, buffer);
		printf("trying ");
		puts("add(-235, 6242590)");
		puts(buffer);
		assert(strcmp(buffer, "6242355") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_28649077809996899578);
		bigint_free(_2682199720710303790895);
		bigint_free(_3403077098294733442064);

	

		bigint_t* _2567781906623267244572;
		bigint_t* _929678224844910636967 = bigint(-235);
		bigint_t* _915357324771813266651 = bigint(6242590);
		bigint_t* _4365186231504255674405 = bigint_sub(_929678224844910636967, _915357324771813266651 );
		bigint_to_string(_4365186231504255674405, 10, buffer);
		printf("trying ");
		puts("sub(-235, 6242590)");
		puts(buffer);
		assert(strcmp(buffer, "-6242825") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_929678224844910636967);
		bigint_free(_915357324771813266651);
		bigint_free(_4365186231504255674405);

	

		bigint_t* _1327787410428917484382;
		bigint_t* _981329416030012624665 = bigint(-160);
		bigint_t* _4367859437735860833339 = bigint(-11629507);
		bigint_t* _2747182896613483241394 = bigint_mul(_981329416030012624665, _4367859437735860833339 );
		bigint_to_string(_2747182896613483241394, 10, buffer);
		printf("trying ");
		puts("mul(-160, -11629507)");
		puts(buffer);
		assert(strcmp(buffer, "1860721120") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_981329416030012624665);
		bigint_free(_4367859437735860833339);
		bigint_free(_2747182896613483241394);

	

		bigint_t* _513992563706415790532;
		bigint_t* _805724886516868101531 = bigint(-160);
		bigint_t* _3776245868618078927990 = bigint(-11629507);
		bigint_t* _4567582839805278006624 = bigint_add(_805724886516868101531, _3776245868618078927990 );
		bigint_to_string(_4567582839805278006624, 10, buffer);
		printf("trying ");
		puts("add(-160, -11629507)");
		puts(buffer);
		assert(strcmp(buffer, "-11629667") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_805724886516868101531);
		bigint_free(_3776245868618078927990);
		bigint_free(_4567582839805278006624);

	

		bigint_t* _4202793136110106000141;
		bigint_t* _4629877825938605607195 = bigint(-160);
		bigint_t* _885466189231659893751 = bigint(-11629507);
		bigint_t* _3798637565814000123017 = bigint_sub(_4629877825938605607195, _885466189231659893751 );
		bigint_to_string(_3798637565814000123017, 10, buffer);
		printf("trying ");
		puts("sub(-160, -11629507)");
		puts(buffer);
		assert(strcmp(buffer, "11629347") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4629877825938605607195);
		bigint_free(_885466189231659893751);
		bigint_free(_3798637565814000123017);

	

		bigint_t* _3356321753529389769308;
		bigint_t* _3174152089043774934883 = bigint(-219);
		bigint_t* _4253496291060344623588 = bigint(-9956990);
		bigint_t* _2360892740787865980408 = bigint_mul(_3174152089043774934883, _4253496291060344623588 );
		bigint_to_string(_2360892740787865980408, 10, buffer);
		printf("trying ");
		puts("mul(-219, -9956990)");
		puts(buffer);
		assert(strcmp(buffer, "2180580810") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3174152089043774934883);
		bigint_free(_4253496291060344623588);
		bigint_free(_2360892740787865980408);

	

		bigint_t* _1305053526428990397046;
		bigint_t* _3099707360669894887834 = bigint(-219);
		bigint_t* _47580455273759237075 = bigint(-9956990);
		bigint_t* _1845709248756876026395 = bigint_add(_3099707360669894887834, _47580455273759237075 );
		bigint_to_string(_1845709248756876026395, 10, buffer);
		printf("trying ");
		puts("add(-219, -9956990)");
		puts(buffer);
		assert(strcmp(buffer, "-9957209") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3099707360669894887834);
		bigint_free(_47580455273759237075);
		bigint_free(_1845709248756876026395);

	

		bigint_t* _319208619960392967975;
		bigint_t* _2600553486669172530727 = bigint(-219);
		bigint_t* _326042264733979815301 = bigint(-9956990);
		bigint_t* _1552419591704072618879 = bigint_sub(_2600553486669172530727, _326042264733979815301 );
		bigint_to_string(_1552419591704072618879, 10, buffer);
		printf("trying ");
		puts("sub(-219, -9956990)");
		puts(buffer);
		assert(strcmp(buffer, "9956771") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2600553486669172530727);
		bigint_free(_326042264733979815301);
		bigint_free(_1552419591704072618879);

	

		bigint_t* _3425489049822803503133;
		bigint_t* _2808570161494899269499 = bigint(-253);
		bigint_t* _4016355136606413451652 = bigint(15920391);
		bigint_t* _2324750616895779457257 = bigint_mul(_2808570161494899269499, _4016355136606413451652 );
		bigint_to_string(_2324750616895779457257, 10, buffer);
		printf("trying ");
		puts("mul(-253, 15920391)");
		puts(buffer);
		assert(strcmp(buffer, "-4027858923") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2808570161494899269499);
		bigint_free(_4016355136606413451652);
		bigint_free(_2324750616895779457257);

	

		bigint_t* _297351320224201768105;
		bigint_t* _4274343408638468738618 = bigint(-253);
		bigint_t* _3481277303934396375283 = bigint(15920391);
		bigint_t* _763654434373504066106 = bigint_add(_4274343408638468738618, _3481277303934396375283 );
		bigint_to_string(_763654434373504066106, 10, buffer);
		printf("trying ");
		puts("add(-253, 15920391)");
		puts(buffer);
		assert(strcmp(buffer, "15920138") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4274343408638468738618);
		bigint_free(_3481277303934396375283);
		bigint_free(_763654434373504066106);

	

		bigint_t* _476959208978788954948;
		bigint_t* _3766722188481474826454 = bigint(-253);
		bigint_t* _1871569820849768682413 = bigint(15920391);
		bigint_t* _4520704044527082792008 = bigint_sub(_3766722188481474826454, _1871569820849768682413 );
		bigint_to_string(_4520704044527082792008, 10, buffer);
		printf("trying ");
		puts("sub(-253, 15920391)");
		puts(buffer);
		assert(strcmp(buffer, "-15920644") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3766722188481474826454);
		bigint_free(_1871569820849768682413);
		bigint_free(_4520704044527082792008);

	

		bigint_t* _4250820462695654735096;
		bigint_t* _1157418016053666791638 = bigint(-60);
		bigint_t* _3651784876331454888533 = bigint(-9588424);
		bigint_t* _944303563014810689100 = bigint_mul(_1157418016053666791638, _3651784876331454888533 );
		bigint_to_string(_944303563014810689100, 10, buffer);
		printf("trying ");
		puts("mul(-60, -9588424)");
		puts(buffer);
		assert(strcmp(buffer, "575305440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1157418016053666791638);
		bigint_free(_3651784876331454888533);
		bigint_free(_944303563014810689100);

	

		bigint_t* _1542453274015369101061;
		bigint_t* _1444312739842704388374 = bigint(-60);
		bigint_t* _903301034123029615386 = bigint(-9588424);
		bigint_t* _3117773278008550679829 = bigint_add(_1444312739842704388374, _903301034123029615386 );
		bigint_to_string(_3117773278008550679829, 10, buffer);
		printf("trying ");
		puts("add(-60, -9588424)");
		puts(buffer);
		assert(strcmp(buffer, "-9588484") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1444312739842704388374);
		bigint_free(_903301034123029615386);
		bigint_free(_3117773278008550679829);

	

		bigint_t* _2961639643154162417585;
		bigint_t* _1814432676612414064454 = bigint(-60);
		bigint_t* _3720612853001157251373 = bigint(-9588424);
		bigint_t* _2046697011970767566644 = bigint_sub(_1814432676612414064454, _3720612853001157251373 );
		bigint_to_string(_2046697011970767566644, 10, buffer);
		printf("trying ");
		puts("sub(-60, -9588424)");
		puts(buffer);
		assert(strcmp(buffer, "9588364") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1814432676612414064454);
		bigint_free(_3720612853001157251373);
		bigint_free(_2046697011970767566644);

	

		bigint_t* _367558367133636202720;
		bigint_t* _921059902347435878459 = bigint(152);
		bigint_t* _1182209706662137519659 = bigint(-1461142);
		bigint_t* _609728477511685985974 = bigint_mul(_921059902347435878459, _1182209706662137519659 );
		bigint_to_string(_609728477511685985974, 10, buffer);
		printf("trying ");
		puts("mul(152, -1461142)");
		puts(buffer);
		assert(strcmp(buffer, "-222093584") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_921059902347435878459);
		bigint_free(_1182209706662137519659);
		bigint_free(_609728477511685985974);

	

		bigint_t* _3754099277792947953506;
		bigint_t* _4611653833058830527956 = bigint(152);
		bigint_t* _1025259629838392436265 = bigint(-1461142);
		bigint_t* _3866710785207078454131 = bigint_add(_4611653833058830527956, _1025259629838392436265 );
		bigint_to_string(_3866710785207078454131, 10, buffer);
		printf("trying ");
		puts("add(152, -1461142)");
		puts(buffer);
		assert(strcmp(buffer, "-1460990") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4611653833058830527956);
		bigint_free(_1025259629838392436265);
		bigint_free(_3866710785207078454131);

	

		bigint_t* _3144152907289066335667;
		bigint_t* _2114812364469451789764 = bigint(152);
		bigint_t* _1347082219302021578829 = bigint(-1461142);
		bigint_t* _867024302004265905568 = bigint_sub(_2114812364469451789764, _1347082219302021578829 );
		bigint_to_string(_867024302004265905568, 10, buffer);
		printf("trying ");
		puts("sub(152, -1461142)");
		puts(buffer);
		assert(strcmp(buffer, "1461294") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2114812364469451789764);
		bigint_free(_1347082219302021578829);
		bigint_free(_867024302004265905568);

	

		bigint_t* _599019940267177702281;
		bigint_t* _1279642160790208376598 = bigint(227);
		bigint_t* _115186464152566373756 = bigint(-932652);
		bigint_t* _1135636158002155155475 = bigint_mul(_1279642160790208376598, _115186464152566373756 );
		bigint_to_string(_1135636158002155155475, 10, buffer);
		printf("trying ");
		puts("mul(227, -932652)");
		puts(buffer);
		assert(strcmp(buffer, "-211712004") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1279642160790208376598);
		bigint_free(_115186464152566373756);
		bigint_free(_1135636158002155155475);

	

		bigint_t* _4328579049661582649253;
		bigint_t* _3516471621693141887528 = bigint(227);
		bigint_t* _4604449373633868787501 = bigint(-932652);
		bigint_t* _4203907975550574733509 = bigint_add(_3516471621693141887528, _4604449373633868787501 );
		bigint_to_string(_4203907975550574733509, 10, buffer);
		printf("trying ");
		puts("add(227, -932652)");
		puts(buffer);
		assert(strcmp(buffer, "-932425") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3516471621693141887528);
		bigint_free(_4604449373633868787501);
		bigint_free(_4203907975550574733509);

	

		bigint_t* _1356325837783860096945;
		bigint_t* _1710972032202332527151 = bigint(227);
		bigint_t* _3969727092604017533636 = bigint(-932652);
		bigint_t* _1345003882473832551355 = bigint_sub(_1710972032202332527151, _3969727092604017533636 );
		bigint_to_string(_1345003882473832551355, 10, buffer);
		printf("trying ");
		puts("sub(227, -932652)");
		puts(buffer);
		assert(strcmp(buffer, "932879") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1710972032202332527151);
		bigint_free(_3969727092604017533636);
		bigint_free(_1345003882473832551355);

	

		bigint_t* _4115862008570614411084;
		bigint_t* _1371712952835750346040 = bigint(64);
		bigint_t* _447485585206409791524 = bigint(8440557);
		bigint_t* _4349548613638691409406 = bigint_mul(_1371712952835750346040, _447485585206409791524 );
		bigint_to_string(_4349548613638691409406, 10, buffer);
		printf("trying ");
		puts("mul(64, 8440557)");
		puts(buffer);
		assert(strcmp(buffer, "540195648") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1371712952835750346040);
		bigint_free(_447485585206409791524);
		bigint_free(_4349548613638691409406);

	

		bigint_t* _2102667218946797727271;
		bigint_t* _1309053491656563258677 = bigint(64);
		bigint_t* _2656120155081227798929 = bigint(8440557);
		bigint_t* _118654006450096565704 = bigint_add(_1309053491656563258677, _2656120155081227798929 );
		bigint_to_string(_118654006450096565704, 10, buffer);
		printf("trying ");
		puts("add(64, 8440557)");
		puts(buffer);
		assert(strcmp(buffer, "8440621") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1309053491656563258677);
		bigint_free(_2656120155081227798929);
		bigint_free(_118654006450096565704);

	

		bigint_t* _862151890428387053159;
		bigint_t* _3895385019410578903201 = bigint(64);
		bigint_t* _1262091169817413291520 = bigint(8440557);
		bigint_t* _1185846349909352656290 = bigint_sub(_3895385019410578903201, _1262091169817413291520 );
		bigint_to_string(_1185846349909352656290, 10, buffer);
		printf("trying ");
		puts("sub(64, 8440557)");
		puts(buffer);
		assert(strcmp(buffer, "-8440493") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3895385019410578903201);
		bigint_free(_1262091169817413291520);
		bigint_free(_1185846349909352656290);

	

		bigint_t* _1870109207895627014884;
		bigint_t* _2271024573067740114116 = bigint(-130);
		bigint_t* _3878608416709669389628 = bigint(-10954423);
		bigint_t* _4128202810970166507971 = bigint_mul(_2271024573067740114116, _3878608416709669389628 );
		bigint_to_string(_4128202810970166507971, 10, buffer);
		printf("trying ");
		puts("mul(-130, -10954423)");
		puts(buffer);
		assert(strcmp(buffer, "1424074990") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2271024573067740114116);
		bigint_free(_3878608416709669389628);
		bigint_free(_4128202810970166507971);

	

		bigint_t* _3986268403813463177930;
		bigint_t* _3585546868726956930459 = bigint(-130);
		bigint_t* _1336082009129037263587 = bigint(-10954423);
		bigint_t* _4586945588165656994981 = bigint_add(_3585546868726956930459, _1336082009129037263587 );
		bigint_to_string(_4586945588165656994981, 10, buffer);
		printf("trying ");
		puts("add(-130, -10954423)");
		puts(buffer);
		assert(strcmp(buffer, "-10954553") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3585546868726956930459);
		bigint_free(_1336082009129037263587);
		bigint_free(_4586945588165656994981);

	

		bigint_t* _1714893931290498463511;
		bigint_t* _2688309089127636487769 = bigint(-130);
		bigint_t* _2948239559378114961076 = bigint(-10954423);
		bigint_t* _2445655296226211975432 = bigint_sub(_2688309089127636487769, _2948239559378114961076 );
		bigint_to_string(_2445655296226211975432, 10, buffer);
		printf("trying ");
		puts("sub(-130, -10954423)");
		puts(buffer);
		assert(strcmp(buffer, "10954293") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2688309089127636487769);
		bigint_free(_2948239559378114961076);
		bigint_free(_2445655296226211975432);

	

		bigint_t* _36406002449767722908;
		bigint_t* _833759287047887031787 = bigint(147);
		bigint_t* _382781168748023656117 = bigint(-16681307);
		bigint_t* _4143026342167180572576 = bigint_mul(_833759287047887031787, _382781168748023656117 );
		bigint_to_string(_4143026342167180572576, 10, buffer);
		printf("trying ");
		puts("mul(147, -16681307)");
		puts(buffer);
		assert(strcmp(buffer, "-2452152129") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_833759287047887031787);
		bigint_free(_382781168748023656117);
		bigint_free(_4143026342167180572576);

	

		bigint_t* _3545628103325861584737;
		bigint_t* _1881055368126668312102 = bigint(147);
		bigint_t* _1372975486591108543221 = bigint(-16681307);
		bigint_t* _2005378431802635781260 = bigint_add(_1881055368126668312102, _1372975486591108543221 );
		bigint_to_string(_2005378431802635781260, 10, buffer);
		printf("trying ");
		puts("add(147, -16681307)");
		puts(buffer);
		assert(strcmp(buffer, "-16681160") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1881055368126668312102);
		bigint_free(_1372975486591108543221);
		bigint_free(_2005378431802635781260);

	

		bigint_t* _1134003556355538411846;
		bigint_t* _780239338256285197848 = bigint(147);
		bigint_t* _4290765780168559163296 = bigint(-16681307);
		bigint_t* _2009926660839996392683 = bigint_sub(_780239338256285197848, _4290765780168559163296 );
		bigint_to_string(_2009926660839996392683, 10, buffer);
		printf("trying ");
		puts("sub(147, -16681307)");
		puts(buffer);
		assert(strcmp(buffer, "16681454") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_780239338256285197848);
		bigint_free(_4290765780168559163296);
		bigint_free(_2009926660839996392683);

	

		bigint_t* _2488657611574873159165;
		bigint_t* _817845075713861470282 = bigint(-47);
		bigint_t* _2150462717489111833268 = bigint(-16322126);
		bigint_t* _1682227749188213568253 = bigint_mul(_817845075713861470282, _2150462717489111833268 );
		bigint_to_string(_1682227749188213568253, 10, buffer);
		printf("trying ");
		puts("mul(-47, -16322126)");
		puts(buffer);
		assert(strcmp(buffer, "767139922") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_817845075713861470282);
		bigint_free(_2150462717489111833268);
		bigint_free(_1682227749188213568253);

	

		bigint_t* _2101677883062563351641;
		bigint_t* _157762905528511900622 = bigint(-47);
		bigint_t* _2711858567366996973277 = bigint(-16322126);
		bigint_t* _4584751096648493077001 = bigint_add(_157762905528511900622, _2711858567366996973277 );
		bigint_to_string(_4584751096648493077001, 10, buffer);
		printf("trying ");
		puts("add(-47, -16322126)");
		puts(buffer);
		assert(strcmp(buffer, "-16322173") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_157762905528511900622);
		bigint_free(_2711858567366996973277);
		bigint_free(_4584751096648493077001);

	

		bigint_t* _71955515281080013115;
		bigint_t* _213099484346911555724 = bigint(-47);
		bigint_t* _455031459375356510388 = bigint(-16322126);
		bigint_t* _1678011450804404469113 = bigint_sub(_213099484346911555724, _455031459375356510388 );
		bigint_to_string(_1678011450804404469113, 10, buffer);
		printf("trying ");
		puts("sub(-47, -16322126)");
		puts(buffer);
		assert(strcmp(buffer, "16322079") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_213099484346911555724);
		bigint_free(_455031459375356510388);
		bigint_free(_1678011450804404469113);

	

		bigint_t* _1021376449787283876705;
		bigint_t* _2858084098151481567979 = bigint(-144);
		bigint_t* _4515190391231532694921 = bigint(12412775);
		bigint_t* _4534919365773912587868 = bigint_mul(_2858084098151481567979, _4515190391231532694921 );
		bigint_to_string(_4534919365773912587868, 10, buffer);
		printf("trying ");
		puts("mul(-144, 12412775)");
		puts(buffer);
		assert(strcmp(buffer, "-1787439600") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2858084098151481567979);
		bigint_free(_4515190391231532694921);
		bigint_free(_4534919365773912587868);

	

		bigint_t* _947570860761357922342;
		bigint_t* _3788871690326000211542 = bigint(-144);
		bigint_t* _4217538550405525176536 = bigint(12412775);
		bigint_t* _2121261564838267582847 = bigint_add(_3788871690326000211542, _4217538550405525176536 );
		bigint_to_string(_2121261564838267582847, 10, buffer);
		printf("trying ");
		puts("add(-144, 12412775)");
		puts(buffer);
		assert(strcmp(buffer, "12412631") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3788871690326000211542);
		bigint_free(_4217538550405525176536);
		bigint_free(_2121261564838267582847);

	

		bigint_t* _4551646695123986094608;
		bigint_t* _148993026055162227188 = bigint(-144);
		bigint_t* _1308631159330345086171 = bigint(12412775);
		bigint_t* _3947591395498125921158 = bigint_sub(_148993026055162227188, _1308631159330345086171 );
		bigint_to_string(_3947591395498125921158, 10, buffer);
		printf("trying ");
		puts("sub(-144, 12412775)");
		puts(buffer);
		assert(strcmp(buffer, "-12412919") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_148993026055162227188);
		bigint_free(_1308631159330345086171);
		bigint_free(_3947591395498125921158);

	

		bigint_t* _1628971069049876415770;
		bigint_t* _2866006992346484138726 = bigint(-173);
		bigint_t* _323170572305530679669 = bigint(5200075);
		bigint_t* _700821201010349954289 = bigint_mul(_2866006992346484138726, _323170572305530679669 );
		bigint_to_string(_700821201010349954289, 10, buffer);
		printf("trying ");
		puts("mul(-173, 5200075)");
		puts(buffer);
		assert(strcmp(buffer, "-899612975") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2866006992346484138726);
		bigint_free(_323170572305530679669);
		bigint_free(_700821201010349954289);

	

		bigint_t* _899658727724891257287;
		bigint_t* _4310358046829888892271 = bigint(-173);
		bigint_t* _3409399228449471380249 = bigint(5200075);
		bigint_t* _2826195286206110662811 = bigint_add(_4310358046829888892271, _3409399228449471380249 );
		bigint_to_string(_2826195286206110662811, 10, buffer);
		printf("trying ");
		puts("add(-173, 5200075)");
		puts(buffer);
		assert(strcmp(buffer, "5199902") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4310358046829888892271);
		bigint_free(_3409399228449471380249);
		bigint_free(_2826195286206110662811);

	

		bigint_t* _3175919490155398462570;
		bigint_t* _908309441851305212260 = bigint(-173);
		bigint_t* _3821867735391616497227 = bigint(5200075);
		bigint_t* _2373652205370740139540 = bigint_sub(_908309441851305212260, _3821867735391616497227 );
		bigint_to_string(_2373652205370740139540, 10, buffer);
		printf("trying ");
		puts("sub(-173, 5200075)");
		puts(buffer);
		assert(strcmp(buffer, "-5200248") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_908309441851305212260);
		bigint_free(_3821867735391616497227);
		bigint_free(_2373652205370740139540);

	

		bigint_t* _791730006222192123767;
		bigint_t* _1244813169247204683663 = bigint(79);
		bigint_t* _1440871728585349773487 = bigint(10418832);
		bigint_t* _2654832672231905186888 = bigint_mul(_1244813169247204683663, _1440871728585349773487 );
		bigint_to_string(_2654832672231905186888, 10, buffer);
		printf("trying ");
		puts("mul(79, 10418832)");
		puts(buffer);
		assert(strcmp(buffer, "823087728") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1244813169247204683663);
		bigint_free(_1440871728585349773487);
		bigint_free(_2654832672231905186888);

	

		bigint_t* _3535242742523570912584;
		bigint_t* _554825159415908496043 = bigint(79);
		bigint_t* _3310452627896459122635 = bigint(10418832);
		bigint_t* _3186993778984708355549 = bigint_add(_554825159415908496043, _3310452627896459122635 );
		bigint_to_string(_3186993778984708355549, 10, buffer);
		printf("trying ");
		puts("add(79, 10418832)");
		puts(buffer);
		assert(strcmp(buffer, "10418911") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_554825159415908496043);
		bigint_free(_3310452627896459122635);
		bigint_free(_3186993778984708355549);

	

		bigint_t* _2558265399906319001442;
		bigint_t* _525372338738877277251 = bigint(79);
		bigint_t* _3650867422386347886892 = bigint(10418832);
		bigint_t* _2716664463440035352226 = bigint_sub(_525372338738877277251, _3650867422386347886892 );
		bigint_to_string(_2716664463440035352226, 10, buffer);
		printf("trying ");
		puts("sub(79, 10418832)");
		puts(buffer);
		assert(strcmp(buffer, "-10418753") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_525372338738877277251);
		bigint_free(_3650867422386347886892);
		bigint_free(_2716664463440035352226);

	

		bigint_t* _4456933572231241068204;
		bigint_t* _1936715737027416238677 = bigint(157);
		bigint_t* _3144636585582476648756 = bigint(-8381998);
		bigint_t* _4612326363054424672177 = bigint_mul(_1936715737027416238677, _3144636585582476648756 );
		bigint_to_string(_4612326363054424672177, 10, buffer);
		printf("trying ");
		puts("mul(157, -8381998)");
		puts(buffer);
		assert(strcmp(buffer, "-1315973686") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1936715737027416238677);
		bigint_free(_3144636585582476648756);
		bigint_free(_4612326363054424672177);

	

		bigint_t* _2533524549005165255397;
		bigint_t* _2391662776110769860628 = bigint(157);
		bigint_t* _2232693605647173177881 = bigint(-8381998);
		bigint_t* _1758368439149354825160 = bigint_add(_2391662776110769860628, _2232693605647173177881 );
		bigint_to_string(_1758368439149354825160, 10, buffer);
		printf("trying ");
		puts("add(157, -8381998)");
		puts(buffer);
		assert(strcmp(buffer, "-8381841") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2391662776110769860628);
		bigint_free(_2232693605647173177881);
		bigint_free(_1758368439149354825160);

	

		bigint_t* _969468666585874092084;
		bigint_t* _4511610785322160005037 = bigint(157);
		bigint_t* _3560825305259363758372 = bigint(-8381998);
		bigint_t* _2649187604515899712249 = bigint_sub(_4511610785322160005037, _3560825305259363758372 );
		bigint_to_string(_2649187604515899712249, 10, buffer);
		printf("trying ");
		puts("sub(157, -8381998)");
		puts(buffer);
		assert(strcmp(buffer, "8382155") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4511610785322160005037);
		bigint_free(_3560825305259363758372);
		bigint_free(_2649187604515899712249);

	

		bigint_t* _1866611137114356570929;
		bigint_t* _392284754906620442219 = bigint(125);
		bigint_t* _1359523676558580067963 = bigint(-474820);
		bigint_t* _2281445200509866163227 = bigint_mul(_392284754906620442219, _1359523676558580067963 );
		bigint_to_string(_2281445200509866163227, 10, buffer);
		printf("trying ");
		puts("mul(125, -474820)");
		puts(buffer);
		assert(strcmp(buffer, "-59352500") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_392284754906620442219);
		bigint_free(_1359523676558580067963);
		bigint_free(_2281445200509866163227);

	

		bigint_t* _1438544444599021480521;
		bigint_t* _667725422808257599005 = bigint(125);
		bigint_t* _4720112127861817144184 = bigint(-474820);
		bigint_t* _818366653896545386523 = bigint_add(_667725422808257599005, _4720112127861817144184 );
		bigint_to_string(_818366653896545386523, 10, buffer);
		printf("trying ");
		puts("add(125, -474820)");
		puts(buffer);
		assert(strcmp(buffer, "-474695") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_667725422808257599005);
		bigint_free(_4720112127861817144184);
		bigint_free(_818366653896545386523);

	

		bigint_t* _3796452352600094566192;
		bigint_t* _4497885183576276274874 = bigint(125);
		bigint_t* _1370601881001885585480 = bigint(-474820);
		bigint_t* _3728458785798631308008 = bigint_sub(_4497885183576276274874, _1370601881001885585480 );
		bigint_to_string(_3728458785798631308008, 10, buffer);
		printf("trying ");
		puts("sub(125, -474820)");
		puts(buffer);
		assert(strcmp(buffer, "474945") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4497885183576276274874);
		bigint_free(_1370601881001885585480);
		bigint_free(_3728458785798631308008);

	

		bigint_t* _547747839422066485367;
		bigint_t* _3266523170362915208432 = bigint(164);
		bigint_t* _1807244345347228050216 = bigint(-945755);
		bigint_t* _3192548709151697430056 = bigint_mul(_3266523170362915208432, _1807244345347228050216 );
		bigint_to_string(_3192548709151697430056, 10, buffer);
		printf("trying ");
		puts("mul(164, -945755)");
		puts(buffer);
		assert(strcmp(buffer, "-155103820") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3266523170362915208432);
		bigint_free(_1807244345347228050216);
		bigint_free(_3192548709151697430056);

	

		bigint_t* _4465136031431281958008;
		bigint_t* _4016172412553710756279 = bigint(164);
		bigint_t* _3206497337255207102693 = bigint(-945755);
		bigint_t* _2881861726597164837625 = bigint_add(_4016172412553710756279, _3206497337255207102693 );
		bigint_to_string(_2881861726597164837625, 10, buffer);
		printf("trying ");
		puts("add(164, -945755)");
		puts(buffer);
		assert(strcmp(buffer, "-945591") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4016172412553710756279);
		bigint_free(_3206497337255207102693);
		bigint_free(_2881861726597164837625);

	

		bigint_t* _3594436170133357997172;
		bigint_t* _3158154131522289531658 = bigint(164);
		bigint_t* _3909839524244859433185 = bigint(-945755);
		bigint_t* _3570350724799920577552 = bigint_sub(_3158154131522289531658, _3909839524244859433185 );
		bigint_to_string(_3570350724799920577552, 10, buffer);
		printf("trying ");
		puts("sub(164, -945755)");
		puts(buffer);
		assert(strcmp(buffer, "945919") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3158154131522289531658);
		bigint_free(_3909839524244859433185);
		bigint_free(_3570350724799920577552);

	

		bigint_t* _2407868041715531709767;
		bigint_t* _795416391225861768181 = bigint(-62);
		bigint_t* _532846087534784851481 = bigint(12353901);
		bigint_t* _2524928275789279447405 = bigint_mul(_795416391225861768181, _532846087534784851481 );
		bigint_to_string(_2524928275789279447405, 10, buffer);
		printf("trying ");
		puts("mul(-62, 12353901)");
		puts(buffer);
		assert(strcmp(buffer, "-765941862") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_795416391225861768181);
		bigint_free(_532846087534784851481);
		bigint_free(_2524928275789279447405);

	

		bigint_t* _289083289319580575343;
		bigint_t* _3288764486727633435929 = bigint(-62);
		bigint_t* _3025900215388627302481 = bigint(12353901);
		bigint_t* _2469602869614609807759 = bigint_add(_3288764486727633435929, _3025900215388627302481 );
		bigint_to_string(_2469602869614609807759, 10, buffer);
		printf("trying ");
		puts("add(-62, 12353901)");
		puts(buffer);
		assert(strcmp(buffer, "12353839") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3288764486727633435929);
		bigint_free(_3025900215388627302481);
		bigint_free(_2469602869614609807759);

	

		bigint_t* _2563924202886498641135;
		bigint_t* _3008550988485551182085 = bigint(-62);
		bigint_t* _4320438920859266977315 = bigint(12353901);
		bigint_t* _4024339370473855791147 = bigint_sub(_3008550988485551182085, _4320438920859266977315 );
		bigint_to_string(_4024339370473855791147, 10, buffer);
		printf("trying ");
		puts("sub(-62, 12353901)");
		puts(buffer);
		assert(strcmp(buffer, "-12353963") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3008550988485551182085);
		bigint_free(_4320438920859266977315);
		bigint_free(_4024339370473855791147);

	

		bigint_t* _1377120661977829253026;
		bigint_t* _1553330472976376832915 = bigint(-87);
		bigint_t* _4539778945386313507353 = bigint(-5546947);
		bigint_t* _4543729156995772593216 = bigint_mul(_1553330472976376832915, _4539778945386313507353 );
		bigint_to_string(_4543729156995772593216, 10, buffer);
		printf("trying ");
		puts("mul(-87, -5546947)");
		puts(buffer);
		assert(strcmp(buffer, "482584389") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1553330472976376832915);
		bigint_free(_4539778945386313507353);
		bigint_free(_4543729156995772593216);

	

		bigint_t* _2637919462254021415639;
		bigint_t* _4632934832251732741646 = bigint(-87);
		bigint_t* _4223929233841646318514 = bigint(-5546947);
		bigint_t* _2771981463526883557407 = bigint_add(_4632934832251732741646, _4223929233841646318514 );
		bigint_to_string(_2771981463526883557407, 10, buffer);
		printf("trying ");
		puts("add(-87, -5546947)");
		puts(buffer);
		assert(strcmp(buffer, "-5547034") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4632934832251732741646);
		bigint_free(_4223929233841646318514);
		bigint_free(_2771981463526883557407);

	

		bigint_t* _4034550267324870922684;
		bigint_t* _1678119767276080241086 = bigint(-87);
		bigint_t* _1918097205191275753526 = bigint(-5546947);
		bigint_t* _2277709419112427418399 = bigint_sub(_1678119767276080241086, _1918097205191275753526 );
		bigint_to_string(_2277709419112427418399, 10, buffer);
		printf("trying ");
		puts("sub(-87, -5546947)");
		puts(buffer);
		assert(strcmp(buffer, "5546860") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1678119767276080241086);
		bigint_free(_1918097205191275753526);
		bigint_free(_2277709419112427418399);

	

		bigint_t* _3226245885652757878325;
		bigint_t* _4363927446972205441087 = bigint(-1);
		bigint_t* _1794875111858184460760 = bigint(10864817);
		bigint_t* _1951611327898014244559 = bigint_mul(_4363927446972205441087, _1794875111858184460760 );
		bigint_to_string(_1951611327898014244559, 10, buffer);
		printf("trying ");
		puts("mul(-1, 10864817)");
		puts(buffer);
		assert(strcmp(buffer, "-10864817") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4363927446972205441087);
		bigint_free(_1794875111858184460760);
		bigint_free(_1951611327898014244559);

	

		bigint_t* _355786728493208205367;
		bigint_t* _3028426328218688359870 = bigint(-1);
		bigint_t* _95646970414972219759 = bigint(10864817);
		bigint_t* _1562234355104755228490 = bigint_add(_3028426328218688359870, _95646970414972219759 );
		bigint_to_string(_1562234355104755228490, 10, buffer);
		printf("trying ");
		puts("add(-1, 10864817)");
		puts(buffer);
		assert(strcmp(buffer, "10864816") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3028426328218688359870);
		bigint_free(_95646970414972219759);
		bigint_free(_1562234355104755228490);

	

		bigint_t* _634909998626398641601;
		bigint_t* _570717106030444220431 = bigint(-1);
		bigint_t* _314465353789781140846 = bigint(10864817);
		bigint_t* _3724076219562444046368 = bigint_sub(_570717106030444220431, _314465353789781140846 );
		bigint_to_string(_3724076219562444046368, 10, buffer);
		printf("trying ");
		puts("sub(-1, 10864817)");
		puts(buffer);
		assert(strcmp(buffer, "-10864818") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_570717106030444220431);
		bigint_free(_314465353789781140846);
		bigint_free(_3724076219562444046368);

	

		bigint_t* _4272381125748441231046;
		bigint_t* _1722981660350661810291 = bigint(25);
		bigint_t* _1233643193714256158078 = bigint(-10830308);
		bigint_t* _191037161961020812677 = bigint_mul(_1722981660350661810291, _1233643193714256158078 );
		bigint_to_string(_191037161961020812677, 10, buffer);
		printf("trying ");
		puts("mul(25, -10830308)");
		puts(buffer);
		assert(strcmp(buffer, "-270757700") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1722981660350661810291);
		bigint_free(_1233643193714256158078);
		bigint_free(_191037161961020812677);

	

		bigint_t* _2202655599799103798631;
		bigint_t* _627858576740838053865 = bigint(25);
		bigint_t* _727247857086860439171 = bigint(-10830308);
		bigint_t* _3618526579397888281703 = bigint_add(_627858576740838053865, _727247857086860439171 );
		bigint_to_string(_3618526579397888281703, 10, buffer);
		printf("trying ");
		puts("add(25, -10830308)");
		puts(buffer);
		assert(strcmp(buffer, "-10830283") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_627858576740838053865);
		bigint_free(_727247857086860439171);
		bigint_free(_3618526579397888281703);

	

		bigint_t* _3747380865123478710882;
		bigint_t* _2888877496080207614985 = bigint(25);
		bigint_t* _1287497584917331882674 = bigint(-10830308);
		bigint_t* _840780447395045224303 = bigint_sub(_2888877496080207614985, _1287497584917331882674 );
		bigint_to_string(_840780447395045224303, 10, buffer);
		printf("trying ");
		puts("sub(25, -10830308)");
		puts(buffer);
		assert(strcmp(buffer, "10830333") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2888877496080207614985);
		bigint_free(_1287497584917331882674);
		bigint_free(_840780447395045224303);

	

		bigint_t* _2718369249401706442488;
		bigint_t* _196704000276078753930 = bigint(-180);
		bigint_t* _4547464977304675185880 = bigint(-15402263);
		bigint_t* _1371160639047819627517 = bigint_mul(_196704000276078753930, _4547464977304675185880 );
		bigint_to_string(_1371160639047819627517, 10, buffer);
		printf("trying ");
		puts("mul(-180, -15402263)");
		puts(buffer);
		assert(strcmp(buffer, "2772407340") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_196704000276078753930);
		bigint_free(_4547464977304675185880);
		bigint_free(_1371160639047819627517);

	

		bigint_t* _3855371316219558127108;
		bigint_t* _3622352112745735921628 = bigint(-180);
		bigint_t* _4312249262840027761396 = bigint(-15402263);
		bigint_t* _1240752936332045825209 = bigint_add(_3622352112745735921628, _4312249262840027761396 );
		bigint_to_string(_1240752936332045825209, 10, buffer);
		printf("trying ");
		puts("add(-180, -15402263)");
		puts(buffer);
		assert(strcmp(buffer, "-15402443") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3622352112745735921628);
		bigint_free(_4312249262840027761396);
		bigint_free(_1240752936332045825209);

	

		bigint_t* _1533882716737441401297;
		bigint_t* _4232473988684231842155 = bigint(-180);
		bigint_t* _1670380722865189967697 = bigint(-15402263);
		bigint_t* _4591391321886938639951 = bigint_sub(_4232473988684231842155, _1670380722865189967697 );
		bigint_to_string(_4591391321886938639951, 10, buffer);
		printf("trying ");
		puts("sub(-180, -15402263)");
		puts(buffer);
		assert(strcmp(buffer, "15402083") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4232473988684231842155);
		bigint_free(_1670380722865189967697);
		bigint_free(_4591391321886938639951);

	

		bigint_t* _4280807909119853108373;
		bigint_t* _1094389549760867849733 = bigint(57);
		bigint_t* _2800491092338819440427 = bigint(16020981);
		bigint_t* _4481529623881563813115 = bigint_mul(_1094389549760867849733, _2800491092338819440427 );
		bigint_to_string(_4481529623881563813115, 10, buffer);
		printf("trying ");
		puts("mul(57, 16020981)");
		puts(buffer);
		assert(strcmp(buffer, "913195917") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1094389549760867849733);
		bigint_free(_2800491092338819440427);
		bigint_free(_4481529623881563813115);

	

		bigint_t* _860777313642349298182;
		bigint_t* _3153652732468278908128 = bigint(57);
		bigint_t* _406504796940229403500 = bigint(16020981);
		bigint_t* _865738845615688451567 = bigint_add(_3153652732468278908128, _406504796940229403500 );
		bigint_to_string(_865738845615688451567, 10, buffer);
		printf("trying ");
		puts("add(57, 16020981)");
		puts(buffer);
		assert(strcmp(buffer, "16021038") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3153652732468278908128);
		bigint_free(_406504796940229403500);
		bigint_free(_865738845615688451567);

	

		bigint_t* _1090752280106210789404;
		bigint_t* _231582245887665165889 = bigint(57);
		bigint_t* _4327988650254693823632 = bigint(16020981);
		bigint_t* _3415966863199844722350 = bigint_sub(_231582245887665165889, _4327988650254693823632 );
		bigint_to_string(_3415966863199844722350, 10, buffer);
		printf("trying ");
		puts("sub(57, 16020981)");
		puts(buffer);
		assert(strcmp(buffer, "-16020924") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_231582245887665165889);
		bigint_free(_4327988650254693823632);
		bigint_free(_3415966863199844722350);

	

		bigint_t* _1403881138923081800102;
		bigint_t* _3726308938967577989777 = bigint(-126);
		bigint_t* _2638331079567574731498 = bigint(-1520938);
		bigint_t* _2904073744011992030584 = bigint_mul(_3726308938967577989777, _2638331079567574731498 );
		bigint_to_string(_2904073744011992030584, 10, buffer);
		printf("trying ");
		puts("mul(-126, -1520938)");
		puts(buffer);
		assert(strcmp(buffer, "191638188") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3726308938967577989777);
		bigint_free(_2638331079567574731498);
		bigint_free(_2904073744011992030584);

	

		bigint_t* _3815984884286308662182;
		bigint_t* _512122382074130546691 = bigint(-126);
		bigint_t* _4300393593692561273672 = bigint(-1520938);
		bigint_t* _1278915228150163650022 = bigint_add(_512122382074130546691, _4300393593692561273672 );
		bigint_to_string(_1278915228150163650022, 10, buffer);
		printf("trying ");
		puts("add(-126, -1520938)");
		puts(buffer);
		assert(strcmp(buffer, "-1521064") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_512122382074130546691);
		bigint_free(_4300393593692561273672);
		bigint_free(_1278915228150163650022);

	

		bigint_t* _4489535566944937806195;
		bigint_t* _3088102067166895443448 = bigint(-126);
		bigint_t* _872878683438943561183 = bigint(-1520938);
		bigint_t* _1463958285962518900121 = bigint_sub(_3088102067166895443448, _872878683438943561183 );
		bigint_to_string(_1463958285962518900121, 10, buffer);
		printf("trying ");
		puts("sub(-126, -1520938)");
		puts(buffer);
		assert(strcmp(buffer, "1520812") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3088102067166895443448);
		bigint_free(_872878683438943561183);
		bigint_free(_1463958285962518900121);

	

		bigint_t* _2115160892768242290641;
		bigint_t* _4041431761191103129763 = bigint(255);
		bigint_t* _1125906229415958839402 = bigint(-14835145);
		bigint_t* _831595750338392090150 = bigint_mul(_4041431761191103129763, _1125906229415958839402 );
		bigint_to_string(_831595750338392090150, 10, buffer);
		printf("trying ");
		puts("mul(255, -14835145)");
		puts(buffer);
		assert(strcmp(buffer, "-3782961975") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4041431761191103129763);
		bigint_free(_1125906229415958839402);
		bigint_free(_831595750338392090150);

	

		bigint_t* _2673290158010162868999;
		bigint_t* _622598321453984888950 = bigint(255);
		bigint_t* _3214892617146166227965 = bigint(-14835145);
		bigint_t* _4386843868734292351567 = bigint_add(_622598321453984888950, _3214892617146166227965 );
		bigint_to_string(_4386843868734292351567, 10, buffer);
		printf("trying ");
		puts("add(255, -14835145)");
		puts(buffer);
		assert(strcmp(buffer, "-14834890") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_622598321453984888950);
		bigint_free(_3214892617146166227965);
		bigint_free(_4386843868734292351567);

	

		bigint_t* _3008702054720812488656;
		bigint_t* _4438545436905996740076 = bigint(255);
		bigint_t* _246131561136376432481 = bigint(-14835145);
		bigint_t* _822791125820785502422 = bigint_sub(_4438545436905996740076, _246131561136376432481 );
		bigint_to_string(_822791125820785502422, 10, buffer);
		printf("trying ");
		puts("sub(255, -14835145)");
		puts(buffer);
		assert(strcmp(buffer, "14835400") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4438545436905996740076);
		bigint_free(_246131561136376432481);
		bigint_free(_822791125820785502422);

	

		bigint_t* _315603362378735552383;
		bigint_t* _2664963586621262822210 = bigint(-169);
		bigint_t* _3813721492089931635036 = bigint(-4834465);
		bigint_t* _95599314666522333767 = bigint_mul(_2664963586621262822210, _3813721492089931635036 );
		bigint_to_string(_95599314666522333767, 10, buffer);
		printf("trying ");
		puts("mul(-169, -4834465)");
		puts(buffer);
		assert(strcmp(buffer, "817024585") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2664963586621262822210);
		bigint_free(_3813721492089931635036);
		bigint_free(_95599314666522333767);

	

		bigint_t* _2562495228182151079863;
		bigint_t* _65844026861360141884 = bigint(-169);
		bigint_t* _1039493243028123754827 = bigint(-4834465);
		bigint_t* _2555000947683297006907 = bigint_add(_65844026861360141884, _1039493243028123754827 );
		bigint_to_string(_2555000947683297006907, 10, buffer);
		printf("trying ");
		puts("add(-169, -4834465)");
		puts(buffer);
		assert(strcmp(buffer, "-4834634") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_65844026861360141884);
		bigint_free(_1039493243028123754827);
		bigint_free(_2555000947683297006907);

	

		bigint_t* _715736756850455166968;
		bigint_t* _3266645396720534797586 = bigint(-169);
		bigint_t* _3846518448246957419745 = bigint(-4834465);
		bigint_t* _1353256576025901201867 = bigint_sub(_3266645396720534797586, _3846518448246957419745 );
		bigint_to_string(_1353256576025901201867, 10, buffer);
		printf("trying ");
		puts("sub(-169, -4834465)");
		puts(buffer);
		assert(strcmp(buffer, "4834296") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3266645396720534797586);
		bigint_free(_3846518448246957419745);
		bigint_free(_1353256576025901201867);

	

		bigint_t* _3149928221261297254810;
		bigint_t* _2463677229636351094688 = bigint(-130);
		bigint_t* _1684575389604411523090 = bigint(1053534);
		bigint_t* _1122962504075072272193 = bigint_mul(_2463677229636351094688, _1684575389604411523090 );
		bigint_to_string(_1122962504075072272193, 10, buffer);
		printf("trying ");
		puts("mul(-130, 1053534)");
		puts(buffer);
		assert(strcmp(buffer, "-136959420") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2463677229636351094688);
		bigint_free(_1684575389604411523090);
		bigint_free(_1122962504075072272193);

	

		bigint_t* _2325861065534999834390;
		bigint_t* _3910760013334793400051 = bigint(-130);
		bigint_t* _1002582585635935364357 = bigint(1053534);
		bigint_t* _3919674484374231284106 = bigint_add(_3910760013334793400051, _1002582585635935364357 );
		bigint_to_string(_3919674484374231284106, 10, buffer);
		printf("trying ");
		puts("add(-130, 1053534)");
		puts(buffer);
		assert(strcmp(buffer, "1053404") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3910760013334793400051);
		bigint_free(_1002582585635935364357);
		bigint_free(_3919674484374231284106);

	

		bigint_t* _3605126811259917325972;
		bigint_t* _277144237496692865936 = bigint(-130);
		bigint_t* _2517287776120413682593 = bigint(1053534);
		bigint_t* _2767421935140629745825 = bigint_sub(_277144237496692865936, _2517287776120413682593 );
		bigint_to_string(_2767421935140629745825, 10, buffer);
		printf("trying ");
		puts("sub(-130, 1053534)");
		puts(buffer);
		assert(strcmp(buffer, "-1053664") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_277144237496692865936);
		bigint_free(_2517287776120413682593);
		bigint_free(_2767421935140629745825);

	

		bigint_t* _125131781477460986166;
		bigint_t* _2739303683489997609573 = bigint(-137);
		bigint_t* _4343191752187588988786 = bigint(3444816);
		bigint_t* _4605733537559590817182 = bigint_mul(_2739303683489997609573, _4343191752187588988786 );
		bigint_to_string(_4605733537559590817182, 10, buffer);
		printf("trying ");
		puts("mul(-137, 3444816)");
		puts(buffer);
		assert(strcmp(buffer, "-471939792") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2739303683489997609573);
		bigint_free(_4343191752187588988786);
		bigint_free(_4605733537559590817182);

	

		bigint_t* _3846410318107740555841;
		bigint_t* _3379016397362742801453 = bigint(-137);
		bigint_t* _3070520554086415799681 = bigint(3444816);
		bigint_t* _1082793667559323876819 = bigint_add(_3379016397362742801453, _3070520554086415799681 );
		bigint_to_string(_1082793667559323876819, 10, buffer);
		printf("trying ");
		puts("add(-137, 3444816)");
		puts(buffer);
		assert(strcmp(buffer, "3444679") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3379016397362742801453);
		bigint_free(_3070520554086415799681);
		bigint_free(_1082793667559323876819);

	

		bigint_t* _2953399127531753005216;
		bigint_t* _3699703037241189489483 = bigint(-137);
		bigint_t* _2965950134209894236621 = bigint(3444816);
		bigint_t* _2875651500408896961539 = bigint_sub(_3699703037241189489483, _2965950134209894236621 );
		bigint_to_string(_2875651500408896961539, 10, buffer);
		printf("trying ");
		puts("sub(-137, 3444816)");
		puts(buffer);
		assert(strcmp(buffer, "-3444953") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3699703037241189489483);
		bigint_free(_2965950134209894236621);
		bigint_free(_2875651500408896961539);

	

		bigint_t* _2842436663783327705976;
		bigint_t* _1473205980787681933798 = bigint(111);
		bigint_t* _3040494321106598127301 = bigint(1504950);
		bigint_t* _4049424651237211622000 = bigint_mul(_1473205980787681933798, _3040494321106598127301 );
		bigint_to_string(_4049424651237211622000, 10, buffer);
		printf("trying ");
		puts("mul(111, 1504950)");
		puts(buffer);
		assert(strcmp(buffer, "167049450") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1473205980787681933798);
		bigint_free(_3040494321106598127301);
		bigint_free(_4049424651237211622000);

	

		bigint_t* _2426775013897380561809;
		bigint_t* _2315124629371577715034 = bigint(111);
		bigint_t* _1657687355487407946792 = bigint(1504950);
		bigint_t* _4619800534609512641497 = bigint_add(_2315124629371577715034, _1657687355487407946792 );
		bigint_to_string(_4619800534609512641497, 10, buffer);
		printf("trying ");
		puts("add(111, 1504950)");
		puts(buffer);
		assert(strcmp(buffer, "1505061") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2315124629371577715034);
		bigint_free(_1657687355487407946792);
		bigint_free(_4619800534609512641497);

	

		bigint_t* _4688062875836171581060;
		bigint_t* _2862762861467960471018 = bigint(111);
		bigint_t* _4609401301735361486896 = bigint(1504950);
		bigint_t* _4717534242810652070464 = bigint_sub(_2862762861467960471018, _4609401301735361486896 );
		bigint_to_string(_4717534242810652070464, 10, buffer);
		printf("trying ");
		puts("sub(111, 1504950)");
		puts(buffer);
		assert(strcmp(buffer, "-1504839") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2862762861467960471018);
		bigint_free(_4609401301735361486896);
		bigint_free(_4717534242810652070464);

	

		bigint_t* _1597654170836874930619;
		bigint_t* _3969390718293275680213 = bigint(-255);
		bigint_t* _789283811810437983815 = bigint(-13674088);
		bigint_t* _2034037299236246308530 = bigint_mul(_3969390718293275680213, _789283811810437983815 );
		bigint_to_string(_2034037299236246308530, 10, buffer);
		printf("trying ");
		puts("mul(-255, -13674088)");
		puts(buffer);
		assert(strcmp(buffer, "3486892440") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3969390718293275680213);
		bigint_free(_789283811810437983815);
		bigint_free(_2034037299236246308530);

	

		bigint_t* _3178756719542021741998;
		bigint_t* _2786002184232224462692 = bigint(-255);
		bigint_t* _2948863733917707059078 = bigint(-13674088);
		bigint_t* _2694235923245205140903 = bigint_add(_2786002184232224462692, _2948863733917707059078 );
		bigint_to_string(_2694235923245205140903, 10, buffer);
		printf("trying ");
		puts("add(-255, -13674088)");
		puts(buffer);
		assert(strcmp(buffer, "-13674343") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2786002184232224462692);
		bigint_free(_2948863733917707059078);
		bigint_free(_2694235923245205140903);

	

		bigint_t* _1607429237084326739593;
		bigint_t* _3063940799786476074257 = bigint(-255);
		bigint_t* _1751205143823265170847 = bigint(-13674088);
		bigint_t* _3476368863232944500202 = bigint_sub(_3063940799786476074257, _1751205143823265170847 );
		bigint_to_string(_3476368863232944500202, 10, buffer);
		printf("trying ");
		puts("sub(-255, -13674088)");
		puts(buffer);
		assert(strcmp(buffer, "13673833") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3063940799786476074257);
		bigint_free(_1751205143823265170847);
		bigint_free(_3476368863232944500202);

	

		bigint_t* _4142245545833526726918;
		bigint_t* _4556711663089694010406 = bigint(86);
		bigint_t* _221755020986696504292 = bigint(-9573379);
		bigint_t* _3375436039955776415063 = bigint_mul(_4556711663089694010406, _221755020986696504292 );
		bigint_to_string(_3375436039955776415063, 10, buffer);
		printf("trying ");
		puts("mul(86, -9573379)");
		puts(buffer);
		assert(strcmp(buffer, "-823310594") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4556711663089694010406);
		bigint_free(_221755020986696504292);
		bigint_free(_3375436039955776415063);

	

		bigint_t* _614273194384354296750;
		bigint_t* _1805355763656793766524 = bigint(86);
		bigint_t* _4294867761564703236153 = bigint(-9573379);
		bigint_t* _3187148224816511956512 = bigint_add(_1805355763656793766524, _4294867761564703236153 );
		bigint_to_string(_3187148224816511956512, 10, buffer);
		printf("trying ");
		puts("add(86, -9573379)");
		puts(buffer);
		assert(strcmp(buffer, "-9573293") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1805355763656793766524);
		bigint_free(_4294867761564703236153);
		bigint_free(_3187148224816511956512);

	

		bigint_t* _2913337624322027832292;
		bigint_t* _4412585911721929259877 = bigint(86);
		bigint_t* _2531460060303684529776 = bigint(-9573379);
		bigint_t* _607363851656955985445 = bigint_sub(_4412585911721929259877, _2531460060303684529776 );
		bigint_to_string(_607363851656955985445, 10, buffer);
		printf("trying ");
		puts("sub(86, -9573379)");
		puts(buffer);
		assert(strcmp(buffer, "9573465") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4412585911721929259877);
		bigint_free(_2531460060303684529776);
		bigint_free(_607363851656955985445);

	

		bigint_t* _3487327830455376627229;
		bigint_t* _2701779888902508716354 = bigint(229);
		bigint_t* _1560582282361913805330 = bigint(-4201804);
		bigint_t* _2861048174290946125685 = bigint_mul(_2701779888902508716354, _1560582282361913805330 );
		bigint_to_string(_2861048174290946125685, 10, buffer);
		printf("trying ");
		puts("mul(229, -4201804)");
		puts(buffer);
		assert(strcmp(buffer, "-962213116") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2701779888902508716354);
		bigint_free(_1560582282361913805330);
		bigint_free(_2861048174290946125685);

	

		bigint_t* _12916812948182023516;
		bigint_t* _4135027859004641321307 = bigint(229);
		bigint_t* _3156842319591976169514 = bigint(-4201804);
		bigint_t* _80375149859421047071 = bigint_add(_4135027859004641321307, _3156842319591976169514 );
		bigint_to_string(_80375149859421047071, 10, buffer);
		printf("trying ");
		puts("add(229, -4201804)");
		puts(buffer);
		assert(strcmp(buffer, "-4201575") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4135027859004641321307);
		bigint_free(_3156842319591976169514);
		bigint_free(_80375149859421047071);

	

		bigint_t* _3324163439478387701820;
		bigint_t* _4481704815478532971223 = bigint(229);
		bigint_t* _4037515222870047525472 = bigint(-4201804);
		bigint_t* _2901788758803982976038 = bigint_sub(_4481704815478532971223, _4037515222870047525472 );
		bigint_to_string(_2901788758803982976038, 10, buffer);
		printf("trying ");
		puts("sub(229, -4201804)");
		puts(buffer);
		assert(strcmp(buffer, "4202033") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4481704815478532971223);
		bigint_free(_4037515222870047525472);
		bigint_free(_2901788758803982976038);

	

		bigint_t* _4465789459293149799198;
		bigint_t* _2864748924842844284689 = bigint(189);
		bigint_t* _1982399771338689104493 = bigint(1606138);
		bigint_t* _1105349916423746951860 = bigint_mul(_2864748924842844284689, _1982399771338689104493 );
		bigint_to_string(_1105349916423746951860, 10, buffer);
		printf("trying ");
		puts("mul(189, 1606138)");
		puts(buffer);
		assert(strcmp(buffer, "303560082") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2864748924842844284689);
		bigint_free(_1982399771338689104493);
		bigint_free(_1105349916423746951860);

	

		bigint_t* _1785182551044246519490;
		bigint_t* _3393853351033045739913 = bigint(189);
		bigint_t* _1026230927552192794017 = bigint(1606138);
		bigint_t* _1283730490795250084849 = bigint_add(_3393853351033045739913, _1026230927552192794017 );
		bigint_to_string(_1283730490795250084849, 10, buffer);
		printf("trying ");
		puts("add(189, 1606138)");
		puts(buffer);
		assert(strcmp(buffer, "1606327") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3393853351033045739913);
		bigint_free(_1026230927552192794017);
		bigint_free(_1283730490795250084849);

	

		bigint_t* _1965376646332942701158;
		bigint_t* _2468580013323783377636 = bigint(189);
		bigint_t* _4078840596365842919600 = bigint(1606138);
		bigint_t* _2623488290487905813697 = bigint_sub(_2468580013323783377636, _4078840596365842919600 );
		bigint_to_string(_2623488290487905813697, 10, buffer);
		printf("trying ");
		puts("sub(189, 1606138)");
		puts(buffer);
		assert(strcmp(buffer, "-1605949") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2468580013323783377636);
		bigint_free(_4078840596365842919600);
		bigint_free(_2623488290487905813697);

	

		bigint_t* _1519690888931870922657;
		bigint_t* _1849662302285774844464 = bigint(-96);
		bigint_t* _2142009240615233657322 = bigint(-3420144);
		bigint_t* _2232073257128964750181 = bigint_mul(_1849662302285774844464, _2142009240615233657322 );
		bigint_to_string(_2232073257128964750181, 10, buffer);
		printf("trying ");
		puts("mul(-96, -3420144)");
		puts(buffer);
		assert(strcmp(buffer, "328333824") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1849662302285774844464);
		bigint_free(_2142009240615233657322);
		bigint_free(_2232073257128964750181);

	

		bigint_t* _1770118803494768104117;
		bigint_t* _493865140016440686050 = bigint(-96);
		bigint_t* _4601910295991749117409 = bigint(-3420144);
		bigint_t* _596486169638372550476 = bigint_add(_493865140016440686050, _4601910295991749117409 );
		bigint_to_string(_596486169638372550476, 10, buffer);
		printf("trying ");
		puts("add(-96, -3420144)");
		puts(buffer);
		assert(strcmp(buffer, "-3420240") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_493865140016440686050);
		bigint_free(_4601910295991749117409);
		bigint_free(_596486169638372550476);

	

		bigint_t* _1027951715081726784114;
		bigint_t* _2774384069452144857967 = bigint(-96);
		bigint_t* _3744878906553527803411 = bigint(-3420144);
		bigint_t* _1848096410065249715471 = bigint_sub(_2774384069452144857967, _3744878906553527803411 );
		bigint_to_string(_1848096410065249715471, 10, buffer);
		printf("trying ");
		puts("sub(-96, -3420144)");
		puts(buffer);
		assert(strcmp(buffer, "3420048") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2774384069452144857967);
		bigint_free(_3744878906553527803411);
		bigint_free(_1848096410065249715471);

	

		bigint_t* _4711618574950854436000;
		bigint_t* _2153859633064863832024 = bigint(81);
		bigint_t* _4425133395916962247047 = bigint(-4950333);
		bigint_t* _4370304623770427955170 = bigint_mul(_2153859633064863832024, _4425133395916962247047 );
		bigint_to_string(_4370304623770427955170, 10, buffer);
		printf("trying ");
		puts("mul(81, -4950333)");
		puts(buffer);
		assert(strcmp(buffer, "-400976973") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2153859633064863832024);
		bigint_free(_4425133395916962247047);
		bigint_free(_4370304623770427955170);

	

		bigint_t* _3937199158538043813764;
		bigint_t* _190233184145515660134 = bigint(81);
		bigint_t* _4441563070829485007271 = bigint(-4950333);
		bigint_t* _3962796638730162277904 = bigint_add(_190233184145515660134, _4441563070829485007271 );
		bigint_to_string(_3962796638730162277904, 10, buffer);
		printf("trying ");
		puts("add(81, -4950333)");
		puts(buffer);
		assert(strcmp(buffer, "-4950252") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_190233184145515660134);
		bigint_free(_4441563070829485007271);
		bigint_free(_3962796638730162277904);

	

		bigint_t* _2333480871269396918396;
		bigint_t* _3219416693214899833316 = bigint(81);
		bigint_t* _1703554907872979931660 = bigint(-4950333);
		bigint_t* _1892376712873506042097 = bigint_sub(_3219416693214899833316, _1703554907872979931660 );
		bigint_to_string(_1892376712873506042097, 10, buffer);
		printf("trying ");
		puts("sub(81, -4950333)");
		puts(buffer);
		assert(strcmp(buffer, "4950414") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3219416693214899833316);
		bigint_free(_1703554907872979931660);
		bigint_free(_1892376712873506042097);

	

		bigint_t* _3742976597022404332309;
		bigint_t* _3636461938157494500427 = bigint(59);
		bigint_t* _3066674696046043366857 = bigint(-11287161);
		bigint_t* _2934713020326601177987 = bigint_mul(_3636461938157494500427, _3066674696046043366857 );
		bigint_to_string(_2934713020326601177987, 10, buffer);
		printf("trying ");
		puts("mul(59, -11287161)");
		puts(buffer);
		assert(strcmp(buffer, "-665942499") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3636461938157494500427);
		bigint_free(_3066674696046043366857);
		bigint_free(_2934713020326601177987);

	

		bigint_t* _4566886868445412001246;
		bigint_t* _4052267590608303157228 = bigint(59);
		bigint_t* _2233125619345889821479 = bigint(-11287161);
		bigint_t* _1839150581507945201255 = bigint_add(_4052267590608303157228, _2233125619345889821479 );
		bigint_to_string(_1839150581507945201255, 10, buffer);
		printf("trying ");
		puts("add(59, -11287161)");
		puts(buffer);
		assert(strcmp(buffer, "-11287102") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4052267590608303157228);
		bigint_free(_2233125619345889821479);
		bigint_free(_1839150581507945201255);

	

		bigint_t* _1510499420294764249255;
		bigint_t* _2815738417065557764141 = bigint(59);
		bigint_t* _3655371052374416133442 = bigint(-11287161);
		bigint_t* _639023348398476831447 = bigint_sub(_2815738417065557764141, _3655371052374416133442 );
		bigint_to_string(_639023348398476831447, 10, buffer);
		printf("trying ");
		puts("sub(59, -11287161)");
		puts(buffer);
		assert(strcmp(buffer, "11287220") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2815738417065557764141);
		bigint_free(_3655371052374416133442);
		bigint_free(_639023348398476831447);

	

		bigint_t* _960156666001810720939;
		bigint_t* _4701291032946150111719 = bigint(-115);
		bigint_t* _3399094055194679478652 = bigint(13067838);
		bigint_t* _357598190474797858819 = bigint_mul(_4701291032946150111719, _3399094055194679478652 );
		bigint_to_string(_357598190474797858819, 10, buffer);
		printf("trying ");
		puts("mul(-115, 13067838)");
		puts(buffer);
		assert(strcmp(buffer, "-1502801370") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4701291032946150111719);
		bigint_free(_3399094055194679478652);
		bigint_free(_357598190474797858819);

	

		bigint_t* _3888327337197157246644;
		bigint_t* _1702911236839061247156 = bigint(-115);
		bigint_t* _2392798008189787699632 = bigint(13067838);
		bigint_t* _433925861504115269861 = bigint_add(_1702911236839061247156, _2392798008189787699632 );
		bigint_to_string(_433925861504115269861, 10, buffer);
		printf("trying ");
		puts("add(-115, 13067838)");
		puts(buffer);
		assert(strcmp(buffer, "13067723") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1702911236839061247156);
		bigint_free(_2392798008189787699632);
		bigint_free(_433925861504115269861);

	

		bigint_t* _2791862245706652728843;
		bigint_t* _1977912191559057519173 = bigint(-115);
		bigint_t* _4378130468964172223379 = bigint(13067838);
		bigint_t* _1121837294054389094386 = bigint_sub(_1977912191559057519173, _4378130468964172223379 );
		bigint_to_string(_1121837294054389094386, 10, buffer);
		printf("trying ");
		puts("sub(-115, 13067838)");
		puts(buffer);
		assert(strcmp(buffer, "-13067953") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1977912191559057519173);
		bigint_free(_4378130468964172223379);
		bigint_free(_1121837294054389094386);

	

		bigint_t* _260637218956023667484;
		bigint_t* _1893122110571953048447 = bigint(27);
		bigint_t* _4666343521660574503686 = bigint(4429293);
		bigint_t* _3997646803202253306548 = bigint_mul(_1893122110571953048447, _4666343521660574503686 );
		bigint_to_string(_3997646803202253306548, 10, buffer);
		printf("trying ");
		puts("mul(27, 4429293)");
		puts(buffer);
		assert(strcmp(buffer, "119590911") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1893122110571953048447);
		bigint_free(_4666343521660574503686);
		bigint_free(_3997646803202253306548);

	

		bigint_t* _2029266164928632401457;
		bigint_t* _4227514679957080132260 = bigint(27);
		bigint_t* _3586197418212866653138 = bigint(4429293);
		bigint_t* _2779113655997047587056 = bigint_add(_4227514679957080132260, _3586197418212866653138 );
		bigint_to_string(_2779113655997047587056, 10, buffer);
		printf("trying ");
		puts("add(27, 4429293)");
		puts(buffer);
		assert(strcmp(buffer, "4429320") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4227514679957080132260);
		bigint_free(_3586197418212866653138);
		bigint_free(_2779113655997047587056);

	

		bigint_t* _948993290647775894587;
		bigint_t* _3564089972613510924698 = bigint(27);
		bigint_t* _761551920553949594560 = bigint(4429293);
		bigint_t* _372668909116408063724 = bigint_sub(_3564089972613510924698, _761551920553949594560 );
		bigint_to_string(_372668909116408063724, 10, buffer);
		printf("trying ");
		puts("sub(27, 4429293)");
		puts(buffer);
		assert(strcmp(buffer, "-4429266") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3564089972613510924698);
		bigint_free(_761551920553949594560);
		bigint_free(_372668909116408063724);

	

		bigint_t* _4166217102140690819516;
		bigint_t* _4026139023621342000169 = bigint(-188);
		bigint_t* _497995460211012293852 = bigint(4435379);
		bigint_t* _2312242285662067711748 = bigint_mul(_4026139023621342000169, _497995460211012293852 );
		bigint_to_string(_2312242285662067711748, 10, buffer);
		printf("trying ");
		puts("mul(-188, 4435379)");
		puts(buffer);
		assert(strcmp(buffer, "-833851252") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4026139023621342000169);
		bigint_free(_497995460211012293852);
		bigint_free(_2312242285662067711748);

	

		bigint_t* _3532549573999676092270;
		bigint_t* _3712432061429049584318 = bigint(-188);
		bigint_t* _2210610435357081065761 = bigint(4435379);
		bigint_t* _1161020724011168981612 = bigint_add(_3712432061429049584318, _2210610435357081065761 );
		bigint_to_string(_1161020724011168981612, 10, buffer);
		printf("trying ");
		puts("add(-188, 4435379)");
		puts(buffer);
		assert(strcmp(buffer, "4435191") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3712432061429049584318);
		bigint_free(_2210610435357081065761);
		bigint_free(_1161020724011168981612);

	

		bigint_t* _2216415953496529708942;
		bigint_t* _393123488612347782206 = bigint(-188);
		bigint_t* _3405169194218706564172 = bigint(4435379);
		bigint_t* _3519507320184564588708 = bigint_sub(_393123488612347782206, _3405169194218706564172 );
		bigint_to_string(_3519507320184564588708, 10, buffer);
		printf("trying ");
		puts("sub(-188, 4435379)");
		puts(buffer);
		assert(strcmp(buffer, "-4435567") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_393123488612347782206);
		bigint_free(_3405169194218706564172);
		bigint_free(_3519507320184564588708);

	

		bigint_t* _4343811371349651166515;
		bigint_t* _3148824815538633076835 = bigint(-114);
		bigint_t* _2350015765451076919619 = bigint(4754105);
		bigint_t* _2900361565400382068716 = bigint_mul(_3148824815538633076835, _2350015765451076919619 );
		bigint_to_string(_2900361565400382068716, 10, buffer);
		printf("trying ");
		puts("mul(-114, 4754105)");
		puts(buffer);
		assert(strcmp(buffer, "-541967970") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3148824815538633076835);
		bigint_free(_2350015765451076919619);
		bigint_free(_2900361565400382068716);

	

		bigint_t* _3842994561524692505218;
		bigint_t* _2528057875261874048491 = bigint(-114);
		bigint_t* _4674117847302089125494 = bigint(4754105);
		bigint_t* _1752392519515456559056 = bigint_add(_2528057875261874048491, _4674117847302089125494 );
		bigint_to_string(_1752392519515456559056, 10, buffer);
		printf("trying ");
		puts("add(-114, 4754105)");
		puts(buffer);
		assert(strcmp(buffer, "4753991") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2528057875261874048491);
		bigint_free(_4674117847302089125494);
		bigint_free(_1752392519515456559056);

	

		bigint_t* _3095917980047389657400;
		bigint_t* _13755432697221315207 = bigint(-114);
		bigint_t* _2931525807930074848709 = bigint(4754105);
		bigint_t* _770220896578076957457 = bigint_sub(_13755432697221315207, _2931525807930074848709 );
		bigint_to_string(_770220896578076957457, 10, buffer);
		printf("trying ");
		puts("sub(-114, 4754105)");
		puts(buffer);
		assert(strcmp(buffer, "-4754219") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_13755432697221315207);
		bigint_free(_2931525807930074848709);
		bigint_free(_770220896578076957457);

	

		bigint_t* _169878242429342003434;
		bigint_t* _2420106116366384103311 = bigint(81);
		bigint_t* _2197860703111542796779 = bigint(3576655);
		bigint_t* _2717272132740156073390 = bigint_mul(_2420106116366384103311, _2197860703111542796779 );
		bigint_to_string(_2717272132740156073390, 10, buffer);
		printf("trying ");
		puts("mul(81, 3576655)");
		puts(buffer);
		assert(strcmp(buffer, "289709055") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2420106116366384103311);
		bigint_free(_2197860703111542796779);
		bigint_free(_2717272132740156073390);

	

		bigint_t* _3234545658433861353427;
		bigint_t* _4505078766431329229821 = bigint(81);
		bigint_t* _812592509833583346336 = bigint(3576655);
		bigint_t* _1272799408565512897871 = bigint_add(_4505078766431329229821, _812592509833583346336 );
		bigint_to_string(_1272799408565512897871, 10, buffer);
		printf("trying ");
		puts("add(81, 3576655)");
		puts(buffer);
		assert(strcmp(buffer, "3576736") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_4505078766431329229821);
		bigint_free(_812592509833583346336);
		bigint_free(_1272799408565512897871);

	

		bigint_t* _3169618467007265762420;
		bigint_t* _2123113184561450382908 = bigint(81);
		bigint_t* _4412104853074059765157 = bigint(3576655);
		bigint_t* _4299769182058727970412 = bigint_sub(_2123113184561450382908, _4412104853074059765157 );
		bigint_to_string(_4299769182058727970412, 10, buffer);
		printf("trying ");
		puts("sub(81, 3576655)");
		puts(buffer);
		assert(strcmp(buffer, "-3576574") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2123113184561450382908);
		bigint_free(_4412104853074059765157);
		bigint_free(_4299769182058727970412);

	

		bigint_t* _169853463685836698830;
		bigint_t* _1968633606150699240809 = bigint(28);
		bigint_t* _467894416111923060092 = bigint(-16624860);
		bigint_t* _648438521407342864132 = bigint_mul(_1968633606150699240809, _467894416111923060092 );
		bigint_to_string(_648438521407342864132, 10, buffer);
		printf("trying ");
		puts("mul(28, -16624860)");
		puts(buffer);
		assert(strcmp(buffer, "-465496080") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1968633606150699240809);
		bigint_free(_467894416111923060092);
		bigint_free(_648438521407342864132);

	

		bigint_t* _1049245762733456832331;
		bigint_t* _643692669681516782803 = bigint(28);
		bigint_t* _1495939104041780320015 = bigint(-16624860);
		bigint_t* _1980591504688384263024 = bigint_add(_643692669681516782803, _1495939104041780320015 );
		bigint_to_string(_1980591504688384263024, 10, buffer);
		printf("trying ");
		puts("add(28, -16624860)");
		puts(buffer);
		assert(strcmp(buffer, "-16624832") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_643692669681516782803);
		bigint_free(_1495939104041780320015);
		bigint_free(_1980591504688384263024);

	

		bigint_t* _978904518305328996269;
		bigint_t* _2711385947101630193310 = bigint(28);
		bigint_t* _3807443262948374578090 = bigint(-16624860);
		bigint_t* _2284652167437686553863 = bigint_sub(_2711385947101630193310, _3807443262948374578090 );
		bigint_to_string(_2284652167437686553863, 10, buffer);
		printf("trying ");
		puts("sub(28, -16624860)");
		puts(buffer);
		assert(strcmp(buffer, "16624888") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2711385947101630193310);
		bigint_free(_3807443262948374578090);
		bigint_free(_2284652167437686553863);

	

		bigint_t* _2111669013255314855147;
		bigint_t* _322409077041718582985 = bigint(-53);
		bigint_t* _892970712102025086297 = bigint(-14383124);
		bigint_t* _4196125546066154316968 = bigint_mul(_322409077041718582985, _892970712102025086297 );
		bigint_to_string(_4196125546066154316968, 10, buffer);
		printf("trying ");
		puts("mul(-53, -14383124)");
		puts(buffer);
		assert(strcmp(buffer, "762305572") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_322409077041718582985);
		bigint_free(_892970712102025086297);
		bigint_free(_4196125546066154316968);

	

		bigint_t* _3089045872709161641479;
		bigint_t* _3148089260127385450793 = bigint(-53);
		bigint_t* _3475345362515982707578 = bigint(-14383124);
		bigint_t* _2476511956495984575845 = bigint_add(_3148089260127385450793, _3475345362515982707578 );
		bigint_to_string(_2476511956495984575845, 10, buffer);
		printf("trying ");
		puts("add(-53, -14383124)");
		puts(buffer);
		assert(strcmp(buffer, "-14383177") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3148089260127385450793);
		bigint_free(_3475345362515982707578);
		bigint_free(_2476511956495984575845);

	

		bigint_t* _3296620379422535011494;
		bigint_t* _4699297075104435552979 = bigint(-53);
		bigint_t* _1515883112203321374126 = bigint(-14383124);
		bigint_t* _1622557959713431958574 = bigint_sub(_4699297075104435552979, _1515883112203321374126 );
		bigint_to_string(_1622557959713431958574, 10, buffer);
		printf("trying ");
		puts("sub(-53, -14383124)");
		puts(buffer);
		assert(strcmp(buffer, "14383071") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4699297075104435552979);
		bigint_free(_1515883112203321374126);
		bigint_free(_1622557959713431958574);

	

		bigint_t* _2627157951888463824963;
		bigint_t* _2678159405141201047895 = bigint(-71);
		bigint_t* _490191686404817458755 = bigint(-2790878);
		bigint_t* _2718511238968254984130 = bigint_mul(_2678159405141201047895, _490191686404817458755 );
		bigint_to_string(_2718511238968254984130, 10, buffer);
		printf("trying ");
		puts("mul(-71, -2790878)");
		puts(buffer);
		assert(strcmp(buffer, "198152338") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2678159405141201047895);
		bigint_free(_490191686404817458755);
		bigint_free(_2718511238968254984130);

	

		bigint_t* _2138963965217852610878;
		bigint_t* _1225646706483596208775 = bigint(-71);
		bigint_t* _3409226803990829165658 = bigint(-2790878);
		bigint_t* _2274796958506154624565 = bigint_add(_1225646706483596208775, _3409226803990829165658 );
		bigint_to_string(_2274796958506154624565, 10, buffer);
		printf("trying ");
		puts("add(-71, -2790878)");
		puts(buffer);
		assert(strcmp(buffer, "-2790949") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1225646706483596208775);
		bigint_free(_3409226803990829165658);
		bigint_free(_2274796958506154624565);

	

		bigint_t* _3952678560782370092019;
		bigint_t* _4219684455647765412375 = bigint(-71);
		bigint_t* _4606742748091498981092 = bigint(-2790878);
		bigint_t* _2281791889047360409018 = bigint_sub(_4219684455647765412375, _4606742748091498981092 );
		bigint_to_string(_2281791889047360409018, 10, buffer);
		printf("trying ");
		puts("sub(-71, -2790878)");
		puts(buffer);
		assert(strcmp(buffer, "2790807") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4219684455647765412375);
		bigint_free(_4606742748091498981092);
		bigint_free(_2281791889047360409018);

	

		bigint_t* _4108364160563472259618;
		bigint_t* _2776539710029839955975 = bigint(35);
		bigint_t* _4330398908814236599580 = bigint(7724692);
		bigint_t* _2210950205080062567761 = bigint_mul(_2776539710029839955975, _4330398908814236599580 );
		bigint_to_string(_2210950205080062567761, 10, buffer);
		printf("trying ");
		puts("mul(35, 7724692)");
		puts(buffer);
		assert(strcmp(buffer, "270364220") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2776539710029839955975);
		bigint_free(_4330398908814236599580);
		bigint_free(_2210950205080062567761);

	

		bigint_t* _2901369540948522956003;
		bigint_t* _978493260239816447954 = bigint(35);
		bigint_t* _3751315037078071027914 = bigint(7724692);
		bigint_t* _1498848445592869271552 = bigint_add(_978493260239816447954, _3751315037078071027914 );
		bigint_to_string(_1498848445592869271552, 10, buffer);
		printf("trying ");
		puts("add(35, 7724692)");
		puts(buffer);
		assert(strcmp(buffer, "7724727") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_978493260239816447954);
		bigint_free(_3751315037078071027914);
		bigint_free(_1498848445592869271552);

	

		bigint_t* _3644774244632601168549;
		bigint_t* _2992723130307675244867 = bigint(35);
		bigint_t* _1174325982319834509561 = bigint(7724692);
		bigint_t* _2255813260493933962859 = bigint_sub(_2992723130307675244867, _1174325982319834509561 );
		bigint_to_string(_2255813260493933962859, 10, buffer);
		printf("trying ");
		puts("sub(35, 7724692)");
		puts(buffer);
		assert(strcmp(buffer, "-7724657") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2992723130307675244867);
		bigint_free(_1174325982319834509561);
		bigint_free(_2255813260493933962859);

	

		bigint_t* _1820036992421810510499;
		bigint_t* _4438724380650178775863 = bigint(97);
		bigint_t* _572171337948211497141 = bigint(9931393);
		bigint_t* _542856224147777342629 = bigint_mul(_4438724380650178775863, _572171337948211497141 );
		bigint_to_string(_542856224147777342629, 10, buffer);
		printf("trying ");
		puts("mul(97, 9931393)");
		puts(buffer);
		assert(strcmp(buffer, "963345121") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_4438724380650178775863);
		bigint_free(_572171337948211497141);
		bigint_free(_542856224147777342629);

	

		bigint_t* _2146916115413339181111;
		bigint_t* _2018987410991371369720 = bigint(97);
		bigint_t* _3043042013095025706863 = bigint(9931393);
		bigint_t* _679320494697388473130 = bigint_add(_2018987410991371369720, _3043042013095025706863 );
		bigint_to_string(_679320494697388473130, 10, buffer);
		printf("trying ");
		puts("add(97, 9931393)");
		puts(buffer);
		assert(strcmp(buffer, "9931490") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_2018987410991371369720);
		bigint_free(_3043042013095025706863);
		bigint_free(_679320494697388473130);

	

		bigint_t* _1506994368128369932805;
		bigint_t* _719944447122672223438 = bigint(97);
		bigint_t* _1920115599649851723272 = bigint(9931393);
		bigint_t* _1382604895784667664643 = bigint_sub(_719944447122672223438, _1920115599649851723272 );
		bigint_to_string(_1382604895784667664643, 10, buffer);
		printf("trying ");
		puts("sub(97, 9931393)");
		puts(buffer);
		assert(strcmp(buffer, "-9931296") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_719944447122672223438);
		bigint_free(_1920115599649851723272);
		bigint_free(_1382604895784667664643);

	

		bigint_t* _240962219668870525074;
		bigint_t* _1330475309736254980609 = bigint(-153);
		bigint_t* _2419248200304703586097 = bigint(2956623);
		bigint_t* _2584641583366256185021 = bigint_mul(_1330475309736254980609, _2419248200304703586097 );
		bigint_to_string(_2584641583366256185021, 10, buffer);
		printf("trying ");
		puts("mul(-153, 2956623)");
		puts(buffer);
		assert(strcmp(buffer, "-452363319") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1330475309736254980609);
		bigint_free(_2419248200304703586097);
		bigint_free(_2584641583366256185021);

	

		bigint_t* _2104540153641833258574;
		bigint_t* _1686222193779326721399 = bigint(-153);
		bigint_t* _3401353780804183391013 = bigint(2956623);
		bigint_t* _1009972448490791894697 = bigint_add(_1686222193779326721399, _3401353780804183391013 );
		bigint_to_string(_1009972448490791894697, 10, buffer);
		printf("trying ");
		puts("add(-153, 2956623)");
		puts(buffer);
		assert(strcmp(buffer, "2956470") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1686222193779326721399);
		bigint_free(_3401353780804183391013);
		bigint_free(_1009972448490791894697);

	

		bigint_t* _3927851128566572261023;
		bigint_t* _2848397038257062404491 = bigint(-153);
		bigint_t* _3621613541159490694158 = bigint(2956623);
		bigint_t* _1938331086103619266486 = bigint_sub(_2848397038257062404491, _3621613541159490694158 );
		bigint_to_string(_1938331086103619266486, 10, buffer);
		printf("trying ");
		puts("sub(-153, 2956623)");
		puts(buffer);
		assert(strcmp(buffer, "-2956776") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2848397038257062404491);
		bigint_free(_3621613541159490694158);
		bigint_free(_1938331086103619266486);

	

		bigint_t* _307277572198065480843;
		bigint_t* _2769649789361887420650 = bigint(-107);
		bigint_t* _1147564229430697637704 = bigint(13676614);
		bigint_t* _78635430302891332745 = bigint_mul(_2769649789361887420650, _1147564229430697637704 );
		bigint_to_string(_78635430302891332745, 10, buffer);
		printf("trying ");
		puts("mul(-107, 13676614)");
		puts(buffer);
		assert(strcmp(buffer, "-1463397698") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2769649789361887420650);
		bigint_free(_1147564229430697637704);
		bigint_free(_78635430302891332745);

	

		bigint_t* _1398618064484616282197;
		bigint_t* _499322867796658747645 = bigint(-107);
		bigint_t* _1466500698823180532895 = bigint(13676614);
		bigint_t* _681397796216759609333 = bigint_add(_499322867796658747645, _1466500698823180532895 );
		bigint_to_string(_681397796216759609333, 10, buffer);
		printf("trying ");
		puts("add(-107, 13676614)");
		puts(buffer);
		assert(strcmp(buffer, "13676507") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_499322867796658747645);
		bigint_free(_1466500698823180532895);
		bigint_free(_681397796216759609333);

	

		bigint_t* _1463275851199641276999;
		bigint_t* _1561074481050501872564 = bigint(-107);
		bigint_t* _218024537194889180452 = bigint(13676614);
		bigint_t* _454894823216128108010 = bigint_sub(_1561074481050501872564, _218024537194889180452 );
		bigint_to_string(_454894823216128108010, 10, buffer);
		printf("trying ");
		puts("sub(-107, 13676614)");
		puts(buffer);
		assert(strcmp(buffer, "-13676721") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_1561074481050501872564);
		bigint_free(_218024537194889180452);
		bigint_free(_454894823216128108010);

	

		bigint_t* _4534994924476199653164;
		bigint_t* _2590053661133500383139 = bigint(-66);
		bigint_t* _2045214835685623373993 = bigint(-1559149);
		bigint_t* _1877102567453505409650 = bigint_mul(_2590053661133500383139, _2045214835685623373993 );
		bigint_to_string(_1877102567453505409650, 10, buffer);
		printf("trying ");
		puts("mul(-66, -1559149)");
		puts(buffer);
		assert(strcmp(buffer, "102903834") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_2590053661133500383139);
		bigint_free(_2045214835685623373993);
		bigint_free(_1877102567453505409650);

	

		bigint_t* _380625112502619300751;
		bigint_t* _1925172221600898189251 = bigint(-66);
		bigint_t* _2907669358429561649145 = bigint(-1559149);
		bigint_t* _2516886862085024334302 = bigint_add(_1925172221600898189251, _2907669358429561649145 );
		bigint_to_string(_2516886862085024334302, 10, buffer);
		printf("trying ");
		puts("add(-66, -1559149)");
		puts(buffer);
		assert(strcmp(buffer, "-1559215") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1925172221600898189251);
		bigint_free(_2907669358429561649145);
		bigint_free(_2516886862085024334302);

	

		bigint_t* _1935888183051044312644;
		bigint_t* _3853216159111667698743 = bigint(-66);
		bigint_t* _686816781434822366676 = bigint(-1559149);
		bigint_t* _3363718050711987400405 = bigint_sub(_3853216159111667698743, _686816781434822366676 );
		bigint_to_string(_3363718050711987400405, 10, buffer);
		printf("trying ");
		puts("sub(-66, -1559149)");
		puts(buffer);
		assert(strcmp(buffer, "1559083") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_3853216159111667698743);
		bigint_free(_686816781434822366676);
		bigint_free(_3363718050711987400405);

	

		bigint_t* _1686585430286054401621;
		bigint_t* _793857259627202390950 = bigint(-203);
		bigint_t* _1987265978246544477161 = bigint(6025547);
		bigint_t* _764287678386435557458 = bigint_mul(_793857259627202390950, _1987265978246544477161 );
		bigint_to_string(_764287678386435557458, 10, buffer);
		printf("trying ");
		puts("mul(-203, 6025547)");
		puts(buffer);
		assert(strcmp(buffer, "-1223186041") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_793857259627202390950);
		bigint_free(_1987265978246544477161);
		bigint_free(_764287678386435557458);

	

		bigint_t* _2948687189162145036906;
		bigint_t* _3169421762539859899583 = bigint(-203);
		bigint_t* _2250287581895885722651 = bigint(6025547);
		bigint_t* _1839386854316047841211 = bigint_add(_3169421762539859899583, _2250287581895885722651 );
		bigint_to_string(_1839386854316047841211, 10, buffer);
		printf("trying ");
		puts("add(-203, 6025547)");
		puts(buffer);
		assert(strcmp(buffer, "6025344") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3169421762539859899583);
		bigint_free(_2250287581895885722651);
		bigint_free(_1839386854316047841211);

	

		bigint_t* _4686269424816065504781;
		bigint_t* _2779558689883081544657 = bigint(-203);
		bigint_t* _4474407582232983098661 = bigint(6025547);
		bigint_t* _2633510354720674366701 = bigint_sub(_2779558689883081544657, _4474407582232983098661 );
		bigint_to_string(_2633510354720674366701, 10, buffer);
		printf("trying ");
		puts("sub(-203, 6025547)");
		puts(buffer);
		assert(strcmp(buffer, "-6025750") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_2779558689883081544657);
		bigint_free(_4474407582232983098661);
		bigint_free(_2633510354720674366701);

	

		bigint_t* _2641218909752410987913;
		bigint_t* _1215078040965806089260 = bigint(-249);
		bigint_t* _4240513891672416277308 = bigint(-7229061);
		bigint_t* _242314051193246195613 = bigint_mul(_1215078040965806089260, _4240513891672416277308 );
		bigint_to_string(_242314051193246195613, 10, buffer);
		printf("trying ");
		puts("mul(-249, -7229061)");
		puts(buffer);
		assert(strcmp(buffer, "1800036189") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_1215078040965806089260);
		bigint_free(_4240513891672416277308);
		bigint_free(_242314051193246195613);

	

		bigint_t* _449336697688249362949;
		bigint_t* _3372407743768511833766 = bigint(-249);
		bigint_t* _1550585024833771079510 = bigint(-7229061);
		bigint_t* _2896022141352015495157 = bigint_add(_3372407743768511833766, _1550585024833771079510 );
		bigint_to_string(_2896022141352015495157, 10, buffer);
		printf("trying ");
		puts("add(-249, -7229061)");
		puts(buffer);
		assert(strcmp(buffer, "-7229310") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_3372407743768511833766);
		bigint_free(_1550585024833771079510);
		bigint_free(_2896022141352015495157);

	

		bigint_t* _3395857691710512134374;
		bigint_t* _4658568921478254317263 = bigint(-249);
		bigint_t* _352558253261498604705 = bigint(-7229061);
		bigint_t* _3554296272562425892773 = bigint_sub(_4658568921478254317263, _352558253261498604705 );
		bigint_to_string(_3554296272562425892773, 10, buffer);
		printf("trying ");
		puts("sub(-249, -7229061)");
		puts(buffer);
		assert(strcmp(buffer, "7228812") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4658568921478254317263);
		bigint_free(_352558253261498604705);
		bigint_free(_3554296272562425892773);

	

		bigint_t* _2598749762914318099130;
		bigint_t* _3355862196541778661692 = bigint(-107);
		bigint_t* _4029065222467294701748 = bigint(15757488);
		bigint_t* _2691272033192124131737 = bigint_mul(_3355862196541778661692, _4029065222467294701748 );
		bigint_to_string(_2691272033192124131737, 10, buffer);
		printf("trying ");
		puts("mul(-107, 15757488)");
		puts(buffer);
		assert(strcmp(buffer, "-1686051216") == 0);
		printf("passed ");
		printf("mul ");
		puts(buffer);		

		
		bigint_free(_3355862196541778661692);
		bigint_free(_4029065222467294701748);
		bigint_free(_2691272033192124131737);

	

		bigint_t* _2289647453020591630387;
		bigint_t* _1561016600170656620356 = bigint(-107);
		bigint_t* _3718417193818610392330 = bigint(15757488);
		bigint_t* _4379111714324535453352 = bigint_add(_1561016600170656620356, _3718417193818610392330 );
		bigint_to_string(_4379111714324535453352, 10, buffer);
		printf("trying ");
		puts("add(-107, 15757488)");
		puts(buffer);
		assert(strcmp(buffer, "15757381") == 0);
		printf("passed ");
		printf("add ");
		puts(buffer);		

		
		bigint_free(_1561016600170656620356);
		bigint_free(_3718417193818610392330);
		bigint_free(_4379111714324535453352);

	

		bigint_t* _173292670303328950486;
		bigint_t* _4648950765577100161940 = bigint(-107);
		bigint_t* _3050588496413767780083 = bigint(15757488);
		bigint_t* _3284380753541796602193 = bigint_sub(_4648950765577100161940, _3050588496413767780083 );
		bigint_to_string(_3284380753541796602193, 10, buffer);
		printf("trying ");
		puts("sub(-107, 15757488)");
		puts(buffer);
		assert(strcmp(buffer, "-15757595") == 0);
		printf("passed ");
		printf("sub ");
		puts(buffer);		

		
		bigint_free(_4648950765577100161940);
		bigint_free(_3050588496413767780083);
		bigint_free(_3284380753541796602193);

	
return 0;}
