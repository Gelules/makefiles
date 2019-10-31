CC = gcc
CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
OBJ = program.o
BIN = program

.PHONY: all clean check

all: $(BIN)

$(BIN): $(OBJ)

clean:
	$(RM) $(OBJ) $(BIN)

check: $(BIN)
	./tests.sh
