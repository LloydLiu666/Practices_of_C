/*编写一段程序，使之交替显示+和-，总个数等于所输入的整数值。另外，当输入0以下的整数时，则什么也不显示。
+-+-+-+-+-+-+-+-+-+-+-+-*/

#include <stdio.h>

int main(void){
    int num, i;
    printf("请输入一个正整数:");
    scanf("%d", &num);
    i = num;
    while (i > 1) {
        printf("+-");
        i -= 2;
    }
    if (num >= 0){
        if (i % 2 == 1)
            printf("+");
        printf("\n");
    }
    return 0;
}
