#include<stdio.h>
void main()
{
    int a[10],n,i,pos=0,neg=0,zero=0;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            pos++;
        }
        else if (a[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    printf("\n No of positive elements in array is %d",pos);
    printf("\n No of negative elements in array %d",neg);
    printf("\n No of zero in array is %d",zero);
}