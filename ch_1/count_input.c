#include <stdio.h>

/*
A quick little snippet to count
and print the user's input.
*/
int main () {

    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
