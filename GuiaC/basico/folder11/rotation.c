#include <stdio.h>

int main() {
    int array[] = {1,2,3,4};
    int largo = 4;

    int primero = array[0];

    for(int i = 0; i < largo - 1; i++) {
        array[i] = array[i + 1];
    }
    array[largo - 1] = primero;

    printf("El array rotado: \n");
    for(int i = 0; i < largo; i++) {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}