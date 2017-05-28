#include <stdio.h>
#define  MAXLINE 1000

char pattern[] = "ould";
int strindex (char s[], char t[]);
int getaline(char s[], int lim);

int main(void) {
    char line[MAXLINE];
    int found = 0;

    while(getaline(line, MAXLINE) > 0){
        printf("%s", line);
        if(found = (strindex(line, pattern) >= 0)) {
            printf("\nFound %s in %s on index %d", pattern, line, found);
        }
    }
        return 0;
}
