/*****************************************************
* Programa: Floyd1
*
* Descripción:
*   Este programa imprime el triángulo de Floyd
*   con los números correlativos de 1 a N
*   El valor de N se lee como dato
*******************************************************/

#include <stdio.h>

  int main(){
    int N;
    int total;
    const int final = 10;


    /*-- Leer el valor de la tabla --*/
    printf( " ¿Qué tabla de multiplicar quieres? \n");
    scanf( "%d", &N );

    /*-- Imprimir Cabecera --*/

    printf ( " Tabla de multiplicar por %2d \n", N);
    printf ( " ============================= \n" );

    for ( int k = 0; k <= final ; k++){
      total = k * N;
      printf ("%10d X %2d = %2d\n", N, k, total);
      }



}
