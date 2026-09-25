#include <stdio.h>
int main(void)
{
    int n = 1;
    int count = 0;
    while(n <= 100)
    {
        if(n%10==9 || n/10==9)
        {
            count++;
            printf("%d ",n);
        }
        n++;
    }
    printf("\n在1到100之间，数字9出现的次数是%d。\n", count);
    return 0;
}