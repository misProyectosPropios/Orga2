#include <stdio.h>

#define FELIZ 0
#define TRISTE 1

int estado = TRISTE; // static duration. File scope

void alcoholizar();
void print_estado();

int main(){
    print_estado();                             //Imprime Estoy triste
    alcoholizar();                              // cantidad = 1
    print_estado();                             //Imprime Estoy feliz   
    alcoholizar();alcoholizar();alcoholizar();  // cantidad = 1 + 1 + 1 + 1 = 4
    print_estado(); // que imprime?             //Imprime Estoy triste

    //El static hace una forma de preservación de la variable en una función, a pesar de no estar más en el scope de la función
}

void alcoholizar(){
    static int cantidad = 0; // static duration. block scope
    cantidad++;
    if(cantidad < 3){
        estado = FELIZ;
    }else{
        estado = TRISTE;
    }
}
void print_estado(){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}