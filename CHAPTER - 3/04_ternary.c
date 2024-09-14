#include <stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false;
    int a = 5, b = 2;
    a > b ? printf("a is greater than b") : printf("b is greater than a");
    // Here "?" and ":" are called Ternary Operators
    return 0;
}