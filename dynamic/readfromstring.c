#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//"wyciąganie" id węzłów i krawędzi z poleceń
void readfromstring(char a[], int *i, char* id)
{
 int j;
 char slowo[50];
 for( j=0; j < 50; j++ )
 {
  slowo[j] = '\0';
  id[j] = '\0';
 }
 j=0;
 while((a[j+*i]!='\0'))
 {
  if(a[j+*i]==' ')
  {
   break;
  }
  slowo[j]=a[j+*i];
  j++;
 }
 *i=*i+j;
 j=0;
 strcpy(id,slowo);
}
