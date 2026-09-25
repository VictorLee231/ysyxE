#include <stdio.h>
#include <math.h>
int main(void)
{
    int a=0,b=0;
    printf("请输入两个整数:");
    scanf("%d %d",&a,&b);
    //先输入a，b，再取绝对值才能正常运行
    int aba=fabs(a);
    int abb=fabs(b);

    while(abb<=aba)
    {
        if(aba%abb==0)
        {
            printf("最大公约数为:%d\n",abb);
            break;
        }
        abb++;
    }
    return 0;
}