/*
    WAP to read radius of a circle. Print the area.
*/

#include<stdint.h>
#define pi 3.14
void main()
{
    int r;
    float a;
    printf("Enter redius");
    scanf("%d",&r);
    a = pi*r*r;
    printf("Area = %f",a);
}
