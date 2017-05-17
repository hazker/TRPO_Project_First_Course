CC               = gcc
CFLAGS           = -Wall -Werror
TEST_FLAGS       = -I src -I thirdparty -Wall -Werror
EXECUTABLE       = bin/program
SRC_BUILD_DIR    = build/src
SRC_DIR          = src
TEST_EXECUTABLE  = bin/test
TEST_OBJ_DIR     = build/test


all: makedir compile test

makedir:
	mkdir -p bin build/src

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/library.o
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/library.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/library.o: $(SRC_DIR)/library.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/library.c -o $(SRC_BUILD_DIR)/library.o

.PHONY : clean
clean:
	rm -rf build/ bin/
