CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror -fPIC
OBJ = src/program.o
TESTS_OBJ = tests/tests.o
STATIC = libprogram.a
SHARED = libprogram.so
BIN = tests_program

all: $(STATIC) $(SHARED)

static: $(STATIC)

shared: $(SHARED)

$(STATIC): $(OBJ)
	$(AR) csr $@ $^

$(SHARED): $(OBJ)
	$(CC) $(CFLAGS) -shared -o $@ $^

$(BIN): $(OBJ) $(TESTS_OBJ)
	$(CC) $(CFLAGS) $^ -o $(BIN)

clean:
	$(RM) $(OBJ) $(TESTS_OBJ)

distclean: clean
	$(RM) $(STATIC) $(SHARED) $(BIN)

check: $(BIN) $(STATIC) $(SHARED)
	tests/tests.sh
	$(RM) $(BIN)
	$(CC) $(CFLAGS) $(TESTS_OBJ) $(STATIC) -o $(BIN)
	tests/tests.sh
	$(RM) $(BIN)
	$(CC) $(CFLAGS) -o $(BIN) -L. $(OBJ) $(TESTS_OBJ) -lprogram
	tests/tests_shared.sh
	$(RM) $(BIN)
