#include <stdio.h>

int main()
{
    // and you can also write it without defined the number of index or value. 
    float cgpa[] = {5.3, 5.1, 3.0, 4.5, 6.2};
   // float cgpa[5] = {5.3, 5.1, 3.0, 4.5, 6.2};
    
    printf("\nThe CGPA of all students.\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("students : %d and CGPA : %.1f\n", i + 1, cgpa[i]);
    }

    return 0;
}