#include <stdio.h>
void newline(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n");
    }

}

int main(void)
{
    printf("hello,world");
    newline(1);
    newline(2);
    
}