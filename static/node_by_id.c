#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "node_by_id.h"
#include "compare.h"

//funkcja zwracająca węzeł po podanym id
nodes node_by_id(nodes ptr, char i[])
{
 nodes biezacy;
 biezacy=ptr;
 if(ptr==NULL)
 {
  return NULL;
 }
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
