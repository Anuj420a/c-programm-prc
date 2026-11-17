#include<stdio.h>
void main()
{
    int n,count=0;
    printf("Enter no:-");
    scanf("%d",&n);
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("Total no of digit is %d",count);
}