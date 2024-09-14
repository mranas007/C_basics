#include <stdio.h>

int main()
{
    // this is an (Integer) data type.
    int number = 100;

    // this is a (Float) data type.
    float f_number = 100.00;

    // this is a (Character) data type.
    char val = 'C'; // Single character

    // If you want to store a string, use an array of char
    char str[] = "Character";

    printf("%d\n", number);
    printf("%f\n", f_number);
    printf("%c\n", val);
    printf("%s\n", str);
    
    return 0;
}
