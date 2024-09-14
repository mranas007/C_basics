#include <stdio.h>

int main()
{
    // 90 – 100 => A
    // 80 – 90 => B
    // 70 – 80 => C
    // 60 – 70 => D
    // 50 – 60 => E
    // <50 => F
    int marks = 87;
    char grade;
    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks <= 89)
    {
        grade = 'B';
    }
    else if (marks >= 70 && marks <= 79)
    {
        grade = 'C';
    }
    else if (marks >= 60 && marks <= 69)
    {
        grade = 'D';
    }
    else if (marks >= 50 && marks <= 59)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    printf("you marks are: %d \nyou grades is: %c", marks, grade);

    return 0;
}