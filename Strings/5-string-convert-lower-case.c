/*
    WAP to read a string. convert it to lower case.
*/

#include<stdio.h>
void main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s",&str);
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
    }
    printf("Result=%s", str);
}

