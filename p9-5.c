/*写如下函数，若字符串s中含有字符c(若含有多个，以先出现的为准)，则返回该元素的下标值，否则返回-1。
int str_char(const char s[],int c){...}*/

#include <stdio.h>
#include <string.h>


int str_char(char s[], char c[]){
    int correct = 0;
    int j = 0;
    for (int i = 0; i < strlen(s); i++){
        j = 0;
        while (s[i + j] == c[j] && j <= strlen(s) - strlen(c)){
            correct++;
            j++;
            if (correct == strlen(c)){
                return i;
            }
        }
        correct = 0;
    }
    return -1;
}

int main(void) {
    char str[100];
    char find[100];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("请输入要查找的字符串：");
    scanf("%s", find);
    int result = str_char(str, find);
    if(result > -1){
        printf("该字符串第一次出现在第%d位\n", result + 1);
    }
    else{
        printf("找不到该字符串\n");
    }
    return 0;
}