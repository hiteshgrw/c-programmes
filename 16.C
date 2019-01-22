#include<stdio.h>
#include<conio.h>
void main()
{
 int n,ctr=0;
 clrscr();
 printf("\n ENTER THE LAST DIGIT OF THE SERIES:");
 scanf("%d",&n);
 printf("\n THE PRIME NUMBERS BETWEEN 1 AND %d ARE :\n",n);
 for(int i=1;i<=n;i++)
 {
  for (int j=2;j*j<=i;j++)
  {
   if(i%j==0)
    ctr++;
  }
  if(ctr==0)
   printf("%d\n",i);
  ctr=0;
 }
 getch();
}