#include<stdio.h>
int n;
void add()
{
    int sum=0,temp;
    temp=n;
    while(temp>0)
        {
            sum=sum+(temp%10);
            temp=temp/10;
        }
    printf("Sum of digits = %d",sum);
}
void product()
{
    int pro=1,t;
    t=n;
    while(t>0)
        {
            pro=pro*(t%10);
            t=t/10;
        }
    printf("\nProduct of digits = %d",pro);
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    add();
    product();
}