//Exercises: 6.16
//Author: Yuan Yao
//Completion date: 2020/12/10
#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i < 10; i++) {
        printf("%d\t", i);
        if (i == 9)
            printf("\n");
    }

    for (i = 1; i < 10; i++) {
        printf("-\t");
        if (i == 9)
            printf("\n");
    }

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            printf("%d\t", i*j);
            if (j == 9)
                printf("\n");
        }
    }
    return 0;
}

/*int main()
{
    int i, j;

    for (i = 1; i < 10; i++) {
        printf("%d\t", i);
        if (i == 9)
            printf("\n");
    }

    for (i = 1; i < 10; i++) {
        printf("-\t");
        if (i == 9)
            printf("\n");
    }

    for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            if (i > j) {
                printf("%d\t", i*j);
            } else if (i == j) {
                printf("%d\n", i*j);
            }
        }
    }
    return 0;
}*/


/*int main()
{
    int i, j;

    for (i = 1; i < 10; i++) {
        printf("%d\t", i);
        if (i == 9)
            printf("\n");
    }

    for (i = 1; i < 10; i++) {
        printf("-\t");
        if (i == 9)
            printf("\n");
    }

     for (i = 1; i < 10; i++) {
        for (j = 1; j < 10; j++) {
            if (i > j)
                printf("\t");
            else if (i <= j)
                printf("%d\t", i*j);

            if (j == 9)
                printf("\n");
        }
    }
    return 0;
}*/
