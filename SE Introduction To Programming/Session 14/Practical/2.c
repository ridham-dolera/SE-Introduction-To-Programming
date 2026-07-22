#include <stdio.h>

// Function to check whether a number is even or odd
int isEven(int num)
{
    // Check if the number is divisible by 2
    if (num % 2 == 0)
    {
        // If the remainder is 0, the number is even
        return 1;   // True
    }
    else
    {
        // Otherwise, the number is odd
        return 0;   // False
    }
}

int main()
{
    int number;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function and display the result
    if (isEven(number))
    {
        printf("%d is an Even number.\n", number);
    }
    else
    {
        printf("%d is an Odd number.\n", number);
    }

    return 0;
}