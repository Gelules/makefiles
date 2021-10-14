CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
OBJ = src/program.o
BIN = program

.PHONY: all clean check

all: $(BIN)

$(BIN): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) $(OBJ) $(BIN)

check: $(BIN)
	tests/tests.sh
