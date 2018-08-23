BIN = prog
SRC = main.c lexer.c token.c

build: $(SRC) clean
	gcc -Wall -o $(BIN) $(SRC)

.PHONY: clean
clean:
	rm -rf $(BIN)