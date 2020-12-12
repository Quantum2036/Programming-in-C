//Exercises: 5.3
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Input a,b,c :");
    scanf("%f %f %f", &a, &b, &c);

    if (a+b>c && b+c>a && c+a>b) {
        s = (a+b+c)/2;
        area = (float)sqrt(s * (s - a) * (s - b) * (s - c));
        printf("area = %f\n", area);
    }
    else printf("Can't form a triangle\n");
    return 0;
}
