#include <cs50.h>
#include <stdio.h>


int get_negative_num (void) {
    int n;

    do {
        n = get_int("Negative integer: \n");
    }

    while (n < 0);
    return n;
}

int main (void) {

    for (int i = 0; i < 3; i++) {
        printf("#\n");
    }
}