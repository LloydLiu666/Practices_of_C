//编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("%d是%d的%.f%%\n", num1, num2, num1 * 100.0 / num2);
    return 0;
}