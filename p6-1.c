/*创建一个函数，返回两个int型整数中较小一数的值。
int min2(int a,int b){...} */

#include <stdio.h>

int min2(int a, int b){
    return (a > b ? b : a);
}

int main(void) {
    int num1, num2;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("较小值为%d\n", min2(num1, num2));
    return 0;
}