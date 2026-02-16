#include <stdio.h>
int main(){
    int num, rem, sum = 0, dup;

    printf("Enter a number: ");
    scanf("%d", &num);

    dup = num;

    while(num != 0){
        rem = num % 10;
        sum = sum + rem*rem*rem;
        num = num / 10;
    }

    if(sum == dup){
        printf("%d is a Armstrong number.", dup);
    } else{
        printf("%d is not a Armstrong number.", dup);
    }

    return 0;
}
