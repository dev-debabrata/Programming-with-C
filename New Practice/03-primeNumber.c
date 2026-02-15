#include <stdio.h>
int main(){
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0){
        flag = 1;
    }

    for(i = 2; i <= num/2; i++){
        if(num % 2 == 0){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("%d is a Prime number.", num);
    } else{
        printf("%d is a not Prime number.", num);
    }
    return 0;
}
