#include <stdio.h>
int main(){
    int num, rem, rev = 0, dup;

    printf("Enter a number: ");
    scanf("%d", &num);

    dup = num;

    while(num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(rev == dup){
        printf("%d is a Palindrome number.", dup);
    } else{
        printf("%d is not a Palindrome number.", dup);
    }
    return 0;
}
