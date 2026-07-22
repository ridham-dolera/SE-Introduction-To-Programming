#include <stdio.h>
#include <string.h>

char* formatPrice(int price) {
    static char formatted[20];
    char temp[20];
    int i, j = 0, count = 0;

    sprintf(temp, "%d", price);

    for (i = strlen(temp) - 1; i >= 0; i--) {
        formatted[j++] = temp[i];
        count++;

        if (count == 3 && i != 0) {
            formatted[j++] = ',';
            count = 0;
        }
    }

    formatted[j] = '\0';

    // Reverse the string
    int start = 0, end = j - 1;
    while (start < end) {
        char ch = formatted[start];
        formatted[start] = formatted[end];
        formatted[end] = ch;
        start++;
        end--;
    }

    static char result[25];
    sprintf(result, "₹%s", formatted);

    return result;
}

int main() {
    int laptop = 1599;
    int mobile = 25999;
    int headphones = 3499;

    printf("Laptop     : %s\n", formatPrice(laptop));
    printf("Mobile     : %s\n", formatPrice(mobile));
    printf("Headphones : %s\n", formatPrice(headphones));

    return 0;
}