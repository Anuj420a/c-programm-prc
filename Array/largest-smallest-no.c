#include<stdio.h>
void main()
{
    int a[10],i,max,min;
    printf("Enter all elements of array:-");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        else if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("Largest element:- %d\n",max);
    printf("Smallest elements:- %d",min);
    
}