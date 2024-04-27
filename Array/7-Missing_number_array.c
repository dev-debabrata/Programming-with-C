/*
    WAP to find the missing number of an array.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i, sum=0, missing;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read array elements
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    missing=(n+1)*(n+2)/2-sum;
    printf("Missing number=%d",missing);
}
