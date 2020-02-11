//编写一段程序，显示以所输入整数为边长的正方形。

#include <stdio.h>

int main(void){
    int num;
    printf("输入整数:");
    scanf("%d", &num);
    if (num >= 0){
        for (int i = 1; i <= num; i++){
            for (int j = 1; j <= num; j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}