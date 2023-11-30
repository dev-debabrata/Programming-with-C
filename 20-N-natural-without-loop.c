/*
    WAP to find the sum of N natural numbers without using any loop.
*/

#include<stdio.h>
void main()
{
    int n, sum;
    printf("Enter N value: ");
    scanf("%d", &n);
    sum = (n*(n+1))/2;
    printf("Sum = %d",sum);
}
