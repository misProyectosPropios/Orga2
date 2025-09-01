La idea de la función es alocar un array en el heap e inicializar sus valores con el valor
pasado por parámetro ¿Qué sucede si corremos el código anterior?

```c

void allocateArray(int *arr, int size, int value) {
    arr = (int*)malloc(size * sizeof(int));
    if(arr != NULL) {
        for(int i=0; i<size; i++) {
            arr[i] = value;
        }
    }
}

    // Uso
    int *vector = NULL;
    allocateArray(vector,5,45);
    for(int i = 0; i < 5; i++)
        printf("%d\n", vector[i]);
    free(vector);

```
