/*使用代码清单6-3中的sgr函数创建另一个函数，返回int型整数的四次幂。
int pow4(int x){...}*/

#include <stdio.h>

/*返回x的平方*/
int sqr(int x)
{
    return x * x;
}


int pow4(int x)
{
    return (sqr(sqr(x)));
}

int main(void)
{
    int a;
    puts("请输入一个整数。");
    scanf("%d", &a);
    printf("它的四次幂是%d。\n", pow4(a));
    return 0;
}