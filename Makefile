# -*- MakeFile -*-

CC=gcc
CFLAGS= -Wall -pedantic -g -O0

all: calc

calc: main.o calculate.o
	$(CC) -o calc $(CFLAGS) main.o calculate.o -lm

main.o: main.c calculate.h
	$(CC) -c  $(CFLAGS) main.c

calculate.o: calculate.c calculate.h
	$(CC) -c  $(CFLAGS) calculate.c

clean:
	rm -rf *.o calc

