//编写一段程序，纵向显示练习5-8中得到的分布图。

#include <stdio.h>

#define NUMBER 80    /*人数上限*/

int main(void)
{
    int i, j;
    int num;              /*实际的人数*/
    int tensu[NUMBER];    /*学生的分数*/
    int bunpu[11] = {0};  /*分布图*/

    printf("请输入学生人数：");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("请输入1-%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);
    
    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d号:", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("请输入1-100的数：");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    //找最大值
    int max = bunpu[0];
    for (int i = 1; i < 11; i++){
        max = bunpu[i] > max ? bunpu[i] : max;
    }

    for (int i = max; i > 0; i--){
        printf("  ");
        for (int j = 0; j < 11; j++){
            if (bunpu[j] >= i)
                printf("*");
            else
                printf(" ");
            printf("   ");
        }
        printf("\n");
    }
    
    printf(" ");
    for (int i = 1; i <= 44; i++){
        printf("-");
    }
    printf("\n");

    for (int i = 0; i < 11; i++){
        printf("  %d", i * 10);
    }
    printf("\n");

    return 0;
}