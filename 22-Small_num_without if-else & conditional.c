/*
    WAP to find small number between 2 number without using if-else or without using conditional statement.
*/

#include<stdio.h>
void main()
{
    int a, b, big;
    printf("Enter two number: ");
    scanf("%d%d", &a,&b);
    big = ((a+b)-abs(a-b))/2;
    printf("Small number = %d",big);
}
