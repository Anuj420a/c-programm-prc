#include<stdio.h>
void main()
{
    int a[10],n,i,avg=0;
    printf("Enter no of element want to store in array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        avg=avg+a[i];
    }
    printf("Average of elements of array is %d.",avg/n);
}