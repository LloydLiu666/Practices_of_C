/*编写如下函数，使字符串s显示n次。
void put_stringn(const char s[],int n){...}
例如，若s和分别为"ABC"和3,则显示"ABCABCABC"。*/

#include <stdio.h>

void put_stringn(const char s[],int n){
    for (int i = 0; i < n; i++){
        printf("%s", s);
    }
    printf("\n");
}

int main(void) {
    const char str[] = {"ABC"};
    int times = 3;
    put_stringn(str, times);
    return 0;
}