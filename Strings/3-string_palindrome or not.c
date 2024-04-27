/*
    WAP to read a string. print whether the string is palindrome or not.
*/

#include<stdio.h>
void main()
{
    char str[100], rev[100];
    int i, j, len, flag=1;
    /// read a string
    printf("Enter a string: ");
    scanf("%s", &str);
    /// reverse the string
    for(len=0; str[len]!='\0'; len++);
    for(i=0,j=len-1; str[i]!='\0'; i++,j--)
        rev[j]=str[i];
    rev[len]='\0';
    for(i=0; str[i]!='\0'; i++)
        if(str[i]!=rev[i])
            flag=0;
    if(flag==1)
        printf("Palindrome");
    else
        printf("Not a palindrome");
}
