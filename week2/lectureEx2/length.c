#include <cs50.h>
#include <stdio.h>
#include <sstrlen.h>

/* int string_length (string s) {

    int i = 0;

    while (s[i] != '\0') {
        i++;
    }
    return i;
} */

int main (void) {
    string s = get_string("Whats your word? \n");
    // int length = string_length (s);
    printf("%i\n", length);
}