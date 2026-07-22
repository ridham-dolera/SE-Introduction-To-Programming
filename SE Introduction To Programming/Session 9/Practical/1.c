#include <stdio.h>

int main() {
    // Declare and initialize the array
    int dailySteps[7] = {5000, 6500, 7200, 8000, 9000, 10000, 7500};

    // Print the array elements using a loop
    printf("Daily Step Count:\n");

    for (int i = 0; i < 7; i++) {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}