/*
    WAP to read a number. Print whether it is +ve number or -ve number without comparing with 0.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    if(no==abs(no)){
        printf("+ve number");
    }
    else{
        printf("-ve number");
    }
}
