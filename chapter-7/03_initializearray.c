#include <stdio.h>

int main()
{
    float marks[3] = {3.34, 23.3, 53.3};
    for (int i = 0; i < 3; i++)
    {
        printf("score %d %f\n", i, marks[i]);
    }
    return 0;
}