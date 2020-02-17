/*编写如下函数，实现字符串的逆向输出。
void put_stringr(const char s[]){...}
例如，将"SEC* 显示为"CES"。*/

#include <stdio.h> 
#include <string.h>

void put_stringr(const char s[]){
    for (int i = strlen(s) - 1; i >= 0; i--){
        printf("%c", s[i]);
    }
    printf("\n");
}

int main(void){
    const char str[] = {"SEC"};
    put_stringr(str);
    return 0;
}