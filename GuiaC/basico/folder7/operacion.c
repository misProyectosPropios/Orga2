#include <stdio.h>

int main() {

    int a = 5, b = 3, c = 2, d = 1;
    printf("Operación: a + b * c / d. \nResultado: %d\n", a + b * c / d);
    printf("Operación: a %% b \nResultado: %d\n", a % b);
    printf("Operación: a == b \nResultado: %d\n", a == b);
    printf("Operación: a!= b  \nResultado: %d\n", a != b);
    printf("Operación: a & b \nResultado: %X\n", a & b);
    printf("Operación: a | b \nResultado: %X\n", a | b);
    printf("Operación: -a \nResultado: %X\n", -a);
    printf("Operación: a && b \nResultado: %X\n", a && b);
    printf("Operación: a || b \nResultado: %X\n", a || b);
    printf("Operación: a << 1 \nResultado: %X\n", a << 1);
    printf("Operación: a >> 1\nResultado: %X\n", a >> 1);
    printf("Operación: a += b \nResultado: %X\n", a += b);
    printf("Operación: a -= b \nResultado: %X\n", a -= b);
    printf("Operación: a *= b \nResultado: %X\n", a *= b);
    printf("Operación: a /= b \nResultado: %X\n", a /= b);
    printf("Operación: a %%= b \nResultado: %X\n", a %= b);
}