/*创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在3行3列矩阵c中。
void mat_mul(const int a[4][3],const int b[3][4],int c[3][3])*/

#include <stdio.h>

int c1[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};

void mat_mul(const int a[4][3],const int b[3][4],int c[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 4; k++){
                c[i][j] += a[k][j] * b[i][k];
            }
        }
    }
}

int main(void){
    const int a1[4][3] = {{1, 2, 1}, {1, 1, 2}, {2, 1, 1}, {1, 1, 1}};
    const int b1[3][4] = {{1, 2, 1, 2}, {2, 1, 2, 1}, {1, 2, 2, 1}};
    for (int i = 0; i <= sizeof(a1) / sizeof(a1[0]) - 1; i++) {
        for (int j = 0; j <= sizeof(a1[0]) / 4 - 1; j++){
            printf("%d, ", a1[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
    for (int i = 0; i <= sizeof(b1) / sizeof(b1[0]) - 1; i++) {
        for (int j = 0; j <= sizeof(b1[0]) / 4 - 1; j++){
            printf("%d, ", b1[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
    mat_mul(a1, b1, c1);
    for (int i = 0; i <= sizeof(c1) / sizeof(c1[0]) - 1; i++) {
        for (int j = 0; j <= sizeof(c1[0]) / 4 - 1; j++){
            printf("%d, ", c1[i][j]);
        }
        printf("\n");
    } 
    return 0;
}