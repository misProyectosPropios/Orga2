#include <stdlib.h>
#include <stdio.h>

int main() {

    int cantApariciones[] = {0,0,0,0,0,0};
    for(int i = 0; i < 6000000; i++) {
        int roll = rand() / ((RAND_MAX + 1u)/6);
        cantApariciones[roll]++;
    }

    for(int i = 0; i < 6; i++) {
        printf("%d: %d\n", (i + 1), cantApariciones[i]);
    }
    return 0;
}