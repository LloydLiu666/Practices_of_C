/*编写一段程序输入两个整数，如果它们的差值小于等于10,则显示“它们的差小于等于10”。否则，显示“它们的差大于等于11”。
请使用逻辑或运算符。*/

#include <stdio.h>

int main(void) {
    int num1, num2;
    printf("请输入第一个整数:");
    scanf("%d", &num1);
    printf("请输入第二个整数:");
    scanf("%d", &num2);
    if (num1 - num2 >= 11 || num1 - num2 <= -11) {
        printf("它们的差大于等于11");
    }
    else {
        printf("它们的差小于等于10");
    }
    printf("\n");
    return 0;
}