#include <stdio.h>

int main() {
    FILE *fp;
    char song[100];

    // Open the file in read mode
    fp = fopen("playlist.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open playlist.txt\n");
        return 1;
    }

    printf("Songs in Playlist:\n");

    // Read and display each line
    while (fgets(song, sizeof(song), fp) != NULL) {
        printf("%s", song);
    }

    // Close the file
    fclose(fp);

    return 0;
}