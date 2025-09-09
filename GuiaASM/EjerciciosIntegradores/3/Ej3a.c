#include "../ejs.h"

// Función auxiliar para contar casos por nivel
void contar_casos_por_nivel(caso_t* arreglo_casos, int largo, int* contadores) {
    contadores[0] = 0;
    contadores[1] = 0;
    contadores[2] = 0;
    for(int i = 0; i  < largo; i++) {
        caso_t caso = arreglo_casos[i];
        usuario_t usuario = *(caso.usuario);
        contadores[usuario.nivel]++;
    }
}


segmentacion_t* segmentar_casos(caso_t* arreglo_casos, int largo) {
    segmentacion_t* segmento = (segmentacion_t*) malloc(24);   
    segmento->casos_nivel_0 = 0; // segmentacion_t {0,0,0};

    int contadores[] = {0,0,0};
    contar_casos_por_nivel(arreglo_casos, largo, contadores);
    segmento->casos_nivel_0 = malloc(16 * contadores[0]);
    segmento->casos_nivel_1 = malloc(16 * contadores[1]);
    segmento->casos_nivel_2 = malloc(16 * contadores[2]);
    //Reservo memoria para esto basandome en lo que se conto
    int pos[] = {0,0,0};
    for(int i = 0; i < largo; i++) {
        caso_t caso = arreglo_casos[i];
        usuario_t usuario = *(caso.usuario);
        if (usuario.nivel == 0) {
            segmento->casos_nivel_0[pos[0]] = arreglo_casos[i]; 
        } else if (usuario.nivel == 1) {
            segmento->casos_nivel_1[pos[1]] = arreglo_casos[i];
        } else {
            segmento->casos_nivel_2[pos[2]] = arreglo_casos[i];
        }
        pos[usuario.nivel]++;
    }
}
