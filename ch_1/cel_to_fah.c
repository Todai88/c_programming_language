#include <stdio.h>

int main (){
    printf("%s\t\t%s\n", "Celsius", "Fahrenheit");
    for (unsigned int i = 0; i <= 300; i+=20) {
        printf("%d\t  \t%.2lf\n", i, (i-32.0)*(5.0/9.0));
    }
}
