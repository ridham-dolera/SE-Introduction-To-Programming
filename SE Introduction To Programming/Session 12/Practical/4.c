#include <stdio.h>

// Nested structure for Bio
struct Bio {
    char description[100];
    int age;
};

// Structure for Instagram Profile
struct InstaProfile {
    char username[50];
    int followers;
    struct Bio bio;
};

int main() {
    // Initialize the InstaProfile structure
    struct InstaProfile profile = {
        "Ridham_Dolera",
        1500,
        {"Student and Python Developer", 20}
    };

    // Display the profile details
    printf("------ Instagram Profile ------\n");
    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Bio         : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);

    return 0;
}