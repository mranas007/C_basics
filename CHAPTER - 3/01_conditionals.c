#include <stdio.h>

int main()
{
    int age = 5;
    if (age > 10)
    {
        printf("Your age is: %d\n", age);
    }
    else
    {
        printf("Your age is less than 10");
    }

    if (age % 5 == 0)
    {
        printf("you'er age is divisble by %d\n", age);
    }

    return 0;
}