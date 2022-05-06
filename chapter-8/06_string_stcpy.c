#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "Harry";
    char target[45];
    strcpy(target, source);
    printf("The target string is %s", target);
    return 0;
}