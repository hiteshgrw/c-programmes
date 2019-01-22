#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char str[50][50], t[50];	// Here, we will take two dimensional array
    int i, j,n;
    clrscr();
    printf("\n ENTER THE NUMBER OF NAMES YOU WANT TO ENTER :");
    scanf("%d",&n);
    printf("Enter the Names :\n");
    for(i=0; i<=n; i++)
    {
	gets(str[i]);
    }
    /* Comparing strings or names*/
    for(i=1; i<=n; i++)
    {
	for(j=1; j<=n; j++)
	{
	    if(strcmp(str[j-1], str[j])>0)
	    {
		strcpy(t, str[j-1]);
		strcpy(str[j-1], str[j]);
		strcpy(str[j], t);
	    }
	}
    }
    /*print strings in alphabetical order*/
    printf("\nNames in Alphabetical Order : \n");
    for(i=0; i<=n; i++)
    {
	puts(str[i]);
    }
    getch();
}