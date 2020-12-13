//Exercises: 3.2
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    n = (n>0) ? n: -n;

    int n1, n2, n3;
    n3 = n/100;
    n2 = (n - n3*100)/10;
    n1 = n - n3*100 -n2*10;

    printf("%d%d%d\n", n1, n2, n3);
    return 0;
}
