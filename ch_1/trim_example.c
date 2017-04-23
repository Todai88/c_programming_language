#include <stdio.h>

/*
** A primitive trimmer
** to remove any superflous
** whitespaces in a given
** string (input).
*/
#define IO_CHARACTER_ARRAY_SIZE 100

int main () {

    /*
    ** Setting up the variables
    **
    ** Working with static
    ** arrays since I haven't
    ** been introduced to dynamic.
    */
    char input [IO_CHARACTER_ARRAY_SIZE],
         ouput [IO_CHARACTER_ARRAY_SIZE];

    fgets(input, 100, stdin);
    int inputIndex = 0, outPutIndex = 0;

    // Looping over input until hitting
    // an item containing a null-char.
    while ((inputIndex < IO_CHARACTER_ARRAY_SIZE) && input[inputIndex] != '\0') {
        if (input[inputIndex] == ' ') { // hitting first space.
            int tempIndex = inputIndex + 1;     // initiating temporary counter.
            if (input[tempIndex] != '\0') {
                               // find index of first non-space
                               // character after initial space.
                while (input[tempIndex] != '\0' && input[tempIndex] == ' ') {
                    if (input[tempIndex] == ' ') {
                        inputIndex++; // keep indexing input-index
                    }
                    tempIndex++; // keep incrementing temporary indexer.
                }
            }
        }
        ouput[outPutIndex] = input[inputIndex]; // insert non-space item into output.
        inputIndex++;                 // increment input-indexer.
        outPutIndex++;                 // prepare output-indexer for next non-space.
    }
    printf("%s", ouput);    // print trimmed input.
}
