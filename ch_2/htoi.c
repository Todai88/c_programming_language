/*
    Exercise 2.3
    htoi (s):
    INPUT : String representation of a hexadecimal. (may or may not have prefix '0x').
    OUTPUT: The resulting integer of the passed hexadecimal.
*/

#include <stdio.h>
#include <string.h>

int htoi (const char *hex);  /* returns the accumulated result of the whole hexadecimal string. */
int getRawInt(char c); /* returns the numerical representation of a hexadecimal digit. */

int main () {
    const char *hex = "33A";
    const char *hex_two = "F33BA";
    printf("Hexadecimal %s in decimal form is %d\n", hex, htoi(hex));
    printf("Hexadecimal %s in decimal form is %d\n", hex_two, htoi(hex_two));
}

int htoi (const char *hex) {
    const int LENGTH = strlen(hex) - 1;
    int power = 1;
    int sum = 0;

    /*
       Going to iterate backwards over the string as lowest
       hexadecimal values should be in the back and increase
       as we iterate towards the front.
    */
    for (int index = LENGTH; index >= 0; index--) {
        sum += getRawInt(hex[index]) * power;
        power *= 16;
    }
    return sum;
}
/*
    Takes a character and returns its numerical representation.
*/
int getRawInt(char current) {
    if (current >= 'A' && current <= 'Z')
        return current - 'A' + 10;
    return current - '0';
}
