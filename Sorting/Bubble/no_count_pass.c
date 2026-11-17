#include<stdio.h>
int main()
{
    int n;
    printf("Declare size of array:-");
    scanf("%d",&n);
    int a[n],i,j,temp,pass=0,count=0;
    printf("Enter all elements:-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        pass++;
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                count++;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    printf("Ascending Order:-");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("No of swap %d \n",count);
    printf("No of pass %d",pass);
    return 0;
}
