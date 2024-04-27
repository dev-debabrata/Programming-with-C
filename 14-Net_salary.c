/*
    WAP to read basic, hra, da, pf, find the net salary.
    net = basic+hra+da-pf
*/

#include<stdio.h>
void main()
{
    int basic, hra, da, pf, net;
    printf("Enter basic, hra, da, pf values: ");
    scanf("%d%d%d%d", &basic,&hra,&da,&pf);
    net = basic+hra+da-pf;
    printf("Net salary = %d",net);
}
