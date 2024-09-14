#include <stdio.h>

int main()
{

    int a = 1, b = 1;
    printf("the valoue of a and b are same %d\n", a && b);
    printf("the valoue of a or b are same %d\n", a || b);

    if (a && b)
    {
        printf("both are same");
    }

    // this statment is also same to the above statment
    // if (a)
    // {
    //     if (b)
    //     {
    //         printf("both are same");
    //     }
    // }

    return 0;
}