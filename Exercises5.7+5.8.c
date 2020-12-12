//Exercises: 5.7&5.8
//Author: Yuan Yao
//Completion date: 2020/12/02
#include <stdio.h>

int main()
{
    char c;
    c = getchar();
    int i = (int)c;

    if (i >= 48 && i <= 57) {
        printf("Input:\"%c\"\t type:number\t ASCII:%d\n", c, c);
    } else if (i == 32) {
        printf("Input:\"%c\"\t type:Space\t ASCII:%d\n", c, c);
    } else if (i >= 65 && i <= 90) {
        printf("Input:\"%c\"\t type:capital letter\n", c);
        printf("Output:\"%c\"\t type:lower case letter\n", c+32);
    } else if (i >= 97 && i <= 122) {
        printf("Input:\"%c\"\t type:lower case letter\n", c);
        printf("Output:\"%c\"\t type:capital letter\t ASCII:%d\n", c-32, c-32);
    } else printf("Input:\"%c\"\t type:other characters\t ASCII:%d\n", c, c);

    return 0;
}
