/*
    WAP to read a string. Print its reverse.
*/

#include<stdio.h>
void main()
{
    char str[100], rev[100];
    int i, j, len;
    /// read the string
    printf("Enter a string: ");
    scanf("%s",&str);
    /// reverse the string
    for(len=0; str[len]!='\0'; len++);
    for(i=0,j=len-1; str[i]!='\0'; i++,j--)
        rev[j]=str[i];
    rev[len]='\0';
    printf("Reverse=%s",rev);

}
