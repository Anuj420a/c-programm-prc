#include<stdio.h>
void main()
{
    int a[10],n,i,mult=1;
    printf("Enter no of element want to store in array:-");
    scanf("%d",&n);
    printf("Enter all %d elemnts of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        mult=mult*a[i];
    }
    printf("Product of all element of array is %d.",mult);
}