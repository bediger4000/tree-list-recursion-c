#CFLAGS = -I. -Wall -g 
CC = lcc
CFLAGS = -I. 


OBJS = node.o tree.o convert.o list.o

all: tree_test list_test tree_convert

convert.o: convert.c node.h convert.h
node.o: node.c node.h
tree.o: tree.c tree.h node.h
list.o: list.c list.h node.h
tree_test.o: tree_test.c tree.h node.h

tree_test: tree_test.o node.o tree.o
	$(CC) $(CFLAGS) -o tree_test tree_test.o node.o tree.o

list_test: list_test.o node.o list.o
	$(CC) $(CFLAGS) -o list_test list_test.o node.o list.o

tree_convert: tree_convert.o node.o tree.o list.o convert.o
	$(CC) $(CFLAGS) -o tree_convert tree_convert.o  node.o tree.o list.o convert.o

clean:
	-rm -rf *.o *.a *core
	-rm -rf tree_test list_test tree_convert
