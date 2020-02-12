/*创建一个函数search_idx,将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。
int search_idx(const int v[] int idx[],int key,int n);
例如，如果v中所接收的数组的元素是{1,7,5,7,2,4,7},key为7的话,{1,3,6}就会被存储在id中x，并返回3。*/

#include <stdio.h>

int cc[7];
int search_idx(const int v[],int idx[],int key, int n) {
    int count = 0;
    for (int i = 0; i < n; i++){
        if (v[i] == key){
            idx[count] = i;
            count++;
        }
    }
    return count;
}

int main(void) {
    const int c[] = {1, 7, 5, 7, 2, 4, 7};
    for (int i = 0; i < sizeof(c) / 4; i++){
        printf("%d ", c[i]);
    }
    int num = search_idx(c, cc, 7, sizeof (c) / 4);
    printf("\n找到%d个元素，所求数列为:\n", num);
    for (int i = 0; i < num; i++){
        printf("%d ", cc[i]);
    }
    printf("\n");
    return 0;
}