#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char songs[3][30] = {
        "Believer",
        "Shape of You",
        "Perfect"
    };

    char guess[30];

    // Generate a random song
    srand(time(0));
    int randomIndex = rand() % 3;

    printf("=== Guess the Song Game ===\n");
    printf("Songs are chosen from:\n");
    printf("1. Believer\n");
    printf("2. Shape of You\n");
    printf("3. Perfect\n\n");

    do {
        printf("Guess the song: ");
        fgets(guess, sizeof(guess), stdin);

        // Remove newline character
        guess[strcspn(guess, "\n")] = '\0';

        if (strcmp(guess, songs[randomIndex]) == 0) {
            printf("🎉 Correct! You guessed the song.\n");
        } else {
            printf("❌ Wrong guess! Try again.\n");
        }

    } while (strcmp(guess, songs[randomIndex]) != 0);

    return 0;
}