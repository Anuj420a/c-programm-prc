#include<stdio.h>
int n;
void table()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
}
void main()
{
    printf("Declare no for its table:-");
    scanf("%d",&n);
    table();
}