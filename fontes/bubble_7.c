/* Programa 'bubble_7.c' extraido de PTRTUT10.TXT - 13/06/1997 */
/*                       adaptado por AM-42       - 02/05/2023 */
/*                                          youtube.com/@AM-42 */

#include <stdio.h>
#include <string.h>

#define MAX_BUF 256

long arr[10] = {3,6,1,2,3,8,4,1,7,2};

char arr2[7][20] = { "Mickey Mouse",
                     "Donald Duck", 
                     "Minnie Mouse", 
                     "Goofy",
                     "Ted Jensen",
                     "Jay Flaherty",
                     "Augusto Manzano"
                   };

void bubble(void *p, int width, int N,
            int(*fptr)(const void *, const void *));
int compare_string(const void *m, const void *n);
int compare_long(const void *m, const void *n);

int main(void)
{
  int i;
  puts("\nAntes da classificacao:\n");

  for (i = 0; i < 10; i++) /* mostra os inteiros longos */
  {
    printf("%ld ", arr[i]);
  }

  puts("\n");

  for (i = 0; i < 7; i++) /* mostra as cadeias */
  {
    printf("%s\n", arr2[i]);
  }

  bubble(arr, 4, 10, compare_long);    /* classifica inteiros longos */
  bubble(arr2, 20, 7, compare_string); /* classifica cadeias */
  puts("\n\Depois da classificacao:\n");

  for (i = 0; i < 10; i++) /* mostra inteiros longos classificados */
  {
    printf("%d ", arr[i]);
  }

  puts("\n");

  for (i = 0; i < 7; i++) /* mostra cadeias classificadas */
  {
    printf("%s\n", arr2[i]);
  }

  return 0;
}

void bubble(void *p, int width, int N,
            int(*fptr)(const void *, const void *))
{
  int i, j, k;
  unsigned char buf[MAX_BUF];
  unsigned char *bp = p;

  for (i = N - 1; i >= 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      k = fptr((void*)(bp + width * (j - 1)), 
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

int compare_string(const void *m, const void *n)
{
  char *m1 = (char*) m;
  char *n1 = (char*) n;
  return (strcmp(m1, n1));
}

int compare_long(const void *m, const void *n)
{
  long *m1, *n1;
  m1 = (long*) m;
  n1 = (long*) n;
  return (*m1 > *n1);
}
