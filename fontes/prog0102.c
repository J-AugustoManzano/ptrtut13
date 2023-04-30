/* Programa 1.2 extraído de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>

int my_array[] = {1,23,17,4,-5,100}; 
int *ptr;

int main(void)
{
  int i;
  ptr = &my_array[0];   /* apontar nosso ponteiro para o primeiro
                           inteiro em nosso arranjo */

  printf("\n");
  for (i = 0; i <= 5; i++)
  {
    printf("my_array[%d] = %d ", i, my_array[i]);   /*<-- A */ 
    printf("ptr + %d = %d\n", i, *(ptr + i));	    /*<-- B */
  }
  return 0;
}
