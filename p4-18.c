/*编写一段程序，输入一个整数值，显示该整数个'*'。每显示5个就进行换行。
显示多少个*:12
*****
*****
**
*/

#include <stdio.h>

int main(void) {
    int num;
    printf("显示多少个*:");
    scanf("%d", &num);
    int i = 1;
    while (i <= num / 5){
        printf("*****\n");
        i++;
    }
    i = 1;
    while (i <= num % 5){
        printf("*");
        i++;
    }
    if (num >= 0)
        printf("\n");
    return 0;
}