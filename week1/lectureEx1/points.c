#include <cs50.h>
#include <stdio.h>

int main (void)
{
    const int MINE  = 2;
    int points = get_int ("How many points did you get? ");

    if (points < MINE) {
        printf("You did not get enought points.\n");
    }
    else if (points > MINE) {
        printf("You've got a higher power.\n");
    }
    else {
        printf("We lost the same ammount of points.\n");
    }
}