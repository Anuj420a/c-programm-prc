#include<stdio.h>
int n;
void count()
{
    int count=0;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("Total no of digit in this no %d.",count);
}
void main()
{
    printf("Enter no:-");
    scanf("%d",&n);
    count();
}