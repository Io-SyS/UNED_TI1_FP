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
  int linea = 0;
  int primero = 0;
  int ultimo = 0;

  /*-- Leer límite de la serie --*/
  printf( " ¿Límite de la serie? ");
  scanf( "%d", &N );

  /*-- Imprimir el triángulo mediante un bucle de números --*/

  while (ultimo < N){

      printf( "\n" );
      linea++;
      primero = ultimo+1;
      ultimo = ultimo+linea;


    if (ultimo > N){
      ultimo = N;
      }

  /*-- Imprimir los números --*/

  for (int k = primero; k <= ultimo; k++){
    printf("%5d", k );
    }
    printf("\n");
    }
}
