#include <stdio.h>

int main()
{
    int width;
    int length;
    printf("\nType the Width of the Area: \t");
    scanf("%d", &width);
    printf("\nType the Length of the Area: \t");
    scanf("%d", &length);

    printf("%d", width * length);

    return 0;
}