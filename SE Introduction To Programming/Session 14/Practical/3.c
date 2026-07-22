#include <stdio.h>

// Function to format follower count
void formatFollowersCount(int count)
{
    // If followers are 1,000,000 or more
    if (count >= 1000000)
    {
        printf("%.1fM\n", count / 1000000.0);
    }
    // If followers are 1,000 or more
    else if (count >= 1000)
    {
        printf("%.1fK\n", count / 1000.0);
    }
    // If followers are less than 1,000
    else
    {
        printf("%d\n", count);
    }
}

int main()
{
    int followers;

    // Ask the user to enter the follower count
    printf("Enter Followers Count: ");
    scanf("%d", &followers);

    // Display the formatted follower count
    printf("Formatted Followers Count: ");
    formatFollowersCount(followers);

    return 0;
}