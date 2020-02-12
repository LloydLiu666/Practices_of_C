//创建一个程序，分别对代码清单7-11和代码清单7-12进行改写，从0.0递增到1.0,每次递增0.01,求递增后的所有值的累计。注意对比二者的运行结果。

#include <stdio.h>

int c711(void)
{
    float x;
    double sum = 0.0;
    for (x = 0.0; x <= 1.0; x += 0.01)
        sum += x;
    printf("7-11sum = %lf", sum);
    return 0;
}

int c712(void)
{
    int i;
    float x;
    double sum = 0.0;
    printf("x = ");

    for (i = 0; i <= 100; i++) {
        x = i / 100.0;
        sum += x;
    }
    printf("7-12sum = %lf", sum);
    return 0;
}

int main(void){
    c711();
    printf("\n");
    c712();
    printf("\n");
    return 0;
}