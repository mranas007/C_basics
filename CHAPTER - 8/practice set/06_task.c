#include <stdio.h>
#include <string.h>

int main()
{
    char alpha = 'a';
    int count = 0;
    char arr[] = "anas";
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == alpha)
        {
            count++;
        }
    }
    printf("%d \n", count);
    
    return 0;
}