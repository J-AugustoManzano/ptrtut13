/* Programa 'bubble_6.c' extraído de PTRTUT10.TXT - 13/06/1997 */
/*                       adaptado por AM-42       - 02/05/2023 */
/*                                          youtube.com/@AM-42 */

#include <stdio.h > 
#include <string.h>

#define MAX_BUF 256

char arr2[7][20] = { "Mickey Mouse",
                     "Donald Duck", 
                     "Minnie Mouse", 
                     "Goofy",
                     "Ted Jensen",
                     "Jay Flaherty",
                     "Augusto Manzano"
                   };

void bubble(void *p, int width, int N);
int compare(void *m, void *n);

int main(void)
{
  int i;
  putchar('\n');

  for (i = 0; i < 7; i++)
  {
    printf("%s\n", arr2[i]);
  }

  bubble(arr2, 20, 7);
  putchar('\n\n');

  for (i = 0; i < 7; i++)
  {
    printf("%s\n", arr2[i]);
  }

  return 0;
}

void bubble(void *p, int width, int N)
{
  int i, j, k;
  unsigned char buf[MAX_BUF];
  unsigned char *bp = p;

  for (i = N - 1; i >= 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      k = compare((void*)(bp + width * (j - 1)), 
          (void*)(bp + j * width));
      if (k > 0)
      {
        memcpy(buf, bp + width *(j - 1), width);
        memcpy(bp + width *(j - 1), bp + j *width, width);
        memcpy(bp + j *width, buf, width);
      }
    }
  }
}

int compare(void *m, void *n)
{
  char *m1 = m;
  char *n1 = n;
  return (strcmp(m1, n1));
}
