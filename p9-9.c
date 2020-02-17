/*编写如下函数，逆向显示字符串s的字符。
void rev_string(char s[]){...}
例如，若s中接收的是"SEC",则将其数组更新为“CES”。*/

#include <stdio.h> 
#include <string.h>

void rev_string(char s[]){
    char temp[1];
    for (int i = 0; i < (strlen(s) - 1) / 2; i++){
        temp[0] = *(s + i);
        *(s + i) = *(s + strlen(s) - 1 - i);
        *(s + strlen(s) - 1 - i) = temp[0];
    }

}

int main(void){
    char str[] = {"SEC"};
    rev_string(str);
    printf("%s\n", str);
    return 0;
}