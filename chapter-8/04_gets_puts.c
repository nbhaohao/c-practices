#include <stdio.h>

int main()
{
    char ch1[45];
    printf("Enter your name and see the magic\n");
    gets(ch1);
    // printf("%s\n", ch1);
    puts(ch1);
    printf("Done printing string");
    return 0;
}