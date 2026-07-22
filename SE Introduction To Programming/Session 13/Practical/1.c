#include <stdio.h>

int main() {
    FILE *fp;

    // Open the file in write mode
    fp = fopen("playlist.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the song names to the file
    fprintf(fp, "Perfect - Ed Sheeran\n");
    fprintf(fp, "Shape of You - Ed Sheeran\n");
    fprintf(fp, "Blinding Lights - The Weeknd\n");

    // Close the file
    fclose(fp);

    printf("Songs have been written to playlist.txt successfully.\n");

    return 0;
}