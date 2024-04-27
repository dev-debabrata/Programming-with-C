/*  WAP to read number, remove the last digit of given number.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    no = no/10;
    printf("Number after remove the last digit of number = %d",no);
}
