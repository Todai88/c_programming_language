/* lower: convert c to lower case; ASCII only */

#include <stdio.h>
#define MAXLINE 1000

int lower(int c);
int get_line(char input[], int limit);

int main () {

    int len, index;
    char input[MAXLINE];

    while((len = get_line(input, MAXLINE)) > 0) {
        printf("Before: %s\n", input);
        printf("After: ");
        for (index = 0; index < len && input[index] != '\0'; ++index)
            printf("%c", lower(input[index]));
    }
    return 0;
}

int get_line(char input[], int limit) {

    int current, index;

    for (index = 0; index < limit -1 && (current = getchar()) != EOF && current != '\n'; ++index)
        input[index] = current;

    if (current == '\n') {
        input[index] = current;
        ++index;
    }
    input[index] = '\0';
    return index;
}

int lower(int current) {
    if (current >= 'A' && current <= 'Z')
        return current + 'a' - 'A';
    else
        return current;
}
