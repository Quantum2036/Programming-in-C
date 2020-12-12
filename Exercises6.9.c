//Exercises: 6.9
//Author: Yuan Yao
//Completion date: 2020/12/03
#include <stdio.h>
double Fact(int i);

int main()
{
    int n = 1;
    double term;
    double sum = 1.0;

    do {
        term = 1.0/Fact(n);
        sum += term;
        n++;
    } while (term >= 1e-5);

    printf("e = %f, count = %d\n", sum, n+1);
    return 0;
}

double Fact(int i)
{
    int t;
    double sum = 1.0;

    for (t=1;t<=i; t++) {
        sum *= t;
    }
    return sum;
}
