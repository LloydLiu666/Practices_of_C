/*
判断char型有无符号
*/
#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("这个编译器中的char型是：");

    if (CHAR_MIN)
        puts("有符号的。");
    else
        puts("无符号的。");

    printf("char型在内存上占据的位数是：%d\n", CHAR_BIT);

    printf("sizeof(char)  = %u\n", (unsigned)sizeof(char));
    printf("sizeof(short) = %u\n", (unsigned)sizeof(short));
    printf("sizeof(int)   = %u\n", (unsigned)sizeof(int));
    printf("sizeof(long)  = %u\n", (unsigned)sizeof(long));
    
    return 0;
}