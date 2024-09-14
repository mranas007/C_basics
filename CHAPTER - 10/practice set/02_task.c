#include <stdio.h>

int main()
{

    FILE *ptr;
    int num = 2;
    ptr = fopen("file.txt", "w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d", num * (i + 1));
        fprintf(ptr, "\n");
    }

    fclose(ptr);

    return 0;
}