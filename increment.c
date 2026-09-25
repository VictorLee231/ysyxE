#include <stdio.h>
int increment(int a)
{
    return a+1;
}

int main(void)
{
    int a = 1;
    a = increment(a);
    printf("a = %d",a);
}