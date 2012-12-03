#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct List
{
 struct Edge *edg;
 struct List *next;
};
typedef struct List *lists;

struct Node
{
 char id[50];
 struct List *inEdges;
 struct List *outEdges;
 struct Node *next;
};
typedef struct Node *nodes;

struct Edge
{
 char id[50];
 struct Node *inNode;
 struct Node *outNode;
 struct Edge *next;
};
typedef struct Edge *edges;

struct Path
{
 char id[50];
 struct Path *next;
};
typedef struct Path *steps;
