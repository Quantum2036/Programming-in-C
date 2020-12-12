//Exercises: 4.4
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 65 && c <= 90) {
        c += 32;
        printf("char = %c, ASCII = %d\n",c ,c );
    }  else if (c >= 97 && c <= 122) {
        c -= 32;
        printf("char = %c, ASCII = %d\n",c ,c );
    }  else
        printf("please input a character\n");

    return 0;
}
