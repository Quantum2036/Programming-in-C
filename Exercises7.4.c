//Exercises: 7.4
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>
int getLeast(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d\n", getLeast(a,b));
    return 0;
}

int getLeast(int a, int b)
{
    int i;
    i = (a > b) ? a : b;

    while (i % a != 0 || i % b != 0) {
        i++;
    }
    return i;
}
