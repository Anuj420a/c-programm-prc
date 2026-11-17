#include<stdio.h>
int n;
int digitsum( int n)
{
    if(n==0)
    {
        return 0;
    }
    return (n%10)+digitsum(n/10);
}
void main()
{
    printf("Enter no :-");
    scanf("%d",&n);
    printf("Sum of digit = %d",digitsum(n));

}