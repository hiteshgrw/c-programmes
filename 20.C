#include<stdio.h>
#include<conio.h>
void main()
{
 int num1,num2,num3;
 clrscr();
 printf("\n ENTER THREE NUMBERS :");
 scanf("%d%d%d",&num1,&num2,&num3);
 if((num1>=num2)&&(num1>=num3))
  printf("\n %d is largest of the three numbers",num1);
 else if((num2>=num3)&&(num2>=num1))
  printf("\n %d is largest of the three numbers",num2);
 else
  printf("\n %d is largest of the three numbers",num3);
 getch();
}