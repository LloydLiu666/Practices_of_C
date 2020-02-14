//编写一段程序，输入6名学生2门课程(语文、数学)的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。

#include <stdio.h>

int main(void) {
    int grade[6][2];
    int stusum[6];
    int classsum[2];
    char cname[2][8] = {"语文", "数学"};
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 2; j++){
            printf("请输入第%d位学生的%s成绩:", i + 1, cname[j]);
            scanf("%d", &grade[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < 2; i++){
        classsum[i] = 0;
        for (int j = 0; j < 6; j++){
            classsum[i] += grade[j][i];
        }
        printf("%s总分:%d，平均分:%d\n", cname[i], classsum[i],classsum[i] / 6);
    }
    printf("\n");
    for (int i = 0; i < 6; i++){
        stusum[i] = 0;
        printf("第%d位同学", i + 1);
        for (int j = 0; j < 2; j++){
            printf("%s:%d  ", cname[j], grade[i][j]);
        }
        for (int j = 0; j < 2; j++){
            stusum[i] += grade[i][j];
        }
        printf("总分:%d，平均分:%d\n", stusum[i],stusum[i] / 2);
    }
    return 0;
}