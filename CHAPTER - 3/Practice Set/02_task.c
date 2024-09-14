#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    printf("Enter your frist marks: ");
    scanf("%d", &marks1);
    printf("Enter your second marks: ");
    scanf("%d", &marks2);
    printf("Enter your third marks: ");
    scanf("%d", &marks3);
    printf("Thw marks are %d, %d and %d", marks1, marks2, marks3);

    if (marks1 < 33 || marks2 < 33 || marks3 < 33)
    {
        printf("\nyou are failed due to your indivitual subject");
    }
    else if ((marks1 + marks2 + marks3) / 3 < 40)
    {
        printf("\nyou are failed");
    }
    else
    {
        printf("\nyou are passed");
    }

    return 0;
}