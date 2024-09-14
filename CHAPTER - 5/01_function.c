#include <stdio.h>

void function();   // void use for "non return" and "without parameter" function.
int sum(int, int); // declearing the data type to "return" the value and use "param" in the function.
int main()
{

    function();
    int c = sum(10, 20);
    printf("%d", c);
    return 0;
}

void function()
{
    printf("hello world\n");
}

int sum(int a, int b)
{
    return a + b;
}