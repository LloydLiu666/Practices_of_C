//编写程序对整型常量、浮点型常量、int型变量和double型变量进行乘除等各种运算，从而验证本节介绍的规则。
#include <stdio.h>

int main(void) {
    const int it = 2;
    const double db = 2.0;
    int num1;
    double num2;
    printf("请输入一个整数作为int变量:");
    scanf("%d", &num1);
    printf("请输入一个实数作为double变量:");
    scanf("%lf", &num2);
    printf("常量为2\n");
    printf("int变量乘int常量:%d\n", num1 * it);
    printf("int变量除int常量:%d\n", num1 / it);
    printf("int变量乘int变量:%d\n", num1 * num1);
    printf("int变量除int变量:%d\n", num1 / num1);
    printf("int变量乘double常量:%f\n", num1 * db);
    printf("int变量除double常量:%f\n", num1 / db);
    printf("int变量乘double变量:%f\n", num1 * num2);
    printf("int变量除double变量:%f\n", num1 / num2);
    printf("double变量乘double常量:%f\n", num2 * db);
    printf("double变量除double常量:%f\n", num2 / db);
    printf("double变量乘double变量:%f\n", num2 * num2);
    printf("double变量除double变量:%f\n", num2 / num2);
    return 0;
}