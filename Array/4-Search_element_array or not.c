/*
    WAP to read N elements into an array. Search elements, print whether the search element is in array or not.
*/

#include<stdio.h>
void main()
{
    int a[100],n,i, sno, flag=0;
    /// Read array size
    printf("Enter array size: ");
    scanf("%d",&n);
    /// Read array elements
    printf("Enter %d element: ",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    /// Read search number
    printf("Enter search number: ");
    scanf("%d",&sno);
    /// Search operation
    for(i=0; i<n; i++)
    {
        if(a[i]==sno)
            flag=1;
    }
        if(flag==1)
            printf("Element found");
        else
            printf("Element not found");
}
