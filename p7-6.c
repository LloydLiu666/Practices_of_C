//编写程序确认对无符号整数执行算术运算不会发生数据溢出。

#include <stdio.h>

int main(void) {
    unsigned num1;
    unsigned num2;
    int calc;
    unsigned result;
    printf("请输入第一个无符号整数:");
    scanf("%u", &num1);
    printf("请输入第二个无符号整数:");
    scanf("%u", &num2);
    printf("1为加法，2为减法，3为乘法，4为除法\n请输入运算方法:");
    scanf("%d", &calc);
    switch (calc){
        case 1: {result = num1 + num2; 
                printf("计算结果为%u,", result);
                if (result - num1 == num2){
                    printf("没有溢出。\n");
                }
                else{
                    printf("溢出了！\n");
                }  
                break;
                }
        case 2: {result = num1 - num2;
                printf("计算结果为%u,没有溢出。\n", result);
                break;
                }
        case 3: {result = num1 * num2; 
                printf("计算结果为%u,", result);
                if (result == 0){
                    printf("没有溢出。\n");
                }
                else if (result / num1 == num2){
                    printf("没有溢出。\n");
                }
                else{
                    printf("溢出了！\n");
                }
                break;
                }
        case 4: {result = num1 / num2; 
                printf("计算结果为%u,没有溢出。\n", result);
                break;
                }
        default: break;
    }
    return 0;
}