#include<stdio.h>
void main()
{
    int a[7],i,max,sec;
    printf("Declare all elements of array:-");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<7;i++)
    {
        if(max<a[i])
        {
            sec=max;
            max=a[i];
        }
        else if(a[i]>sec && a[i]!=max)
        {
            sec=a[i];
        }
    }
    printf("Second Largest Element :- %d",sec);
}