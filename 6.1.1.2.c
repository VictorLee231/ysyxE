#include <stdio.h>
int main(void)
{
    int n=0,i=3;
    printf("请输入一个整数：");
    scanf("%d",&n);
    int a[n];
    a[1]=1;
    a[2]=1;

    while(n>2&&i<=n)
    {
        a[i]=a[i-1]+a[i-2];
        i++;
    }
    printf("第%d项的斐波那契数列是:%d\n",n,a[n]);
    return 0;
}