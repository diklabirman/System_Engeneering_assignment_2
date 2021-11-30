CC = gcc
CFLAGS = -Wall
TARGETS = connections


all: $(TARGETS)

.c.o:
	$(CC) $(CFLAGS) -c $<


connections: my_mat.o main.o
	$(CC) $(CFLAGS) -o connections $^

main.o: main.c my_mat.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f *.o *.a *.os