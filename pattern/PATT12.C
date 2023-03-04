/*
Pattern:12

	*       *
	*       *
	*   *   *
	* *   * *
	*       *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	    for(j=1;j<=5;j++)
	    {
		if(j==1 || j==5 || (i+j==6 && i>=3) || (i==j && i>=3))
		     printf("* ");
		else
		     printf("  ");
	    }
	    printf("\n");
	}
	getch();
}