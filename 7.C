#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int num1,num2;
 char ch,ans='y';
 do
 {
  printf("\n MENU :");
  printf("\n +. ADDITION");
  printf("\n -. SUBTRACTION");
  printf("\n *. MULTIPLIACTION");
  printf("\n /. DIVISION");
  printf("\n e. EXIT");
  printf("\n ENTER YOUR CHOICE : ");
  scanf("%c",&ch);
  printf("\n ENTER TWO NUMBERS TO PERFORM THE FUNCTIONS :");
  scanf("%d%d",&num1,&num2);
  switch(ch)
  {
   case '+':printf("\n SUM IS : %d",num1+num2);
	    break;
   case '-':printf("\n DIFFERENCE IS : %d",num1-num2);
	    break;
   case '*':printf("\n PRODUCT IS : %d",num1*num2);
	    break;
   case '/':printf("\n QUOTIENT IS : %d",num1/num2);
	    break;
   case 'e':exit(0);
   default:printf("\n INVALID CHOICE");
  }
  printf("\n DO YOU WANT TO CONTINUE :");
  scanf("%c",&ans);
 }while((ans=='y')||(ans=='Y'));
 getch();
}