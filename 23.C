#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[50],rstr[50];
 int i;
 clrscr();
 printf("\n ENTER A STRING : ");
 gets(str);
 int l=strlen(str);
 printf("\n THE REVERSE STRING IS : ");
 for(i=0;i<l;i++)
 {
  printf("%c",str[l-i-1]);
 }
 getch();
}