#include <stdio.h>

int i; // inicializada a 0

void funcion() {
    int i = 1; // variable local
    printf("i = %d\n", i); // imprime 1
}

int main() {
    funcion();
    printf("i = %d\n", i); // imprime 0

    int i = 100;
    printf("i = %d\n", i); // imprime 100
    return 0;
}