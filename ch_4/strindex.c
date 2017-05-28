/*
    strindex.c (s, t)
    @param s: char[]
    @param t: char []
    @returns Returns the rightmost index of t in s.
*/
#include <stdio.h>


int strindex (char s[], char t[]){
    int i, j, k, l, lastInstance = -1;
    for(i = 0; s[i] != '\0'; i++) { // loop until hitting end
        for(j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
        ;
        //printf("Looking in %s for %s\n", s, t);
        if((k > 0) && t[k] == '\0')
            lastInstance = i;
    }
    return lastInstance;
}
