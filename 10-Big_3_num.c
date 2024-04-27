/*
    WAP to find big number between 3 numbers.
*/

#include<stdio.h>
void main()
{
    int a, b, c, big;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    big = (a>b?a:b)>c?(a>b?a:b):c;
    printf("Big number = %d",big);
}
