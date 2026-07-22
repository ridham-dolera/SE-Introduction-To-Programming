#include <stdio.h>
#include <string.h>

int main() {
    char teams[10][50] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "Royal Challengers Bengaluru"
    };

    int teamCount = 3;
    int choice;

    while (1) {
        printf("\n===== IPL Fan Menu =====\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Clear newline character

        switch (choice) {
            case 1:
                printf("\nYour Favorite IPL Teams:\n");
                for (int i = 0; i < teamCount; i++) {
                    printf("%d. %s\n", i + 1, teams[i]);
                }
                break;

            case 2:
                if (teamCount < 10) {
                    printf("Enter new team name: ");
                    fgets(teams[teamCount], 50, stdin);

                    // Remove newline character
                    teams[teamCount][strcspn(teams[teamCount], "\n")] = '\0';

                    teamCount++;
                    printf("Team added successfully!\n");
                } else {
                    printf("Team list is full!\n");
                }
                break;

            case 3:
                printf("Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}