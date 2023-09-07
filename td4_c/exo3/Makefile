CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS = 
OBJ = exo_1.o jeu.o

exo_1: $(OBJ) 
	$(CC) $(OBJ) $(LDFLAGS) -o exo_1

jeu.o: jeu.c jeu.h
exo_1.o : exo_1.c jeu.h

clean :
		rm -f $(OBJ) exo_1