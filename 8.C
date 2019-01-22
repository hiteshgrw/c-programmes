#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,sum=0;
 printf("\n ENTER THE NUMBER WHICH YOU WANT TO CHECK FOR PERFECT NUMBER :");
 scanf("%d",&num);
 for(int i=1;i<num;i++)
 {
  if(num%i==0)
   sum=sum+i;
 }
 if(sum==num)
  printf("\n %d is a perfect number",num);
 else
  printf("\n %d is not a perfect number",num);
 getch();
}