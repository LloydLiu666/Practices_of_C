//编写一段程序，为double型数组的所有元素分配静态存储期，并确认它们都被初始化为0.0

#include <stdio.h>

int main(void) {
    static double db[5];
    for (int i = 0; i < sizeof(db) / sizeof(db[0]); i++) {
        db[i] = 0.0;
    }
    for (int i = 0; i < sizeof(db) / sizeof(db[0]); i++) {
        printf("%.1lf, ", db[i]);
    }
    printf("\n");
    return 0;
}