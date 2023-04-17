#include <cs50.h>
#include <stdio.h>

void meow(int n);

int main(void)
{
    meow(5);
}

void meow(int n) {
    int i = 0;

    while (i < n) {
        printf("while loop working\n");
        i ++;
    }

    for (int x = 0; x < n; x++) {
        printf("for loop working\n");
    }
}
