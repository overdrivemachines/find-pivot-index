# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

find-pivot-index: find-pivot-index.o
	$(CC) $(CFLAGS) -o find-pivot-index find-pivot-index.o

find-pivot-index.o: find-pivot-index.cpp
	$(CC) $(CFLAGS) -c find-pivot-index.cpp

clean:
	rm -rf find-pivot-index find-pivot-index.o
