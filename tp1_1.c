
#include <stdio.h>

int main (){
    printf ("hola mundo");
    int numero=35;
    int tamanio;
    int *puntero;
    puntero = &numero;
    printf ("\n %d",*puntero);
    printf("\n %p", puntero);
    printf ("\n %p", &numero);
    printf ("\n %p", &puntero);
    tamanio= sizeof(numero);
    printf( "\n %d", tamanio);
    return 0;
}