//Exercises: 5.4
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>
double F(double n, int t, double rate);

int main()
{
    double sum;
    double n;
    int t;
    printf("Please input your principal and term:");
    scanf("%lf %d", &n, &t);

    switch (t)
    {
        case 1: sum = F(n, t, 0.0225);
                break;
        case 2: sum = F(n, t, 0.0243);
                break;
        case 3: sum = F(n, t, 0.0270);
                break;
        case 5: sum = F(n, t, 0.0288);
                break;
        case 8: sum = F(n, t, 0.0300);
                break;
        default: sum = -1;
    }

    if (sum != -1) {
        printf("sum = %f", sum);
    } else printf("ERROR:Term only 1,2,3,5,8\n");
    return 0;
}

double F(double n, int t, double rate)
{
    n += n*t*rate
    return n;
}
