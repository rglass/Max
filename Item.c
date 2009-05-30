#include <stdbool.h>
#include <string.h>

#include "Item.h"



/* bool */
/* compare(Item a, Item b) */
/* { */
/*   return (a > b); */
/* } */

bool
compare(Item a, Item b)
{ 
  return (strcmp(a, b) > 0);
}
