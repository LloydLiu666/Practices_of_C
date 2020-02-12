/*创建一个函数，返回元素个数为n的int型数组v中的最小值。
int min_of(const int v[]，int n){...}*/

#include <stdio.h>

int min_of(const int v[], int n) {
    int min = v[0];
    for (int i = 1; i < n; i++){
        min = v[i] < min ? v[i] : min;
    }
    return min;
}

int main(void) {
    const int c[] = {6, 3, 8, 5, 2, 7, 4, 1};
    for (int i = 0; i < sizeof(c) / 4; i++){
        printf("%d ", c[i]);
    }
    printf("\n数组最小值为: %d\n", min_of(c, sizeof(c) / 4));
}