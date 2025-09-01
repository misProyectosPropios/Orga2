Explicar qué sucedería si la firma de la función swap fuera void swap(int a, int b).
En ese caso, ¿podríamos intercambiar los valores de x e y?

```c
void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x: %d, y: %d\n", x, y);
}
```