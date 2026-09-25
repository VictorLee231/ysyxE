#include <stdio.h>
#include <math.h>
double myround(double x)
{
    printf("请输入小数:");
    scanf("%lf",&x);
    if(fabs(x-(int)x)>=0.5)
    {
        if(x>0)
        {
            return ceil(x);
        }
        else
        {
            return floor(x);
        }
    }
    else
    {
        return (int)x;
    }

}

int main(void)
{
    double x = 0;
    printf("四舍五入后的结果为: %lf\n", myround(x));
    return 0;
}