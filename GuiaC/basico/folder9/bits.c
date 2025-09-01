#include <stdio.h>

int main() {
    int word1 = 0x15;  // 0b10101 = 21 decimal
    int word2 = 0x15;

    word1 = word1 >> 29;
    int top3 = word1 & 0x7; // 0x7 = 111 en binario
    int bottom3 = word2 & 0x7; // 0x7 = 111 en binario

    if (top3 == bottom3) {
        printf("Los 3 bits coinciden.\n");
    } else {
        printf("Los 3 bits NO coinciden.\n");
    }
}