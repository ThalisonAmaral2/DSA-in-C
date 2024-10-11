# Define the compiler
CC = gcc

# Define the target executable
TARGET = test_program.out

# Default target to build the executable
all: $(TARGET)

# Rule to compile the source files into the final executable
$(TARGET): fibo.c test.c
	$(CC) -o $(TARGET) fibo.c test.c

# Phony target to clean up the build files
clean:
	rm -f $(TARGET)
