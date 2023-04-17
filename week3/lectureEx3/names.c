#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void) {
    string names [] = {"Luis0", "Luis1", "Luis2", "Luis3", "Luis4", "Luis5", "Luis6" };

    for (int i = 0; i < 7; i++) {
        if (strcmp(names[i], "Luis7") == 0) {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
