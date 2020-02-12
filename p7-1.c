/*创建一个程序,显示如下所示的各表达式的值，同时对各表达式的值加以说明。
sizeof 1        sizeof(unsigned)-1      sizeof n+2
sizeof +1       sizeof(double)-1        sizeof(n+2)
sizeof -1       sizeof((double)-1)      sizeof(n+2.0)*/

#include <stdio.h>

int main(void) {
    int n;
    printf("sizeof 1 = %lu, 含义为signed int(int为+1)的长度\n", sizeof 1);
    printf("sizeof +1 = %lu, 含义为signed int(int为+1)的长度\n", sizeof +1);
    printf("sizeof -1 = %lu, 含义为signed int(int为-1)的长度\n", sizeof -1);

    printf("sizeof(unsigned)-1 = %lu, 含义为unsigned int的长度减去1\n", sizeof(unsigned)-1);
    printf("sizeof(double)-1 = %lu, 含义为signed double的长度减去1\n", sizeof(double)-1);
    printf("sizeof((double)-1) = %lu, 含义为signed double(double为-1.0)的长度\n", sizeof((double)-1));

    printf("sizeof n+2 = %lu, 含义为signed int(int为n)的长度加上2\n", sizeof n+2);
    printf("sizeof(n+2) = %lu, 含义为signed int(int为n+2)的长度\n", sizeof(n+2));
    printf("sizeof(n+2.0) = %lu, 含义为signed double(double为n+2.0)的长度\n", sizeof(n+2.0));

    return 0;
}