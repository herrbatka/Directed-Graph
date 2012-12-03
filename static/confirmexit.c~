#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "confirmexit.h"

//funkcja monitująca o potwierdzenie wyjścia
bool confirmexit()
{
 char a;
 printf("Na pewno wyjść? [t/n] ");
 while ((a = getc(stdin)) != '\n')
 if((a=='t')||(a=='T'))
 {
  return true;
 }
 return false;
}
