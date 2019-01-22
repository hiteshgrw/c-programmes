#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 clrscr();
 long int p;
 int r,t;
 float si,ci;
 printf("\n ENTER THE PRINCIPAL OF AMOUNT :");
 scanf("%ld",&p);
 printf("\n ENTER THE RATE AT WHICH THE AMOUNT IS CHARGED :");
 scanf("%d",&r);
 printf("\n ENTER THE TIME FOR WHICH THE AMOUNT IS TAKEN :");
 scanf("%d",&t);
 si=(p*r*t)/100;
 ci=p*pow((1+(r/100)),t);
 printf("\n SIMPLE INTEREST IS : %f",si);
 printf("\n COMPOUND INTEREST IS : %f",ci);
}
