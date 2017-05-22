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

mktest:
	mkdir -p bin build/test

test-compile: $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/library_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/library.o
	$(CC) $(TEST_OBJ_DIR)/main.o $(TEST_OBJ_DIR)/library_test.o $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/library.o -o

$(TEST_OBJ_DIR)/main.o: test/main.c
	$(CC) $(TEST_FLAGS) -c test/main.c -o $(TEST_OBJ_DIR)/library_test.o

$(TEST_OBJ_DIR)/library_test.o: test/library_test.c
	$(CC) $(TEST_FLAGS) -c test/library_test.c -o $(TEST_OBJ_DIR)/library_test.o

$(TEST_OBJ_DIR)/validation_test.o: test/validation_test.c
	$(CC) $(TEST_FLAGS) -c test/validation_test.c -o $(TEST_OBJ_DIR)/validation_test.o


.PHONY : clean
clean:
	rm -rf build/ bin/
