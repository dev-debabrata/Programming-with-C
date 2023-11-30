/*
    WAP to read a number. Print whether it is +ve number or -ve number.
*/

#include<stdio.h>
void main()
{
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    if(no<0){
        printf("-ve number");
    }
    else{
        printf("+ve number");
    }
}
