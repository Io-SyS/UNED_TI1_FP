#include <stdio.h>

int main (){

  int altura;
  int nivel = 1;

  printf( "Indica el número de asteríscos\n" );
  scanf("%d", &altura);

    for (int k = nivel; k <= altura; k++){
      for (int j = 1; j <= altura-k; j++){
        printf(" ");
      }
        for (int n = 1 ; n <= k ; n++){
          printf("* ");
        }
        printf("\n");

    }
    for (int r = altura-1; r >= 1 ; r--){
      for (int p = 1; p <= altura-r; p++){
                printf(" ");
      }
        for (int h = 1 ; h <= r ; h++){
          printf("* ");
        }
        printf("\n");
  }
}
