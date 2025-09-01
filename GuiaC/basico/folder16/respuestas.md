¿Qué imprime el programa anterior? Traten de entender cómo se manifiestan el scope y
la duración de cada variable.

```c

#include <stdio.h>
#define FELIZ 0
#define TRISTE 1 //Genera constantes globales que se llaman feliz y triste

//Creación de firmas de funciones
void ser_feliz(int estado); 
void print_estado(int estado);

int main(){
    int estado = TRISTE; // automatic duration. Block scope
    ser_feliz(estado);
    print_estado(estado); // qué imprime?
}

void ser_feliz(int estado){
    estado = FELIZ; //Asigna a la variable estado local como feliz
}

void print_estado(int estado){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste"); //Imprimmi estoy triste
}
```