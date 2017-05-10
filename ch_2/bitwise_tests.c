/**
 * Testing out some bitwise statements
 **/

#include <stdio.h>

int main () {
    int x = 64;
    int y = 2;
    printf("==============================\n");
    printf("  If x = %d, y = %d.   Then:\n", x, y);
    printf("==============================\n");
    printf("      x  &  y     =\t%d\n", x & y);
    printf("      x  &  0177  =\t%d\n", x & 0177);
    printf("      x  |  y     =\t%d\n", x | y);
    printf("      x  && y     =\t%d\n", x && y);
    printf("      x  || y     =\t%d\n", x || y);
    printf("      x  ^  y     =\t%d\n", x ^ y);
    x = 7;
    y = 11;
    printf("==============================\n");
    printf("  If x = %d, y = %d.   Then:\n", x, y);
    printf("==============================\n");
    printf("      x  >>  2  =\t%d\n", x >> 2);
    printf("      y  >>  2  =\t%d\n", y >> 2);
    printf("      x  <<  2  =\t%d\n", x << 2);
    printf("      y  <<  2  =\t%d\n", y << 2);
    printf("      x  &~  y  =\t%d\n", x & ~ y);
}
