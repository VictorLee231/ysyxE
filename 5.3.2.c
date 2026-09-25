#include <stdio.h>
int fib(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

int main(void)
{
    int n = 0;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("第%d项的斐波那契数列是:%d\n",n,fib(n));
    return 0;
}