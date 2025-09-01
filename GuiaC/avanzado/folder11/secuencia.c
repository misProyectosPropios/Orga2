#include <stdint.h>

uint16_t *secuencia(uint16_t n) {
    uint16_t arr[n];
    for(uint16_t i = 0; i < n; i++)
        arr[i] = i;
    return arr;
}