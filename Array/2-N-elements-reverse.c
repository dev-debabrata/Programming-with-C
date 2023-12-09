/*
    WAP to read N elements into an array, print them in reverse.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read elements into array
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    /// Print elements in reverse
    printf("Array is\n");
    for(i=n-1; i>=0; i--)
        printf("%5d", a[i]);
}
