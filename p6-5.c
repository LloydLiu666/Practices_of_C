/*创建一个函数，返回1到n之间所有整数的和。
int sumup(int n){...}*/

#include <stdio.h>

int sumup(int n){
    return ((1 + n) * n / 2);
}

int main(void) {
    int num1;
    printf("请输入一个整数:");
    scanf("%d", &num1);
    printf("1到这个整数到和为%d\n", sumup(num1));
    return 0;
}