/****************************************************
*Programa: Baldosas
*
*Descripción:
* Este programa calcula el costo de las baldosas
* necesarias para cubrir una habitación rectangular
******************************************************/

#include <stdio.h>

int main (){
  int largo, ancho;
  int lado;
  int nLargo;
  int nAncho;
  int baldosas;
  float precio;
  float coste;

/*-- Leer los datos --*/
  printf( "Dar el tamaño de la habitación, en m\n" );
  printf( "¿Largo, ancho? " );
  scanf( "%d,%d", &largo, &ancho);
  printf( "¿Lado de la baldosa, en cm? " );
  scanf( "%d", &lado );
  printf( "¿Precio de cada baldosa, en euros? " );
  scanf( "%f", &precio );

/*-- Calcular el número de baldosas--*/{
  /*-- Calcular las baldosas a lo largo, por exceso--*/ {
    nLargo = (largo * 100 + lado - 1) / lado;
  }
  /*--Calcular las baldosas a lo ancho, por exceso--*/ {
    nAncho = (ancho * 100 + lado - 1) / lado;
  }
  /*--Calcular el número total de baldosas--*/  {
    baldosas = nLargo * nAncho;
  }
}
/*--Calcular el coste total--*/{
  coste = baldosas * precio;
}
/*--Imprimir el resultado--*/{
  printf( " Total %5d baldosas \n", baldosas);
  printf( " Coste %8.2f euros \n", coste );
}
}


