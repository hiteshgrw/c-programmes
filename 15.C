#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int rnum1,cnum1,rnum2,cnum2,rrnum,rcnum;
 printf("\n ENTER THE FIRST COMPLEX NUMBER :");
 scanf("%d%d",&rnum1,&cnum1);
 printf("\n ENTER THE SECOND COMPLEX NUMBER :");
 scanf("%d%d",&rnum2,&cnum2);
 printf("\n THE FIRST COMPLEX NUMBER IS : %d + %d i",rnum1,cnum1);
 printf("\n THE SECOND COMPLEX NUMBER IS : %d + %d i",rnum2,cnum2);
 printf("\n SUM OF THE FOLLOWING COMPLEX NUMBERS ARE :");
 printf("%d+%di",rnum1+rnum2,cnum1+cnum2);
 getch();
}