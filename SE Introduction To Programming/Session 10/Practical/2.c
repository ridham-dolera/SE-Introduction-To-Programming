#include <stdio.h>
#include <string.h>

int main() {
    char username1[50], username2[50];

    // Input first username
    printf("Enter first username: ");
    scanf("%s", username1);

    // Input second username
    printf("Enter second username: ");
    scanf("%s", username2);

    // Compare the usernames
    if (strcmp(username1, username2) == 0) {
        printf("Both usernames are the same.\n");
    } else {
        printf("Both usernames are different.\n");
    }

    return 0;
}