#include <stdio.h>

// Define the structure
struct FoodItem {
    char itemName[50];
    float price;
    float rating;
};

int main() {
    // Initialize an array of 3 FoodItem structures
    struct FoodItem menu[3] = {
        {"Paneer Butter Masala", 249.00, 4.6},
        {"Veg Biryani", 199.00, 4.4},
        {"Margherita Pizza", 299.00, 4.7}
    };

    // Display the menu using a loop
    printf("------ Zomato Menu ------\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Food Item %d\n", i + 1);
        printf("Item Name : %s\n", menu[i].itemName);
        printf("Price     : Rs. %.2f\n", menu[i].price);
        printf("Rating    : %.1f\n", menu[i].rating);
        printf("-------------------------\n");
    }

    return 0;
}