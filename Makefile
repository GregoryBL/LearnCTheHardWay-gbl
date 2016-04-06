CFLAGS = -Wall -g
FILES = ex1 ex3 ex5 ex6 ex7

all: $(FILES)

clean:
	rm -f $(FILES)

.PHONY: all