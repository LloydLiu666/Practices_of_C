//编写一段程序，确认相等运算符和关系运算符的运算结果是1和0。

#include <stdio.h>

int main(void) {
    int a, b;
    printf("整数A:");
    scanf("%d", &a);
    printf("整数B:");
    scanf("%d", &b);
    printf("A > B的值为%d\n", a > b);
    printf("A < B的值为%d\n", a < b);
    printf("A == B的值为%d\n", a == b);
    return 0;
}