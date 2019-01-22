#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int num,cnum,rem,nnum=0;
 clrscr();
 printf("\n ENTER A NUMBER :");
 scanf("%d",&num);
 cnum=num;
 while(num!=0)
 {
  rem=num%10;
  nnum=nnum+pow(rem,3);
  num=num/10;
 }
 if(nnum==cnum)
  printf("\n %d is a Amstrong number",cnum);
 else
  printf("\n %d is not a Amstrong number",cnum);
 getch();
}