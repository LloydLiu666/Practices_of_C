/*编写一个程序，确认只要没有发生高位溢出，则
无符号整数位左移后的值等于其乘以2的指数幂后的值。
无符号整数位右移后的值等于其除以2的指数幂后的值。*/

#include <stdio.h>
#include <limits.h>

unsigned powr(int b, int p) {
    unsigned r = 1;
    if (p > 0){
        for (int i = 1; i <= p; i++){
            r *= (unsigned)b;
        }
    }
    else if (p < 0){
        for (int i = 1; i <= -p; i++){
            r /= (unsigned)b;
        }
    }
    else{
        r = 1;
    }
    return r;
}

int main(void){
    unsigned num;
    int dig;
    printf("请输入一个无符号整数:");
    scanf("%u", &num);
    printf("请输入左移/右移的位数:");
    scanf("%d", &dig);
    if (((unsigned)UINT_MAX / powr(2, dig)) >= num){
        printf("不会发生高位溢出，左移后等于%u，右移后等于%u\n", num << dig, num >> dig);
    }
    else{
        printf("高位溢出！\n");
    }
}