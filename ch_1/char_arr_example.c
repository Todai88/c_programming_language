#include <stdio.h>

#define MAXLINE 1000

int get_line(char line[], int limit);
void copy(char to[], char from[]);


/*
** ## A simple program to take input
** ## and return the longest string of
** ## characters.
*/

int main () {

    int len, max;
    char line[MAXLINE], longest[MAXLINE];

    max = 0;

    /*
    ** ## Invoking get_line until length of supplied
    ** ## input is higher than 0.
    ** ## If higher then copies string into
    ** ## temporary placeholder and sets new max-length.
    */ .
    while((len = get_line(line, MAXLINE)) > 0) {
        if (len > max) {
            max = len;
            copy (longest, line);
        }
    }

    if (max > 0) {
        printf("Longest string: %sLength: %d\n", longest, max);
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

void copy (char to[], char from[]) {

    int index = 0;

    while ((to[index] = from[index]) != '\0')
        ++index;
}
