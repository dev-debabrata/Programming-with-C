/*
    WAP to read a upper case char, convert it to lower case.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter upper case char: ");
    scanf("%c", &ch);
    ch = ch+32;
    printf("Lower case char = %c",ch);
}
