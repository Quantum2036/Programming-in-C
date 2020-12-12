//Exercises: 6.12
//Author: Yuan Yao
//Completion date: 2020/12/03
#include <stdio.h>

int main()
{
    double n;
    double sum = 0;

    while (scanf("%lf", &n) != EOF) {
        if (n <= 0)
            break;
        sum += n;
    }

    printf("sum = %f\n", sum);
    return 0;
}
