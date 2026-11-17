#include<stdio.h>
void main()
{
    int a[10],n,i,sum=0;
    printf("Enter no of elements want to store:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of all elements of array is %d.",sum);
}