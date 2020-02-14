/*假设变量a是double型，变量b是int型，请说明经过下述赋值后a和b的值分别是多少。
a = b = 1.5;*/

// a应该是2.0，b应该是2

#include <stdio.h>

int main(void) {
    double a;
    int b;
    //a = b = 1.5; 报错了
    a = (double)(b = (int)1.5);
    printf("a = %lf\n", a);
    printf("b = %d\n", b);
    return 0;
}