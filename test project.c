#include<stdio.h>
#include<windows.h>
#include<string.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <process.h>

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
void classRoutine(void);
void password(void);

COORD coord = {0,0};
void gotoab (int a, int b)
{
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

FILE *fp, *ft,*fr,*fa;
int s;

struct donorsList
{
    char time[20];
    char work[30];
    char delete[30];
    char *cat;
};
struct donorsList a;

int main()
{
    password();
    getch();

    return 0;
}

void password(void)
{
    system("cls");
     system("cls");
    system("COLOR F3");
    char ch, pin[20]="hello",pass[20],findbook;
    int i=0,j;
 gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Password Protected \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

   gotoab(30,15);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(30,16);
    printf("\xB2-\xB2-\xB2 Enter Password: ");

    while(ch!=13)
    {
        ch = getch();

        if(ch!=13)
        {
            putch('*');
            pass[i]=ch;
            i++;
        }
    }
    pass[i]='\0';
    if(strcmp(pass,pin)==0)
    {
        gotoab(40,20);
         system("cls");
    system("COLOR F2");
    gotoab(35,14);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(35,15);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Password Matched!! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(35,16);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoab(35,18);
        printf("Press any key to countinue.....");
        getch();
        mainmenu();
    }
    else
    {
        gotoab(35,20);
         system("cls");
    system("COLOR F4");
        printf("\aWarning!! Incorrect Password.");
          gotoab(35,21);
        printf("\aTry again");
        getch();
        password();
    }
}

void mainmenu()
{
    system("cls");
    gotoab(20,3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoab (20,4);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20,5);
    printf("|         1. Study");
    gotoab(20,6);
    printf("______________________________________|");
    gotoab(20,7);
    printf("|         2. Game");
     gotoab(20,8);
    printf("______________________________________|");
    gotoab(20,9);
    printf("|         3. Class routine");
     gotoab(20,10);
    printf("______________________________________|");
    gotoab(20,11);
    printf("|         4. Calculator");
     gotoab(20,12);
    printf("______________________________________|");
    gotoab(20,13);
    printf("|         5. To-Do list");
     gotoab(20,14);
    printf("______________________________________|");
    gotoab(20,15);
    printf("|         6. Dua");
     gotoab(20,16);
    printf("______________________________________|");
    gotoab(20,21);
    printf("Enter your choice:");

    switch(getch())
        {
        case '1':
            studyMaterial();
            break;
         case '2':
            game();
            break;
            case '3':
            classRoutine();
            break;
            case '4':
            calculator();
            break;
            case '5':
            toDoList();
            break;
            case '6':
            dua();
            break;
        }

}
void studyMaterial(void)
{
    system("cls");
     study();
     getch();
}
void DStheory(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Data Structure (Fall-2022) \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("-------------Final Syllabus---------\n\n\n");
 gotoab(34,12);
printf("1.Queue \n");
gotoab(35,13);
printf("Content: https://www.programiz.com/dsa/queue ");

 gotoab(34,15);
printf("2.Tree \n");
gotoab(35,16);
printf("Content: https://www.programiz.com/dsa/trees ");

gotoab(34,18);
printf("3.Binary Search Tree \n");
gotoab(35,19);
printf("Content: https://www.programiz.com/dsa/binary-search-tree ");

gotoab(34,21);
printf("4.Sort and Merge\n");
gotoab(35,22);
printf("Content: https://www.programiz.com/dsa/merge-sort ");

gotoab(34,24);
printf("5.AVL\n");
gotoab(35,25);
printf("Content: https://www.programiz.com/dsa/avl-tree ");

gotoab(34,26);
printf("6.Graph\n");
gotoab(35,27);
printf("Content: https://www.programiz.com/dsa/graph ");

gotoab(34,29);
printf("7.Variations of Linked List\n");
gotoab(35,30);
printf("Content: https://www.scaler.com/topics/linked-list/ ");
printf("\n\n\n\n");
gotoab(35,33);
printf("Want to read another subject??(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    study();
}


void math1(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Mathematices - 1 (Fall-2022) \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("-------------Final Syllabus---------\n\n\n");
 gotoab(34,12);
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
gotoab(35,33);
printf("Want to read another subject??(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    study();
}


void math2(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Math - 102 (Fall-2022) \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("-------------Final Syllabus---------\n\n\n");
 gotoab(34,12);
printf("1. System of Linear equation \n");
gotoab(35,13);
printf("Content : https://drive.google.com/drive/folders/1nih7a_VVxRCg1PcHglSacKOJRXjV0fOc");

 gotoab(34,15);
printf("2.Complex number\n");
gotoab(35,16);
printf("Content: Content: https://drive.google.com/drive/folders/1DE3eA-gjMfBSGO-N1Kil_7n1K_AqPoZo");

gotoab(34,18);
printf("3. Harmonic function\n");
gotoab(35,19);
printf("Content: https://drive.google.com/drive/folders/1ml_apmKMVZuQS8aKX_6POr3KFP27lgTt");

gotoab(34,21);
printf("4. Fourier \n");
gotoab(35,22);
printf("Content: https://drive.google.com/drive/folders/100D6NpOT7zgf95kLbpSILp-BEe7z2BUm");


printf("\n\n\n\n");
gotoab(35,33);
printf("Want to read another subject??(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    study();
}


 void discrete(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Discrete Math (Fall-2022) \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("-------------Final Syllabus---------\n\n\n");
 gotoab(34,12);
printf("1. Graph \n");
gotoab(35,13);
printf("Content: https://drive.google.com/drive/folders/1T-k0OjOwczflghWrug-RPB_SD4lL2n6D");

 gotoab(34,15);
printf("2. Binary Tree \n");
gotoab(35,16);
printf("Content: https://drive.google.com/drive/folders/1s9XcQopjP1-9KNLIaGEnCZmnaxTKLd7X");


printf("\n\n\n\n");
gotoab(35,33);
printf("Want to read another subject??(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    study();

}

void statistic(void){
    system("cls");
     system("cls");
    system("COLOR F3");
gotoab(29,4);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(29,5);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Statistic (Fall-2022) \xB2\xB2\xB2\xB2\xB2\xB2");
  gotoab(29,6);
  printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
 gotoab(34,10);
printf("-------------Final Syllabus---------\n\n\n");
 gotoab(34,12);
printf("1. Introduction to Statistic \n");
gotoab(35,13);
printf("Content: https://drive.google.com/drive/folders/1iSeSwAQsKjBGA3KMdk7L2ORKJjpxLQZx");

 gotoab(34,15);
printf("2.Data Presentation \n");
gotoab(35,16);
printf("Content: https://drive.google.com/drive/folders/1spKMHJ7Hepj99LiYWEm7lKKv_s7iZBzU");

gotoab(34,18);
printf("3. Probabiliy \n");
gotoab(35,19);
printf("Content: https://drive.google.com/drive/folders/1HhufQncmCdz6vQQki9W8PI1ifU4Aw4W6");

gotoab(34,21);
printf("4. Hypothesis\n");
gotoab(35,22);
printf("Content: https://drive.google.com/drive/folders/11gWRyjHkJjsO11qVL8nJfwJfct16z6RY");


printf("\n\n\n\n");
gotoab(35,33);
printf("Want to read another subject??(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    study();
}

void study(void){

  system("cls");
    system("COLOR F2");
    int i;
    gotoab(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 All Theory Courses ");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Data Structure");
    gotoab(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. Math 101 ");
    gotoab(20, 9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Math 102");
     gotoab(20, 11);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Discrete Math");
     gotoab(20, 13);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Statistic");
    gotoab(20, 15);
    printf("------------------------------------------");
    gotoab(20, 21);
printf("Enter your choice:");
    gotoab(38, 21);

    switch (getch())
    {
    case '1':
        DStheory();
        break;
    case '2':
        math1();

        break;
    case '3':
        math2();
        break;
   case '4':
        discrete();
        break;
    case '5':
        statistic();
        break;
return 0;
}}
void game(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Game option");
}

void classRoutine(void)

{
    gotoab(30,1);
     system("cls");
    system("COLOR F3");
  printf("********");
    gotoab(23,2);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Class Routine \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\n\n\n");
    printf("Day    |  08:30-10:30  |  10:30-12:30  |  12:30-02:30  |  02:30-04:30  |\n");
    printf("_______________________\n");
    printf("\nSat   |  SE133 (601)  |       -       |       -       |  SE132 (610)   |\n");
    printf("_______________________\n");
    printf("\nSun   |       -       |       -       |  SE123 (704)  |  STA101 (603)  |\n");
    printf("_______________________\n");
    printf("\nMon   |       -       |       -       |       -       |       -        |\n");
    printf("_______________________\n");
    printf("\nTues  |       -       |       -       |       -       |       -        |\n");
    printf("_______________________\n");
    printf("\nWed   |  SE133 9616)  |       -       |  SE131 (611)  |  MAT101 (704)  |\n");
    printf("_______________________\n");
    printf("\nThu   |       -       |       -       |  MAT102 (701A) |    -       )  |\n");
    printf("_______________________\n");

    printf("\n\n\n\n");
    printf("SE133-Software Development capstone project\n");
    printf("SE132-Data Structure Lab\n ");
    printf("SE131-Data Structure\n");
    printf("SE123-Discrete Mathematics\n ");
    printf("STA101-Statistics 1\n ");
    printf("MAT101-Mathematics 1\n");
    printf("MAT102-Mathematics 2\n");
    printf("Press any key to countinue.....");
        getch();
        mainmenu();

}

void calculator(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  calculator option");
}

void toDoList(void)
{
  system("cls");
    system("COLOR F2");
    int i;
    gotoab(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 My Daily Activities ");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Add Work");
    gotoab(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. View To do List ");
    gotoab(20, 9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Delete List");
    gotoab(20, 19);
    printf("------------------------------------------");
    gotoab(20, 21);
    printf("Enter your choice:");
    gotoab(38, 21);

    switch (getch())
    {
    case '1':
        addToDoList();
        break;
    case '2':
        viewToDoList();

        break;
    case '3':
        deleteList();
        break;
    default:
    {
        gotoab(10, 23);
        printf("\aWrong Entry!!Please re-entered correct option");
        if (getch())
            mainmenu();
    }
    }
}


void addToDoList(void)
{
    system("cls");
    int i;
    system("cls");
    fp = fopen("request.dat", "ab+");
    gotoab(20, 3);
    printf("\xB2\xB2____Make Your List___\xB2\xB2");
    gotoab(20, 4);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20, 5);
    printf("\xB2");
    gotoab(66, 5);
    printf("\xB2");
    gotoab(20, 6);
    printf("\xB2");
    gotoab(66, 6);
    printf("\xB2");
    gotoab(20, 7);
    printf("\xB2");
    gotoab(66, 7);
    printf("\xB2");
    gotoab(20, 8);
    printf("\xB2");
    gotoab(66, 8);
    printf("\xB2");
    gotoab(20, 9);
    printf("\xB2");
    gotoab(66, 9);
    printf("\xB2");
    gotoab(20, 10);
    printf("\xB2");
    gotoab(66, 10);
    printf("\xB2");
    gotoab(20, 11);
    printf("\xB2");
    gotoab(66, 11);
    printf("\xB2");
    gotoab(20, 12);
    printf("\xB2");
    gotoab(66, 12);
    printf("\xB2");
    gotoab(20, 13);
    printf("\xB2");
    gotoab(66, 13);
    printf("\xB2");
    gotoab(20, 14);
    printf("\xB2");
    gotoab(66, 14);
    printf("\xB2");
    gotoab(20, 15);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(26, 5);
    printf("Information of daily activity:");
    gotoab(22, 7);
    printf("Time:");
    gotoab(35, 7);
    scanf("%s", a.time);
    gotoab(22, 8);
    printf("work:");
    gotoab(34, 8);
    scanf("%s", a.work);
    fseek(fp, 0, SEEK_END);
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);
    gotoab(21, 14);
    printf("The record is sucessfully saved");
    gotoab(21, 15);
    printf("Save any more?(Y / N):");
    if (getch() == 'n')
        mainmenu();
    else
        system("cls");
    addToDoList();
}

void viewToDoList(void) // funtion that view to do list
{
    int i = 0, j;
    system("cls");
    gotoab(1, 1);
    printf("************To Do List**********");
    gotoab(2, 2);
    printf("     Time       Work           ");
    j = 4;
    fp = fopen("request.dat", "rb");
    while (fread(&a, sizeof(a), 1, fp) == 1)
    {
        gotoab(3, j);
        gotoab(8, j);
        printf("%s", a.time);
        gotoab(15, j);
        printf("%s", a.work);
        printf("\n\n");
        j++;
    }
    fclose(fp);
    gotoab(35, 25);
    returnFunction();
}
void returnFunction(void)
{
    {
        printf(" Press ENTER to return to main menu");
    }
a:
    if (getch() == 13) // allow only use of enter
        mainmenu();
    else
        goto a;
}
void deleteList(void)
{
    system("cls");
    int d = 0;
    char s[20];
    char another = 'y';
    while (another == 'y') // infinite loop
    {
        system("cls");
        gotoab(10, 5);
        printf("Enter the work you want to delete :");
        scanf("%s", &s);
        fr = fopen("request.dat", "rb+");
        rewind(fr);
        while (fread(&a, sizeof(a), 1, fr) == 1)
        {
            if (strcmp(a.work, (s)) == 0)
            {

                gotoab(10, 7);
                printf("The work is done ");
                gotoab(10, 8);
                printf("at - %s", a.time);
                d++;
            }
        }
        if (d == 0)
        {
            gotoab(10, 10);
            printf("No record is found modify the search");
            if (getch())
                mainmenu();
        }
        if (strcmp(a.work, (s)) == 0)
        {
            gotoab(10, 9);
            printf("Do you approve it?(Y/N):");
            if (getch() == 'y')
            {
                fa = fopen("approve.dat", "wb+"); // temporary file for delete
                rewind(fr);
                while (fread(&a, sizeof(a), 1, fr) == 1)
                {
                    if (strcmp(a.work, (s)) == 0)
                    {
                        fseek(fa, 0, SEEK_CUR);
                        fwrite(&a, sizeof(a), 1, fa); // write all in tempory file except that
                    }                                 // we want to delete
                }
                fclose(fa);
                fclose(fr);
                remove("request.dat");
                rename("approve.dat", "request.dat"); // copy all item from temporary file to fp except that
                fr = fopen("request.dat", "rb+");     // we want to delete
                if (strcmp(a.work, (s)) == 0)
                {
                    gotoab(10, 10);
                    printf("The record is sucessfully approve");
                    gotoab(10, 11);
                    printf("approve another record?(Y/N)");
                }
            }
            else
                mainmenu();
            fflush(stdin);
            another = getch();
        }
    }
    gotoab(10, 15);
    mainmenu();
}

void dua(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Dua option");
}

