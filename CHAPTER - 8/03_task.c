#include <stdio.h>

int main()
{
    char st[30];
    gets(st); // The entered string is stored in st! to used to input multi-word strings with spaces. 
    printf("%s\n", st);
    puts(st); // print the string and break the line too.
    printf("hey");

    return 0;
}