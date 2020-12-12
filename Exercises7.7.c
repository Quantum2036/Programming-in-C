//Exercises: 7.7
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>
int Gcd1(int a, int b);
int Gcd2(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Gcd1 = %d Gcd2 = %d\n", Gcd1(a,b), Gcd2(a,b));
    return 0;
}

int Gcd1(int a, int b)
{
    int min;
    min = (a>b) ? b : a;

    while(a%min != 0 || b%min != 0) {
        min--;
    }
    return min;
}

int Gcd2(int a, int b)
{
    int t;
    while (b != 0) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

