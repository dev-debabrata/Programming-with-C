/*
    WAP to read 2 number,using one line of code.
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a,&b);
    a = (a+b)-(b=a);
    printf("A = %d",a);
    printf("\nB = %d",b);
}
