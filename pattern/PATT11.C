/*
Pattern:11

	*       *
	* *   * *
	*   *   *
	*       *
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
		if(j==1 || j==5 || (i==j && j<=3) || (i+j==6 && j>=3))
		     printf("* ");
		else
		     printf("  ");
	     }
	     printf("\n");
	}
	getch();
}