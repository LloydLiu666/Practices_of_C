/*将代码清单9-3中数组str的声明改为下面这样，查看程序的运行结果。
char str[] = "ABC\0DEF"*/
//应当输出ABC

#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";

    printf("字符串str为\"%s\"。\n", str);

    return 0;
}