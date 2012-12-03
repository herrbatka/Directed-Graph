#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja drukująca sąsiedztwo węzła
edges arc_between(nodes ptr,char i[], char j[])
{
 if(ptr==NULL)
 {
  return NULL;
 }
 if(node_by_id(ptr, i)==NULL||node_by_id(ptr, j)==NULL)
 {
  return NULL;
 }
 lists temp=(node_by_id(ptr, i))->outEdges;
 if(temp==NULL)
 {
  return NULL;
 }
 while((temp->next != NULL)&&!(compare(temp->edg->outNode->id,j,0,0)))
 {
  temp=temp->next;
 }
 if(compare(temp->edg->outNode->id,j,0,0))
 {
  return temp->edg;
 }
 return NULL;
}
