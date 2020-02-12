/*编写set_n函数，返回将无符号整数x的第pos位到第pos+n-1位的n位设为1后的值。
unsigned set_n(unsigned x,int pos,int n){...}
编写reset_n函数，返回将无符号整数x的第pos位开始的n位设为0后的值。
unsigned reset_n(unsigned x,int pos,int n){...}
编写inverse_n函数，返回将无符号整数x的第pos位开始的n位取反后的值。
unsigned inverse_n(unsigned x,int pos,int n){...}*/

#include <stdio.h>
#include <limits.h>

unsigned pow2(int n){
    int r = 1;
    if (n > 0) {
        for (int i = 1; i <= n; i++){
            r *= 2;
        }
    }
    return r;
}

unsigned reset_n(unsigned x,int pos, int n){
    unsigned r = 0;
    for (int i = 1; i <= n; i++){
        r += pow2(pos + i - 2);
    }
    return x & ((unsigned)UINT_MAX - r);
}

unsigned set_n(unsigned x,int pos, int n){
    unsigned r = 0;
    for (int i = 1; i <= n; i++){
        r += pow2(pos + i - 2);
    }
    return x | r;
}

unsigned inverse_n(unsigned x,int pos, int n){
    unsigned r = 0;
    for (int i = 1; i <= n; i++){
        r += pow2(pos + i - 2);
    }
    return x ^ r;
}

int main(void) {
    unsigned num;
    int dig1, dig2;
    int choice;
    printf("请输入一个无符号整数:");
    scanf("%u", &num);
    printf("请输入操作的位数地址:");
    scanf("%d", &dig1);
    printf("请输入操作的位的数量:");
    scanf("%d", &dig2);
    printf("1为这些位归零，2为这些位改成1，3为这些位取反\n请输入选项:");
    scanf("%d", &choice);
    switch (choice){
        case 1: printf("%u\n", reset_n(num, dig1, dig2)); break;
        case 2: printf("%u\n", set_n(num, dig1, dig2)); break;
        case 3: printf("%u\n", inverse_n(num, dig1, dig2)); break;
        default: break;
    }

    return 0; 
}