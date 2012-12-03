#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "delete_node.h"
#include "compare.h"
#include "delete_edge.h"

//funkcja usuwajaca węzły
void delete_node(nodes *ptr, edges *ptr2, char i[])
{
 nodes prev;
 nodes temp;
 nodes next;
 prev=NULL;
 if(*ptr==NULL)
 {
  printf("Nie można usunać nieistniejącego wierzchołka!\n");
  return;
 }
 temp=*ptr;
 while((temp->next != NULL)&&(!compare(temp->id,i,0,0)))
 {
  prev=temp;
  temp=temp->next;
 }
 if((temp->next == NULL)&&(!compare(temp->id,i,0,0)))
 {
  printf("Nie można usunać nieistniejącego wierzchołka!\n");
  return;
 }
  while(temp->inEdges != NULL)
  {
   delete_edge(ptr2, temp->inEdges->edg->id);
  }
  while(temp->outEdges != NULL)
  {
   delete_edge(ptr2, temp->outEdges->edg->id);
  }
 char tempstr[50];
 strcpy(tempstr,i);
 if(temp != NULL)
 {
  next=temp->next;
  if(prev==NULL)
  {
   free(temp);
   *ptr=next;
  }
  else
  {
   free(temp);
   prev->next=next;
  }
 }
 printf("Węzeł %s usunięty!\n", tempstr);
}
