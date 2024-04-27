/*
    WAP to read a char. Print whether it is digit or not.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a char: ");
    scanf("%c", &ch);
    if(ch>='0' && ch<='9'){
        printf("Digit");
    }
    else{
        printf("Not a digit");
    }
}

