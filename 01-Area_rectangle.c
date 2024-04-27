/*  WAP to read length, width of a rectangle, print the area.
*/

#include<stdio.h>
void main()
{
    int l, w, a;
    printf("Enter a length, width: ");
    scanf("%d%d", &l,&w);
    a = l*w;
    printf("Area = %d",a);
}
