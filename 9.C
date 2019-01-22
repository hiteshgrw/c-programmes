#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int num,cnum,rem,rnum=0;
 printf("\n ENTER A NUMBER TO CHECK FOR PALLENDROM :");
 scanf("%d",&num);
 cnum=num;
 while(num>0)
 {
  rem=num%10;
  rnum=rnum*10+rem;
  num=num/10;
 }
 if(rnum==cnum)
  printf("\n %d is a pallendrom number",cnum);
 else
  printf("\n %d is not a pallendrom number",cnum);
 getch();
}