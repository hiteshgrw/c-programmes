#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num1,num2;
 printf("\n ENTER TWO NUMBERS :");
 scanf("%d%d",&num1,&num2);
 num1=num1+num2;
 num2=num1-num2;
 num1=num1-num2;
 printf("\n THE NUMBERS AFTER SWAP ARE : %d   and   %d",num1,num2);
 getch();
}