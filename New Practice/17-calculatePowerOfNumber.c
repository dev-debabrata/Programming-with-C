#include <stdio.h>
int main(){
    int num, exp;
    long result = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter an Exponent number: ");
    scanf("%d", &exp);

    while(exp != 0){
        result *= num;
        -- exp;
    }

    printf("Answer = %d", result);

    return 0;
}
