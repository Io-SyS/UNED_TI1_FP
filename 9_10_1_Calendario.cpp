/************************************************
* Programa: Calendario
*
* Descripci�n:
*   Programa para el c�lculo del d�a de la semana
*   que corresponde a una fecha comprendida entre:
*   1/1/1989 y 31/12/2088
*************************************************/

#include <stdio.h>

typedef enum TipoDia {
  Lunes ,Martes, Miercoles, Jueves,
  Viernes, Sabado, Domingo
};

typedef enum TipoMes {
  Enero,Febrero, Marzo, Abril, Mayo,
  Junio, Julio, Agosto, Septiembre,
  Octubre, Noviembre, Diciembre
};

typedef struct TipoFecha {
  int dia;
  TipoMes mes;
  int anno;
};

/*==================================================
  Funci�n para sumar d�as de la semana c�clicamente
  =================================================*/

TipoDia SumarDias(TipoDia dia, int n){
  const int DiasSemana = 7;
  int aux;

  aux = (int(dia) + n) % DiasSemana;
  return TipoDia(aux);
}

/*===========================================
  Funci�n para calcular el d�a de la semana
  que corresponde a una fecha
  ==========================================*/

TipoDia DiaDeLaSemana( TipoFecha fecha ){
  const int OrigenA = 89;
  TipoDia TreintaUnoDiciembre89 = Sabado;

  bool bisiesto;
  int IncreBisis, IncreAnnos, IncreDias;
  TipoMes M = fecha.mes;
  int A = fecha.anno;

  if(M == Enero){
    IncreDias = 0;
    } else if(M == Febrero){
    IncreDias = 3;
    } else if(M == Marzo){
    IncreDias = 3;
    } else if(M == Abril){
    IncreDias = 6;
    } else if(M == Mayo){
    IncreDias = 1;
    } else if(M == Junio){
    IncreDias = 4;
    } else if(M == Julio){
    IncreDias = 6;
    } else if(M == Agosto){
    IncreDias = 2;
    } else if(M == Septiembre){
    IncreDias = 5;
    } else if(M == Octubre){
    IncreDias = 0;
    } else if(M == Noviembre){
    IncreDias = 3;
    } else {
    IncreDias = 5;
    }
    bisiesto = (A % 4)==0;
    if (A < OrigenA){
      A = A + 100;
    }
    IncreAnnos = A - OrigenA;
    IncreBisis = IncreAnnos/4;
    IncreDias = IncreDias + fecha.dia + IncreAnnos + IncreBisis;
    if ( bisiesto && ( M > Febrero )) {
      IncreDias++;
      }
    return SumarDias ( TreintaUnoDiciembre89, IncreDias );
  }

  /*===============================================
   Procedimiento para escribir el d�a de la semana
  ================================================*/

void EscribirDia ( TipoDia S ) {

  if ( S == Lunes) {
    printf( "Lunes" );
    } else if (S == Martes){
      printf( "Martes" );
    } else if (S == Miercoles){
      printf( "Miercoles" );
    } else if (S == Jueves){
      printf( "Jueves" );
    } else if (S == Viernes){
      printf( "Viernes" );
    } else if (S == Sabado){
      printf( "Sabado" );
    } else {
      printf( "Domingo" );
  }
}
  /*=================================================
   Procedimiento para leer una fecha (mes en n�mero)
  ==================================================*/

void LeerFecha (TipoFecha & fecha ){
  int mes;

  scanf( "%d/%d/%d", &fecha.dia, &mes, &fecha.anno );
  fecha.mes = TipoMes( mes-1);
  if (fecha.anno >=100) {
      fecha.anno = fecha.anno % 100;
    }
  }

  /*======================================
   Procedimiento para escribir una fecha
  ========================================*/

  void EscribirFecha ( TipoFecha fecha ){
    printf( "%02d/%02d/%02d", fecha.dia, int(fecha.mes+1), fecha.anno );
  }

  /*====================
    Programa principal
  =====================*/

  int main (){
    TipoFecha fecha;
    char tecla;
    TipoDia Hoy;
    TipoMes Pasado;

    Hoy = Miercoles;
    Pasado = Noviembre;
    tecla = 'S';
    while (tecla != 'N'){
      printf( "Dia Mes A�o (DD/MM/AA)? ");
      LeerFecha( fecha );
      printf( "Fecha: " );
      EscribirFecha ( fecha );
      printf( "D�a de la semana: " );
      EscribirDia( DiaDeLaSemana (fecha));
      tecla = ' ';
      printf( "\n\n Otra fecha (S/N)? ");
        while ((tecla !='S') && (tecla != 'N')) {
          scanf("%c", &tecla );
          }
      }
  }
