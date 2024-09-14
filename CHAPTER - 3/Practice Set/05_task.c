#include <stdio.h>

int main()
{
    // Write a program to determine whether a character entered by the user is
    // lowercase or not.
    char ch = 'A';
    if (ch >= 65 && ch <= 90)
    {
        printf("It's uppercase Alphabet\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("It's lowercase Alphabet\n");
    }
    printf("this is a char %d\n", ch);

    return 0;
}