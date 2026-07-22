#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    char username[6];   // 5 characters + 1 for '\0'

    printf("Enter your full name: ");
    fgets(fullName, sizeof(fullName), stdin);

    // Remove the newline character, if present
    fullName[strcspn(fullName, "\n")] = '\0';

    // Check the length of the name
    if (strlen(fullName) < 5) {
        strcpy(username, fullName);
    } else {
        strncpy(username, fullName, 5);
        username[5] = '\0';   // Null-terminate the string
    }

    printf("Generated Username: %s\n", username);

    return 0;
}