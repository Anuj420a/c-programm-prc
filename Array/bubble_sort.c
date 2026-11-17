#include<stdio.h>
int main()
{
    int a[10],i,j,max,c;
    printf("Enter all 10 elements:-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
        
    }
    printf("Elements in ascending order are:-\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}