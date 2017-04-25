/*

for (i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
    s[i] = c;

## Exercise 2.2: Write a loop equivalent
## to the for loop above without using && or ||.

*/

#include <stdio.h>

#define MAXLINE 1000

int get_line(char input[], int limit);

int main () {

    char input[MAXLINE];
    int len;
    while((len = get_line(input, MAXLINE)) > 0) {
        printf("\nYou wrote: %s", input);
    }
    return 0;
}

int get_line(char input[], int limit) {
    int current, index = 0;

    while (index < limit - 1) {
        if ((current = getchar()) != '\n') {
            if (current != EOF) {
                input[index] = current;
                ++index;
                continue;
            }
        }
        break;
    }
    input[index] = '\0';
    return index;
}
