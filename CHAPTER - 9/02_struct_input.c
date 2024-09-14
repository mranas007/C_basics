#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[];
}; // semicolon is important

int main()
{

    struct employee e1, e2, e3;

    // first empolye data 2
    printf("Enter the value of employe code \n");
    scanf("%d", &e1.code);

    printf("Enter the value of employe Salery \n");
    scanf("%f", &e1.salary);

    printf("Enter the value of employe Name \n");
    scanf("%s", e1.name);
    printf("%d %0.2f %s\n\n", e1.code, e1.salary, e1.name);

    // first empolye data 2
    printf("Enter the value of employe code \n");
    scanf("%d", &e2.code);

    printf("Enter the value of employe Salery \n");
    scanf("%f", &e2.salary);

    printf("Enter the value of employe Name \n");
    scanf("%s", e2.name);
    printf("%d %0.2f %s\n\n", e2.code, e2.salary, e2.name);

    // first empolye data 3
    printf("Enter the value of employe code \n");
    scanf("%d", &e3.code);

    printf("Enter the value of employe Salery \n");
    scanf("%f", &e3.salary);

    printf("Enter the value of employe Name \n");
    scanf("%s", e3.name);
    printf("%d %0.3f %s\n\n", e3.code, e3.salary, e3.name);

    return 0;
}