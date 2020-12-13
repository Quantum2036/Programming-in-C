//Exercises: 8.10
//Author: Yuan Yao
//Completion date: 2020/12/13
#include <stdio.h>
#include <stdlib.h>
void DivArray(int* pArray, int n) ;

int main()
{
    int array[5] = {2, 4, 6, 8, 10};

    int* pArray = NULL;
    pArray = array;

    DivArray(pArray, sizeof(array)/sizeof(int));

    int i;
    for (i=0; i<5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

void DivArray(int* pArray, int n)
{
    int i;

    for (i = n-1; i >= 0; i--) {
        pArray[i] /= pArray[0];
    }
    return;
}
