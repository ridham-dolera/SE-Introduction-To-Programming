#include <stdio.h>

// Function to increase each follower count by 100
void incrementFollowers(int *followers, int n) {
    for (int i = 0; i < n; i++) {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main() {
    int followers[5] = {1200, 850, 2300, 1750, 950};

    printf("Follower Counts Before Increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }

    // Call the function
    incrementFollowers(followers, 5);

    printf("\nFollower Counts After Increment:\n");
    for (int i = 0; i < 5; i++) {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }

    return 0;
}