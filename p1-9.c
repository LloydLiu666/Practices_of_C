/*编写一段程序，像下面这样显示读取到的三个整数的和。
请输入三个整数。
整数1:7↙
整数2:15↙
整数3:23↙
它们的和是45。
*/

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    int num3;
    printf("整数1:");
    scanf("%d", &num1);
    printf("整数2:");
    scanf("%d", &num2);
    printf("整数3:");
    scanf("%d", &num3);
    printf("它们的和是%d。\n", num1 + num2 + num3);
    return 0;
}