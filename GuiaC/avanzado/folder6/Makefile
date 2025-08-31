CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = referencia

all: $(TARGET)

referencia: referencia.o
	$(CC) $(CFLAGS) $^ -o $@

referencia.o: referencia.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
