#include<stdio.h>
void main ()
{
    int a[10],n,i;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
   
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array:-");
    for(i=0;i<n;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nReverse Array:-");
    for(i=n-1;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
}