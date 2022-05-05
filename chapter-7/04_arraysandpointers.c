#include <stdio.h>

int main()
{
    int marks[3] = {1, 2, 4};
    int *prt = &marks[0];
    printf("%d\n", marks[1]);
    printf("%d\n", *prt);
    return 0;
}