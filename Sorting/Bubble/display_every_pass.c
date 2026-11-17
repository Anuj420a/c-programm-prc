#include<stdio.h>
int main ()
{
    int n;
    printf("Declare size of array:-");
    scanf("%d",&n);
    int a[n],i,j,k,temp,count=0,swap=0;
    printf("Enter all elements :-");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for(i=0;i<n;i++)
        {
            count++;
            for(j=0;j<n-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                        swap++;
                        temp=a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                        printf("After %d swap:-",swap);
                    for(k=0;k<n;k++)
                        {
                            printf("%d ",a[k]);
                        }
                    printf("\n");
                    }
                    
                }
             printf("After %d pass:-",i);
            for(k=0;k<n;k++)
                {
                    printf("%d ",a[k]);
                }
                printf("\n");
        }
    int min,max;
    min=a[0];
    max=a[0];
    printf("\nAscending Order:-");
    for(i=0;i<n;i++)
        {
            if(min>a[i])
            {
                min=a[i];
            }
            if(max<a[i])
            {
                max=a[i];
            }
            printf("%d ",a[i]);
        }
    printf("\nLargest elements :- %d",max);
    printf("\nSmallest elements :- %d",min);
    printf("\nNo of swap :- %d",swap);
    printf("\nNO of passes :- %d",count);
    return 0;
}