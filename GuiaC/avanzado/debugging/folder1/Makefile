CC = gcc
CFLAGS = -g -Wall -Wextra -pedantic
TARGET = code

all: $(TARGET)

hola: hola.o
	$(CC) $(CFLAGS) $^ -o $@

hola.o: hola.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
