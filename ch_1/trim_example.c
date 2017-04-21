#include <stdio.h>

/*
** A primitive trimmer
** to remove any superflous
** whitespaces in a given
** string (input).
*/

int main () {

    /*
    ** Setting up the variables
    **
    ** Working with static
    ** arrays since I haven't
    ** been introduced to dynamic.
    */
    char input [100], blank[100];
    fgets(input, 100, stdin);
    int i = 0, k = 0;

    // Looping over input until hitting
    // an item containing a null-char.
    while (input[i] != '\0') {
        if (input[i] == ' ') { // hitting first space.
            int j = i + 1;     // initiating temporary counter.
            if (input[j] != '\0') {
                               // find index of first non-space
                               // character after initial space.
                while (input[j] != '\0' && input[j] == ' ') {
                    if (input[j] == ' ') {
                        i++; // keep indexing input-index
                    }
                    j++; // keep incrementing temporary indexer.
                }
            }
        }
        blank[k] = input[i]; // insert non-space item into output.
        i++;                 // increment input-indexer.
        k++;                 // prepare output-indexer for next non-space.
    }
    printf("%s", blank);    // print trimmed input.
}
