/*编写rrotate函数，返回无符号整数x右移n位后的值。
unsigned rrotate(unsigned x,int n){...}
编写lrotate函数，返回无符号整数x左移n位后的值。
unsigned lrotate(unsigned x,int n){...}*/

#include <stdio.h>

unsigned rrotate(unsigned x,int n){
    return (x >> n);
}

unsigned lrotate(unsigned x,int n){
    return (x << n);
}

int main(void) {
    unsigned num;
    int dig;
    printf("请输入一个无符号整数:");
    scanf("%u", &num);
    printf("请输入左右移的位数:");
    scanf("%d", &dig);
    printf("左移%d位后结果为:%u\n", dig, lrotate(num, dig));
    printf("右移%d位后结果为:%u\n", dig, rrotate(num, dig));
    return 0;
}