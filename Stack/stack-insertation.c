#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push(int(n))
{
    if(top==MAX+1)
    {
        printf("Satck OverFLow");
    }
    else
    {
        top++;
        stack[top]=n;
        printf("%d  ",n);
    }

}
int main()
{
    push(90);
    push(65);
    return 0;
}