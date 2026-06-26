//write a program to create a number guessing game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, attempts = 0;
    srand(time(0));
    secretNumber = rand() % 100 + 1;
    printf("Number Guessing Game\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > secretNumber) {
            printf("Too high! Try again.\n\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n\n");
        } else {
            printf("\nCongratulations! You guessed the number.\n");
            printf("You took %d attempts.\n", attempts);
        }
    } 
    while (guess != secretNumber);
    return 0;
}