//创建一个程序，输入一个实数作为面积，求面积为该实数的正方形的边长。

#include <stdio.h>
#include <math.h>

int main(void) {
    double area;
    printf("输入一个实数作为正方形面积:");
    scanf("%lf", &area);
    printf("该正方形的边长为:%lf\n", sqrt(area));
    return 0;
}