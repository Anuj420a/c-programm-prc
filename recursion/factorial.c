#include<stdio.h>
int n;
int fact(int n)
{
    if(n<=1)
    { 
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    printf("%d",fact(n));
}