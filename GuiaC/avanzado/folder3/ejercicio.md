Sin correr el código, responder:
¿Cuál es la diferencia entre x y p? ¿Y entre x y &x? ¿Y entre p y *p?
¿Qué valores creen que se van a imprimir por terminal?


```c

#include <stdio.h>
int main(){
    int x = 42;
    int *p = &x;
    printf("Direccion de x: %p Valor: %d\n", (void*) &x, x);
    printf("Direccion de p: %p Valor: %p\n", (void*) &p, (void*) p);
    printf("Valor de lo que apunta p: %d\n", *p);
}

```