#include <stdio.h>

int main()
{
    // simple interest calculation
    float p = 34.1, r = 8, t = 5;
    float si = (p * r * t) / 100;
    
    printf("the value of interest %.2f", si);

    return 0;
}