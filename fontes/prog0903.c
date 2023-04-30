/* Programa 9.3 extraído de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 02/05/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int **rptr;
  int *aptr;
  int *testptr;
  int k;
  int nrows = 5; /* Ambas as linhas e colunas podem ser avaliadas */
  int ncols = 8; /* ou lidas em tempo de execucao */
  int row, col;

  /* agora alocamos a memória para o arranjo */

  aptr = malloc(nrows * ncols * sizeof(int));
  if (aptr == NULL)
  {
    puts("\nFalha ao alocar espaco para o arranjo");
    exit(0);
  }

  /* em seguida, alocamos espaco para os ponteiros das linhas */

  rptr = malloc(nrows * sizeof(int*));
  if (rptr == NULL)
  {
    puts("\nFalha ao alocar espaco para ponteiros");
    exit(0);
  }

  /* e agora os ponteiros sao "apontados" */

  for (k = 0; k < nrows; k++)
  {
    rptr[k] = aptr + (k * ncols);
  }

  /* Agora ilustramos como os ponteiros de linha sao incrementados */

  printf("\n\nIlustrando como os ponteiros de linha sao incrementados ");
  printf("\n\nIndice Point.(hex)      Diferenca.(dec)");

  for (row = 0; row < nrows; row++)
  {
    printf("\n%d      %p", row, rptr[row]);
    if (row > 0)
      printf(" %d", (rptr[row] - rptr[row - 1]));
  }

  printf("\n\nE agora imprimimos o arranjo\n");
  for (row = 0; row < nrows; row++)
  {
    for (col = 0; col < ncols; col++)
    {
      rptr[row][col] = row + col;
      printf("%2d ", rptr[row][col]);
    }

    putchar('\n');
  }

  puts("\n");

  /* e aqui ilustramos que estamos, de fato, lidando com uma matriz */
  /* bidimensional em um bloco contiguo de memoria.                 */

  printf("E agora demonstramos que eles sao contiguos na memoria \n");

  testptr = aptr;
  for (row = 0; row < nrows; row++)
  {
    for (col = 0; col < ncols; col++)
    {
      printf("%2d ", *(testptr++));
    }

    putchar('\n');
  }

  return 0;
}
