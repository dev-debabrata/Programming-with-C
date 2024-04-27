/*
    WAP to read N elements into an array, print the same on screen.
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
    /// Print elements of array
    printf("Array is\n");
    for(i=0; i<n; i++)
        printf("%6d", a[i]);
}
