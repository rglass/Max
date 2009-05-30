#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#include "Item.h"

Item
max(Item a, Item b)
{
  return (compare(a, b))? a : b;
}

int
main()
{
  Item a = (Item) malloc(5*sizeof(char));
  Item b = (Item) malloc(5*sizeof(char));
  int i;

  for( i = 0; i < 4; i++)
    {
      a[i] = 'a';
      b[i] = 'b';
    }
  a[4] = '\0';
  b[4] = '\0';

  printf("max(%s, %s)=>%s\n", a, b, max(a, b));
  exit(EXIT_SUCCESS);
}
