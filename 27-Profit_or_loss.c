/*
    WAP to read purchase rate, sale rate, print whether it is profit or loss.
*/

#include<stdio.h>
void main()
{
    int pr, sr;
    printf("Enter pr, sr: ");
    scanf("%d%d", &pr,&sr);
    if(sr>pr){
        printf("Profit = %d", sr-pr);
    }
    else{
        printf("Loss = %d", pr-sr);
    }
}
