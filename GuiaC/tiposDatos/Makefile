CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = longDatos

all: $(TARGET)

longDatos: longDatos.o
	$(CC) $(CFLAGS) $^ -o $@

longDatos.o: longDatos.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
