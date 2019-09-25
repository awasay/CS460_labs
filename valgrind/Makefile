CC=gcc -std=c99
# CFLAGS = -D_GNU_SOURCE -ggdb3 -O0
CFLAGS = -D_GNU_SOURCE -ggdb3 -O0 # use specific flags for valgrind

src = $(wildcard *.c)
obj = $(src:.c=.o)

default: e1 e2 e3

e1: e1.o
	$(CC) -o $@ $^ $(CCFLAGS)

e2: e2.o
	$(CC) -o $@ $^ $(CCFLAGS)

e3: e3.o
	$(CC) -o $@ $^ $(CCFLAGS)

.PHONY: clean
clean:
	rm -f $(obj) myprog
	rm -f e1
	rm -f e2
	rm -f e3