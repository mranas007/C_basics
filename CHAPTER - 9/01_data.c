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
    e1.code = 16;
    e1.salary = 200;
    strcpy(e1.name, "employe 1");
    printf("%d %0.2f %s", e1.code, e1.salary, e1.name);

    e2.code = 13;
    e2.salary = 1309;
    strcpy(e2.name, "employe 2");
    printf("\n%d %0.2f %s", e2.code, e2.salary, e2.name);

    e3.code = 13;
    e3.salary = 1309;
    strcpy(e3.name, "employe 3");
    printf("\n%d %0.2f %s", e3.code, e3.salary, e3.name);

    return 0;
}