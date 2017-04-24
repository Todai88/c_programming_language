#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int limit);
void add_to_end(char to[], char from[], int current_end);


/*
** ## A simple program to take input and
** ## return all lines longer than 80
** ## characters.
*/

int main () {

    int len, max;
    char line[MAXLINE], output[MAXLINE];

    max = 0;
    int current_end = 0;
    /*
    ** ## Invoking get_line until length of supplied
    ** ## input is lower than 0.
    ** ## If higher length is higher than 80,
    ** ## it copies the input into output.
    */
    while((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80) {
            current_end += max;
            max = len;
            add_to_end (output, line, current_end);
        }
    }

    if (max > 0) {
        printf("Longest string: %sLength: %d\n", output, max);
    }

    return 0;
}

    /*
    ** ## Reads a line of input then iterate over
    ** ## the input. When hitting EOF it adds a
    ** ## newline character '\n' to the end
    ** ## of the input and returns the length
    ** ## of input.
    */
int get_line(char line[], int limit) {

    int current, index;

    for (index = 0; index < limit -1 && (current = getchar()) != EOF && current != '\n'; ++index)
        line[index] = current;

    if (current == '\n') {
        line[index] = current;
        ++index;
    }
    line[index] = '\0';
    return index;
}

void add_to_end (char output[], char from[], int current_end) {

    int index = 0;

    while ((output[current_end + index] = from[index]) != '\0')
        ++index;
}
