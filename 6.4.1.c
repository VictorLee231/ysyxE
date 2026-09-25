#include <stdio.h>
int is_prime(int n)
{
    int i;
    for (i = 2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;
    int count=0;
    for(n=2;n<=100;n++)
    {
        if(is_prime(n))
        {
            count++;
            printf("%d ",n);
        }
    }
    printf("\n在2到100之间，素数的个数是%d。\n", count);
    return 0;
}