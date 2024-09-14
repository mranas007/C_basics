#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter 4 number which you wanna their tables. \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    int arr[3][10];
    int mul[] = {n1,n2,n3};

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            arr[i][x] = mul[i] * (x + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int x = 0; x < 10; x++)
        {
            printf("the value of arr[i][x] %d \n", arr[i][x]);
        }
        printf("\n");
    }

    return 0;
}