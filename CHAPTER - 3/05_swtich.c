#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 5:
        printf("a has a valaue so it's true");
        break;

    default:
        printf("a doesn't has a valid number");
        break;
    }

    return 0;
}