#include <stdio.h>
void diamond(int n, char c)
{
    int i, j, stars, spaces;

    for (i = 1; i <= n; i++) {
        if (i <= n / 2 + 1)
            stars = 2 * i - 1;             /* 上半部分：越来越宽 */
        else
            stars = 2 * (n - i + 1) - 1;   /* 下半部分：越来越窄 */

        spaces = (n - stars) / 2;          /* 左边空几"格" */

        for (j = 1; j <= n; j++) {         /* j 扫整行 1..n，与 spaces 同一套坐标 */
            if (j <= spaces || j > spaces + stars)
                printf("  ");              /* 空格也占两列，和 "%c " 对齐 */
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