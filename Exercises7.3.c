//Exercises: 7.3
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>
int Max(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", Max(a,b));
    return 0;
}

int Max(int a, int b)
{
    a = (a > b)? a : b;
    return a;
}
