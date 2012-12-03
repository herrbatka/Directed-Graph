#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "contain.h"
#include "compare.h"

bool contain(steps lista, char b[])
{
 steps temp=lista;
 while(temp!=NULL)
 {
  if(compare(temp->id,b,0,0))
  {
   return true;
  }
  temp=temp->next;
 }
 return false;
}
