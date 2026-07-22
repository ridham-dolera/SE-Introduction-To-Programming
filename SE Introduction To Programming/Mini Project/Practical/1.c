#include <stdio.h>
#include <stdlib.h>

#define DAYS 7

int music[DAYS];

// Function to log music listening minutes
void logMusic() {
    FILE *fp = fopen("music_log.txt", "w");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("\nEnter music listening minutes for 7 days:\n");

    for (int i = 0; i < DAYS; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &music[i]);
        fprintf(fp, "%d\n", music[i]);
    }

    fclose(fp);
    printf("\nMusic data saved successfully!\n");
}

// Function to view weekly summary from array
void viewSummary() {
    int total = 0, highest = 0;
    float average;

    printf("\nWeekly Listening Summary\n");
    printf("-------------------------\n");

    for (int i = 0; i < DAYS; i++) {
        printf("Day %d : %d minutes\n", i + 1, music[i]);

        total += music[i];

        if (music[i] > highest)
            highest = music[i];
    }

    average = total / (float)DAYS;

    printf("-------------------------\n");
    printf("Total Minutes   : %d\n", total);
    printf("Average Minutes : %.2f\n", average);
    printf("Highest Minutes : %d\n", highest);
}

// Function to generate report from file
void generateReport() {
    FILE *fp = fopen("music_log.txt", "r");

    if (fp == NULL) {
        printf("\nNo music log found!\n");
        return;
    }

    int total = 0;
    int highest = 0;
    int value;
    int day = 1;

    printf("\nWeekly Report (From File)\n");
    printf("---------------------------\n");

    while (fscanf(fp, "%d", &value) != EOF) {
        printf("Day %d : %d minutes\n", day, value);

        total += value;

        if (value > highest)
            highest = value;

        day++;
    }

    fclose(fp);

    printf("---------------------------\n");
    printf("Total Minutes   : %d\n", total);
    printf("Average Minutes : %.2f\n", total / 7.0);
    printf("Highest Minutes : %d\n", highest);
}

// Function to reset data
void resetData() {
    char choice;

    printf("\nAre you sure you want to reset all data? (Y/N): ");
    scanf(" %c", &choice);

    if (choice == 'Y' || choice == 'y') {

        for (int i = 0; i < DAYS; i++)
            music[i] = 0;

        FILE *fp = fopen("music_log.txt", "w");

        if (fp != NULL)
            fclose(fp);

        printf("Data reset successfully!\n");
    } else {
        printf("Reset cancelled.\n");
    }
}

// Main function
int main() {
    int choice;

    while (1) {

        printf("\n========== Music Listening Logger ==========\n");
        printf("1. Log Music Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Generate Weekly Report (From File)\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            logMusic();
            break;

        case 2:
            viewSummary();
            break;

        case 3:
            generateReport();
            break;

        case 4:
            resetData();
            break;

        case 5:
            printf("\nThank you for using Music Listening Logger!\n");
            exit(0);

        default:
            printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}