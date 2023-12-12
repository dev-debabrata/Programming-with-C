/*
    WAP to read a string. count the alphabets, vowels, consonants, spaces, digits, symbol.
*/

#include<stdio.h>
void main()
{
    char str[100];
    int ac=0, vc=0, cc=0, sc=0, dc=0, ssc=0, i;
    printf("Enter a string: ");
    scanf("%s", &str);
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            ac++;
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]== '0' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
                vc++;
            else
                cc++;
        }
        else if(str[i]==' ')
            sc++;
        else if(str[i]>='0' && str[i]<='9')
            dc++;
        else
            ssc++;
    }
    printf("Alphabets count=%d", ac);
    printf("\nVowels count=%d", vc);
    printf("\nConsonants count=%d", cc);
    printf("\nSpaces=%d", sc);
    printf("\nDigits count=%d", dc);
    printf("\nSymbol=%d", ssc);
}
