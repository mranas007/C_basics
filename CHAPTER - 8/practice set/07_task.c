#include <stdio.h>
#include <string.h>

int main()
{
    char alpha = 'b';
    int check = 0;
    char arr[] = "anas";
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == alpha)
        {
            check = 1;
            break;
        }
    }

    if (check)
    {
        printf("Yes it's contains: \'%c\'.\n", alpha);
    }
    else
    {
        printf("sorry it doesn't contain: \'%c\'.\n", alpha);
    }


    return 0;
}