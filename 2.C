#include<stdio.h>
#include<conio.h>
void main()
{
 int num;
 printf("\n ENTER A NUMBER TO BE CHECKED TO ODD/EVEN : ");
 scanf("%d",&num);
 if(num%2==0)
  printf("\n %d this number is EVEN",num);
 else
  printf("\n %d this number is ODD",num);
 getch();
}