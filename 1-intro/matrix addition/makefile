# Define the compiler
CC = gcc

# Define the target executable
TARGET = matrix.out

# Default target to build the executable
all: $(TARGET)

# Rule to compile the source files into the final executable
$(TARGET): main.c matrixAdd.c
	$(CC) -o $(TARGET) main.c matrixAdd.c

# Phony target to clean up the build files
clean:
	rm -f $(TARGET)
