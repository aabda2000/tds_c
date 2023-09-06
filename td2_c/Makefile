# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS = 
OBJ = mem.o common.o show.o

spin_app: $(OBJ) 
	$(CC) $(OBJ) $(LDFLAGS) -o spin_app

common.o: common.c common.h
show.o : show.c show.h
mem.o : mem.c common.h show.h

clean :
		rm -f $(OBJ) spin_app