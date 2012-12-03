# Makefile

all: libmoja.so

libmoja.so: arc_between.c compare.c confirmexit.c contain.c delete_edge.c delete_list.c delete_node.c duzelitery.c edge_by_id.c help.c insert_edge.c insertlist.c insert_node.c neighbours.c node_by_id.c pathfinding.c pre_pathfinding.c print_edges.c print_list.c print_nodes.c readfromstring.c superfree.c
	gcc -fPIC -c arc_between.c
	gcc -fPIC -c compare.c
	gcc -fPIC -c confirmexit.c
	gcc -fPIC -c contain.c
	gcc -fPIC -c delete_edge.c
	gcc -fPIC -c delete_list.c
	gcc -fPIC -c delete_node.c
	gcc -fPIC -c duzelitery.c
	gcc -fPIC -c edge_by_id.c
	gcc -fPIC -c help.c
	gcc -fPIC -c insert_edge.c
	gcc -fPIC -c insertlist.c
	gcc -fPIC -c insert_node.c
	gcc -fPIC -c neighbours.c
	gcc -fPIC -c node_by_id.c
	gcc -fPIC -c pathfinding.c
	gcc -fPIC -c pre_pathfinding.c
	gcc -fPIC -c print_edges.c
	gcc -fPIC -c print_list.c
	gcc -fPIC -c print_nodes.c
	gcc -fPIC -c readfromstring.c
	gcc -fPIC -c superfree.c
	gcc -shared -o libmoja.so arc_between.o compare.o confirmexit.o contain.o delete_edge.o delete_list.o delete_node.o duzelitery.o edge_by_id.o help.o insert_edge.o insertlist.o insert_node.o neighbours.o node_by_id.o pathfinding.o pre_pathfinding.o print_edges.o print_list.o print_nodes.o readfromstring.o superfree.o 

clean:
	rm -f *.o libmoja.so
