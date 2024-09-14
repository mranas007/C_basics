#include <stdio.h>

int main()
{
    int marks[] = {4, 6, 9, 5};

    // int* ptr = &marks[0];
    int *ptr = marks; // same as = int* ptr = &marks[0];.

    for (int i = 0; i < 4; i++)
    {
        printf("the address of marks: %u\n", *ptr);
        ptr++;
    }

    return 0;
}