#include<stdio.h>
int n;
void pallindrome()
{
    int temp,rev;
    temp=n;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("%d ia a pallindrome no.",n);
    }
    else
    {
        printf("%d is a pallindrome no.",n);
    }
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    pallindrome();
}