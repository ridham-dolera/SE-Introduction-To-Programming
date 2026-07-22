#include <stdio.h>
#include <ctype.h>

// Reusable function
void capitalizeFirstLetter(char str[]) {
    if (str[0] != '\0') {
        str[0] = toupper(str[0]);
    }
}

int main() {
    char productName[] = "laptop";
    char userName[] = "ridham";

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(userName);

    printf("Product Name: %s\n", productName);
    printf("Username    : %s\n", userName);

    return 0;
}