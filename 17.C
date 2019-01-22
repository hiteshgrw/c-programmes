#include<stdio.h>
#include<conio.h>
void main()
{
 int i,num;
 long int f=1;
 clrscr();
 printf("\n ENTER A NUMBER WHOES FACTORIAL NEED TO BE FOUNDED :");
 scanf("%d",&num);
 for(i=num;i>=1;i--)
 {
  f=f*i;
 }
 printf("\n FACTORIAL OF %d IS : %ld",num,f);
 getch();
}