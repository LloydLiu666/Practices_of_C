/*编写如下函数，返回字符串s中字符c的个数(没有则返回0)。
int str_chnum(const char s[],int c){...}*/

#include <stdio.h>
#include <string.h>


int str_chnum(char s[], char c[]){
    int correct = 0;
    int j = 0;
    int count = 0;
    for (int i = 0; i < strlen(s); i++){
        j = 0;
        while (s[i + j] == c[j] && j <= strlen(s) - strlen(c)){
            correct++;
            j++;
            if (correct == strlen(c)){
                count++;
                j = strlen(s);
            }
        }
        correct = 0;
    }
    return count;
}

int main(void) {
    char str[100];
    char find[100];
    printf("请输入字符串：");
    scanf("%s", str);
    printf("请输入要查找的字符串：");
    scanf("%s", find);
    printf("一共找到了%d次\n", str_chnum(str, find));
    return 0;
}