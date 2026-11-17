#include<stdio.h>
void main()
{
    int a[7],i,min,sec;
    printf("Declare all elements of array :-");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<7;i++)
    {
        if(min>a[i])
        {
            sec=min;
            min=a[i];
        }
        else if(a[i]<sec && a[i]!=min)
        {
            sec=a[i];
        }
    }
    printf("Second Largest Elements :-%d",sec);
}