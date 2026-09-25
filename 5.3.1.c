#include <stdio.h>
#include <math.h>

int GCD(int a,int b)
{
    if(a%b==0)
    {
        return fabs(b);
    }
    else
    {
        return GCD(b,a%b);
    }
}
int main(void)
{
    int a,b;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    printf("最大公约数为:%d\n",GCD(a,b));
    return 0;
}