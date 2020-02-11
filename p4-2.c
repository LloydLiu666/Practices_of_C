//编写一段程序，读取两个整数的值，然后计算出它们之间所有整数的和。

# include <stdio.h>

int main(void) {
    int num1, num2, sum, i, swap;
        printf("请输入第一个数:");
        scanf("%d", &num1);
        printf("请输入第二个数:");
        scanf("%d", &num2);

    if (num1 > num2) {
        swap = num2;
        num2 = num1;
        num1 = swap;
    }

    sum = 0;
    i = num1;
    do{
        sum += i;
        i++;
    } while(i <= num2);
    printf("它们之间所有整数的和为%d\n", sum);
    return 0;
}