#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "a"); // 'w' just write the value and remove the prevoius content

    if (ptr == NULL)
    {
        printf("Sorry file doesn't exist. \n");
    }
    else
    {
        int num = 200;
        fprintf(ptr, "%d", num);
        fclose(ptr);
    }

    return 0;
}