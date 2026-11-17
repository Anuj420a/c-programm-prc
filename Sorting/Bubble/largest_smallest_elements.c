#include<stdio.h>
int main()
{
    int a[5],i,j,temp;
    printf("Enter all elements:-");
    for(i=0;i<5;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<5;i++)
        {
            for(j=0;j<4;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
        }
    int min,max;
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
        {
            if(min>a[i])
            {
                min=a[i];
            }
            if(max<a[i])
            {
                max=a[i];
            }
            printf("%d ",a[i]);
        }
    printf("Largest element %d",max);
    printf("Smallest element %d",min);
    return 0;
}