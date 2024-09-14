#include <stdio.h>

int main()
{

    /*
    An escape sequence in C is a combination of characters that begins with a backslash (\)
     followed by one or more characters. Escape sequences are used to represent special characters
     or perform certain formatting tasks in strings that cannot be easily typed or represented
     directly in code.
    */
    printf("Hello\nWorld");             // this is reperasent a new Line.
    printf("Hello\tWorld");             // Inserts a horizontal tab space.
    printf("This is a backslash: \\");  // Inserts a literal backslash (\) character.
    printf("He said, \"Hello World\""); // Inserts a double quote (") character.
    printf("It\'s a good day");         // Inserts a single quote (') character.
    printf("Hello\rWorld");             // Moves the cursor to the beginning of the current line without advancing to the next line.
    printf("\a");                       // Triggers an alert sound (if supported by the system).
    printf("Hello\bWorld");             // Moves the cursor one position back, effectively erasing the previous character.
    printf("Hello\fWorld");             // Moves the cursor to the start of the next page (rarely used).
    printf("Hello\vWorld");             // Moves the cursor to the next vertical tab stop.

    return 0;
}
