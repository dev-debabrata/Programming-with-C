/*
    WAP to read temp of water. Print its from.
*/

#include<stdio.h>
void main()
{
    int temp;
    printf("Enter temperature of water: ");
    scanf("%d", &temp);
    if(temp<=0)
        printf("ICE");
    else if(temp<100)
        printf("Water");
    else
        printf("Steam");
}
