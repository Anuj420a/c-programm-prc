#include<stdio.h>
void main()
{
    int a[10],n,i,temp;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all elements of array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array:-");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nPairwise Swapping:-");
    for(i=0;i<n-1;i=i+2)
    {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}