/*
    WAP to read marks in 3 subjects. Print whether the student is pass or fail.
*/

#include<stdio.h>
void main()
{
    int m1, m2, m3;
    printf("Enter marks in 3 subjects: ");
    scanf("%d%d%d", &m1,&m2,&m3);
    if(m1>=35 && m2>=35 && m3>=35){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
}
