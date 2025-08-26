CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = persona

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) -g $(CFLAGS) $^ -o $@

$(TARGET).o: $(TARGET).c 
	$(CC) -g $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

debug:
	gdb $(TARGET)


run:
	./$(TARGET)

.PHONY: all clean debug run
