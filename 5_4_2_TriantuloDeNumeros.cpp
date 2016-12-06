/*********************************************************
* Programa: TrianguloDeNumeros
*
* Descripción:
*   Este programa escribe un triángulo de dígitos.
*   La altura se lee como dato y debe ser menor de 10
*
**********************************************************/

#include <stdio.h>

int main(){
  const int centro = 35;
  const int inicial = 1;
  int nivel;

  /*-- Leer los datos --*/{
    printf( "¿Altura del triángulo? " );
    scanf( "%d", &nivel );
   }

  /*-- Una iteración por cada línea de triángulo --*/

  for (int altura = inicial; altura<=nivel; altura++){

    /*-- Paso 1º. Situar primer número de cada línea --*/{

      for (int indice = 1; indice <= centro-altura; indice++){
        printf(" " );
      }
      printf( "%d", inicial );
    }
    /*-- Paso 2º. Primera mitad de la línea del triángulo
         Escribir números consegutivos hasta altura --*/{
        for (int indice = inicial+1; indice <= altura; indice++){
          printf( "%1d", indice );
        }
      }
    /*-- Paso 3º. Segunda Mitad de la línea del triángulo.
         Escribir números decrecientes hasta Inicial --*/{
         for ( int indice = altura-1; indice>= inicial; indice--){
            printf( "%1d", indice);
          }
        }
    /*-- Paso 4º. Saltar a una nueva linea --*/{
          printf( "\n");
    }
  }
}
