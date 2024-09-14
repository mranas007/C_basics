#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int age;
    float fee;
};

int main()
{
    struct student st[10];
    strcpy(st[0].name, "Anas");
    st[0].age = 20;
    st[0].fee = 10000;

    printf("%s %d %0.2f \n", st[0].name, st[0].age, st[0].fee);

    struct student st2[10] = {"anas", 20, 42};
    printf("%s %d %0.2f \n", st2->name, st2->age, st2->fee);

    return 0;
}