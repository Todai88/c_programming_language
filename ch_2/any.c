/**
 * Exercise 2.5:
 * any (s1, s2).
 * Return the index of first character from s2 in s1.
 */

 /**
  * toUpper
  * @param  c, int >= 0.
  * @return ASCII value of upper-case representation of @c if @c is lower-case.
  */
#include <stdio.h>

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
 * any (s1, s2).
 * @param s1, string length >= 0
 * @param s2, string length >= 0
 * @return first occurance of a characeter in s2 in s1.
 */

int any (const char *s1, const char *s2) {

    int index;
    for ( index = 0; s1[index] != '\0'; index++ )
        if (contains(s1[index], s2))
            return index;
    return -1;
}

int main () {
    const char *s1 = "Where are the items?";
    const char *s2 = "AEIOU";

    printf("First occurance of a character \"%s\" in \"%s\" has index %d", s2, s1, any(s1, s2) + 1);
}
