#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void) {

    // Prompt user for card number
    long cardNumber = get_long("Number: ");
    long lastDigit = cardNumber;

    int sum1 = 0;
    int sum2 = 0;

    int cardDigits;

    // Luhn's Algorithm
    for (cardDigits = 0; cardNumber > 0; cardDigits ++) {

        if (cardDigits % 2 != 0) {

            if ((cardNumber % 10) * 2 > 9) {
                sum1 = sum1 + (2 * (cardNumber % 10) - 9);
            } else
                sum1 = sum1 + ((cardNumber % 10) * 2);
        } else {
            sum2 = sum2 + cardNumber % 10;
        }

        cardNumber = cardNumber / 10;
    }

    // Validat if after Luhn's algorithm card number is correct
    if ((sum1 + sum2) % 10 == 0) {

        // Taking first 2 digits to check which bank card is from
        lastDigit = lastDigit / pow(10, (cardDigits - 2));


        // Asigning a bank depending on first 2 digits
        if (cardDigits == 13 && 39 < lastDigit && lastDigit < 50) {
            printf("VISA\n");
        } else if (cardDigits == 15 && (lastDigit == 34 || lastDigit == 37)) {
            printf("AMEX\n");
        } else if (cardDigits == 16 && 39 < lastDigit && lastDigit < 50) {
            printf("VISA\n");
        } else if (cardDigits == 16 && (lastDigit == 51 || lastDigit == 52 || lastDigit == 53 || lastDigit == 54 || lastDigit == 55)){
            printf("MASTERCARD\n");
        } else {
            printf("INVALID\n");
        }
    }
    else {
        printf("INVALID\n");
    }
}