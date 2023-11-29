/*  WAP to read number, remove the last 2 digit of given number.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    no = no/100;
    printf("Number after remove the last 2 digit of number = %d",no);
}

