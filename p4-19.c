/*编写一段程序，对代码清单4-15进行修改，在显示所输入的整数值的所有约数之后，显示约数的个数。
整数值：4
1
2
4
约数有3个。*/

#include <stdio.h>

int main(void)
{
    int i , n;
    int count = 0;

    printf("整数值：");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        if (n % i == 0){
            printf("%d\n", i);
            count++;        
        }
        i++;
    }

    if (n >= 1){
        printf("约数有%d个。", count);
        putchar('\n');
    }

    return 0;
}