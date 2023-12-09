/*
    WAP to read avg mars of a student. Print the grade.
*/

#include<stdio.h>
void main()
{
    int avg;
    printf("Enter avg marks: ");
    scanf("%d", &avg);
    if(avg>=60)
        printf("I class");
    else if(avg>=50)
        printf("II class");
    else
        printf("III class");
}
