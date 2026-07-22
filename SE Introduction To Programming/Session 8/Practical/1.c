#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[]) {
    printf("Initials: ");

    // Print the first character
    printf("%c", toupper(name[0]));

    // Print the first letter after every space
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ') {
            printf("%c", toupper(name[i]));
        }
    }

    printf("\n");
}

int main() {
    char name[] = "Virat Kohli";

    getUserInitials(name);

    return 0;
}