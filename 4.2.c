#include <stdio.h>
int gewei(int x)
{
    return x%10;
}

int shiwei(int x)
{
    return x/10;
}

int main(void)
{
    int x = 23;
    printf("个位是%d,\n十位是%d\n",gewei(x),shiwei(x));
    return 0;
}