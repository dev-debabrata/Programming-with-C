/*
    WAP to read a lower case char, convert it to upper case.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter lower case char: ");
    scanf("%c", &ch);
    ch = ch-32;
    printf("Upper case char = %c",ch);
}
