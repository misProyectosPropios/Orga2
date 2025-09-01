CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = bits

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) -g $(CFLAGS)  $^ -o $@

$(TARGET).o: $(TARGET).c 
	$(CC) -g $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean
