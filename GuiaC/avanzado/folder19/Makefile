CC = gcc
CFLAGS = -g -Wall -Wextra -pedantic
TARGET = code

all: $(TARGET)

toUpper: toUpper.o
	$(CC) $(CFLAGS) $^ -o $@

toUpper.o: toUpper.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
