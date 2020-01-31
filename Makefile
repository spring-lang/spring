CFLAGS=-Wall -g
CC=gcc

SRCS:=$(wildcard ./src/*.c)

test:
	echo "test"

clean:
	- rm -rf *.dSYM
	find . -executable -type f|xargs rm -rf