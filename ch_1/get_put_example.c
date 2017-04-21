#include <stdio.h>

int main () {

    // printing input to cli

    int c;
    // printing the representation of EOF:
    printf("EOF is: %d\n", EOF);
    /*
    Presence of brackets in below loop
    tells the compiler that the
    operations in brackets get
    presidence.
    */
    while((c = getchar()) != EOF) {
        putchar(c);
    }
}
