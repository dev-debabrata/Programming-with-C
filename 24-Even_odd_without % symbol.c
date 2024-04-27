/*
    WAP to read a number. Print whether it is even or odd without using "%" symbol.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    if(no/2*2==no){
        printf("Even number");
    }
    else{
        printf("Odd number");
    }
}
