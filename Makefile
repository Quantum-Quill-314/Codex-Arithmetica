CC = gcc
# The magic flag: -I tells the compiler where to hunt for header files.
CFLAGS = -Wall -Wextra -Isrc/grimoire

BUILD_DIR = build
TARGET = $(BUILD_DIR)/test_suite

# We define the intermediate object files
OBJS = $(BUILD_DIR)/grimoire.o $(BUILD_DIR)/test_grim.o

all: $(TARGET)

# 1. The Linking Phase: Binds the object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# 2. The Compilation Phase: Translates grimoire.c into a machine-code object
$(BUILD_DIR)/grimoire.o: src/grimoire/grimoire.c
	$(CC) $(CFLAGS) -c src/grimoire/grimoire.c -o $(BUILD_DIR)/grimoire.o

# 3. The Compilation Phase: Translates the test file into a machine-code object
$(BUILD_DIR)/test_grim.o: tests/test_grim.c
	$(CC) $(CFLAGS) -c tests/test_grim.c -o $(BUILD_DIR)/test_grim.o

# The execution shortcut
run: all
	./$(TARGET)

# The cleansing spell
clean:
	rm -f $(BUILD_DIR)/*