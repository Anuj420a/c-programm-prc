#include<stdio.h>
int n;
void prime()
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("%d is a prime no.",n);
    }
    else
    {
        printf("%d is not a prime no.",n);
    }
}
void main()
{
    printf("Enter no to check :-");
    scanf("%d",&n);
    prime();
}