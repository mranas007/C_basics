#include <stdio.h>

int main()
{
    char st[] = {'a', 'n', 'a', 's', '\0'};
    // char st[] = "anas";  // same as doing  char st[] = {'a', 'n', 'a', 's', '\0'};
    for (int i = 0; i < 4; i++)
    {
        printf("%c", st[i]);
    }
    printf("\n%s", st);
    return 0;
}