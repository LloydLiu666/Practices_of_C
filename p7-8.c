//创建一个程序，使用sizeof运算符显示3种浮点型的长度。

#include <stdio.h>

int main(void) {
    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(double) = %lu\n", sizeof(double));
    printf("sizeof(long double) = %lu\n", sizeof(long double));
    return 0;
}