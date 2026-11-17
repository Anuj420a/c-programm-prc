#include<stdio.h>
int a,b;
void add()
{
    printf("Sum of no %d",a+b);
}
void main()
{
    printf("Enter two no:-");
    scanf("%d%d",&a,&b);
    add();

}