/* Programa 5.2 extraido de PTRTUT10.TXT - 13/06/1997 */
/*              adaptado por AM-42       - 28/04/2023 */
/*                                 youtube.com/@AM-42 */

#include <stdio.h>
#include <string.h>

struct tag
{ /* o tipo de estrutura */
  char lname[20]; /* last name (ultimo nome) */
  char fname[20]; /* first name (primeiro nome) */
  int age;        /* age (idade) */
  float rate;     /* exemplo: 12.75 por hora */
};

struct tag my_struct;          /* define a estrutura */
void show_name(struct tag *p); /* prototipo da funcao */

int main(void)
{
  struct tag * st_ptr;    /* um ponteiro para uma estrutura */
  st_ptr = &my_struct;    /* apontamento do ponteiro para "my_struct" */
  strcpy(my_struct.lname, "Jensen");
  strcpy(my_struct.fname, "Ted");
  printf("\n%s ", my_struct.fname);
  printf("%s\n", my_struct.lname);
  my_struct.age = 63;
  show_name(st_ptr);      /* passa o ponteiro */
  return 0;
}

void show_name(struct tag *p)
{
  printf("\n%s ", p->fname);  /* ponto "p" para a estrutura */
  printf("%s ", p->lname);
  printf("%d\n", p->age);
}
