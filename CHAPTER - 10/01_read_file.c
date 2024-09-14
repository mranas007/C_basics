#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");

    if (ptr == NULL)
    {
        printf("Sorry file doesn't exist. \n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("%d \n", num);

        fscanf(ptr, "%d", &num);
        printf("%d \n", num);
        fclose(ptr);
    }

    return 0;
}