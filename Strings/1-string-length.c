/*
    WAP to read a string. Find its length.
*/

#include<stdio.h>
void main()
{
    char str[100];
    int len;
    /// read the string
    printf("Enter a string: ");
    scanf("%s",&str);
    /// find the length
    for(len=0; str[len]!='\0'; len++);
    printf("Length=%d",len);
}
