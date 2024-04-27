/*
    WAP to read age of a person. Print whether the person is eligible to vote or not.
*/

#include<stdio.h>
void main()
{
    int age;
    printf("Enter a age: ");
    scanf("%d", &age);
    if(age>=21){
        printf("Eligible to vote");
    }
    else{
        printf("Not eligible to vote");
    }
}
