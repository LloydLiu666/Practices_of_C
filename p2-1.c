//编写一段程序，读取两个整数，然后显示出前者是后者的百分之几。

#include <stdio.h>

int main(void) {
    int num1;
    int num2;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("%d是%d的%d%%\n", num1, num2, num1 * 100 / num2);
    return 0;
}