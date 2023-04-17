#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struc {
    string name;
    string number;
}
person;

int main (void) {

    person people[2];

    people[0].name = "Luis";
    people[0].number = "+52-811-033-1132";

    for (int i = 0; i < 2; i++) {

        if (strcmp(people[i].name, "luis")) {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}