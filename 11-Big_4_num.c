/*
    WAP to find big number between 4 numbers.
*/

#include<stdio.h>
void main()
{
    int a, b, c, d, big;
    printf("Enter four numbers: ");
    scanf("%d%d%d%d", &a,&b,&c,&d);
    big = (a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d);
    printf("Big number = %d",big);
}
