/**************************************************
*Programa: Ordenar3
*
*Descripci�n:
* Esteprograma ordena tres valores y
* los guarda ordenados de menaor a mayor
* en las mismas variables que se leen
****************************************************/

#include <stdio.h>

int main (){
  int valUno, valDos, valTres, auxiliar;

  /*--Leer los datos--*/
  printf("�Datos?  " );
  scanf( "%d %d %d", &valUno, &valDos, &valTres);



  /*--Primer Paso: Ordenar los dos primeros datos--*/

  if (valUno > valDos){
    auxiliar = valDos;
    valUno = valDos;
    valDos = auxiliar;
    }

  /*--Segundo Paso: Situar el tercer dato--*/

  if (valTres < valUno){
    auxiliar = valTres;
    valTres = valDos;
    valDos = valUno;
    valUno = auxiliar;
    } else if (valTres < valDos ){
      auxiliar = valDos;
      valDos = valTres;
      valTres = auxiliar;
      }
  /*--Tercer Pso: Escribir el resultado --*/
  printf( "Datos Ordenados = %5d %5d %5d\n", valUno, valDos, valTres);
}
