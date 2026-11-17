#include<stdio.h>
int n;
void fibonic()
{
    int i,a=0,b=1,c;
    for(i=0;i<=n;i++)
    {
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }
}
void main()
{
    printf("Declare no of fibonacci no :-");
    scanf("%d",&n);
    fibonic();
}