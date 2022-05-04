#include <stdio.h>

int factorial(int);

int main()
{
    printf("The value of factorial 5 is %d", factorial(5));
    return 0;
}

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}