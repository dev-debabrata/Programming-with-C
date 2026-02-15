#include <stdio.h>
int main(){
    int num, i, sum = 0;

    printf("Enter the length of numbers: ");
    scanf("%d", &num);

    for(i = 0; i <= num; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }
    printf("Sum of Even number = %d", sum);

    return 0;
}
