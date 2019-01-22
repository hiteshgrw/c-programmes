#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,first=0,sec=1,third;
 clrscr();
 printf("\n ENTER THE NUMBER OF TERMS YOU WANT OT PRINT IN FIBONACCI SERIES:");
 scanf("%d",&n);
 printf("\n THE SERIES IS :  ");
 for(i=1;i<=n;i++)
 {
  printf(" %d ",first);
  third=first+sec;
  first=sec;
  sec=third;
 }
 getch();
}
