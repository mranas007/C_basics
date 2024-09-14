#include <stdio.h>

int main()
{

    int arr[4][2];

    for (int i = 0; i < 4; i++)
    {
        for (int n = 0; n < 2; n++)
        {
            printf("enter the Value arr[%d][%d]\n",i, n);
            scanf("%d", &arr[i][n]);
        }
    }

    int nArr[4];
    for (int i = 0; i < 4; i++)
    {
        printf("The Value of array: ");
        for (int n = 0; n < 2; n++)
        {
            printf("%d", arr[i][n]);
        }
        printf("\n");
    }

    return 0;
}