#include<stdio.h>
void main()
{
    int a[10],n,i,min;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d is the smallest elements of array.",min);
}