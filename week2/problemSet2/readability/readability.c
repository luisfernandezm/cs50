#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void) {

    // Prompt user for text
    string text = get_string("Text: ");

    // Declare variables that will count letters, words and sentences in text
    int letters = 0;
    int words = 1;
    int sentences = 0;

    for (int i = 0; i < strlen(text); i++) {

        // Validate if the character is a lettter or a number to add +1 to letters counter
        if (isalnum(text[i])) {
            letters ++;
        }

        // Validate if the character marks the end of sentence
        if (i > 0 && (text[i] == '!' || text[i] == '?' || text[i] == ':' || text[i] == '"' || text[i] == '.') && isalnum(text[i - 1])) {
            sentences ++;
        }

        // Validate if the character is a space to add +1 to words counter
        if (i < strlen(text) - 1 && isspace(text[i]) && isalnum(text[i + 1])) {
            words ++;
        }
    }

    // Get value of variables L & S to place them in Coleman-Liau index formula
    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;

    // Replace L & S values and use them in Coleman-Liau index formula
    float index = round(0.0588 * L - 0.296 * S - 15.8);

    // Print values of letters, words and sentences
    // printf("%i letters\n", letters);
    // printf("%i words\n", words);
    // printf("%i sentences\n", sentences);

    // Print the value of the grade according to Coleman-Liau index formula
    if (index > 16) {
        // If grade of text is >16 print...
        printf("Grade 16+\n");
    } else if (index < 1) {
        // If grade of text is <1 print...
        printf("Before Grade 1\n");
    } else {
        printf("Grade %.0f\n", index);
    }
}