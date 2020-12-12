//Exercises: 5.10
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>

int main()
{
    int y, m;
    scanf("%d %d", &y, &m);

    int flag = 0;
    if (y % 400 == 0)
        flag = 1;
    else {
    if (y % 4 == 0 && y % 100 != 0)
        flag = 1;
    }

    int d;
    switch (m)
    {
        case 1 : d = 31;
            break;
        case 2 : d = 28;
            if (flag) d++;
            break;
        case 3 : d = 31;
            break;
        case 4 : d = 30;
            break;
        case 5 : d = 31;
            break;
        case 6 : d = 30;
            break;
        case 7 : d = 31;
            break;
        case 8 : d = 31;
            break;
        case 9 : d = 30;
            break;
        case 10 : d = 31;
            break;
        case 11 : d = 30;
            break;
        case 12: d = 31;
            break;
        default : d = -1;
    }

    if (d == -1)
        printf("please input valid date!\n");
    else
        printf("There are %d days in this month\n", d);
    return 0;
}
