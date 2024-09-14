#include <stdio.h>

int factorial(int);
int main()
{
    int a = 30;
    int fac = factorial(a);
    printf("the factorial of %d is %d", a, fac);
    return 0;
}

int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result *= i;
    }
    return result;
}