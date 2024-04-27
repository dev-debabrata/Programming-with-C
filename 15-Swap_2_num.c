/*
    WAP to read 2 number, swap the numbers.
*/

#include<stdio.h>
void main()
{
    int a, b, t;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a,&b);
    t=a;
    a=b;
    b=t;
    printf("A = %d",a);
    printf("\nB = %d",b);
}
