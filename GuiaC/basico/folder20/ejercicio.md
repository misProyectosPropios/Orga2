El siguiente esquema de programa muestra solo definiciones de funciones y de variables.
Indicar el scope y duración de cada variable.


```c
int b, c; //variables globales
void f(void)
{
  int b, d; //Variables locales
}

void g(int a) { //Variable local
  int c;        //Variable local
  {
  int a, d;     //Variable sub locales
  }
}
```