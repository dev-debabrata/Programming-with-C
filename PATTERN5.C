/*
Pattern:5
		*
	      * * *
	    * * * * *
	  * * * * * * *
	* * * * * * * * *
*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,s=4;
	clrscr();
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=s; j++)
		{
		     printf("  ");
		}
		for(j=1; j<=2*i-1; j++)
		{
		     printf("* ");
		}
		printf("\n");
		s--;
	}
	getch();
}