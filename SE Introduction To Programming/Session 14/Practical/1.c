#include <stdio.h>

int main() {
    char *items[] = {"Burger", "Pizza", "Fries"};
    int prices[] = {120, 250, 90};
    int total = 0;

    for (i = 0; i < 3; i++) {   // Error: i is not declared
        total =+ prices[i];     // Error: =+ instead of +=
    }

    printf("Total price is: %d\n", total);

    return 0;
}