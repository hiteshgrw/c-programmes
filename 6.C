#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num;
 int rem,sum=0;
 printf("\n ENTER THE NUMBERS WHOSE SUM OF DIGITS IS TO FIND :");
 scanf("%d",&num);
 while(num!=0)
 {
  rem=num%10;
  sum=sum+rem;
  num=num/10;
 }
 printf("\n THE SUM OF THE DIGITS OF THE NUMBER IS : %d",sum);
}
