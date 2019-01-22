#include<stdio.h>
#include<conio.h>
void main()
{
   int n, i, j, first[10][10], second[10][10], sum[10][10];
   clrscr();
   printf("Enter the number of rows/columns of matrix\n");
   scanf("%d",&n);
   printf("Enter the elements of first matrix\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
        {
         scanf("%d", &first[i][j]);
	}
   }
   printf("Enter the elements of second matrix\n");
   for (i = 0; i < n; i++)
   {
      for (j = 0; j < n; j++)
	{
	 scanf("%d", &second[i][j]);
	}
   }
   clrscr();
   printf("1st matrices:-\n");
   for (i = 0; i < n; i++) {
      for (j = 0 ; j < n; j++) {
	 printf("%d\t", first[i][j]);
      }
      printf("\n");
   }
   printf("2nd matrices:-\n");
   for (i = 0; i < n; i++) {
      for (j = 0 ; j < n; j++) {
	 printf("%d\t", second[i][j]);
      }
      printf("\n");
   }
   printf("Sum of entered matrices:-\n");
   for (i = 0; i < n; i++) {
      for (j = 0 ; j < n; j++) {
	 sum[i][j] = first[i][j] + second[i][j];
	 printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
   getch();
}