#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Anas";
    char s1[56] = "Anas";
    char s2[56] = " bhai";

    printf("%d", strlen(st)); // this is using this #include <string.h>

    char target[30];
    strcpy(target, st); // target now contains "Harry"
    printf("\n%s %s", st, target);

    strcat(s1, s2); // s1 now contains "Anasbhai" <no space in between>
    printf("\n%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("\n%d", a);

    return 0;
}