## ca(\*p)[VIDEO COLS] = (ca(\*)[VIDEO COLS])VIDEO;

Se encarga de reinterpretar la misma estructura, pero tomandola como una lista de listas de tamaño video cols

## Porque funciona p[f][c].c = ' ';

Funciona p porque es un puntero que apunta a listas. Estas listas sabemos que tienen tamaño fijo, entonces va a funcionar el tema.
Entonces para desreferenciar hacen la cuenta: (row * col + col) dandole el resultado


## si en vez de ca(*p)[VIDEO COLS] hubi´eramos declarado ca** p?

No podrìamos haber hecho [][], pues no puede saber el tamaño que va a tener caga sublista y por lo tanto no podría hacer la desreferenciación

