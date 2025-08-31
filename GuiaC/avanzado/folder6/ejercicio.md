Completar los ?? en el siguiente c´odigo:

'''c
//Snippet 13:
#include <stdio.h>
#include <stdint.h>

int main(){
  int8_t memoria[??] = ??;
  uint8_t *x = (uint8_t*) ??;
  int8_t *y = ??;
  printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
  printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
}
'''


Pista: ¿Para qué sirve el operador &? Revisar los ejemplos de código anteriores o ver la
sección Declaración vs Desreferencia.
