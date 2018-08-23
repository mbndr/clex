#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#include "token.h"
#include "lexer.h"

int main(int argc, char const *argv[])
{
    FILE *file;
    lexer_t *lexer;
    token_t *token;

    file = fopen("../test.txt", "r");

    if (!file) {
        perror("File opening failed");
        return EXIT_FAILURE;
    }

    lexer = malloc(sizeof(lexer_t));
    lexer->file = file;

    token = lexer_scan(lexer);

    if (token) {
        token_print(token);
    }

    if (ferror(file)) {
        puts("I/O error when reading");
    } else if (feof(file)) {
        puts("End of file reached");
    }

    fclose(file);

    return 0;
}
