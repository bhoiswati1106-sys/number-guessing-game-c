#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempts=0;

    // Random number generate
    srand(time(0));
    number = rand() % 100 + 1;

    printf("=== Number Guessing Game ===\n");
    printf("Guess a number between 1 and 100\n");

    do
    {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > number)
        {
            printf("Too High!\n");
        }
        else if(guess < number)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("\nCorrect! You guessed the number.\n");
            printf("Total Attempts: %d\n", attempts);
        }
        
    }
    while (guess != number);
    
    return 0;
}