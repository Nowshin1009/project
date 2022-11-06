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
void routine();
void routine(void)

{
    gotoab(30,1);
  printf("**********************");
    gotoab(23,2);
    printf("**********Class Routine************");
    printf("\n\n\n\n");
    printf("Day    |  08:30-10:30  |  10:30-12:30  |  12:30-02:30  |  02:30-04:30  |\n");
    printf("_____________________________________________________________________\n");
    printf("\nSat   |  SE133 (601)  |       -       |       -       |  SE132 (610)   |\n");
    printf("_____________________________________________________________________\n");
    printf("\nSun   |       -       |       -       |  SE123 (704)  |  STA101 (603)  |\n");
    printf("_____________________________________________________________________\n");
    printf("\nMon   |       -       |       -       |       -       |       -        |\n");
    printf("_____________________________________________________________________\n");
    printf("\nTues  |       -       |       -       |       -       |       -        |\n");
    printf("_____________________________________________________________________\n");
    printf("\nWed   |  SE133 9616)  |       -       |  SE131 (611)  |  MAT101 (704)  |\n");
    printf("_____________________________________________________________________\n");
    printf("\nThu   |       -       |       -       |  MAT102 (701A) |    -       )  |\n");
    printf("_____________________________________________________________________\n");

    printf("\n\n\n\n");
    printf("SE133-Software Development capstone project\n");
    printf("SE132-Data Structure Lab\n ");
    printf("SE131-Data Structure\n");
    printf("SE123-Discrete Mathematics\n ");
    printf("STA101-Statistics 1\n ");
    printf("MAT101-Mathematics 1\n");
    printf("MAT102-Mathematics 2\n");

}

int main()
{
    routine();
    getch();

    return 0;
}


