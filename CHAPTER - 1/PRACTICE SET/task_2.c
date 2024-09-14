#include <stdio.h>

int main()
{
    float pi = 3.14159;
    float r;
    printf("Provide the Area of the circle: ");
    scanf("%f", &r);

    float area = pi * (r * r);
    printf("The area of the circle is: %.2f", area);
    return 0;
}