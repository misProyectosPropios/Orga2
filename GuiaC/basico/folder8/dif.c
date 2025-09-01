#include <stdio.h>

int main() {
    int i = -2;
    int cantIteraciones = 0;
    printf("Con i++: ");
    while(i++) {
        cantIteraciones++;
        printf("Esta es la iteración: %d. i: %d\n", cantIteraciones, i);
    }

    i = -2;
    cantIteraciones = 0;
    printf("Con i++: \n");
    while(++i) {
        cantIteraciones++;
        printf("Esta es la iteración: %d. i: %d\n", cantIteraciones, i);
    }
}