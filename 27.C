#include<stdio.h>  
#include<conio.h>
void swap(int , int);
void swapref(int *,int *);   
void main()  
{
    int a,b,ch;
    clrscr();
    printf("\n ENTER TWO NUMBERS : ");
    scanf("%d%d",&a,&b);
    do
    {
     printf("\n MENU :-");
     printf("\n 1. CALL BY VALUE ");
     printf("\n 2. CALL BY REFERENCE ");
     printf("\n 3. EXIT ");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1: printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main
	       swap(a,b);
	       printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20
	       break;
       case 2: printf("Before swapping the values in main a = %d, b = %d\n",a,b); // printing the value of a and b in main
	       swapref(&a,&b);
	       printf("After swapping values in main a = %d, b = %d\n",a,b); // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20
	       break;
       case 3: exit(0);
       default: printf("\n INVALID CHOICE");
     }
    }while(ch>=1&&ch<=3);
     getch();
}
void swap (int a, int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;
    printf("After swapping values in function a = %d, b = %d\n",a,b); // Formal parameters, a = 20, b = 10
}
void swapref(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    printf("After swapping values in function a = %d, b = %d\n",*a,*b); // Formal parameters, a = 20, b = 10
}