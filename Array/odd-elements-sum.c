#include<stdio.h>
void main()
{
    int a[10],n,i,odd=0;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of arrray:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!=0)
        {
            odd=odd+a[i];
        }
    }
    printf("Sum of odd elements of array is %d.",odd);
}