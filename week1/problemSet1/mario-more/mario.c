#include <cs50.h>
#include <stdio.h>

int main(void) {

    // Declare int Numblocks so when enter into loop does recognize it
    int numBlocks;

    do {
        // Prompt user for number of blocks
        numBlocks = get_int("Number of blocks: ");

    // repeat loop while...
    } while (1 > numBlocks || numBlocks > 8);

    // loop to iterate until the number of blocks get completed
    for (int i = 0; i < numBlocks; i++) {

        // loop to create space in leftside for pyramide 1
        for (int space = 1; i + space < numBlocks; space++) {
            printf(" ");
        }

        // loop thar print blocks of pyramide 1
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }

        // print to create space between pyramides
        printf("  ");

        // loop to print the pyramide 2
        for (int c = 0; c < i + 1; c++) {
            printf("#");
        }

        // jump to next line
        printf("\n");
    }
}