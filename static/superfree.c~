#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "superfree.h"
#include "delete_node.h"

//funkcja zwalniająca pamięć na zakończenie
void superfree(nodes *ptr, edges *ptr2)
{
 while(*ptr != NULL)
  {
   delete_node(ptr, ptr2, (*ptr)->id);
  }
}
