CC=gcc
CFLAGS = -Werror -ggdb -O0 # use specific flags for gdb

src = $(wildcard *.c)
obj = $(src:.c=.o)

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