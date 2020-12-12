//Exercises: 8.5
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>
#define STUDENT 40
int FindMax(int score[]);

int main()
{
    long id[STUDENT] = {0};
    int score[STUDENT] = {0};
    int i = 0;

    printf("please input score and id:\n");
    while (scanf("%d %ld", &score[i], &id[i]) != EOF) {
        if(score[i] < 0 || id[i] < 0 || i >= STUDENT - 1)
            break;
        i++;
    }

    printf("MaxScore:%d\t ID:%ld", score[FindMax(score)], id[FindMax(score)] );

    return 0;
}

int FindMax(int score[])
{
    int i;
    int maxer = 0;
    int max = score[0];
    for (i = 1; i < STUDENT; i++) {
        if (score[i] > max){
            max = score[i];
            maxer = i;
        }
    }
    return maxer;
}
