SOURCE = mjrec.c
OBJECT = test_gf.o rscoder.o rs.o
TARGET = mjgps mjrec
TARGETWIN = mjgpswin mjrecwin

CC = gcc 

#Cygwin version
CWFLAGS = -O2  -mtune=i486 -v -fomit-frame-pointer -pipe -lcrypt /bin/cygcrypt-0.dll 

#Linux Version
CFLAGS = -O2  -mtune=i486 -v -fomit-frame-pointer -pipe -lcrypt 
  
LDFLAGS = $(CFLAGS) -s

.c.o:
	$(CC) -c $(CFLAGS) $<

all: $(TARGET)

mjgps: mjgps.h mjgps.c
	$(CC) $(CFLAGS) -lcrypt -s -o $@ mjgps.c
	strip $@

mjrec: mjgps.h mjrec.c
	$(CC) $(CFLAGS) -static -s -N -o $@ mjrec.c
	strip $@

cygwin: $(TARGETWIN)

mjgpswin: mjgps.h mjgps.c
	$(CC) $(CWFLAGS) -lcrypt -s -o $@ mjgps.c
	strip $@

mjrecwin: mjgps.h mjrec.c
	$(CC) $(CWFLAGS) -s -o $@ mjrec.c
	strip $@

install: all
	install -c -s -g bin -m 700 $(TARGET) /usr/local/games/bin

format:
	indent -bad -bap -bli0 -cdb -psl -sc -ss -i4 *.c
	rm -f *.{c,h}~

clean:
	rm -f $(TARGET) $(OBJECT) *.a *~ *.o *.exe core
