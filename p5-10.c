//编写一段程序，求4行3列矩阵和3行4列矩阵的乘积。各构成元素的值从键盘输入。

#include <stdio.h>

int main(void) {
    int matr1[4][3];
    int matr2[3][4];
    int matr3[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            matr3[i][j] = 0;
        }
    }
    
    printf("计算4行3列矩阵和3行4列矩阵的乘积\n\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("请输入4行3列矩阵，第%d行第%d列的值:", i + 1, j + 1);
            scanf("%d", &matr1[i][j]);
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("请输入3行4列矩阵，第%d行第%d列的值:", i + 1, j + 1);
            scanf("%d", &matr2[i][j]);
        }
    }

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 3; k++){
                matr3[i][j] += matr1[i][k] * matr2[k][j];
            }
        }
    }

    printf("4行3列矩阵为\n{");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf("%d,  ", matr1[i][j]);
        }
        printf("\n");
    }
    printf("}\n");

    printf("3行4列矩阵为\n{");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf("%d,  ", matr2[i][j]);
        }
        printf("\n");
    }
    printf("}\n");

    printf("所得结果为\n{");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d,  ", matr3[i][j]);
        }
        printf("\n");
    }
    printf("}\n");

    return 0;
}