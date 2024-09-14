#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Mera saara paisa takiye ke neeche black poly me hai";
    int lenth_str = strlen(str); // length of the array.

    // encrypting the array.
    for (int i = 0; i < lenth_str; i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s\n", str);

    // storing the array into another array.
    char decrypt_str[lenth_str];
    for (int i = 0; i < lenth_str; i++)
    {
        decrypt_str[i] = str[i];
    }

    // decrypting the array.
    for (int i = 0; i < strlen(decrypt_str); i++)
    {
        decrypt_str[i] = decrypt_str[i] - 1;
    }

    printf("%s\n", decrypt_str);

    return 0;
}