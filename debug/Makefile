CFLAGS = -std=c99 -pedantic -Wall -Wextra -Werror
MAIN = src/program.o
OBJ = src/calculator.o
TESTSOBJ = tests/tests.o
BIN = src/program
TARGET = program
TESTBIN = tests/tests
TESTSUITE = testsuite

.PHONY: all clean check gdb asan

all: $(BIN)
	@mv $< $(TARGET)

$(BIN): $(MAIN) $(OBJ)

clean:
	$(RM) $(OBJ) $(BIN) $(TESTSOBJ) $(TESTSUITE) $(TARGET) $(MAIN)

check: CFLAGS += -Isrc/
check: LDFLAGS += -lcriterion
check: $(OBJ) $(TESTSOBJ)
	$(CC) $(LDFLAGS) $^ -o $(TESTSUITE)
	@./$(TESTSUITE) --verbose -j1

gdb:CFLAGS += -g
gdb: all

asan: LDFLAGS += -fsanitize=address
asan: all
