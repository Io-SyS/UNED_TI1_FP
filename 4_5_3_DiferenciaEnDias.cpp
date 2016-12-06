/****************************************
* Programa: DiferenciaEnDias
*
* Descripci�n:
*   Este programa calcula los d�as entre dos
*   fechas, de forma aproximada, contando todos
*   meses de 30 d�as, y los a�os de 365
********************************************/

#include <stdio.h>

int main() {
  int dia1, mes1, anno1;
  int dia2, mes2, anno2;
  int diasFecha1, diasFecha2;
  int diferencia;

  /*--Leer las fechas--*/{
  printf( "�Primera fecha (dd,mm,aaaa)? " );
  scanf( "%d,%d,%d", &dia1, &mes1, &anno1 );
  printf( "�Segunda fecha (dd,mm,aaa) ? " );
  scanf( "%d,%d,%d", &dia2, &mes2, &anno2 );
  }
  /*--Calcular la diferencia--*/ {
    /*--Calcular los d�as desde principio del a�o--*/{
    diasFecha1 = (mes1 - 1)*30 + dia1 ;
    diasFecha2 = (mes2 - 1)*30 + dia2 ;
    }
    /*--Calcular la diferencia total en d�as--*/{
    diferencia = (anno2 - anno1)*365 + diasFecha2-diasFecha1;
    }
  }
  /*--Imprimir el resultado--*/{
  printf( "Desde %2d/%2d/%4d\n", dia1, mes1, anno1 );
  printf( "hasta %2d/%2d/%4d\n", dia2, mes2, anno2 );
  printf( "hay %5d d�as\n", diferencia);
  }
}
