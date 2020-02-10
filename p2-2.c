//编写一段程序，读取两个整数，然后输出它们的和以及积。

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("他们的和是:%d\n他们的积是:%d\n", num1 + num2, num1 * num2);
    return 0;
}