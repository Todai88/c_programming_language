/*
    itoa.c (i, s, w)
    @param i: integer
    @param s: char []
    @param w: width
    @returns a string representation of i with any excess (left) padding
            in blankspaces dependant on the width w.
*/



#include <stdio.h>
#include <math.h>

#define MAXLINE 100

unsigned numDigits(const unsigned n) {
    if (n < 10) return 1;
    return 1 + numDigits(n / 10);
}

void itoa(int number, char string_out [], int width) {

    int i = width;
    do {
        string_out[i] = (number > 0) ? number % 10 + '0' : ' ';
        number /= 10;
    } while ((i--) != 0);
    string_out[width + 1] = '\0';
}

int main () {

    char str [MAXLINE];
    if (numDigits(1030) > 10) {
        printf("Sorry, the number you provided was longer than 10 characters\n");
        return 1;
    }
    itoa(1030, str, 10);

    printf("Before: %d\nAfter: %s\n", 1030, str);

    return 0;
}
