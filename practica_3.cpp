/**************************************
* NOMBRE: #Aurelio#
* PRIMER APELLIDO: #Baeza#
* SEGUNDO APELLIDO: #Romero#
* DNI: #44582947#
* EMAIL: #abaeza19@alumno.uned.es#
**************************************/

#include <stdio.h>

const int annoInicial = 1601;

typedef enum TipoMes {
  Enero, Febrero, Marzo, Abril, Mayo,
  Junio, Julio, Agosto, Septiembre,
  Octubre, Noviembre, Diciembre
  };


typedef enum TipoDia {
  Lunes, Martes, Miercoles, Jueves,
  Viernes, Sabado, Domingo
  };


void LeerValores ( int &mes, int &anno){

  printf( " ¿Mes (1..12)? ");
  scanf( "%d", &mes );
  printf( " ¿Año (1601..3000)? ");
  scanf("%d", &anno);

  printf( "\n" );

}




bool EsBisiesto (int i){

  bool esBisiesto = false;

  if (((i % 4 == 0) && (i % 100 != 0)) || ( i% 400 ==0 )){
    esBisiesto = true;
    }
  return (esBisiesto);
}

void CalcularAnno (int mes, int anno, int & dia){

 int sumardias =0;

  for (int i=annoInicial; i<=anno-1 ; i++){
    /*if (((i % 4 == 0) && (i % 100 != 0)) ||( i% 400 ==0 )){*/
    if(EsBisiesto(i)){
      sumardias = sumardias + 366;
      } else {
        sumardias = sumardias + 365;
      }
    /*printf("%d %5d\n", sumardias, i);*/
    }
    dia = sumardias;

  }

void CalcularMes (int mes, int anno, int & dia){

      switch (mes){
        case 2:
        case 3:
        case 11:
          dia = dia +3;
          break;
        case 4:
        case 7:
          dia = dia +6;
          break;
        case 5:
          dia = dia +1;
          break;
        case 6:
          dia = dia +4;
          break;
        case 8:
          dia = dia +2;
          break;
        case 9:
        case 12:
          dia = dia +5;
          break;
        }
        if (mes > 2 && EsBisiesto(anno)) {
          dia = dia +1;
        }
      }

void DefinirMes ( int mes, int & longMes, int & diasMes ){

    switch (mes) {
      case 1:
        printf( "ENERO" );
        longMes=22;
        diasMes=31;
        break;
      case 2:
        printf( "FEBRERO");
        longMes=20;
        diasMes=28;
        break;
      case 3:
        printf( "MARZO");
        longMes=22;
        diasMes=31;
        break;
      case 4:
        printf( "ABRIL");
        longMes=22;
        diasMes=30;
        break;
      case 5:
        printf( "MAYO");
        longMes=23;
        diasMes=31;
        break;
      case 6:
        printf( "JUNIO");
        longMes=22;
        diasMes=30;
        break;
      case 7:
        printf( "JULIO");
        longMes=22;
        diasMes=31;
        break;
      case 8:
        printf( "AGOSTO");
        longMes=21;
        diasMes=31;
        break;
      case 9:
        printf( "SEPTIEMBRE");
        longMes=17;
        diasMes=30;
        break;
      case 10:
        printf( "OCTUBRE");
        longMes=20;
        diasMes=31;
        break;
      case 11:
        printf( "NOVIEMBRE");
        longMes=18;
        diasMes=30;
        break;
      case 12:
        printf( "DICIEMBRE");
        longMes=18;
        diasMes=31;
        break;
      }
  }

void ImprimeCabecera ( int longMes, int & anno){


  printf( "%*d\n", longMes, anno);
  printf( "===========================\n" );
  printf( "LU  MA  MI  JU  VI | SA  DO\n" );
  printf( "===========================\n" );

  }

void ImprimeCalendario ( int dia, int mes, int diasMes){

  bool comienzo = false;
  int diario = 1;
  int filafinal = 1;

  for (int fila = 1; fila <= filafinal; fila++){

    for (int columna =1; columna <= 7; columna++){

      if (((columna == dia+1) && (diario == 1)) || ((diario > 1)&&(diario <= diasMes ))){

          if(columna == 1 ){
            printf ("%2d", diario);
            } else if (columna==6){
            printf (" |%3d", diario);
            } else {
            printf ("%4d", diario);
            }
          diario++;

      } else {
         if(columna == 1 ){
            printf (" .");
            } else if (columna==6){
            printf (" |  .");
            } else {
            printf ("   .");
            }
        }
    }

      if ((fila == filafinal)&&(diario <= diasMes)){
        filafinal++;
        }

      printf ("\n");
  }
}

int main (){

  int valorDia=0;
  int valorMes;
  int valorAnno;
  int longMes;
  int diasMes;

    LeerValores ( valorMes , valorAnno );

    if ((valorMes >=1) && (valorMes <=12) &&
    (valorAnno >= 1601) && ( valorAnno <= 3000)){

    DefinirMes ( valorMes, longMes, diasMes );
    CalcularAnno ( valorMes, valorAnno, valorDia );
    CalcularMes (valorMes, valorAnno, valorDia);

    valorDia = valorDia%7;

    if (EsBisiesto(valorAnno) && valorMes == 2){
      diasMes++;
    }

    /*printf("\n\n valorMes:%d  valorAnno:%d diasMes:%d diaSemana:%d \n\n",
            valorMes, valorAnno, diasMes, valorDia);*/

    ImprimeCabecera (longMes, valorAnno );
    ImprimeCalendario (valorDia, valorMes, diasMes);

    }
}
