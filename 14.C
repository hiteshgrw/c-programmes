#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int temp,num1,num2,cnum1,cnum2,hcf,lcm;
 printf("\n ENTER TWO INTEGERS WHOES HCF AND LCM TO BE FOUND :");
 scanf("%d%d",&num1,&num2);
 cnum1=num1;
 cnum2=num2;
 while(cnum2!=0)
 {
  temp=cnum2;
  cnum2=cnum1%cnum2;
  cnum1=temp;
 }
 hcf=cnum1;
 lcm=(num1*num2)/hcf;
 printf("\n HCF OF TWO NUMBERS : %d",hcf);
 printf("\n LCM OF TWO NUMBERS : %d",lcm);
 getch();
}