#include<stdio.h>
int n;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}
int main(void)
{
    int n, result;

    printf("Enter no: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative numbers is not defined.\n");
    }
    else
    {
        result=fact(n);
        printf("Factorial of %d is %d\n", n, result);
    }

    return 0;
}