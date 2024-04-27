/*  WAP to read base, height of a triangle, Find the area.
*/

#include<stdio.h>
void main()
{
    int b, h, a;
    printf("Enter a base, height: ");
    scanf("%d%d", &b,&h);
    a = 0.5*b*h;
    printf("Area = %.2d",a);
}
