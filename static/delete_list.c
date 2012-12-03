#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structures.h"
#include "delete_list.h"
#include "compare.h"

//funkcja usuwająca elemnent listy o zadanym id
void delete_list(lists *ptr, char i[])
{
 lists prev;
 lists temp;
 lists next;
 prev=NULL;
 temp=*ptr;
 while((temp != NULL)&&(!compare(temp->edg->id,i,0,0)))
 {
  prev=temp;
  temp=temp->next;
 }
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
}
