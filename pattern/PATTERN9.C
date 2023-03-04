/*
Pattern:9

	* * * * *
	    *
	*   *
	*   *
	* * *
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
		if(i==1 || j==3 || (i==5 && j<=3) || (j==1 && i>=3))
			printf("* ");
		else
			printf("  ");
	    }
	    printf("\n");
	}
	getch();
}