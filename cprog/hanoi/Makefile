CC = gcc
TARGET = hanoi
OBJECTS = hanoi.h main.o move.o get.o

$(TARGET) : $(OBJECTS)
	$(CC) -o $@ $^

main.o : main.c
	gcc -c -o main.o main.c

move.o : move.c
	gcc -c -o move.o move.c

get.o : get.c
	gcc -c -o get.o get.c

clean :
	rm *.o hanoi
