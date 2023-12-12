/*
    WAP to find area pf a rectangle using function of with arguments and with return model.
*/

#include<stdio.h>
int area(int i, int w)
{
    return i*w;
}
void main()
{
    int area(int, int);
    int i, w, a;
    printf("Enter length, width: ");
    scanf("%d%d", &i,&w);
    a=area(i,w);
    printf("Area=%d",a);
}
