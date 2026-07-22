#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char song[100];
    char temp[100];

    // Open the file in read mode
    fp = fopen("playlist.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open playlist.txt\n");
        return 1;
    }

    printf("Songs containing 'love':\n");

    while (fgets(song, sizeof(song), fp) != NULL) {
        strcpy(temp, song);

        // Convert to lowercase
        for (int i = 0; temp[i] != '\0'; i++) {
            temp[i] = tolower((unsigned char)temp[i]);
        }

        // Check if "love" exists
        if (strstr(temp, "love") != NULL) {
            printf("%s", song);
        }
    }

    fclose(fp);

    return 0;
}