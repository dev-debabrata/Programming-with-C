/*
    WAP to read number, remove the last 3 digit of given number.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    no = no/1000;
    printf("Number after remove the last 3 digit of number = %d",no);
}
