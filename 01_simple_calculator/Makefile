# =====================
# Compiler and flags
CC = gcc
CFLAGS = -Wall -std=c17 -Iinc

# =====================
# Directories
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# =====================
# Source and object files
SOURCES = $(wildcard $(SRC_DIR)/*.c)
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SOURCES))
TARGET = $(BIN_DIR)/app.out

# =====================
# Disable implicit rules to avoid warning
.SUFFIXES:

# =====================
# Build executable
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $^ -o $@

# =====================
# Compile .c to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# =====================
# Clean build files
clean:
	rm -f $(OBJ_DIR)/*.o $(TARGET)
