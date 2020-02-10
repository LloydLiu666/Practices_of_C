/*如果在int型变量的声明中为变量赋一个实数值的初始值(如3.14或5.7等)会怎样呢?请试着生成程序并确认。
报错，int只能赋整数值
*/

#include <stdio.h>

int main(void) {
    int a = 3.14;
    int b = 5.7;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}