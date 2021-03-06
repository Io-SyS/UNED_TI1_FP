/************************************************
* Programa: Palindromo
*
* Descripci�n:
*   Este programa comprueba si una frase es
*   un pal�ndromo
*************************************************/

#include <stdio.h>
#include <ctype.h>

const char Fin = '.';
const int Maximo = 100;
typedef char TipoCadena[Maximo];

/*===========================================
  Procedimiento para leer una frase acabada
  en punto (.) y dejarla en el argumento.
  S�lo se guardan en el vector argumento las
  letras a..z may�sculas o min�sculas
  incluyendo la � y � y el punto final.
============================================*/

void LeerTexto( TipoCadena texto ) {
  int longitud = 0;
  char caracter = ' ';


  /*-- Leer y guardar s�lo las letras de la frase --*/
  printf( "�Frase acabada en punto (.)? \n");
  while ((caracter != Fin) && (longitud < Maximo )) {
  scanf("%c", &caracter);
    if(((caracter>='a') && (caracter<='z')) ||
      ((caracter>='A') && (caracter<='Z')) ||
        (caracter==Fin) || (caracter =='�') ||
        (caracter=='�')){
      texto[longitud] = toupper(caracter);
      longitud++;
    }
  }
}

/*=================================================
  Funci�n que comprueba si coinciden ls letras
  posiciones sim�tricas: La frase es un pal�ndromo
===================================================*/

bool Simetrico( const TipoCadena Texto ){
  int i, j;

  /*-- 1�: Buscar el punto final --*/
  j = 0;
  while ((Texto[j] !=Fin) && (j<Maximo)){
    j++;
  }
  j--;
  /*-- 2�: Comprobar igualdad entre sim�tricos --*/
  i = 0;
  while ((i < j) && (Texto[i] == Texto[j])) {
    i++;
    j--;
  }
  /*-- 3�: Es pal�ndromo si coincide todo --*/
  return i>=j;
}

/*===================
  Programa principal
 ===================*/

 int main(){
    TipoCadena frase;
    LeerTexto( frase );
    if(Simetrico( frase )){
      printf(" Es Pal�ndromo\n");
    } else {
      printf(" No es Pal�ndromo\n");
    }
}
