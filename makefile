
CC               = gcc
CFLAGS           = -I src/CFiles -I src/include -Wall -Werror
TEST_FLAGS       = -I thirdparty -I src/include -I src/CFiles -Wall -Werror
EXECUTABLE       = bin/program
SRC_BUILD_DIR    = build
SRC_DIR          = src
SRC_source	 = src/source
SRC_CFiles 	 = src/CFiles
SRC_include 	 = src/incldue
TEST_EXECUTABLE  = bin/test
TEST_OBJ_DIR     = build/test


all: makedir compile test

makedir:
	mkdir -p bin build

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/function.o $(SRC_BUILD_DIR)/life.o $(SRC_BUILD_DIR)/rules.o 
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/function.o $(SRC_BUILD_DIR)/life.o $(SRC_BUILD_DIR)/rules.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_source)/main.c
	$(CC) $(CFLAGS) -c $(SRC_source)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/function.o: $(SRC_CFiles)/function.c
	$(CC) $(CFLAGS) -c $(SRC_CFiles)/function.c -o $(SRC_BUILD_DIR)/function.o

$(SRC_BUILD_DIR)/life.o: $(SRC_CFiles)/life.c
	$(CC) $(CFLAGS) -c $(SRC_CFiles)/life.c -o $(SRC_BUILD_DIR)/life.o

$(SRC_BUILD_DIR)/rules.o: $(SRC_CFiles)/rules.c
	$(CC) $(CFLAGS) -c $(SRC_CFiles)/rules.c -o $(SRC_BUILD_DIR)/rules.o

$(SRC_BUILD_DIR)/curse.o: $(SRC_CFiles)/curse.c
	$(CC) $(CFLAGS) -c $(SRC_CFiles)/curse.c -o $(SRC_BUILD_DIR)/curse.o


test:mktest test-compile

mktest:
	mkdir -p bin build/test

test-compile: $(TEST_OBJ_DIR)/main.o  $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/rules.o
	$(CC) $(TEST_OBJ_DIR)/main.o  $(TEST_OBJ_DIR)/validation_test.o $(SRC_BUILD_DIR)/rules.o -o $(TEST_EXECUTABLE)

$(TEST_OBJ_DIR)/main.o: test/main.c
	$(CC) $(TEST_FLAGS) -c test/main.c -o $(TEST_OBJ_DIR)/main.o


$(TEST_OBJ_DIR)/validation_test.o: test/validation_test.c
	$(CC) $(TEST_FLAGS) -c test/validation_test.c -o $(TEST_OBJ_DIR)/validation_test.o


.PHONY : clean
clean:
	rm -rf build/ bin/
