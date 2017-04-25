#include <stdio.h>

#define MAXLINE 1000

int get_line(char input[], int limit, char openers[], int *open_index);
int match (char input[], char openers[], int open_index);


/*
 ## A simple program to take input
 ## and print an indicator on if the
 ## input contains correct matches
 ## of brackets, braces and paranthesis
*/

int main () {

    int len, max, missmatch;
    int open_index = 1;
    char input[MAXLINE], openers[MAXLINE];
    openers[0] = '\0';
    max = 0;

    /*
    ** ## Invoking get_line until length of supplied
    ** ## input is higher than 0.
    */
    while((len = get_line(input, MAXLINE, openers, &open_index)) > 0) {
        if (len > max) {
            max = len;
            missmatch = match (input, openers, open_index);

            if (missmatch == 0) {
                printf("%s", "This seems correct.");
            } else {
                printf("%s", "Incorrect!");
            }
        }
    }
    return 0;
}

    /*
    ## Read a line of input supplied by the user going letter by letter.
    ## If the letter is (open) bracket, brace or paranthesis the letter
    ## is placed in a separate array and an int pointer is incremented.
    ## Finally the lenght of the input is returned.
    */
int get_line(char line[], int limit, char openers[], int *open_index) {

    int current, index;

    for (index = 0; index < limit -1 && (current = getchar()) != EOF && current != '\n'; ++index){
        if (current == '{' || current == '[' || '('){
            openers[*open_index] = current;
            *open_index += 1;
        }
        line[index] = current;
    }
    printf("%d\n", open_index);
    line[index] = '\0';
    return index;
}

    /*
    ## Takes two arrays and an integer to containing the length of
    ## the array with the open brackets, braces and paranthesis.
    ## Here the open array is matched with any closed letters
    ## that are found whilst iterating over the input.
    ## Returns an integer that symbolizes correct(0) and incorrect(1)
    ## exit status.
    */

int match (char input[], char openers[], int open_index) {

    int index = 0;
    while (input[index] != '\0') {
        if (input[index] == '}') {
            printf("%s (%c, %c)\n", "Testing ",openers[open_index - 1] , input[index]);
            if (openers[open_index - 1] != '{'){
                return 1;
            }
            open_index--;
        } if (input[index] == ']') {
            printf("\n%s (%c, %c)\n", "Testing ",openers[open_index- 1] , input[index]);
            if (openers[open_index - 1] != '[') {
                return 1;
            }
            open_index--;
        } if (input[index] == ')') {
            printf("\n%s (%c, %c)\n", "Testing ",openers[open_index- 1] , input[index]);
            if (openers[open_index - 1] != '(') {
                return 1;
            }
            open_index--;
        }
        ++index;
    }
    return 0;
}
