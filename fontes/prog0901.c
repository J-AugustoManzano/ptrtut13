/* Programa 9.1 extraido de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 02/05/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h> 
#include <stdlib.h>

#define COLS 5

typedef int RowArray[COLS]; 
RowArray *rptr;

int main(void)
{
  int nrows = 10; 
  int row, col;
  rptr = malloc(nrows * COLS * sizeof(int)); 
  for (row = 0; row < nrows; row++)
  {
    for (col = 0; col < COLS; col++)
    {
      rptr[row][col] = 17;
    }
  }

  return 0;
}
