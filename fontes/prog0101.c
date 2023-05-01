/* Programa 1.1 extraido de PTRTUT10.TXT - 10/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>

int j, k;
int *ptr;

int main(void)
{
  j = 1;
  k = 2;
  ptr = &k;
  printf("\n");
  printf("j tem valor %d, armazenado em %p\n", j, (void*) &j);
  printf("k tem valor %d, armazenado em %p\n", k, (void*) &k);
  printf("ptr tem valor %p, armazenado em %p\n", ptr, (void*) &ptr);
  printf("O valor do inteiro apontado para ptr e' %d\n", *ptr);
  return 0;
}
