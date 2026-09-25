#include <stdio.h>
void diamond(int n, char c)
{
    int i, j, stars, spaces;

    for (i = 1; i <= n; i++) {
        if (i <= n / 2 + 1)
            stars = 2 * i - 1;             
        else
            stars = 2 * (n - i + 1) - 1;   

        spaces = (n - stars) / 2;          

        for (j = 1; j <= n; j++) {         
            if (j <= spaces || j > spaces + stars)
                printf("  ");              
            else
                printf("%c ", c);
        }
        printf("\n");
    }
}


int main(void)
{
    diamond(7,'$');

    return 0;
}