#include <cs50.h>
#include <stdio.h>

/*
15 - AMEX
16 - MC
13 - VISA
16 - VISA
*/

int main (void) {

    // Arrays to save digits to operate the Luhn's algorithm
    int luhn1 [] = {};
    int luhn2 [] = {};

    // Ask user for to enter number
    long cardNumber = get_long("Number: ");
    long lastDigit = cardNumber;

    int cardDigits;
    int sum;
    int luhn2Counter = 0;
    int number;

    // Checks how many digits has the card to check the company
    for (cardDigits = 0; cardNumber > 0; cardDigits ++) {

            if (cardDigits % 2 != 0) {
            luhn1 [cardDigits] = (cardNumber % 10) * 2;

            if (luhn1 [cardDigits] > 10) {
                sum = sum + (luhn1 [cardDigits] - 9);
            } else {
                sum = sum + luhn1 [cardDigits];
            }
        } else {
            luhn2 [luhn2Counter] = cardNumber % 10;
            sum = sum + luhn2[luhn2Counter];
            luhn2Counter ++;
        }
        cardNumber = cardNumber / 10;
    }

    if (sum % 10 == 0) {

        // Logic to check which bank the card belongs to
        if (cardDigits == 13) {
            printf("VISA\n");
        } else if (cardDigits == 15) {
            printf("AMEX\n");
        } else if (cardDigits == 16) {

            lastDigit = lastDigit / 1000000000000000;

            if (lastDigit == 4) {
                printf("VISA\n");
            } else {
                printf("MASTERCARD\n");
            }
        }
    } else {
        printf("INVALID\n");
    }
}