/* Programa 6.1 extraido de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>
#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

int main(void)
{
  int row, col;
  for (row = 0; row < ROWS; row++)
  {
    for (col = 0; col < COLS; col++)
    {
      multi[row][col] = row * col;
    }
  }

  for (row = 0; row < ROWS; row++)
  {
    for (col = 0; col < COLS; col++)
    {
      printf("\n%d ", multi[row][col]);
      printf("%d ", *(*(multi + row) + col));
    }
  }

  return 0;
}
