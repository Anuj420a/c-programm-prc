#include<stdio.h>
int n;
void digitsum()
{
    int sum=0;
     while(n>0)
     {
        sum=sum+(n%10);
        n=n/10;
     }
     printf("Sum of digits of this no is %d.",sum);
}
void main()
{
    printf("Enter no:-");
    scanf("%d",&n);
    digitsum();
}