CC = gcc
TARGET = pgm
OBJECTS = pgm.h main.o fct.o wrt.o


$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

main.o : main.c
	gcc -c -o main.o main.c

fct.o : fct.c
	gcc -c -o fct.o fct.c

wrt.o : wrt.c
	gcc -c -o wrt.o wrt.c

clean :
	rm *.o pgm
