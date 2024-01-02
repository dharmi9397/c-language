#include <stdio.h>
#include <conio.h>
main()
{
 int a,b,c;
 clrscr();
 printf("enter a value of the first number :-");
 scanf("%d",&a);
 printf("enter a value of the second number :-");
 scanf("%d",&b);
 printf("enter a value of the third number :-");
 scanf("%d",&c);
 if(a<b){
 if(a<c){
  printf("a is mim");
 }else{
  printf("c is mim");
 }
 }else{
   if(a<c){
    printf("b is mim");
 }else{
  printf("c is mim");
 }
  getch();
}
}


