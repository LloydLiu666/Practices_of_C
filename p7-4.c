/*编写set函数，返回将无符号整数x的第pos位设为1后的值。
unsigned set(unsigned x,int pos){...}
编写reset函数，返回将无符号整数x的第pos位设为0后的值。
unsigned reset(unsigned x,int pos){...}
编写inverse函数，返回将无符号整数x的第pos位取反后的值.
unsigned inverse(unsigned x,int pos){...}*/

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

unsigned reset(unsigned x,int pos){
    return x & ((unsigned)UINT_MAX - pow2(pos - 1));
}

unsigned set(unsigned x,int pos){
    return x | (pow2(pos - 1));
}

unsigned inverse(unsigned x,int pos){
    return x ^ (pow2(pos - 1));
}

int main(void) {
    unsigned num;
    int dig;
    int choice;
    printf("请输入一个无符号整数:");
    scanf("%u", &num);
    printf("请输入操作的位数:");
    scanf("%d", &dig);
    printf("1为该位归零，2为该位改成1，3为该位取反\n请输入选项:");
    scanf("%d", &choice);
    switch (choice){
        case 1: printf("%u\n", reset(num, dig)); break;
        case 2: printf("%u\n", set(num, dig)); break;
        case 3: printf("%u\n", inverse(num, dig)); break;
        default: break;
    }

    return 0; 
}
