//编写一段程序，输入一个整数值，显示出它的绝对值。

#include <stdio.h>

int main(void) {
    int num;
    printf("请输入一个整数值:");
    scanf("%d", &num);
    printf("它的绝对值为:%d\n", num < 0 ? -num : num);
    return 0;
}