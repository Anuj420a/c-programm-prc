#include<stdio.h>
int n;
void fact()
{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("%d is a factorial of %d.",fact,n);
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    fact();
}