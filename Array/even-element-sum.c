#include<stdio.h>
void main()
{
    int a[10],n,i,even=0;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all %d element of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even=even+a[i];
        }
    }
    printf("Sum of all even elements of array is %d.",even);
}