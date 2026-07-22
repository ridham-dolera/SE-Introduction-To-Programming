#include <stdio.h>

int main() {
    // 3 Playlists × 5 Days
    int playlistRatings[3][5] = {
        {5, 4, 5, 3, 4},  // Playlist 1
        {4, 5, 5, 4, 5},  // Playlist 2
        {3, 4, 4, 5, 4}   // Playlist 3
    };

    printf("Ratings for the Second Playlist:\n");

    for (int i = 0; i < 5; i++) {
        printf("Day %d: %d\n", i + 1, playlistRatings[1][i]);
    }

    return 0;
}