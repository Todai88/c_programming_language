/*
    Exercise 2.4
    squeeze (s1, s2): Remove all characters of s2 in s1.
    INPUT : s1.length >= s2 > 0.
    OUTPUT: The rest of s1 after deleting all occurances of letters in s2.
*/

#include <stdio.h>


/**
 * toUpper
 * @param  c, int >= 0.
 * @return ASCII value of upper-case representation of @c if @c is lower-case.
 */

int toUpper (int c) {
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else
        return c;
}

/**
 * [contains description]
 * @param  toCheck, int >= 0.
 * @param  toRemove, length >= 0.
 * @return indicator if toRemove contains toCheck (1) else (0).
 */

int contains(int toCheck, const char *toRemove) {
    int index = 0;

    while (toRemove[index] != '\0') {
        if (toUpper(toCheck) == toRemove[index]){
            return 1;
        }
        index++;
    }
    return 0;
}

/**
 * squeeze removes all occurences of s2 in s1.
 * @param s1, char[] length >= 0.
 * @param s2, constant string with length >= 0.
 * @returns is void, but will return s1 (byref) with all occurences of s2 removed.
 */

void squeeze (char s1[], const char *s2) {
    int index, left_shift;

    for (index = 0, left_shift = 0; s1[index] != '\0'; index++) {
        if (contains(s1[index], s2))
            continue;
        s1[left_shift] = s1[index];
        left_shift++;
    }
    s1[left_shift] = '\0';
}

int main () {
    char s1[] = "I am a test.";
    const char *s2 = "AE";
    printf("Before manipulation: %s\n", s1);
    squeeze(s1, s2);
    printf("After manipulation:  %s", s1);
}
