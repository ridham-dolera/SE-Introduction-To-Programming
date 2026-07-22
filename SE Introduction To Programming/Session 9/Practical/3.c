#include <stdio.h>

// Function to calculate average spend
float calculateAverage(int orders[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += orders[i];
    }

    return (float)sum / size;
}

int main()
{
    // Daily Zomato order amounts for 7 days
    int dailyOrders[7] = {250, 320, 180, 400, 275, 350, 225};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average Zomato Spend for the Week: Rs. %.2f\n", average);

    return 0;
}