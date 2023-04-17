#include <stdio.h>
#include <cs50.h>

int main (void) {

    float sum_scores = 0;

    int n = get_int("How many scores? ");
    float scores[n];

    for (int i = 0; i < n; i++) {
        scores[i] = get_float("Score: ");
        sum_scores = scores[i] + sum_scores;
    }

    float average = sum_scores / n;
    printf("Average: %.2f\n", average);
}