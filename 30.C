#include<stdio.h>
#include<conio.h>
void main()
{
   int m, n, c, d, matrix[10][10], transpose[10][10];
   clrscr();
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix\n");
   for (c = 0; c < m; c++)
   {
      for(d = 0; d < n; d++)
      {
       scanf("%d", &matrix[c][d]);
      }
   }
   for (c = 0; c < m; c++)
   {
      for( d = 0 ; d < n ; d++ )
	{
	 transpose[d][c] = matrix[c][d];
	}
   }
   clrscr();
   printf("Original matrix:\n");
   for (c = 0; c < m; c++) {
      for (d = 0; d < n; d++){
	 printf("%d\t", matrix[c][d]);}
      printf("\n");
   }
   printf("Transpose of the matrix:\n");
   for (c = 0; c < n; c++) {
      for (d = 0; d < m; d++){
	 printf("%d\t", transpose[c][d]);}
      printf("\n");
   }
   getch();
}