#include<stdio.h>
void main()
{
    int a[10],n,i;
    printf("declare size of element:-");
    scanf("%d",&n);
    printf("Enter all %d elements of array:-",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    printf("Enter index no uhh want to access:-");
    scanf("%d",&j);
    if(j<n)
    {
        printf("Element store in index no %d is %d",j,a[j]);
    }
    else{
        printf("\nOut of limit");
    }
}