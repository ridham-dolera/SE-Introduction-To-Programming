#include <stdio.h>

// Nested structure for Time
struct Time {
    int hours;
    int minutes;
};

// Structure for MovieShow
struct MovieShow {
    char movie[50];
    int screen;
    struct Time showTime;
};

int main() {
    // Initialize the MovieShow structure
    struct MovieShow show = {
        "Avengers: Endgame",
        5,
        {7, 30}
    };

    // Print the details
    printf("Movie: %s, Screen: %d, Time: %02d:%02d\n",
           show.movie,
           show.screen,
           show.showTime.hours,
           show.showTime.minutes);

    return 0;
}