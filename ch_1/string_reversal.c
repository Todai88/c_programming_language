    #include <stdio.h>

    #define MAXLINE 1000

    int get_line(char line[], int limit);
    void reverse (char output[], char input[], int len);


    /*
    ** ## A simple program to take input
    ** ## and reverse it, printing the
    ** ## resulting array.
    */

    int main () {

        int len, max;
        char input[MAXLINE], output[MAXLINE];

        max = 0;

        /*
        ** ## Invoking get_line until length of supplied
        ** ## input is higher than 0.
        ** ## If higher then copies string into
        ** ## temporary placeholder and sets new max-length.
        */

        while((len = get_line(input, MAXLINE)) > 0) {
                reverse (output, input, len);
                printf("%s", "--------------------------------\n");
                printf("input: %s\nreversed: %s\n", input, output);
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

        line[index] = '\0';

        return index;
    }

    void reverse (char output[], char input[], int len) {
        int index;

        for (index = 0; index <= len; ++index) {
            output[index] = input[len - 1 - index];
        }
        output[index] = '\0';
    }
