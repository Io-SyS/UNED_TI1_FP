/************************************************
* Programa: Fibonacci
*
* Descripción:
*   Este programa imprime todos los términos
*   de la serie de Fibonacci dentro del rango de
*   valores positivos del tipo int: (1 .. INT_MAX)
*   Se imprime tabulando a cuatro columnas
**************************************************/

#include <stdio.h>
#include <limits.h>


/*================
  Variable global
==================*/

int columna;


/*=======================================
  Procedimiento para imprimir tabulando
  a 4 columnas de 15 caracteres
=========================================*/

void ImprimirTabulando(int k){
  if(columna > 4){
  columna = 1;
  printf("\n");
  }
  printf("%15d", k );
  columna++;
}


/*===================
  Programa principal
=====================*/

int main(){
  int termino;
  int anterior;
  int aux;

  /*-- Iniciar la tabulación --*/
  columna = 1;

  /*-- Generar el comienzo de la serie --*/
  anterior = 0;
  termino = 1;
  ImprimirTabulando( anterior );
  ImprimirTabulando( termino );

  /*-- Generar el resto de la serie --*/
  while (INT_MAX - termino >= anterior){
  aux = termino + anterior;
  anterior = termino;
  termino = aux;
  ImprimirTabulando ( termino );
  }
  printf("\n");
}
