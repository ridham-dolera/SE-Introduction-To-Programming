#include <stdio.h>

int main() {
    // Array of 5 order amounts
    int orders[5] = {250, 320, 180, 450, 300};

    // Pointer pointing to the first element of the array
    int *ptr = orders;

    printf("Order Amounts and Their Memory Addresses:\n");

    // Iterate through the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        printf("Order %d: Amount = %d, Address = %p\n",
               i + 1, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}