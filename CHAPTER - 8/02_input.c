#include <stdio.h>

int main()
{
    char st[4];
    scanf("%s", st); // scanf cannot be used to input multi-word strings with spaces.
    printf("%s", st);

    return 0;
}