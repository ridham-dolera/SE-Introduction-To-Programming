#include <stdio.h>
#include <string.h>

int main() {
    // Source string
    char source[] = "Flipkart";

    // Destination string
    char shoppingApp[20];

    // Copy the source string into shoppingApp
    strcpy(shoppingApp, source);

    // Print the copied string
    printf("Shopping App: %s\n", shoppingApp);

    return 0;
}