/**************************************
* NOMBRE: 
* PRIMER APELLIDO: 
* SEGUNDO APELLIDO: 
* DNI: 
* EMAIL: 
**************************************/

#include <stdio.h>

int altura;
int indice;
char simbolo;

void ConvertirSimbolo (int relleno){

  relleno = relleno+3;

  if (relleno %4 == 0){
    simbolo = '@';
    } else if ( relleno %4 == 1){
    simbolo = '.';
    } else if ( relleno %4 == 2){
    simbolo = 'o';
    } else {
    simbolo = '.';
  }
  printf( "%c", simbolo);
}

void RecorrerFilas ( int nivel ) {

  for ( int blancos = 1; blancos <= altura - nivel; blancos++){
        printf( " " );
      }

      for ( int relleno = 1; relleno <= nivel; relleno++){
            ConvertirSimbolo( relleno );
      }

      for ( int relleno = nivel-1; relleno >= 1; relleno--){
            ConvertirSimbolo( relleno );
      }
      if (altura > 1){
      printf( "\n" );}
}


int main (){

  printf( "¿Lado del rombo?:" );
  scanf("%d", &altura);
  printf("\n");

    if ((altura >= 1) && (altura <= 20)){

      for ( int nivel = 1; nivel <= altura; nivel++){
        RecorrerFilas (nivel);
      }

      for ( int nivel = altura - 1; nivel >= 1; nivel--){
        RecorrerFilas(nivel);
      }
    }
}
