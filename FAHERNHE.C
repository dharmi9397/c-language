#include <stdio.h>
#include <conio.h>
main()
{
 int celius;
 float f;
 clrscr();
 printf("convert temprature to degrees celius:-");
 scanf("%d",&celius);
 f=(celius*9/5)+32;
 printf("%f",f);
 getch();

}