#include <cs50.h>
#include <stdio.h>

int main (void) {

    // Prompt user for variable
    string name = get_string ("What is your name? \n");

    // Print variable with name from prompt added
    printf ("Hello %s!\n", name);
}