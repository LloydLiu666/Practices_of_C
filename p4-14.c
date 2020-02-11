/*编写一段程序，根据输入的整数，循环显示1234567890，显示的位数和输入的整数值相同。
123456789012345678901234*/

#include <stdio.h>

int main(void) {
    int num;
    printf("请输入一个正整数:");
    scanf("%d", &num);
    int i = 1;
    while (i <= num / 10){
        printf("1234567890");
        i++;
    }
    i = 1;
    while (i <= num % 10){
        printf("%d", i);
        i++;
    }
    if (num >= 0)
        printf("\n");
    return 0;
}