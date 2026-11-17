#include<stdio.h>
int main()
{
    int a[10],i,j,min,c;
    printf("Enter all 10 elements:-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        min=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        c=a[i];
        a[i]=a[min];
        a[min]=c;
    }
    printf("Elements in ascending order are:-\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}