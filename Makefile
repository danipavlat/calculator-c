CC = gcc
CFLAGS = -Wall
DEPS = operations.h operations.c tests.h tests.c Calculator.c
OBJ = operations.o tests.o Calculator.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
Calculator: $(OBJ)
	gcc $(CFLAGS) -o $@ $^