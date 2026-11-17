#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("Declare size of element:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array.",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0,j;
    printf("Enter the no uhh want to count the factor of that no:-");
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(a[i]%j==0)
        {
            count++;
        }
    }
    printf("There are total %d factor of %d.",count,j);
    
}