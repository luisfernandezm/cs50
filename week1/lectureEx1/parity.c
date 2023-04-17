#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int ("Give me a number so i'll tell you if is even or odd ");
    if (n % 2 == 0) {
        printf(" is an number is even.\n");
    }
    else {
        printf("is an odd number.\n");
    }
}