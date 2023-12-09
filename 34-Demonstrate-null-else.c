/*
    WAP to demonstrate null else.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a lower case char: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z')
        ch = ch-32;
    else
    ;
        printf("Upper case char = %c",ch);
}
