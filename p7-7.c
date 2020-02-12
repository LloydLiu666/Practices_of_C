//创建一个程序，从键盘输入float型、double型、long double型的变量，并显示其值。注意试着输入各种各样的值，并验证其动作。

#include <stdio.h>

int main(void) {
    float fl;
    double db;
    long double lgdb;
    printf("请输入一个float型的值:");
    scanf("%f", &fl);
    printf("float = %f\n", fl);

    printf("请输入一个double型的值:");
    scanf("%lf", &db);
    printf("double = %lf\n", db);

    printf("请输入一个long double型的值:");
    scanf("%Lf", &lgdb);
    printf("long double = %Lf\n", lgdb);
    return 0;
}