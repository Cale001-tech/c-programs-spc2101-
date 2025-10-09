/*
Name:Caleb_Weru
Reg_no:CT101/G/26457/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, guess, attempts = 0;

    srand(time(0));

    i = rand() % 20 + 1;

    printf("Welcome to the Number Guessing Game! \n");
    printf("I'm thinking of a number between 1 and 20. Can you guess it? \n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < i) {
            printf("Too low! Try again.");
        } else if (guess > i) {
            printf("Too high! Try again.");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.", attempts);
        }
    } while (guess != i);

    return 0;
}