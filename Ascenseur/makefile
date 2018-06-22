CC = gcc
CFLAGS = -Wall
LDFLAGS = 

PROG = elevator

all : $(PROG)

$(PROG) : main.o Ascenseur.o
	$(CC) $(LDFLAGS) -o $@ main.o Ascenseur.o

main.o : main.c Ascenseur.h
	$(CC) $(CFLAGS) -o $@ -c $<

ascenseur.o : Ascenseur.c Ascenseur .h
	$(CC) $(CFLAGS) -o $@ -c $<
