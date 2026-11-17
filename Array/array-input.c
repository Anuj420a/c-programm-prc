#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Enter no of element want to store:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array :-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array-\n");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }

}