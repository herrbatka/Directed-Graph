#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

void pre_pathfinding(char i[], char j[], nodes ptr)
{
 if(ptr==NULL)
 {
  printf("Podane węzły muszą istnieć!\n");
  return;
 }
 if(node_by_id(ptr,i)==NULL||node_by_id(ptr,j)==NULL)
 {
  printf("Podane węzły muszą istnieć!\n");
  return;
 }
 steps tabl=NULL;
 steps final=NULL;
 pathfinding(i,j,&tabl,&final,ptr);
 steps temp=final;
 if(temp==NULL)
 {
  printf("Brak połączenia!\n");
  return;
 }
 printf("%s", temp->id);
 temp=temp->next;
 while(temp != NULL)
 {
  printf("->%s", temp->id);
  temp=temp->next;
 }
 printf("\n");
 while(final!=NULL)
 {
  temp=final;
  final=final->next;
  free(temp);
 }
 while(tabl!=NULL)
 {
  temp=tabl;
  tabl=tabl->next;
  free(temp);
 }
}
