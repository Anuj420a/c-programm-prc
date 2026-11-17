#include<stdio.h>
void main()
{
    int a[10],n,i,max;
    printf("Define size of array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array :-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Largest element of array is %d",max);
}