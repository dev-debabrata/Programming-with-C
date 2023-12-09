/*
    WAP to read 2 numbers. Print whether the second number is factor to first number is not.
*/

#include<stdio.h>
void main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);
    if(a%b==0){
        printf("b is factor to a");
    }
    else{
        printf("b is not factor to a");
    }
}
