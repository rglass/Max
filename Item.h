#ifndef ITEM_H
#define ITEM_H

/* Described here is the concrete type definition to be used by the
   algorithm `'Max''.
   In case of an integer this would be:
   <code>
   typedef int Item;
   </code>
   For the case of a string:
*/
typedef char* Item;

/* The procedure `'compare'' is generic and can be parametrized by the
   typedefinition given above.  */
bool compare(Item a, Item b);

#endif /* ITEM_H */
