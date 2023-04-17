#include <cs50.h>
#include <stdio.h>

bool triangle (int a, int b, int c) {
    if (a > 0 && b > 0 && c > 0){
        if ( a + b >= c && a + c >= b && c + b >= a ) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}


int main (void) {

    int a = get_int("Give me an integer: \n");
    int b = get_int("Give me an integer: \n");
    int c = get_int("Give me an integer: \n");

    if (triangle(a, b, c)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
}