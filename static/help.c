#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "help.h"

//funkcja wyświetlająca pomoc
void help()
{
 printf("Program do modelowania grafów skierowanych. Dostępne polecenia:\n");
 printf("\"insert node ID\" wstawia węzeł o identyfikatorze ID (gdzie ID musi być identyfikatorem numerycznym)\n");
 printf("\"delete node ID\" usuwa węzeł o identyfikatorze ID (j.w.)\n");
 printf("\"insert arc ID from ID1 to ID2\" tworzy krawędź o identyfikatorze ID od węzła ID1 do węzła ID2 (j.w.)");
 printf("\"delete arc ID\" usuwa krawędź o identyfikatorze ID (j.w.)\n");
 printf("\"nodes\" drukuje listę węzłów\n");
 printf("\"arcs\" drukuje listę krawędzi\n");
 printf("\"exit\" kończy działanie programu \n");
}
