/*编写一段程序，输入一个整数，显示出输入整数层的金字塔形状。 提示:第i行显示(i-1)*2+1个'*'。
让我们来画一个金子塔。
金字塔有几层：3
  *
 ***
*****
*/

#include <stdio.h>

int main(void){
    int num;
    printf("让我们来画一个金子塔。\n金字塔有几层：");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num - i; j++)
            printf(" ");
        for (int j = 1; j <= i * 2 - 1; j++)
            printf("*");
        for (int j = 1; j <= num - i; j++)
            printf(" ");
        printf("\n");
    }
    return 0;
}