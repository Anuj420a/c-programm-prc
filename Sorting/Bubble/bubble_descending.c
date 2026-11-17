#include<stdio.h>
int main()
{
    int a[8],i,j,temp;
    printf("Enter all elements:-");
    for(i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<8;i++)
    {
        for(j=0;j<7;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Descending Order:-");
    for(i=0;i<8;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}