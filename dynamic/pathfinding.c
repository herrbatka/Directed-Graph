#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

bool pathfinding(char i[], char j[], steps *tabl, steps *final, nodes ptr)
{
 steps nowy;
 if(compare(i,j,0,0))
 {
  nowy=(steps)malloc(sizeof(struct Path));
  nowy->next=*final;
  strcpy(nowy->id,i);
  *final=nowy;
  return true;
 }
 nowy=(steps)malloc(sizeof(struct Path));
 nowy->next=*tabl;
 strcpy(nowy->id,i);
 *tabl=nowy;

 lists temp=node_by_id(ptr,i)->outEdges;
 while(temp!=NULL)
 {
  if(!contain(*tabl,temp->edg->outNode->id))
  {
   if(pathfinding(temp->edg->outNode->id,j,tabl,final,ptr)==true)
   {
    nowy=(steps)malloc(sizeof(struct Path));
    nowy->next=*final;
    strcpy(nowy->id,i);
    *final=nowy;
    return true;
   }
  }
  temp=temp->next;
 }
 return false;
}
