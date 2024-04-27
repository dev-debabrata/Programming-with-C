/*
    WAP to power units consumed, find the bill amount.

                    Units      Rate/unit
                    <100    -   2.52
                    <200    -   3.75
                    else    -   5.10
*/

#include<stdio.h>
void main()
{
    int units;
    float bill;
    printf("Enter power units consumed: ");
    scanf("%d", &units);
    if(units<100)
        bill=units*2.52;
    else if(units<200)
        bill=99*2.52+(units-99)*3.75;
    else
        bill=99*2.52+100*3.75+(units-199)*5.10;
    printf("Bill amount = %.2f",bill);
}

