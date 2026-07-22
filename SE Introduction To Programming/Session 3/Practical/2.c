#include <stdio.h>

int main()
{
    // Constant variable for GST rate (18%)
    const float GST_RATE = 18.0;

    // Base price of the Zomato order
    float basePrice = 500.0;

    // Calculate GST amount and final price
    float gstAmount = (basePrice * GST_RATE) / 100;
    float finalPrice = basePrice + gstAmount;

    // Display the result
    printf("Base Price: Rs. %.2f\n", basePrice);
    printf("GST Rate: %.2f%%\n", GST_RATE);
    printf("GST Amount: Rs. %.2f\n", gstAmount);
    printf("Final Price: Rs. %.2f\n", finalPrice);

    return 0;
}