#include<stdio.h>
void main()
{
    int a[3][3],i,j,dia=0;
    printf("Enter all elements of array:-");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Diagonal:-\n");
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i][i]);
        dia=dia+a[i][i];
    }
    printf("\nDiagonal Sum = %d.",dia);
}