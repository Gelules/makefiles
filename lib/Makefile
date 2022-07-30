CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
OBJ = src/program.o
TESTS_OBJ = tests/tests.o
STATIC = libprogram.a
SHARED = libprogram.so
BIN = program

.PHONY: all static shared distclean clean check

all: $(STATIC) $(SHARED)

static: $(STATIC)

shared: $(SHARED)

$(STATIC): $(OBJ)
	$(AR) csr $@ $^

$(SHARED): $(OBJ)
	$(CC) -fPIC -shared -o $@ $^

$(BIN): $(OBJ) $(TESTS_OBJ)
	$(CC) $^ -o $(BIN)

clean:
	$(RM) $(OBJ) $(TESTS_OBJ)

distclean: clean
	$(RM) $(STATIC) $(SHARED) $(BIN)

check: $(BIN) $(STATIC) $(SHARED)
	tests/tests.sh
	@$(RM) $(BIN)
	@$(CC) $(TESTS_OBJ) $(STATIC) -o $(BIN)
	tests/tests.sh
	@$(RM) $(BIN)
	@$(CC) -o $(BIN) -L. $(OBJ) $(TESTS_OBJ) -l$(BIN)
	tests/tests_shared.sh
	@$(RM) $(BIN)
