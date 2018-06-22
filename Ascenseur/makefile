CC = gcc
CFLAGS = -Wall -I /home/babin7u/Documents/Mines_Nancy/2A_IS/makefile/makefile/Ascenseur/TMPRepo/include
# ../ncurses/include -> si on y arrive (lol)
LDFLAGS = -L /home/babin7u/Documents/Mines_Nancy/2A_IS/makefile/makefile/Ascenseur/TmpRepo/lib -lncurses

PROG = elevator

all : $(PROG)

clean :
	rm *.o

$(PROG) : main.o Ascenseur.o
	$(CC) $(LDFLAGS) -o $@ main.o Ascenseur.o

main.o : main.c Ascenseur.h
	$(CC) $(CFLAGS) -o $@ -c $<

ascenseur.o : Ascenseur.c Ascenseur .h
	$(CC) $(CFLAGS) -o $@ -c $<

#export TERM=xterm-color
