#include <stdio.h>

/** bitcount
** @number, int || supplied integer >= 0.
** @returns a sum of the amount of 1-bits in @number..
**/

int bitcount(int number) {
        int bits;

        for ( bits = 0; number != 0; number >>= 1 )
            if (number & 01)
                bits++;
        return bits;
}

int main () {
    int first = 11, second = 10, third = 60;

    printf("Bitcount of %d is: %d\n", first, bitcount(first));
    printf("Bitcount of %d is: %d\n", second, bitcount(second));
    printf("Bitcount of %d is: %d\n", third, bitcount(third));
}
