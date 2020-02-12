/*创建一个函数，连续发10次响铃。
void alert(int n) { ... }*/

#include <stdio.h>

void alert(int n) {
    for (int i = 0; i <= n; i++;) {
        printf("\a");
    }
}

int main(void) {
    int times;
    printf("请输入一个整数:");
    scanf("%d", &times);
    alert(times);
    return 0;
}