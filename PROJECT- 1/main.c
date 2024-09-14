#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("\n\n");
    printf("Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");
    printf("Let's get started!\n\n");

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do {
        printf("Enter your guess: ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed > randomNumber) {
            printf("Your guess is too high. Try again.\n\n");
        } else if (guessed < randomNumber) {
            printf("Your guess is too low. Try again.\n\n");
        }
          printf(" %d\n", randomNumber);

    } while (guessed != randomNumber);

    printf("Congratulations! You guessed the correct number: %d\n", randomNumber);
    printf("It took you %d attempts.\n", no_of_guesses);

    return 0;
}