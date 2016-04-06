CFLAGS=-Wall -g -DNDEBUG

all: ex22_main

ex22_main: ex22.o
	cc ex22_main.c ex22.o -o ex22_main
ex22.o: 
	cc -c -o ex22.o ex22.c

clean:
	rm -f *.o ex22_main

.PHONY: clean
