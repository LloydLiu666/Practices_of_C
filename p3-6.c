/*编写一段程序，计算出输入的三个整数中的最小值并显示。
※注意使用if语句*/

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
    if (num2 < min){
        min = num2;
    }
    if (num3 < min){
        min = num3;
    }
    printf("最小值为:%d\n", min);
    return 0;
}