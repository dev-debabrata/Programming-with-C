/*  WAP to read number, Find the last 2 digit of given number.
*/

#include<stdio.h>
void main()
{
    int no, rem;
    printf("Enter a number: ");
    scanf("%d", &no);
    rem = no%100;
    printf("Last digit of 2 number = %d",rem);
}
