#include<stdio.h>
int n;
void check()
{
    if(n%2==0)
    {
        printf("%d is a even no.",n);
    }
    else{
        printf("%d is a odd no.",n);
    }
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    check();
}