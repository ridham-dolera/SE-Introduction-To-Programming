#include <stdio.h>

int main()
{
    // Variable declarations
    char playlistName[] = "Chill Vibes";
    int totalSongs = 35;
    float averageDuration = 3.8;

    // Print all values in one formatted sentence
    printf("My favorite Spotify playlist is \"%s\", which contains %d songs with an average duration of %.1f minutes per song.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
}