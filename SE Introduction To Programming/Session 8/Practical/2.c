#include <stdio.h>
#include <string.h>

void addToCart(char cart[][20], int *count, char product[]) {
    strcpy(cart[*count], product);  // Add product to cart
    (*count)++;                     // Increase item count

    printf("\nUpdated Cart:\n");
    for (int i = 0; i < *count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main() {
    char cart[10][20] = {"Laptop", "Mouse"};
    int count = 2;

    printf("Cart Before Adding:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    addToCart(cart, &count, "Keyboard");

    printf("\nCart After Function Call:\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}