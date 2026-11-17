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
        max=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[max])
            {
                max=j;
            }
        }
        c=a[i];
        a[i]=a[max];
        a[max]=c;
    }
    printf("Elements in descending order are:-\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}