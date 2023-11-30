/*
    WAP to read a char, print whether it upper case or not.
*/

#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a char: ");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z'){
        printf("Upper case");
    }
    else{
        printf("Not a upper case");
    }
}
