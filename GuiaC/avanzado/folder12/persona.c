#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

struct persona_t {
    char *nombre;
    uint16_t edad;
};

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

int main() {

    struct persona_t* persona_dir = crearPersona("Favaloro", 77);
    printf("La persona: nombre: %s, Edad: %d", persona_dir->nombre, persona_dir->edad);

    free(persona_dir->nombre);
    free(persona_dir);    
}
