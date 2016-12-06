/*****************************************************
* Programa: Floyd1
*
* Descripci�n:
*   Este programa imprime el tri�ngulo de Floyd
*   con los n�meros correlativos de 1 a N
*   El valor de N se lee como dato
*******************************************************/

#include <stdio.h>

  int main(){
  int N;
  int linea = 0;
  int primero = 0;
  int ultimo = 0;

  /*-- Leer l�mite de la serie --*/
  printf( " �L�mite de la serie? ");
  scanf( "%d", &N );

  /*-- Imprimir el tri�ngulo mediante un bucle de n�meros --*/

  while (ultimo < N){

      printf( "\n" );
      linea++;
      primero = ultimo+1;
      ultimo = ultimo+linea;


    if (ultimo > N){
      ultimo = N;
      }

  /*-- Imprimir los n�meros --*/

  for (int k = primero; k <= ultimo; k++){
    printf("%5d", k );
    }
    printf("\n");
    }
}
