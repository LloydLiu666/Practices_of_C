/*编写一个函数，使字符串s为空字符串。
void null_string(char s[]){...}*/

#include <stdio.h>

void null_string(char s[]){
    *s = *"";
}

int main(void) {
    char str[25];
    printf("请输入字符串：");
    scanf("%s", str);
    null_string(str);
    printf("新的字符串为：%s\n", str);
    return 0;
}