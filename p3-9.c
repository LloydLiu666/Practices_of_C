//使用条件运算符替换练习3-6的程序中的if语句，实现同样的功能。

#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("请输入第三个整数:");
    scanf("%d", &num3);
    int min = num1;
    /*if (num2 < min){
        min = num2;
    }
    if (num3 < min){
        min = num3;
    }*/
    min = num2 < min ? num2 : min;
    min = num3 < min ? num3 : min;
    printf("最小值为:%d\n", min);
    return 0;
}