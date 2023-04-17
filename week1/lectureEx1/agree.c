#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Promt for the user
    char n = get_char("Do you agree? ");

    // Logic to make the promt match the answer
    if (n == 'y' || n == 'Y') {
        printf("You agree.\n");
    }
    else if (n == 'n') {
        printf("You don't agree.\n");
    }
    else {
        printf("You are not cooperating.\n");
    }
}