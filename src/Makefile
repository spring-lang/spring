CFLAGS=-Wall -g
CC=gcc

OBJS=token.o parser.o 

spring: $(OBJS)
	CC -o spring $(OBJS)

test:
	echo "test"

clean:
	- rm spring $(OBJS)
	- rm -rf *.dSYM
	find . -executable -type f|xargs rm -rf