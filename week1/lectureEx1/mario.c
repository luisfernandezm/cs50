#include <cs50.h>
#include <stdio.h>

int main (void) {

    /* int n;
    do {
         n = get_int("Width: ");
    } while (n < 3);

    for (int i = 0; i < n; i++) {
        printf("#");
    } */

    int number = get_int ("Number: ");
    int times = get_int ("Times: ");

    for (int t = 0; t < times; t++) {

        printf(" ");

        for (int n = 0; n < number; n++) {
        printf("#");
    }
        printf("\n");
    }
}