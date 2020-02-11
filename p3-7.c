/*编写一段程序，计算出输入的四个整数中的最大值并显示。
※注意使用if语句。*/

#include <stdio.h>

int main(void) {
    int num1, num2, num3, num4;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("请输入第三个整数:");
    scanf("%d", &num3);
    printf("请输入第四个整数:");
    scanf("%d", &num4);
    int max = num1;
    if (num2 > max){
        max = num2;
    }
    if (num3 > max){
        max = num3;
    }
    if (num4 > max){
        max = num4;
    }
    printf("最大值为:%d\n", max);
    return 0;
}