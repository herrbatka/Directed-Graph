#ifndef MOJA_H
#define MOJA_H
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

edges arc_between(nodes ptr,char i[], char j[]);
bool compare(char a[], char b[], int i, int j);
bool confirmexit();
bool contain(steps lista, char b[]);
void delete_edge(edges *ptr, char i[]);
void delete_list(lists *ptr, char i[]);
void delete_node(nodes *ptr, edges *ptr2, char i[]);
void duzelitery(char a[]);
edges edge_by_id(edges ptr, char i[]);
void help();
void insert_edge(nodes ptr, edges *ptr2, char i[],char a[],char b[]);
lists insertlist(lists ptr2, edges ptr, char i[]);
void insert_node(nodes *ptr, char i[]);
void neighbours(nodes ptr,char i[]);
nodes node_by_id(nodes ptr, char i[]);
bool pathfinding(char i[], char j[], steps *tabl, steps *final, nodes ptr);
void pre_pathfinding(char i[], char j[], nodes ptr);
void print_edges(edges ptr);
void print_list(lists ptr);
void readfromstring(char a[], int *i, char* id);
void print_nodes(nodes ptr);
void superfree(nodes *ptr, edges *ptr2);
#endif
