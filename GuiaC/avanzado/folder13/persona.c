#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

struct persona_t {
    char *nombre;
    uint16_t edad;
};

struct persona_t* crearPersona(char *nombre, uint16_t edad);
void liberarMemoria(struct persona_t* aLiberar);



struct persona_t* crearPersona(char *nombre, uint16_t edad) {

    struct persona_t* arr = malloc(sizeof(struct persona_t));
    if (arr == NULL) {
        return NULL;
    }
    arr->edad = edad;
    arr->nombre = malloc(strlen(nombre) + 1); 
    if (!arr->nombre) {
        free(arr);
        return NULL;
    }
    strcpy(arr->nombre, nombre);
    return arr;
}

void liberarMemoria(struct persona_t* aLiberar) {
    free(aLiberar->nombre);
    free(aLiberar);    
}

int main() {

    struct persona_t* persona_dir = crearPersona("Favaloro", 77);
    printf("La persona: nombre: %s, Edad: %d", persona_dir->nombre, persona_dir->edad);

    liberarMemoria(persona_dir);
}
