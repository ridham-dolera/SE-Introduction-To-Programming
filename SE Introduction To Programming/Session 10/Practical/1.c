#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize the string
    char songTitle[] = "Tum Hi Ho";

    // Print the string
    printf("Song Title: %s\n", songTitle);

    // Print the length of the string
    printf("Length of the string: %lu\n", strlen(songTitle));

    return 0;
}