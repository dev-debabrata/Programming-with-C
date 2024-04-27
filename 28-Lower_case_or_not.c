/*
    WAP to read a char, print whether it lower case or not.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a char: ");
    scanf("%c", &ch);
    if(ch>='a' && ch<='z'){
        printf("Lower case");
    }
    else{
        printf("Not a lower case");
    }
}
