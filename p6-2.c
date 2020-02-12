/*创建一个函数，返回三个int型整数中的最小值。
int min3(int a,int b,int c){...}*/

#include <stdio.h>

int min3(int a, int b, int c){
    int min = a;
    min = b < min ? b : min;
    min = c < min ? c : min; 
    return min;
}

int main(void) {
    int num1, num2, num3;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("请输入第三个整数:");
    scanf("%d", &num3);
    printf("较小值为%d\n", min3(num1, num2, num3));
    return 0;
}