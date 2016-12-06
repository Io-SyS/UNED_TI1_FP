/*************************************************
* Programa: Primos
*
* Dscripción:
*   Este programa imprime una tabla de números
*   primos, tabulando a cuatro columnas
**************************************************/

#include <stdio.h>

/*==================
  Constatante global
====================*/

const int N = 100;

/*==================
  Variable global
====================*/

int columna;

/*===================================================
  Función para ver si un valor "k" es unnúmero primo
=====================================================*/

bool EsPrimo ( int k ){
  for (int d = 2; d <= k-1; d++){
    if ((k%d) == 0){
      return false;
    }
  }
  return true;
}

/*=======================================
  Procedimiento para imprimir tabulando
  a 4 columnas de 15 caracteres
========================================*/

void ImprimirTabulando( int k ){
  if (columna > 4) {
    columna = 1;
    printf( "\n");
  }
  printf( "%15d", k );
  columna++;
}

/*======================
    Programa Principal
  ======================*/

int main(){
  columna = 1;
  for (int k = 1; k<=N; k++){
    if(EsPrimo(k)){
      ImprimirTabulando( k );
    }
  }
  printf("\n");
}
