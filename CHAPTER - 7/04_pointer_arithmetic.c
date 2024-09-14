#include <stdio.h>

int main() {
    int a = 5;
    int *ptr = &a;

    printf("The address of pointer a: %u\n", &a);
    printf("The address of pointer a: %u\n", ptr);
    ptr++;
    printf("The address of pointer a: %u\n", ptr);
    return 0;
}