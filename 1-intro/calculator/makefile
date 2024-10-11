# Define the compiler
CC = gcc

# Define the target executable
TARGET = calculator.out

# Default target to build the executable
all: $(TARGET)

# Rule to compile the source files into the final executable
$(TARGET): src/basics.c src/main.c
	$(CC) -I include -o $(TARGET) src/basics.c src/main.c

# Phony target to clean up the build files
clean:
	rm -f $(TARGET)
