#include<stdio.h>
void main()
{
    int n,pro=1;
    printf("Enter no:-");
    scanf("%d",&n);
    if(n==0)
    {
        printf("Product of no's digit is %d",0);
    }
    else{
        while(n>0)
        {
            pro=pro*(n%10);
            n=n/10;
        }
        
    }
    printf("Product of digit is %d.",pro);
}