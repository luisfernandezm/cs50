#include <cs50.h>
#include <stdio.h>

int main (void) {

    // Prompt user for data
    float x = get_float("x: ");
    float y = get_float("y: ");

    // Sum
    float ansSum = x + y;
    printf("Sum: %.0f\n", ansSum);

    // Divide
    float ansDiv = x / y;
    printf ("Division: %.2f\n", ansDiv);
}