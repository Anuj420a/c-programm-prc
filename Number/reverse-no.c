#include<stdio.h>
void main()
{
    int n,rev=0;
    printf("Enter no:-");
    scanf("%d",&n);
    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    printf("Reverse no:-\n");
    printf("%d",rev);
}