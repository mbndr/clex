#include "token.h"
#include "lexer.h"
#include "util.h"

// return the next token
token_t *lexer_scan(lexer_t *l) {
    int c;
    while ( (c = fgetc(l->file)) != EOF ) {
        
        if (is_whitespace(c)) {
            // TODO here
        }

    }


    return NULL;
}

token_t *lexer_scan_whitespace(lexer_t *l) {
    return NULL; // TODO
}

int lexer_read(lexer_t *l) {
    return fgetc(l->file);
}

void lexer_unread(lexer_t *l) {
    fseek(l->file, -1, SEEK_CUR);
}