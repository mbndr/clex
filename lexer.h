#pragma once

#include <stdio.h>

typedef struct {
    FILE *file;
} lexer_t;

token_t *lexer_scan(lexer_t *);
token_t *lexer_scan_whitespace(lexer_t *);

int lexer_read(lexer_t *);
void lexer_unread(lexer_t *);