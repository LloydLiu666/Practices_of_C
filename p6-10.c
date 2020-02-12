/*创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。
void intary_rcpy(int v1[],const int v2[],int n){...}*/

#include <stdio.h>

int cc[8];
void intary_rcpy(int v1[],const int v2[],int n) {
    for (int i = 0; i <= n; i++){
        v1[i] = v2[n - 1 - i];
    }
}

int main(void) {
    const int c[] = {6, 3, 8, 5, 2, 7, 4, 1};
    printf("倒序前:\n");
    for (int i = 0; i < sizeof(c) / 4; i++){
        printf("%d ", c[i]);
    }
    intary_rcpy(cc, c, sizeof(c) / 4);
    printf("\n倒序后:\n");
    for (int i = 0; i < sizeof(cc) / 4; i++){
        printf("%d ", cc[i]);
    }
    printf("\n");
    return 0;
}