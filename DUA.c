#include<stdio.h>
#include<windows.h>
#include<string.h>

COORD coord = {0,0};
void gotoab (int a, int b)
{
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void everydayDua(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Everyday Dua \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,15);
printf("1. Subhaanallaahi, Walhamdu lillaahi, Wallaahu 'Akbar\n");
gotoab(35,16);
printf("Meaning: Glory is to Allah, praise is to Allah, Allah is the Most Great! ");

 gotoab(34,19);
printf("2. Allaahumma 'innee 'as'alukal-jannata wa 'a'oothu bika minan-naar \n");
gotoab(35,20);
printf("Meaning: O Allah , I ask You for Paradise and seek Your protection from the Fire. ");

gotoab(34,23);
printf("3. Allaahumma 'innee 'as'aluka 'ilman naafi'an, wa rizqan tayyiban, wa 'amalan mutaqabbalan \n");
gotoab(35,25);
printf("Meaning: O Allah, I ask You for knowledge that is of benefit , a good provision , and deeds that will be accepted ");

gotoab(34,28);
printf("4.Laa 'ilaaha 'illaa 'Anta subhaanaka 'innee kuntu minadh-dhaalimeen\n");
gotoab(35,29);
printf("There is none worthy of worship but You, glory is to You. Surely, I was among the wrongdoers. ");
printf("\n\n\n\n\n\n");
}

void surah(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Surah list \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf("1. AL-FATIHA");
gotoab(34,11);
printf("2. AL-IKHLAS ");
gotoab(34,12);
printf("3. AL-FALAQ ");
gotoab(34,13);
printf("4.  AL-LAHAB ");
gotoab(34,14);
printf("5. AN-NASR ");
gotoab(34,15);
printf("6.  QURAISH ");
gotoab(34,16);
printf("7. AL-MAUN");
gotoab(34,17);
printf("8. AL-KAFIRUN ");
gotoab(34,18);
printf("9. AL-FIL ");
gotoab(34,19);
printf("10. AL-KAUTHAR ");
gotoab(34,20);
printf("11. AL-ASR ");
gotoab(34,21);
printf("12.  ASH-SHAMS ");
gotoab(34,22);
printf("13. AN-NAS");
gotoab(34,25);
printf("Enter your choice- ");
printf("\n\n\n\n");
 switch(getch())
        {
        case '1':
            alFATIHA();
            break;
         case '2':
            alIKHLAS();
            break;
            case '3':
            alFALAQ();
            break;
            case '4':
            alLAHAB();
            break;
            case '5':
            anNASR();
            break;
            case '6':
            QURAISH();
            break;

        case '7':
            alMAUN();
            break;
         case '8':
            alKAFIRUN();
            break;
            case '9':
            alFIL();
            break;
            case '10':
            alKAUTHAR();
            break;
            case '11':
            alASR();
            break;
            case '12':
            ashSHAMS();
            break;
             case '13':
            anNAS();
            break;
        }

}

void alFATIHA(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-FATIHA - THE OPENING \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Bismillaahir Rahmaanir Raheem\nAlhamdu lillaahi Rabbil 'aalameen\nAr-Rahmaanir-Raheem\nMaaliki Yawmid-Deen\nIyyaaka na'budu wa lyyaaka nasta'een\nIhdinas-Siraatal-Mustaqeem\nSiraatal-lazeena an'amta 'alaihim ghayril-maghdoobi 'alaihim wa lad-daaalleen");
printf("\n\n\n\n\n");
}

void alIKHLAS(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-IKHLAS - THE UNITY \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Qul huwal laahu ahad\nAllah hus-samad\nLam yalid wa lam yoolad\nWa lam yakul-lahoo kufuwan ahad (section 1");
printf("\n\n\n\n\n");
}

void alFALAQ(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-FALAQ - THE DAWN \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Qul a'oozu bi rabbil-falaq\nMin sharri maa khalaq\nWa min sharri ghaasiqin izaa waqab\nWa min sharrin-naffaa-saati fil 'uqad\nWa min sharri haasidin izaa hasad");
printf("\n\n\n\n\n");
}

void alLAHAB(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-LAHAB - THE FLAME \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Tabbat yadaa abee Lahabinw-wa tabb\nMaa aghnaa 'anhu maaluhoo wa ma kasab\nSa-yaslaa naaran zaata lahab\nWamra-atuhoo hammaa latal-hatab\nFee jeedihaa hablum mim-masad ");
printf("\n\n\n\n\n");
}

void anNASR(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AN-NASR - THE HELP \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Iza jaaa'a nasrul-laahi walfath\nWa ra-aitan naasa yadkhuloona fee deenil laahi afwajaa\nFasabbih bihamdi rabbika wastaghfirh, innahoo kaana tawwaaba");
printf("\n\n\n\n\n");
}

void QURAISH(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  QURAISH - QURAISH \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Li-eelaafi quraish\nEelaafihim rihlatash shitaaa'i wassaif\nFaly'abudoo rabba haazal-bait\nAllazeee at'amahum min joo'inw-wa-aamanahum min khawf");
printf("\n\n\n\n\n");
}

void alMAUN(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-MAUN - ACT OF KINDNESS \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf("Ara 'aytal lazee yukazzibu biddeen\nFazaalikal lazee yadu'ul-yateem\nWa la yahuddu 'alaa ta'aamil miskeen\nFa wailul-lil musalleen\nAllazeena hum 'an salaatihim saahoon\nAllazeena hum yuraaa'oon\nWa yamna'oonal maa'oon ");
printf("\n\n\n\n\n");
}

void alKAFIRUN(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-KAFIRUN - THE DISBELIEVERS \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Qul yaaa-ayyuhal kaafiroon\nLaaa a'budu maa t'abudoon\nWa laaa antum 'aabidoona maaa a'bud\nWa laaa ana 'abidum maa 'abattum\nWa laaa antum 'aabidoona maaa a'bud\nLakum deenukum wa liya deen");
printf("\n\n\n\n\n");
}

void alFIL(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-FIL - THE ELEPHANT \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Alam tara kaifa fa'ala rabbuka bi ashaabil feel\nAlam yaj'al kaidahum fee tadleel\nWa arsala 'alaihim tairan abaabeel\nTarmeehim bihijaaratim min sijjeel\nFaja 'alahum ka'asfim m'akoo");
printf("\n\n\n\n\n");
}

void alKAUTHAR(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-KAUTHAR - THE ABUNDANCE OF GOOD\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Innaaa a'tainaa kal kauthar\nFasalli li rabbika wanhar\nInna shaani'aka huwal abtar");
printf("\n\n\n\n\n");
}

void alASR(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AL-ASR - THE TIME \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Wal 'asr\nInnal insaana lafee khusr\nIllal lazeena aamanoo wa 'amilus saalihaati wa tawaasaw bilhaqqi wa tawaasaw bissabr");
printf("\n\n\n\n\n");
}

void ashSHAMS(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ASH-SHAMS - THE SUN \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Wash shamsi wa duhaa haa\nWal qamari izaa talaa haa\nWannahaari izaa jallaa haa\nWallaili izaa yaghshaa haa\nWassamaaa'i wa maa banaahaa\nWal ardi wa maa tahaahaa\nWa nafsinw wa maa sawwaahaa\nFa-alhamahaa fujoorahaa wa taqwaahaa\nQad aflaha man zakkaahaa\nWa qad khaaba man dassaahaa\nKazzabat Samoodu bi taghwaahaaa\nIzim ba'asa ashqaahaa\nFaqaala lahum Rasoolul laahi naaqatal laahi wa suqiyaahaa\nFakazzaboohu fa'aqaroohaa fadamdama 'alaihim Rabbuhum bizambihim fasaw waahaa\nWa laa yakhaafu'uqbaahaa");
printf("\n\n\n\n\n");
}

void anNAS(void){
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 AN-NAS - THE MEN \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
gotoab(34,10);
printf(" Qul a'oozu birabbin naas\nMalikin naas\nIlaahin naas\nMin sharril waswaasil khannaas\nAllazee yuwaswisu fee sudoorin naas\nMinal jinnati wannaas");
printf("\n\n\n\n\n");
}



void hadith(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Beautiful Hadiths \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("1. Partial Differentiation \n");
gotoab(35,13);
printf("Content: https://en.wikipedia.org/wiki/Partial_derivative");

 gotoab(34,15);
printf("2.Integration \n");

gotoab(34,18);
printf("(i)Basic concept of integration \n");
gotoab(35,19);
printf("Content: https://www.cuemath.com/calculus/integration/");

gotoab(34,21);
printf("(ii)All formula\n");
gotoab(35,22);
printf("Content:https://www.teachoo.com/5643/728/Integration-Formulas---Trig--Definite-Integrals-Properties-and-more/category/Miscellaneous/ ");

gotoab(34,24);
printf("(iii) Integration by parts\n");
gotoab(35,25);
printf("Content: https://math24.net/indefinite-integral-basic-rules-integration.html");

gotoab(34,26);
printf("(iv) Method of substitution\n");
gotoab(35,27);
printf("Content: https://www.math-only-math.com/method-of-substitution.html");

gotoab(34,29);
printf("(v) special formula \n");
gotoab(35,30);
printf("Content: https://www.brainkart.com/article/Some-special-types-of-Integrals-Method_38904/");
printf("\n\n\n\n");

}




int main(){

  system("cls");
    system("COLOR F2");
    int i;
    gotoab(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 All Dua's You should know ");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1.Everyday Dua");
    gotoab(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Surah ");
    gotoab(20, 9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Hadith");

    gotoab(20, 15);
    printf("------------------------------------------");
    gotoab(20, 21);
printf("Enter your choice:");
    gotoab(38, 21);

    switch (getch())
    {
    case '1':
        everydayDua();
        break;
    case '2':
        surah();
        break;
    case '3':
       hadith();
        break;

return 0;
}}


