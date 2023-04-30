/* Programa 9.4 extraído de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 02/05/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h> 
#include <stdlib.h> 
#include <stddef.h>

int X_DIM = 16;
int Y_DIM = 5;
int Z_DIM = 3;

int main(void)
{
  char *space;
  char ***Arr3D;
  int y, z;
  ptrdiff_t diff;

  /* primeiro reservamos espaco para o proprio arranjo */

  space = malloc(X_DIM * Y_DIM * Z_DIM * sizeof(char));

  /* em seguida, alocamos espaco para uma matriz de ponteiros, 
     cada um para eventualmente apontar para o primeiro elemento 
     de uma matriz bidimensional de ponteiros para ponteiros */

  Arr3D = malloc(Z_DIM * sizeof(char **));

  /* e para cada um deles atribuimos um ponteiro a um arranjo
     recem alocado de ponteiros para uma linha */

  for (z = 0; z < Z_DIM; z++)
  {
    Arr3D[z] = malloc(Y_DIM * sizeof(char*));

    /* e para cada espaco neste arranjo colocamos um ponteiro para o 
       primeiro elemento de cada linha no espaco do arranjo
       originalmente alocado */

    for (y = 0; y < Y_DIM; y++)
    {
      Arr3D[z][y] = space + (z * (X_DIM *Y_DIM) + y * X_DIM);
    }
  }

  /* E, agora, verificamos cada endereco em nossa matriz 3D para ver 
     se a indexacao do ponteiro Arr3d conduz dados de forma continua */

  for (z = 0; z < Z_DIM; z++)
  {
    printf("Locacao do arranjo %d e' %p\n", z, *Arr3D[z]);
    for (y = 0; y < Y_DIM; y++)
    {
      printf(" Arranjo %d com linha %d em %p", z, y, Arr3D[z][y]);
      diff = Arr3D[z][y] - space;
      printf(" diferenca = %3d", diff);
      printf(" z = %d y = %d\n", z, y);
    }
  }

  return 0;
}
