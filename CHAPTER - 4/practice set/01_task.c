#include <stdio.h>

int main()
{
    // print the 2 table by for loop
    int n = 2;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}