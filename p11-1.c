#include <stdio.h>
//下标向右移1，变为56
int main(void)
{
    char *p = "123";
    printf("p = \"%s\"\n", p);
    p = "456" + 1;
    printf("p = \"%s\"\n", p);
    return 0;
}