#include <stdbool.h>
#include <string.h>

#include "Item.h"


/* This is the derived procedure with concrete types.
   A variation would be
   <code>
   bool
   compare(Item a, Item b)
   {
     return (a > b);
   }
   </code> for integers.
*/
bool
compare(Item a, Item b)
{ 
  return (strcmp(a, b) > 0);
}
