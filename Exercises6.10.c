//Exercises: 6.10
//Author: Yuan Yao
//Completion date: 2020/12/03
#include <stdio.h>

int main()
{
    int i;
    int a, b, c;

    for (i = 100; i < 1000; i++) {
        a = i / 100;
        b = (i / 10) % 10;
        c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i)
            printf("%d\t", i);
    }
    return 0;
}
