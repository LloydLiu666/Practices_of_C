#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evalRPN(char ** tokens, int tokensSize){
    int num[tokensSize / 2]; // 数字只会占size的一半
    int p = 0;
    for (int i = 0; i < tokensSize; i++){
        if (*tokens[i] >= *"0" && *tokens[i] <= *"9"){
            num[p] = atoi(tokens[i]);
            p++;
        }
        else if (p > 1){
            switch (*tokens[i]){
                case '+':{
                    num[p - 2] += num[p - 1];
                    p--;
                    break;
                }
                case '-':{
                    num[p - 2] -= num[p - 1];
                    p--;
                    break;
                }
                case '*':{
                    num[p - 2] *= num[p - 1];
                    p--;
                    break;
                }
                case '/':{
                    num[p - 2] /= num[p - 1];
                    p--;
                    break;
                }
                default:{
                    printf("error");
                    exit(0);
                }
            }
        }
        else{
            printf("error");
            exit(0);
        }
    }
    return num[0];
}

int main(void) {
    char *str[] = {"4", "13", "5", "/", "+"};
    int length = 5;
    char **po;
    po = &str[0];
    printf("%d\n", evalRPN(po, length));
    printf("%lu\n", strlen("-"));
    return 0;
}