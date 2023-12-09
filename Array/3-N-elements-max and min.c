/*
    WAP to read N elements into an array. Find max and min elements.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i, max, min;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read array elements
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    /// Find max & min
    printf("Array is\n");
    max = min = a[0];
    for(i=0; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("Max = %d",max);
    printf("\nMin = %d",min);
}
