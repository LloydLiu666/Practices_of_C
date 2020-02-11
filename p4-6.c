//编写一段程序，按照升序显示出小于输入值的所有正偶数。

#include <stdio.h>

int main(void) {
    int num, i;
    i = 2;
    printf("请输入一个整数:");
    scanf("%d", &num);
    while(i <= num){
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
    return 0;
}
