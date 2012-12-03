#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "delete_edge.h"
#include "compare.h"
#include "delete_list.h"

//funkcja usuwajaca krawędzie
void delete_edge(edges *ptr, char i[])
{
 edges prev;
 edges temp;
 edges next;
 if(*ptr==NULL)
 {
  printf("Nie można usunać nieistniejącej krawędzi!\n");
  return;
 }
 prev=NULL;
 temp=*ptr;
 while((temp->next != NULL)&&(!compare(temp->id,i,0,0)))
 {
  prev=temp;
  temp=temp->next;
 }
 if((temp->next == NULL)&&(!compare(temp->id,i,0,0)))
 {
  printf("Nie można usunać nieistniejącej krawędzi!\n");
  return;
 }
 delete_list(&(temp->inNode->outEdges), temp->id);
 delete_list(&(temp->outNode->inEdges), temp->id);
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
 printf("Krawędź %s usunięta!\n", tempstr);
}
