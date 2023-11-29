/*  WAP to read number, Find the last 3 digit of given number.
*/

#include<stdio.h>
void main()
{
    int no, rem;
    printf("Enter a number: ");
    scanf("%d", &no);
    rem = no%1000;
    printf("Last digit of 3 number = %d",rem);
}

