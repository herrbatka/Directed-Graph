#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <moja.h>

//właściwa część programu
int main()
{
 struct Node *ptr;
 ptr=NULL;
 struct Edge *ptr2;
 ptr2=NULL;
 char instrukcja[50];
 int i;
 char a[50],b[50],c[50];
 help();
 printf("\n");
 while(true)
 {
  fgets(instrukcja, 50, stdin);
  for(i=0;i<50;i++)
  {
   if(instrukcja[i]=='\n')
   {
    instrukcja[i]='\0';
    break;
   }
  }
  duzelitery(instrukcja);
  if(compare("insert node *", instrukcja, 0,0))
  {
   i=12;
   readfromstring(instrukcja, &i,a);
   insert_node(&ptr,a);
  }
  else if(compare("insert arc * from * to *", instrukcja, 0,0))
  {
   i=11;
   readfromstring(instrukcja, &i,a);
   i+=6;
   readfromstring(instrukcja, &i,b);
   i+=4;
   readfromstring(instrukcja, &i,c);
   insert_edge(ptr,&ptr2,a,b,c);
  }
  else if(compare("delete node *", instrukcja, 0,0))
  {
   i=12;
   readfromstring(instrukcja, &i,a);
   delete_node(&ptr,&ptr2,a);
  }
  else if(compare("delete arc *", instrukcja, 0,0))
  {
   i=11;
   readfromstring(instrukcja, &i,a);
   delete_edge(&ptr2,a);
  }
  else if(compare("nodes", instrukcja, 0,0))
  {
   print_nodes(ptr);
  }
  else if(compare("arcs", instrukcja, 0,0))
  {
   print_edges(ptr2);
  }
  else if(compare("neighbor of *", instrukcja, 0,0))
  {
   i=12;
   readfromstring(instrukcja, &i,a);
   neighbours(ptr,a);
  }
  else if(compare("path from * to *", instrukcja, 0,0))
  {
   i=10;
   readfromstring(instrukcja, &i,a);
   i+=4;
   readfromstring(instrukcja, &i,b);
   pre_pathfinding(a,b,ptr);
  }
  else if(compare("arc from * to *", instrukcja, 0,0))
  {
   i=9;
   readfromstring(instrukcja, &i,a);
   i+=4;
   readfromstring(instrukcja, &i,b);
   if(arc_between(ptr,a,b)!=NULL)
   {
    printf("Węzły łączy krawędź %s\n", arc_between(ptr,a,b)->id);
   }
   else
   {
    printf("Brak połączenia\n");
   }
  }
  else if(compare("help", instrukcja, 0,0))
  {
   help();
  }
  else if(compare("exit", instrukcja, 0,0))
  {
   if(confirmexit())
   {
    superfree(&ptr,&ptr2);
    return 0;
   }
  }
  else
  {
   printf("Nieprawidłowe polecenie!\nSkorzystaj z funkcji \"help\" aby uzyskać listę dostępnych funkcji.\n");
  }
  printf("\n");
 }
 return 0;
}
