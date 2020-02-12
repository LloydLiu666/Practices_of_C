/*创建一个函数，对元素个数为n的int型数组v进行倒序排列。
void rev_intary{int v[],int n){...)*/

#include <stdio.h>

int c[] = {6, 3, 8, 5, 2, 7, 4, 1};

void rev_intary(int v[], int n) {
    int swap;
    for (int i = 0; i < n / 2; i++){
        swap = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = swap;
    }
}

int main(void) {
    printf("倒序前:\n");
    for (int i = 0; i < sizeof(c) / 4; i++){
        printf("%d ", c[i]);
    }
    rev_intary(c, sizeof(c) / 4);
    printf("\n倒序后:\n");
    for (int i = 0; i < sizeof(c) / 4; i++){
        printf("%d ", c[i]);
    }
    return 0;
}