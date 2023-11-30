/*
    WAP to read 2 number,without using third variable.
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("A = %d",a);
    printf("\nB = %d",b);
}
