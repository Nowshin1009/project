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

void password();
void password(void)
{
    system("cls");
    char ch, pin[20]="hello",pass[20];
    int i=0,j;
 gotoab(29,4);
  printf("**********************");
    gotoab(20,5);
    printf("**********Password Proctected************");
  gotoab(29,7);
  printf("**********************");

   gotoab(30,15);
  printf("_______________________________________");
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
    printf("\xB2\xB2_________This is MAIN MENU__________\xB2\xB2");

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
    system("cls");
     gotoab(20,3);
    printf("This is  Class routine option");
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
     gotoab(20,3);
    printf("This is To-Do list option");
}

void dua(void)
{
    system("cls");
     gotoab(20,3);
    printf("This is  Dua option");
}

int main()
{
    password();
    getch();

    return 0;
}
