/* Programa 5.1 extraído de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>
#include <string.h>

struct tag {
  char lname[20]; /* last name (ultimo nome) */
  char fname[20]; /* first name (primeiro nome) */
  int age;        /* age (idade) */
  float rate;     /* exemplo. 12.75 por hora */
};

struct tag my_struct;	/* declarar a estrutura "my_struct" */ 

int main(void)
{
  strcpy(my_struct.lname, "Jensen"); 
  strcpy(my_struct.fname, "Ted"); 
  printf("\n%s ", my_struct.fname); 
  printf("%s\n", my_struct.lname); 
  return 0;
}
