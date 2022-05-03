#include <stdio.h>

int main()
{
    int age = 45;
    int placeCode = 12;
    if (age > 18)
    {
        printf("You are eligible to drive");
    }
    if (age > 15)
    {
        printf("You are not eligible to drive but we will check for a toy vehicle for you!");
    }
    if (age <= 15)
    {
        printf("Sorry you are a kid and cannot drive");
    }
    return 0;
}