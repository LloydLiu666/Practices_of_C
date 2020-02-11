/*
编写一段程序，显示1到n的整数值的二次方。
n的值:3
1的二次方是1
2的二次方是4
3的二次方是9*/

#include <stdio.h>

int main (void){
    int num;
    printf("n的值:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        printf("%d的二次方是%d\n", i, i * i);
    }
    if (num >= 1)
    printf("\n");
    return 0;
}