/* Programa 3.1 extraido de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>

char strA[80] = "Cadeia usada para fins de demonstracao";
char strB[80];

int main(void)
{
  char *pA;      /* um ponteiro para entrada de caractere */
  char *pB;      /* outro ponteiro para entrada de caractere */
  puts(strA);    /* apresenta cadeia A */
  pA = strA;     /* ponteiro pA para a cadeia A */
  puts(pA);      /* mostrar o que pA está apontando */
  pB = strB;     /* ponteiro pB para a cadeia B */
  putchar('\n'); /* move para baixo uma linha na tela */
  while (*pA != '\0')   /* linha A (ver texto) */
  {
    *pB++ = *pA++;      /* linha B (ver texto) */
  }
  *pB = '\0';           /* linha C (ver texto) */
  puts(strB);           /* mostra strB na tela */
  return 0;
}
