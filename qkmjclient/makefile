# Makefile of QKMJ

CC=gcc

# OPTS= -finput-charset=UTF-8
OPTS=


qkmj: qkmj.o input.o screen.o socket.o command.o message.o check.o checkscr.o card.o chkmake.o misc.o 
	$(CC) -g qkmj.o input.o screen.o socket.o command.o message.o check.o checkscr.o card.o chkmake.o misc.o -o qkmj -lncurses -ltermcap -lm $(OPTS)


qkmj.o: qkmj.c input.h socket.h mjdef.h
	$(CC) -c qkmj.c -g $(OPTS)

input.o: input.c qkmj.h mjdef.h misc.h
	$(CC) -c input.c -g $(OPTS)

screen.o: screen.c qkmj.h mjdef.h
	$(CC) -c screen.c -g $(OPTS)

socket.o: socket.c qkmj.h mjdef.h
	$(CC) -c socket.c -g $(OPTS)

command.o: command.c qkmj.h mjdef.h
	$(CC) -c command.c -g $(OPTS)

message.o: message.c qkmj.h mjdef.h misc.h
	$(CC) -c message.c -g $(OPTS)

check.o: check.c qkmj.h mjdef.h
	$(CC) -c check.c -g $(OPTS)

checkscr.o: checkscr.c qkmj.h mjdef.h
	$(CC) -c checkscr.c -g $(OPTS)

card.o: card.c qkmj.h mjdef.h 
	$(CC) -c card.c -g $(OPTS)

chkmake.o: chkmake.c qkmj.h mjdef.h
	$(CC) -c chkmake.c -g $(OPTS)

misc.o: misc.c qkmj.h mjdef.h
	$(CC) -c misc.c -g $(OPTS)


clean: 
	rm -f *.o qkmj

