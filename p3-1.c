/*编写一段程序，输入两个整数值，如果后者是前者的约数，则显示“B是A的约数”，如果不是，则显示“B不是A的约数”。
请输入两个整数。
整数A:17
整数B:5
B不是A的约数。*/

#include <stdio.h>

int main(void) {
    int a, b;
    printf("请输入两个整数。\n");
    printf("整数A:");
    scanf("%d", &a);
    printf("整数B:");
    scanf("%d", &b);
    if (a % b == 0) {
        printf("B是A的约数。");
    }
    else{
        printf("B不是A的约数。");
    }
    printf("\n");
    return 0;
}