#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float tempc,tempf;
 printf("\n ENTER THE TEMPERATURE IN CELSIUS DEGREES TO BE CONVERTED: ");
 scanf("%f",&tempc);
 tempf=((tempc*9)/5)+32;
 printf("\n THE TEMPERATURE IN CELSIUS DEGREES is : %f",tempc);
 printf("\n THE TEMPERATURE IN FAHRENHEIT is : %f",tempf);
 getch();
}