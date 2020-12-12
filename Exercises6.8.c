//Exercises: 6.8
//Author: Yuan Yao
//Completion date: 2020/12/03
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    double sum = 0.0;
    double term;

    do {
        term = pow(-1,n-1)/(2*n-1);
        sum += term;
        n++;
    } while (fabs(term) >= 1e-4);

    printf("pi = %f \tcount = %d\n", 4*sum, n);

    return 0;
}
