/*
    WAP to read N elements into an array. Swap the adjacent elements.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i, t;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read array elements
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    /// Swap adjacent element
    for(i=0; i<n-1; i+=2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    /// Print the result
    printf("Array after swapping adjacent elements =");
    for(i=0; i<n; i++)
        printf("%5d",a[i]);
}
