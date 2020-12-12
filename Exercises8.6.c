//Exercises: 8.6
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>
#include <stdlib.h>
#define NUMBER 10

void Swap(int a[]);
void ReadArray(int a[]);
void Output(int a[]);

int main()
{
    int a[NUMBER] = {0};

    ReadArray(a);
    Swap(a);
    Output(a);

    return 0;
}

void ReadArray(int a[])
{
    printf("please input number:\n");
    int i;
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", &a[i]);
    }
    return;
}

void Swap(int a[])
{
    int i;
    int max = a[0];
    int min = a[0];

    for (i = 0; i < NUMBER; i++) {
        if (a[i] > max) {
            max = a[i];
        }
        if (a[i] < min) {
            min = a[i];
        }
    }

    for (i = 0; i < NUMBER; i++) {
        if (a[i] == min)
            a[i] = max;
        else if (a[i] == max)
            a[i] = min;
    }
    return;
}

void Output(int a[])
{
    printf("new array:\n");
    int i;
    for (i = 0; i < NUMBER; i++) {
        printf("%d ", a[i]);
    }
    return;
}
