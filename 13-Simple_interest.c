/*
    WAP to find simple interest.
*/

#include<stdio.h>
#define pi 3.14
void main()
{
    int p, t, r, si;
    printf("Enter P, T, R values: ");
    scanf("%d%d%d", &p,&t,&r);
    si = p*t*r/100;
    printf("Simple interest = %d",si);
}
