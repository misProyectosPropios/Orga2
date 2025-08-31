#include <stdio.h>

int main() 
{
    double doubleVar = 0.1;
    float floatVar = 0.1;
    printf("Double: %f\n", doubleVar);
    printf("Float: %f\n", floatVar);

    int intFloat = (int) floatVar;
    int intDouble = (int) doubleVar;

    printf("Int from float: %i\n", intFloat);
    printf("Int from double: %i\n", intDouble);
}