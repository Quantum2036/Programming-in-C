//Exercises: 6.14
//Author: Yuan Yao
//Completion date: 2020/12/03
#include <stdio.h>

int main()
{
    int m, f, k;
    int count, money;

    for (m = 1; m <= 30; m++) {
        for (f = 1; f <= 30; f++) {
            for (k = 1; k <= 30; k++){
                count = m + f + k;
                money = 3*m + 2*f + k;
                if (count == 30 && money == 50)
                    printf("Man = %d \tFemale = %d \tKid = %d\n", m, f, k);
            }
        }
    }

    return 0;
}
