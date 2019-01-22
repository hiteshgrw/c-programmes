#include<stdio.h>
#include<conio.h>
void main()
{
 char str[50];
 int i=0;
 clrscr();
 printf("\n ENTER A STRING");
 gets(str);
 while(str[i]!=0)
 {
  if(str[i]>='A' && str[i]<='Z')
   str[i]=str[i] + 32;
  else if(str[i]>='a' && str[i]<='z')
   str[i]=str[i] - 32;
  i++;
 }
 printf("\n THE NEW STRING IS : %s",str);
 getch();
}