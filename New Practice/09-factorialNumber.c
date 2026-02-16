#include <stdio.h>
int main(){
    int num, i;
    long fact = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial number: ");
    for(i = 1; i <= num; i++){
        fact *= i;
    }
    printf("%d", fact);
    return 0;
}
