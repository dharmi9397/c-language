#include <stdio.h>
#include <conio.h>
main()
{
 int a,b;
 clrscr();
 printf("enter a first number :-");
 scanf("%d",&a);
 printf("enter a value second number :-");
 scanf("%d",&b);
 if(a<b){
   printf("%d",a);
 }else{
  printf("%d",b);
 }
  getch();

}