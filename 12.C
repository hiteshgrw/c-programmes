#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,num,sum=0;
 printf("\n ENTER THE NUMBER OF NUMBERS YOU WANT TO INPUT :");
 scanf("%d",&n);
 printf("\n ENTER THE NUMBERS :");
 for(int i=1;i<=n;i++)
 {
  scanf("%d",&num);
  sum=sum+num;
 }
 float avg =(float)sum/n;
 printf("\n THE SUM OF THE NUMBERS ARE : %d",sum);
 printf("\n THE AVERAGE OF THE NUMBERS ARE : %f",avg);
 getch();
}