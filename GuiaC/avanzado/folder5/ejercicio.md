¿Por qué x e y tienen distintos tipos? ¿Qué representan?

```c
#include <stdio.h>
#include <stdint.h>
int main(){
    uint8_t *x = (uint8_t*) 0xF0;
    int8_t *y = (int8_t*) 0xF6;
    printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
    printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
    //Devolver´a:
    // Dir de x: 0xF0 Valor: 255
    // Dir de y: 0xF6 Valor: -128
}

```