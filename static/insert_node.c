#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "insert_node.h"
#include "node_by_id.h"

//funkcja dodająca węzły
void insert_node(nodes *ptr, char i[])
{
 nodes nowy;
 if(*ptr != NULL)
 {
  if(node_by_id(*ptr,i)!=NULL)
  {
   printf("Węzeł o podanym id już istnieje!\n");
   return;
  }
 }
 if((nowy=(nodes)malloc(sizeof(struct Node)))==NULL)
 {
  printf("Brak wolnej pamięci\n");
  return;
 }
  strcpy(nowy->id,i);
 nowy->next=*ptr;
 nowy->outEdges=NULL;
 nowy->inEdges=NULL;
 *ptr= nowy;
 printf("Węzeł %s dodany!\n", i);
}
