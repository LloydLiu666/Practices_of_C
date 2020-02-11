//编写一段程序，求1到n的和。n的值从键盘输入

#include <stdio.h>

int main(void) {
    int num, sum, i;
    printf("请输入n值:");
    scanf("%d", &num);
    sum = 0;
    i = 1;
    while (i <= num) {
        sum += i;
        i++;
    }
    if (num >= 1){
        printf("1到n和为%d\n", sum);
    }
    return 0;
}