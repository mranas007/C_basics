#include <stdio.h>

int main()
{
    // Write a program to find greatest of four numbers entered by the user.

    int a = 1, b = 2, c = 3, d = 4;
    if (a > b && a > c && a > d)
    {
        printf("The Greatest number of all is: %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The Greatest number of all is: %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The Greatest number of all is: %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("The Greatest number of all is: %d", d);
    }

    return 0;
}