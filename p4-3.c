//对代码清单4-5中的程序进行修改，当输入的值为负数的时候不执行换行操作。

#include <stdio.h>

int main(void)
{
    int no;
    int i;

    printf("请输入一个正整数：");
    scanf("%d", &no);
    i = no;
    while (i >= 0) {
        printf("%d ", i);
        i--;
    }
    if (no >= 0)
    printf("\n");

    return 0;
}