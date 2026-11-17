#include<stdio.h>
void main()
{
    int a[10][10],r,c,i,j,sum=0;
    printf("Enter total no of row:-");
    scanf("%d",&r);
    printf("Enter total no of column:-");
    scanf("%d",&c);
    printf("Enter all %d elements of matrix:-",r*c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    printf("Matrix:-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Sum of all elements of given matrix is %d.",sum);
}