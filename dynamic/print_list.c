#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "moja.h"

//funkcja drukująca listę krawędzi dla wierzchołków
void print_list(lists ptr)
{
 if(ptr==NULL)
 {
  printf(" brak");
 }
 while(ptr != NULL)
 {
  printf(" %s", ptr->edg->id);
  ptr=ptr->next;
 }
}
