#include <stdio.h>
#include <string.h>

int main()
{
    char source[] = "A";
    char target[] = "A123";
    printf("The strcmp returns is %d", strcmp(source, target));
    return 0;
}