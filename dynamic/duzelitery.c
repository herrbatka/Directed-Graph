#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//funkcja zamieniajaca duże litery na małe
void duzelitery(char a[])
{
 int i,j;
 j=0;
 while(a[j]!='\0')
 {
  j++;
 }
 for (i=0;i<j;i++)
 {
  if((a[i]>=65) && (a[i]<=90))
  a[i]+=32;
 }
}
