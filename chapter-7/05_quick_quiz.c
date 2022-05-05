#include <stdio.h>

int main()
{
    int i = 5;
    int *ptr = &i;
    printf("The value of i is %d\n", i);
    printf("The value of ptr is %p\n", ptr);
    printf("The address of i is %p\n", &i);
    ptr += 2;
    printf("The value of ptr is %p\n", ptr);
    printf("The address of i is %p\n", &i);
    return 0;
}