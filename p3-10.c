//编写一段程序，输入三个整数，如果三个数都相等，则显示“三个值都相等”。如果其中任意两个值相等，则显示“有两个值相等”。如果上述两种情况都不满足，则显示“三个值各不相同”。

#include <stdio.h>

int main(void) {
    int num1, num2, num3;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    printf("请输入第三个整数:");
    scanf("%d", &num3);
    if (num1 == num2 && num2 == num3) {
        printf("三个值都相等");
    }
    else if (num1 == num2 || num2 == num3 || num3 == num1) {
        printf("有两个值相等");
    }
    else {
        printf("三个值各不相同");
    }
    printf("\n");
    return 0;
}