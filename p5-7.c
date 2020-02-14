/*编写一段程序，读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
注意利用对象式宏来声明数组的元素个数，如代码清单5-12那样。*/

#include <stdio.h>

#define NUMBER 500

int main(void) {
    int num[NUMBER];
    int conti = 0;
    int count = 0;

    while (conti == 0) {
        printf("请输入数组的第%d个数:", count + 1);
        scanf("%d", &num[count]);
        count++;
        printf("要继续吗？(继续输入0，结束输入其他数):");
        scanf("%d", &conti);
    }

    printf("一共输入了%d个整数\n{", count);
    for (int i = 1; i < count - 1; i++) {
        printf("%d, ", num[i]);
    }
    printf("%d", num[count - 1]);
    printf("}\n");
    return 0;

}