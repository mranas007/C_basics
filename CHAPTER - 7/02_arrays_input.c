#include <stdio.h>

int main()
{

    int marks[5];

    printf("please enter the marks of students.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The marks of students: %d\n", marks[i]);
    }

    return 0;
}