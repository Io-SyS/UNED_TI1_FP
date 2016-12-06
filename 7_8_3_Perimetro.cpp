/************************************************
* Programa: Perimetro
*
* Descripción:
*   Programa para calcular el perímetro de un
*   triángulo dado por sus tres vértices
*************************************************/

#include <stdio.h>
#include <math.h>

/*=================*\
  Variables globales
\*=================*/

float xA, yA, xB, yB, xC, yC;
float perimetro;

/*===========================================================*\
  Procedimiento para leer las coordenadas X e Y de un punto.
  Para facilitar la identificación del punto, se tiene que
  pasar la letra que lo identifica como argumento
\*===========================================================*/

void LeerCoordenadas( char Punto, float & x, float & y ){
  printf( "Punto %c\n", Punto );
  printf( "¿Coordenadas X?" );
  scanf("%f", &x );
  printf( "¿Coordenadas Y?" );
  scanf("%f", &y );
  printf("\n" );
}

/*===========================================================*\
   Procedimeitno para leer las coordenadas de los 3 vértices
\*===========================================================*/

void LeerVertices(){
  LeerCoordenadas( 'A', xA, yA );
  LeerCoordenadas( 'B', xB, yB );
  LeerCoordenadas( 'C', xC, yC );
}

/*===========================================================*\
          Función para calcular la distancia que hay
              entre dos puntos (x1, y1) y (x2,y2)
\*===========================================================*/

float Distancia( float x1, float y1, float x2, float y2){
  float deltaX, deltaY;

  deltaX = x2 - x1;
  deltaY = y2 - y1;
  return sqrt( deltaX*deltaX + deltaY*deltaY );
 }

/*===========================================================*\
    Procedimiento para calcula el perimetro de un triángulo
    NOTA:  Se utilizan variables globales dado el excesivo
    número de argumentos necesarios: total 7 argumentos:
    3 puntos x 2 coordenadas = 6 argumentos por valor
    Resultado en perimetro = 1 argumento por referencia
\*===========================================================*/

void CalcularPerimetro(){
  float ladoAB, ladoAC, ladoBC;

  ladoAB = Distancia ( xA, yA, xB, yB );
  ladoAC = Distancia ( xA, yA, xC, yC );
  ladoBC = Distancia ( xB, yB, xC, yC );
  perimetro = ladoAB + ladoAC + ladoBC;
}

/*===========================================================*\
    Procedimiento para imprimir la variable global perímetro
\*===========================================================*/

void ImprimirPerimetro (){
  printf( "El Perímetro es igual a %5.2f\n", perimetro );
}

/*===========================================================*\
                    Programa principal
\*===========================================================*/

int main(){
  LeerVertices();
  CalcularPerimetro();
  ImprimirPerimetro();
}
