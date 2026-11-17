#include<stdio.h>
void main()
{
    int a[10],n,i,ecount=0,ocount=0;
    printf("Declare size of array:-");
    scanf("%d",&n);
    printf("Eneter all elements of array:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            ecount++;
        }
        else
        {
            ocount++;
        }
    }
    printf("No of even element of array is %d.",ecount);
    printf("\nNo of odd element in array is %d",ocount);
}