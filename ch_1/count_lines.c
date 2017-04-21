#include <stdio.h>

#define NEWLINE '\n'
int main () {

    int c, nl;

    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == NEWLINE) {
            ++nl;
        }
    }
    printf("%d\n", nl);
}
