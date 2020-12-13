//Exercises: 8.10
//Author: Yuan Yao
//Completion date: 2020/12/13
#include <stdio.h>
#include <stdlib.h>
#define NUMBER 10
void ReadArray(int* array);
void Swap(int* array);
void Output(int* array);

int main()
{
    int array[NUMBER] = {0};

    ReadArray(array);
    Swap(array);
    Output(array);

    return 0;
}

void ReadArray(int* array)
{
    printf("please input number:\n");
    int i;
    for (i = 0; i < NUMBER; i++) {
        scanf("%d", array+i);
    }
    return;
}

void Swap(int* array)
{
    int i;
    int max = *array;
    int min = *array;

    for (i = 0; i < NUMBER; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
        if (*(array + i) < min) {
            min = *(array + i);
        }
    }

    for (i = 0; i < NUMBER; i++) {
        if (*(array + i) == min)
            *(array + i) = max;
        else if (*(array + i) == max)
            *(array + i) = min;
    }
    return;
}

void Output(int* array)
{
    printf("new array:\n");
    int i;
    for (i = 0; i < NUMBER; i++) {
        printf("%d ", *(array+i));
    }
    return;
}
