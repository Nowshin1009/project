#include<stdio.h>
#include<windows.h>
#include<string.h>

void classRoutine(void);
void password(void);

COORD coord = {0,0};
void gotoab (int a, int b)
{
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

FILE *fp, *ft;
int s;

struct donorsList
{
    char time[20];
    char work[30];
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
    char ch, pin[20]="hello",pass[20];
    int i=0,j;
 gotoab(29,4);
  printf("********");
    gotoab(20,5);
    printf("****Password Proctected****");
  gotoab(29,7);
  printf("********");

   gotoab(30,15);
  printf("_____________");
    gotoab(31,16);
    printf("Enter Password: ");

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
        printf("Password Match");
        gotoab(35,21);
        printf("Press any key to countinue.....");
        getch();
        mainmenu();
    }
    else
    {
        gotoab(35,20);
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
    printf("\xB2\xB2____This is MAIN MENU___\xB2\xB2");

    gotoab(20,5);
    printf("1. E-Book");
    gotoab(20,7);
    printf("2. Game");
    gotoab(20,9);
    printf("3. Class routine");
    gotoab(20,11);
    printf("4. Movie suggetion");
    gotoab(20,13);
    printf("5. To-Do list");
    gotoab(20,15);
    printf("6. Dua");

    gotoab(20,21);
    printf("Enter your choice:");

    switch(getch())
        {
        case '1':
            addbooks();
            break;
         case '2':
            game();
            break;
            case '3':
            classRoutine();
            break;
            case '4':
            movieSuggetion();
            break;
            case '5':
            toDoList();
            break;
            case '6':
            dua();
            break;
        }

}
void addbooks(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is E-Book option");
}
void game(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Game option");
}

void classRoutine(void)

{
    gotoab(30,1);
  printf("********");
    gotoab(23,2);
    printf("****Class Routine****");
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

void movieSuggetion(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Movie suggetion option");
}

void toDoList(void)
{
  system("cls");
    // system("COLOR F2");
    int i;
    gotoab(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 My Daily Activities ");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoab(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1. Add Work");
    gotoab(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. View To do List ");
    gotoab(20, 9);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Main Menu");
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
        mainmenu();
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

void dua(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Dua option");
}

