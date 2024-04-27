/*
    WAP to read N elements into an array. Sort the array.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i, j, t;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read array elements
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    /// Sort the array
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    /// Print the result
    printf("Sorted array\n");
    for(i=0; i<n; i++)
        printf("%5d",a[i]);
}
