#include <stdio.h>

int sum(int *, int *);

// Sum should change the value of x.
int sum(int *a, int *b)
{
    *a = 6; // "*" it's mean "value" of the address. 
    return (*a + *b);
}

int main()
{
    int x = 1, y = 6;
    printf("The sum of 1 and 6 is %d\n", sum(&x, &y)); // "&" it's mean "address" of the variable.
    printf("The value of x is %d", x);
    return 0;
}