#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja drukujaca krawędzie
void print_edges(edges ptr)
{
 printf("Zadeklarowane krawędzie: ");
 if(ptr==NULL)
 {
  printf(" brak\n");
  return;
 }
 while(ptr != NULL)
 {
 printf("%s(%s->%s) ", ptr->id, ptr->inNode->id, ptr->outNode->id);
 ptr=ptr->next;
 }
 printf("\n");
}
