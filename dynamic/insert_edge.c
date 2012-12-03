#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja dodajaca krawędzie
void insert_edge(nodes ptr, edges *ptr2, char i[],char a[],char b[])
{
 edges nowy;
 if(*ptr2!=NULL)
 {
  if(edge_by_id(*ptr2,i)!=NULL)
  {
   printf("Krawędź o podanym id już istnieje!\n");
   return;
  }
 }
 if((node_by_id(ptr,a)==NULL)||(node_by_id(ptr,b)==NULL))
 {
  printf("Podane węzły muszą istnieć!\n");
  return;
 }
 if((nowy=(edges)malloc(sizeof(struct Edge)))==NULL)
 {
  printf("Brak wolnej pamięci\n");
  return;
 }
 strcpy(nowy->id,i);
 nowy->inNode=node_by_id(ptr,a);
 nowy->outNode=node_by_id(ptr,b);
 nowy->next=*ptr2;
 *ptr2=nowy;
 (*ptr2)->inNode->outEdges = insertlist(nowy->inNode->outEdges,*ptr2,i);
 (*ptr2)->outNode->inEdges = insertlist(nowy->outNode->inEdges,*ptr2,i);
 printf("Krawędź %s(%s->%s) dodana!\n", i, a, b);
}
