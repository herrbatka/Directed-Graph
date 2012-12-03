#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "insertlist.h"
#include "edge_by_id.h"

//funkcja dodajaca element listy (de facto wiążąca węzeł z krawędzią)
lists insertlist(lists ptr2, edges ptr, char i[])
{
 lists nowy;
 nowy=(lists)malloc(sizeof(struct List));
 nowy->edg=edge_by_id(ptr,i);
 nowy->next=ptr2;
 return nowy;
}
