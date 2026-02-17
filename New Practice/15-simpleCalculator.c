#include <stdio.h>

int main(){
    double num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an Operator(+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            printf("Result = %.2lf", num1 + num2);
            break;
        case '-':
            printf("Result = %.2lf", num1 - num2);
            break;
        case '*':
            printf("Result = %.2lf", num1 * num2);
            break;
        case '/':
            if(num2 != 0){
                printf("Result = %.2lf", num1 / num2);
            } else{
                printf("Error! Division by zero.");
            }
            break;
        default:
            printf("Invalid Operator!");
    }

    return 0;
}
