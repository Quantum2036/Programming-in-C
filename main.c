//Exercises: 8.10
//Author£: Yuan Yao
//Completion date: 2020/12/12
#include <stdio.h>
#include <stdlib.h>
void Input(int* p, int m, int n);
void Sum(int* pa, int* pb, int m, int n);

int main()
{
    int m;
    int n;
    int *pa = NULL;
    int *pb = NULL;

    printf("Input row and col: ");
    scanf("%d %d", &m, &n);

    pa = (int*)malloc(m*n*sizeof(int));
    pb = (int*)malloc(m*n*sizeof(int));

    if (pa == NULL || pb == NULL) {
        printf("no memory!\n");
        exit(1);
    }

    printf("\nInput matrix_a:\n");
    Input(pa, m, n);
    printf("\nInput matrix_b:\n");
    Input(pb, m, n);

    printf("\nSum:\n");
    Sum(pa, pb, m, n);

    free(pa);
    free(pb);
    return 0;
}

void Input(int* p, int m, int n)
{
    int i;
    int j;
    for (i = 0; i < m; i++) {
        for (j = 0; j <n; j++) {
            printf("cow %d col %d:", i+1, j+1);
            scanf("%d", &p[i*n+j]);
        }
    }
    return;
}

void Sum(int* pa, int* pb, int m, int n)
{
    int i;
    int j;
    for (i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", pa[i*n+j] + pb[i*n+j]);
            if (j == n-1) {
                printf("\n");
            }
        }
    }
    return;
}

