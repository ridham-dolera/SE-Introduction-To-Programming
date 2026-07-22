#include <stdio.h>

// Define the structure
struct Playlist {
    char title[50];
    char artist[50];
    int duration;
};

int main() {
    // Initialize a Playlist variable
    struct Playlist song = {
        "Perfect",
        "Ed Sheeran",
        263
    };

    // Print the details
    printf("Song Details:\n");
    printf("Title    : %s\n", song.title);
    printf("Artist   : %s\n", song.artist);
    printf("Duration : %d seconds\n", song.duration);

    return 0;
}