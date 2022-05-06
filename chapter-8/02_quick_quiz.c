#include <stdio.h>

int main()
{
    char str1[] = "Harray";
    for (int i = 0; i < 6; i++)
    {
        printf("%c", str1[i]);
    }

    printf("%s", str1);
    return 0;
}