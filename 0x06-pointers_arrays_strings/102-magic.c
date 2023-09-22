#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * La ligne de code suivante modifie n à travers p en utilisant l'arithmétique des pointeurs.
   * Elle affecte la valeur 98 à l'emplacement mémoire situé à 5 entiers de distance de l'adresse de n.
   */
  *(p + 5) = 98;
  /* ...de sorte que cela affiche 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
}

