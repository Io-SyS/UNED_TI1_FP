/*****************************************************
* Programa: Ticket
*
* Descripci�n:
*   Este programa elabora el ticket de entrada y los
*   res�menes de recaudaci�n de un espect�culo.
*   El precio del ticket depende de la edad del
*   espectador (Ni�o, Joven, Adulto o Jubilado)
*
******************************************************/

#include <stdio.h>

int main (){
    const float PrecioBase = 6.0;
    int butacas = 0;
    int edad;
    float totalEuros = 0.0;
    float precio;
    char opcion = ' ';
    char tecla = ' ';

  /*-- Bucle hasta opci�n F de fin --*/
  while (opcion != 'F') {
    printf( "Opci�n (Ticket, Resumen o Fin) ? ");
    opcion = ' ';
    while ((opcion != 'T') && (opcion != 'R') && (opcion != 'F')){
      scanf( "%c", &opcion );
      }

    /*=========================
        Elaboraci�n del Ticket
    ===========================*/
      if (opcion =='T'){
        tecla = 'S';
        while (tecla == 'S') {
          printf( "Edad? " );
          scanf( "%d", &edad );
          butacas++;
          printf( ".----------------------------.\n" );
          printf( "|       TICKET DE ENTRADA    |\n" );
          if (edad < 6) {
              printf( "|Gratis   " );
              precio = 0.0;
          } else if (edad < 18) {
              printf( "|Joven   " );
              precio = PrecioBase / 2.0;
          } else if (edad < 65) {
              printf( "|Adulto  " );
              precio = PrecioBase;
          } else {
              printf( "|Jubilado" );
              precio = PrecioBase / 4.0;
          }
          totalEuros = totalEuros + precio;
          printf( "        Precio: %4.2f|\n", precio );
          printf( "'____________________________'\n\n" );
          printf( "Otro Tickets (S/N)? " );
          tecla = ' ';
          while ((tecla !='S') && (tecla != 'N')) {
            scanf( "%c", &tecla );
          }
        }
      }
    /*=========================================
      Elaboracion del Resumen de la recaudaci�n
      =========================================*/
      if (opcion == 'R'){
        printf( "    RESUMEN DE VENTAS\n" );
        printf( "    -----------------\n" );
        printf( "%4d Butacas \n", butacas );
        printf( "Total Recaudaci�n =%10.2f\n\n", totalEuros );

        }
  }
}
