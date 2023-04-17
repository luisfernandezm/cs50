#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void) {
    string word = get_string("word: ");

    for (int i = 0; i < strlen(word); i++) {

//To uppercase

        if (word[i] == word[0]) {
            printf("uppercase: %c", word[i] - 32);
        } else {
            printf("%c", word[i]);
        }
    }
    printf("\n");

// to uppercase using toupper method

    for (int i = 0; i < strlen(word); i++) {
        if (word[0] == word[i]) {
            printf("uppercase method: %c", toupper(word[0]));
        } else {
            printf("%c", word[i]);
        }
    }
    printf("\n");
    printf("capitalize: ");

// To capitalize

    for (int i = 0; i < strlen(word); i++) {
        printf("%c", word[i] - 32);
    }
    printf("\n");
    printf("capitalize method: ");

// To capitalize using islower & toupper methods

    for (int i = 0; i < strlen(word); i++) {
        if (islower(word[i])) {
            printf("%c", toupper(word[i]));
        }
    }
    printf("\n");
}