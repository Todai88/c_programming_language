/***
**
**  Exercise 2.10
**  Rewrite lower(int c) to use a conditional statement
**  instead of a if-statement.
**
***/

/***
**  int tolower (int c)
**  @c, int. an ASCII representation of a character
**  @returns returns the ASCII representation of @c in lower-case
***/
int tolower(int c) {

    return (c >= 65 && c <= 90) ? c + 32 : c;
}

int main () {

    char first = 'A', second = 'B', third = 'Z';
    printf("\t>>> \'%c\' as lower case is \'%c\'\n", first, tolower(first));
    printf("\t>>> \'%c\' as lower case is \'%c\'\n", second, tolower(second));
    printf("\t>>> \'%c\' as lower case is \'%c\'\n", third, tolower(third));
    printf("\t>>> \'%c\' as lower case is \'%c\'\n", '.', tolower('.'));
    return 0;
}
