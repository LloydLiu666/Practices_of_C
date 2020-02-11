/*编写一段程序，输入一个整数值，显示该整数值以下的所有奇数。
整数值:15
1 3 5 7 9 11 13 15*/

#include <stdio.h>

int main(void) {
    int num;
    int i = 1;
    printf("整数值:");
    scanf("%d", &num);
    while (i <= num) {
        printf("%d ", i);
        i += 2;
    }
    if (num >= 1){
        printf("\n");
    }
    return 0;
}