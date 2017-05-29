CC               = gcc
CFLAGS           = -Wall -Werror
TEST_FLAGS       = -I src -I thirdparty -Wall -Werror
EXECUTABLE       = bin/program
SRC_BUILD_DIR    = build
SRC_DIR          = src
TEST_EXECUTABLE  = bin/test
TEST_OBJ_DIR     = build/test


all: makedir compile test

makedir:
	mkdir -p bin build

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/library.o $(SRC_BUILD_DIR)/curse.o $(SRC_BUILD_DIR)/function.o $(SRC_BUILD_DIR)/life.o $(SRC_BUILD_DIR)/struct.h
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/library.o $(SRC_BUILD_DIR)/function.o $(SRC_BUILD_DIR)/life.o $(SRC_BUILD_DIR)/swtruct.h-o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/library.o: $(SRC_DIR)/library.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/library.h -o $(SRC_BUILD_DIR)/library.o

##$(SRC_BUILD_DIR)/curse.o: $(SRC_DIR)/curse.c
##	$(CC) $(CFLAGS) -c $(SRC_DIR)/curse.c -o $(SRC_BUILD_DIR)/curse.o

$(SRC_BUILD_DIR)/curse.o: $(SRC_DIR)/function.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/function.c -o $(SRC_BUILD_DIR)/function.o

$(SRC_BUILD_DIR)/curse.o: $(SRC_DIR)/life.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/life.h -o $(SRC_BUILD_DIR)/life.o

$(SRC_BUILD_DIR)/struct.o: $(SRC_DIR)/struct.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/struct.h -o $(SRC_BUILD_DIR)/struct.o

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
