#include <stdio.h>

int main()
{
    // calculate the volume of a cylinder given it's radius and height.
    float pi = 3.14159;
    float r;
    float h;
    printf("Provide the radius of the cylinder's base: ");
    scanf("%f", &r);
    printf("Provide the height of the cylinder: ");
    scanf("%f", &h);

    float area = pi * (r * r) * h;
    printf("The area of the circle is: %.3f", area);
    return 0;
}