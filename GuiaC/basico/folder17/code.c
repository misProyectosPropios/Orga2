#include <stdio.h>
//Constantes
#define FELIZ 0
#define TRISTE 1


int estado = TRISTE; // static duration. File scope

//Firmas de funciones
void ser_feliz();
void print_estado();

int main(){
    print_estado();
    ser_feliz();
    print_estado(); // qu´e imprime?
}

void ser_feliz(){
    estado = FELIZ;
}
void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
    //Primero imprime 'Estoy triste'
    //Luego, imprimire Estoy feliz
}