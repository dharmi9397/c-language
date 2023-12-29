#include <stdio.h>
#include <conio.h>
main()
{
 int x,y;
 int g;
 clrscr();
 printf("write a number of x :-");
 scanf("%d",&x);
 printf("write a number of y :-");
 scanf("%d",&y);
 g=(x*x*x)-(y*y*y)-(3*(x*x)*y)+(3*x*(y*y));
 printf("%d",g);
 getch();

}