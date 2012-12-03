#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja drukująca sąsiedztwo węzła
void neighbours(nodes ptr,char i[])
{
 printf("Sąsiedztwo węzła %s: ", i);
 if(ptr==NULL)
 {
  printf(" brak, węzeł nie istnieje\n");
  return;
 }
 if(node_by_id(ptr,i)!=NULL)
 {
  nodes temp=node_by_id(ptr,i);
  if(temp->outEdges==NULL&&temp->inEdges==NULL)
  {
   printf(" brak");
  }
  lists lst=temp->outEdges;
  while(lst!=NULL)
  {
   printf("%s ", lst->edg->outNode->id);
   lst=lst->next;
  }
  lst=temp->inEdges;
  while(lst!=NULL)
  {
   printf("%s ", lst->edg->inNode->id);
   lst=lst->next;
  }
  printf("\n");
  return;
 }
 printf(" brak, węzeł nie istnieje\n");
}
