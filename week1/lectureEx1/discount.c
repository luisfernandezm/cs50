#include <cs50.h>
#include <stdio.h>

float discount (float price, int percent) {
    return price * (100 - percent) / 100;
}

int main (void) {
    float regular = get_float("Regular Price: ");
    int percentOff = get_int("Discount: ");
    float sale = discount(regular, percentOff);
    printf("Sale Price: %.2f\n", sale);
}