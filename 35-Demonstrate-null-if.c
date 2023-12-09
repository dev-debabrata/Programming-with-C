/*
    WAP to demonstrate null if.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a upper case char: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
    ;
    else
        ch = ch+32;
        printf("Lower case char = %c",ch);
}
