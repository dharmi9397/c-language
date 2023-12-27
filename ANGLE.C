#include <stdio.h>
#include <conio.h>

main()
{
 int a,b;
 clrscr();
 printf("write first angle:-");
 scanf("%d",&a);
 printf("write second angle:-");
 scanf("%d",&b);
 printf("%d",180-(a+b));
 getch();

}