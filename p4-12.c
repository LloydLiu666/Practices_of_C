/*编写一段程序，读取一个正整数，显示其位数。
※注意:代码清单4-10中while语句的循环次数和no的位数一致。*/

#include <stdio.h>

int main(void) {
    int num, i;
    printf("请输入一个整数:");
    scanf("%d", &num);
    i = 1;
    while (num >= 10){
        num /= 10;
        i++;
    }
    printf("该整数有%d位。\n", i);
    return 0;
}