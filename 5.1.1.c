#include <stdio.h>
int is_leap_year(int year)
{
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("%d是闰年\n",year);
        return 1;
    }
    else
    {
        printf("%d不是闰年\n",year);
        return 0;
    }
}

int main(void)
{
    int year = 0;
    printf("请输入年份：");
    scanf("%d",&year);
    is_leap_year(year);
    return 0;
}