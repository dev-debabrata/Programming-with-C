/*
    WAP to read number, Find the last digit of given number.
*/

#include<stdio.h>
void main()
{
    int no, rem;
    printf("Enter a number: ");
    scanf("%d", &no);
    rem = no%10;
    printf("Last digit of number = %d",rem);
}
