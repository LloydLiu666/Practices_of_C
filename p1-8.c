/*编写一段程序，像下面这样显示读取到的两个整数的乘积。
请输入两个整数。
整数1:27↙
整数2:35↙
它们的乘积是945
*/

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    printf("整数1:");
    scanf("%d", &num1);
    printf("整数2:");
    scanf("%d", &num2);
    printf("它们的乘积是%d\n", num1 * num2);
    return 0;
}