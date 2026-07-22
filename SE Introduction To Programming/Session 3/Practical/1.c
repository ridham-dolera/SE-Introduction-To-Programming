    #include <stdio.h>

    int main()
    {
        // Variable declarations
        char productName[] = "Samsung Galaxy S24";
        float price = 74999.99f;
        double rating = 4.8;

        // Printing values with their data types
        printf("Product Name (String): %s\n", productName);
        printf("Price (Float): %.2f\n", price);
        printf("Rating (Double): %.1lf\n", rating);

        return 0;
    }