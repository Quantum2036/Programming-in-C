//Exercises: 6.16
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>

int main()
{
    int a; //rooster
    int b; //hen
    int c; //chick

    for (a = 0; a <= 100; a++) {
        for (b = 0; b <= 100; b++) {
            for (c = 0; c<= 100; c++) {
                if (a + b + c == 100 && 15*a + 9*b +c == 300) {
                    printf("rooster:%d \t  hen:%d \t chick:%d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}
