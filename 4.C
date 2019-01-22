#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 float tempc,tempf;
 printf("\n ENTER THE TEMPERATURE IN FAHRENHEIT TO BE CONVERTED: ");
 scanf("%f",&tempf);
 tempc=((tempf-32)*5)/9;
 printf("\n THE TEMPERATURE IN FAHRENHEIT is : %f",tempf);
 printf("\n THE TEMPERATURE IN CELSIUS DEGREES is : %f",tempc);
 getch();
}