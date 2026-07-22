#include <stdio.h>

int main() {
    FILE *fp;

    // Open the file in append mode
    fp = fopen("playlist.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Append two new songs
    fprintf(fp, "Levitating - Dua Lipa\n");
    fprintf(fp, "Believer - Imagine Dragons\n");

    // Close the file
    fclose(fp);

    printf("Two songs have been added to playlist.txt successfully.\n");

    return 0;
}