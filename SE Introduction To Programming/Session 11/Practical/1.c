#include <stdio.h>

int main() {
    // Declare an integer variable
    int likes = 150;

    // Declare a pointer and point it to likes
    int *ptrLikes = &likes;

    // Print the value of likes
    printf("Value of likes: %d\n", likes);

    // Print the value using the pointer
    printf("Value using ptrLikes: %d\n", *ptrLikes);

    // Print the address stored in the pointer
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);

    return 0;
}