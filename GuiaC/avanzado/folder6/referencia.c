#include <stdio.h>
#include <stdint.h>

int main() {
	int8_t memoria[2] = {255, -128};
	uint8_t *x = (uint8_t*) memoria;
	int8_t *y = memoria + 1;
	printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
	printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
	return 0;
}
