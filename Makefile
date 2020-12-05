CC = gcc
CFLAGS = -Wall
DEPS = addition.h addition.c subtraction.h subtraction.c multiplication.h multiplication.c division.h division.c modulo.h modulo.c tests.h tests.c Calculator.c
OBJ = addition.o subtraction.o multiplication.o division.o modulo.o tests.o Calculator.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<
	
Calculator: $(OBJ)
	gcc $(CFLAGS) -o $@ $^