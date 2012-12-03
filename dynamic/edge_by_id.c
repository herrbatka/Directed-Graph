#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja zwracająca krawędź po podanym id (jak w analogicznej dla węzłów)
edges edge_by_id(edges ptr, char i[])
{
 edges biezacy;
 if(ptr==NULL)
 {
  return NULL;
 }
 biezacy=ptr;
 while((biezacy->next != NULL)&&(!compare(biezacy->id,i,0,0)))
 {
  biezacy=biezacy->next;
 }
 if((biezacy->next == NULL)&&(!compare(biezacy->id,i,0,0)))
 {
  return NULL;
 }
 return biezacy;
}


