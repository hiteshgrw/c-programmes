#include<stdio.h>
#include<conio.h>
void daimond();
void ptri();
void series();
long factorial(int n);
void main()
{
 int ch;
 clrscr();
 do
 {
  printf("\n MENU :");
  printf("\n 1. DAIMOND PATTERN ");
  printf("\n 2. PASCAL TRIANGLE ");
  printf("\n 3. series 1!+2!....N!");
  printf("\n 4. EXIT");
  printf("\n ENTER YOUR CHOICE : ");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1: daimond();
	    break;
    case 2: ptri();
	    break;
    case 3: series();
	    break;
    case 4: exit(0);
    default:printf("\n INVALID CHOICE ");
  }
 }while(ch>=1 && ch<=3);
  getch();
}
void daimond()
{
  int n, c, k, space = 1;
  clrscr();
  printf("Enter number of rows\n");
  scanf("%d", &n);
  space = n - 1;
  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
    space--;
    for (c = 1; c <= 2*k-1; c++)
      printf("*");
    printf("\n");
  }
  space = 1;
  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= space; c++)
      printf(" ");
    space++;
    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");
   printf("\n");
  }
 getch();
}
void ptri()
{
   int i, n, c;
   clrscr();
   printf("Enter the number of rows you wish to see in pascal triangle\n");
   scanf("%d",&n);
   for (i = 0; i < n; i++)
   {
      for (c = 0; c <= (n - i - 2); c++)
	 printf(" ");
      for (c = 0 ; c <= i; c++)
	 printf("%ld ",factorial(i)/(factorial(c)*factorial(i-c)));
      printf("\n");
   }
   getch();
}
long factorial(int n)
{
   int c;
   long result = 1;

   for (c = 1; c <= n; c++)
	 result = result*c;

   return result;
}
void series()
{
 int n,i,j;
 long int sum=0,f=1;
 clrscr();
 printf("\n ENTER THE END FOR THE SERIES ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  for(j=1;j<=i;j++)
  {
   f=f*j;
  }
  sum=sum+f;
  f=1;
 }
 printf("\n SUM OF THE SERIES IS : %ld",sum);
 getch();
}
