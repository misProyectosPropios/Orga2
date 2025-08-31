#include <stdio.h>

struct monstruo_t {
	char* nombre;
	int vida;
	double ataque;
	double defensa;
};

int main() {
	struct monstruo_t array[] = {
		{"Thanos", 10000, 25.9, 12.2},
		{"Dracula", 10000000, 300, 1}	
	};

	int largo = 2;
	for (int i = 0; i < largo; i++) {
		printf("Nombre: %s  Vida: %d Ataque: %f Defensa: %f", array[i].nombre, array[i].vida, array[i].ataque, array[i].defensa);
	}
}
