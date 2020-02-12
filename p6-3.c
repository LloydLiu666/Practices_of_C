/*创建一个函数，返回int型整数的立方。
int cube(int x){...}*/

#include <stdio.h>

int cube(int x){ 
    return (x * x * x);
}

int main(void) {
    int num;
    printf("请输入第一个整数:");
    scanf("%d", &num);
    printf("它的立方为%d\n", cube(num));
    return 0;
}