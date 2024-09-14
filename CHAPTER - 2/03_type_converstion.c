#include <stdio.h>

int main()
{
    int a = 9;
    int b = 2;
    float c = a / b;
    /*
        this is always give you the integer number cause
        you can't calculate the integer number like float.
    */
   
    /*
        if you wanna float number you have to change the data type of
        variable and then it can provide the float result.
    */
    printf("this is the value of c : %.2f", c);
    return 0;
}