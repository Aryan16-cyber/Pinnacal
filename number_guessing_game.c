#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int n, guess;
    guess=rand()%100 + 1;

    printf("welcome to the Guess the Number game!\n");
    printf("I have chosen a number between 1 and 100.\n");

    do
    {
        printf(" Please enter your guess: ");
        scanf("%d", &guess);

        if (guess == n)
        {
            printf("Congratulations! You guessed the number correctly.\n");
        }
        else if (guess < n)
        {
            printf("Your guess is too low. Try again.\n");
        }
        else
        {
            printf("Your guess is too high. Try again.\n");
        }
    } 
    while (guess != n);
    return 0;
}