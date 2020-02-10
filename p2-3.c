/*编写一段程序，像下面那样显示出读取的实数的值
请输入一个实数:57.3
你输入的是57.300000*/

#include <stdio.h>

int main(void) {
    double num;
    printf("请输入一个实数:");
    scanf("%lf", &num);
    printf("你输入的是%.6f\n", num);
    return 0;
}