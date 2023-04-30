/* Programa 9.2 extraído de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 02/05/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h> 
#include <stdlib.h>

int main(void)
{
  int nrows = 5;	/* Ambas as linhas e colunas podem ser avaliadas */ 
  int ncols = 10;	/* ou lidas em tempo de execucao */
  int row;
  int **rowptr; 
  rowptr = malloc(nrows * sizeof(int *)); 
  if (rowptr == NULL)
  {
    puts("\nFalha ao alocar espaco para ponteiros de linha.\n"); 
    exit(0);
  }

  printf("\n\n\nIndice Pont.(hex)       Pont.(dec)  Difereca.(dec)");

  for (row = 0; row < nrows; row++)
  {
    rowptr[row] = malloc(ncols * sizeof(int)); 
    if (rowptr[row] == NULL)
    {
      printf("\nFalha ao alocar para linha[%d]\n", row); 
      exit(0);
    }
    printf("\n%d      %p %d", row, rowptr[row], rowptr[row]);
    if (row > 0)
      printf("    %d", (int)(rowptr[row] - rowptr[row-1]));
  }

  return 0;
}
