//Exercises: 3.4
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    double delta, x1, x2;
    delta = sqrt(b*b - 4*a*c);
    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta)/(2*a);

    printf("X1= %f \nX2= %f", x1, x2);

    return 0;
}
