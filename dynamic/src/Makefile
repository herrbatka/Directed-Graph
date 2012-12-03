# Makefile

all: ../bin/program

../bin/program: main.o
	gcc main.o -L../lib -lmoja -o ../bin/program

main.o: main.c
	gcc main.c -I../include -c

clean:
	rm -f main.o ../bin/program

