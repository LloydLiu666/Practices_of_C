//编写一段程序，为九九乘法表增加横纵标题。

#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 9; i++){
        printf("%d  ", i);
        for (int j = 1; j <= i; j++){
            printf("%d * %d =", j, i);
            if (i * j < 10){
                printf(" ");
            }
            printf("%d  ", i * j);
        }
        printf("\n");
    }
    printf("   ");
    for (int k = 1; k <= 9; k++){
        printf("    %d      ", k);
    }
    return 0;
}