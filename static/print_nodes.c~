#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "print_nodes.h"

//funkcja drukująca węzły
void print_nodes(nodes ptr)
{
 printf("Zadeklarowane węzły: ");
 if(ptr==NULL)
 {
  printf(" brak\n");
  return;
 }
 while(ptr != NULL)
 {
  printf("%s(out:", ptr->id);
  print_list(ptr->outEdges);
  printf("; in:");
  print_list(ptr->inEdges);
  printf(") ");
  ptr=ptr->next;
 }
 printf("\n");
}

