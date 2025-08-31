#include <stdio.h>

struct monstruo_t {
	char* nombre;
	int vida;
	double ataque;
	double defensa;
};


struct monstruo_t evolution(struct monstruo_t monstruo);

int main() {

	struct monstruo_t monstruo = {"Hitler", 20, 50, 20};
	struct monstruo_t monstruo_evo = evolution(monstruo);

	printf("Nombre: %s Vida: %d Ataque: %f Defensa %f", monstruo_evo.nombre, monstruo_evo.vida, monstruo_evo.ataque, monstruo_evo.defensa);
}


struct monstruo_t evolution(struct monstruo_t monstruo) {
	monstruo.ataque += 10;
	monstruo.defensa += 10;
	return monstruo;
}
