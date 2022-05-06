#include <stdio.h>
#include <string.h>

int main()
{
    char source[56] = "Harry";
    char target[] = "is a nice boy";
    strcat(source, target);
    printf("The source string is %s", source);
    return 0;
}