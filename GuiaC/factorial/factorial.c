#include <stdio.h>

int factorial(int valor);

int main() {
	int n;
	printf("Ingrese nùmero a calcular factorial: ");
	scanf("%d", &n);
	int fact = factorial(n);
	printf("El factorial es: %d", fact);
	return 0;
}

int factorial(int valor) {
	if (valor == 0) {
		return 1;
	}
	return valor * (factorial (valor - 1));
}
