#include<stdio.h>
void main()
{
    int n,temp,rev;
    printf("Enter no:-");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("%d is a pallindrome no.",n);
    }
    else{
        printf("%d is not a pallindrome no.",n);
    }
}