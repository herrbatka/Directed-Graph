# Makefile

all: program

arc_between.o: arc_between.c structures.h node_by_id.h compare.h
	gcc -c arc_between.c

compare.o: compare.c
	gcc -c compare.c

confirmexit.o: confirmexit.c
	gcc -c confirmexit.c

contain.o: contain.c structures.h compare.h
	gcc -c contain.c

delete_edge.o: delete_edge.c structures.h compare.h delete_list.h
	gcc -c delete_edge.c

delete_list.o: delete_list.c structures.h compare.h
	gcc -c delete_list.c

delete_node.o: delete_node.c structures.h compare.h delete_edge.h
	gcc -c delete_node.c

duzelitery.o: duzelitery.c
	gcc -c duzelitery.c

edge_by_id.o: edge_by_id.c structures.h compare.h
	gcc -c edge_by_id.c

help.o: help.c
	gcc -c help.c

insert_edge.o: insert_edge.c structures.h edge_by_id.h node_by_id.h insertlist.h
	gcc -c insert_edge.c

insertlist.o: insertlist.c structures.h edge_by_id.h
	gcc -c insertlist.c

insert_node.o: insert_node.c structures.h node_by_id.h
	gcc -c insert_node.c

neighbours.o: neighbours.c structures.h node_by_id.h contain.h compare.h
	gcc -c neighbours.c

node_by_id.o: node_by_id.c structures.h compare.h
	gcc -c node_by_id.c

pathfinding.o: pathfinding.c structures.h node_by_id.h contain.h
	gcc -c pathfinding.c

pre_pathfinding.o: pre_pathfinding.c structures.h pathfinding.h node_by_id.h
	gcc -c pre_pathfinding.c

print_edges.o: print_edges.c structures.h
	gcc -c print_edges.c

print_list.o: print_list.c structures.h
	gcc -c print_list.c

print_nodes.o: print_nodes.c structures.h
	gcc -c print_nodes.c

readfromstring.o: readfromstring.c
	gcc -c readfromstring.c

superfree.o: superfree.c structures.h delete_node.h
	gcc -c superfree.c

main.o: main.c structures.h duzelitery.h compare.h readfromstring.h insert_node.h insert_edge.h delete_edge.h delete_node.h print_edges.h print_nodes.h neighbours.h pre_pathfinding.h arc_between.h superfree.h
	gcc -c main.c

libmoja.a: arc_between.o compare.o confirmexit.o contain.o delete_edge.o delete_list.o delete_node.o duzelitery.o edge_by_id.o help.o insert_edge.o insertlist.o insert_node.o neighbours.o node_by_id.o pathfinding.o pre_pathfinding.o print_edges.o print_list.o print_nodes.o readfromstring.o superfree.o
	ar r libmoja.a arc_between.o compare.o confirmexit.o contain.o delete_edge.o delete_list.o delete_node.o duzelitery.o edge_by_id.o help.o insert_edge.o insertlist.o insert_node.o neighbours.o node_by_id.o pathfinding.o pre_pathfinding.o print_edges.o print_list.o print_nodes.o readfromstring.o superfree.o

program: main.o libmoja.a
	gcc -o program main.o libmoja.a

clean: 
	rm -f *.o *.a program

