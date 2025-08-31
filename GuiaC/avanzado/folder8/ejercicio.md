Pensar si existe una diferencia entre definir un string como str1 o como str2 en el siguiente código:


'''
//Snippet 24:

int main(){
  char *str1 = "Hola";
  char str2[] = "Hola";
  printf("%s\n", str1);
  printf("%s\n", str2);
  return 0;
}
'''

¿Es lo mismo? Parte de la solución es pensar en la memoria. Veremos un poco más
adelante como se organiza la memoria en C.
