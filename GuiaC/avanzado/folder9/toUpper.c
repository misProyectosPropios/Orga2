#include <stdio.h>

char toUpper(char letra);
int main() {
	
	char a = toUpper('a');
	printf("Letra: %c", a);
	return 0;
}

/* Si es una letra minuscula entre 'a' y 'z', se va a convertir en su respectiva mayuscula.
 * Si no es una letra minuscula, se la devuelve tal cual
 * */
char toUpper(char letra) {
	int a = (int) 'a';
	int z = (int) 'z';

	if (letra < a || letra > z) {
		return letra;
	}
	int A = (int) 'A';
	int diferencia = A - a;
	char res = (char) letra + diferencia;
	return res;
} 
