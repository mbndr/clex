#pragma once

typedef enum {
    TOKEN_IDENT,
    TOKEN_KEYWORD,
    TOKEN_EOF,
    TOKEN_WS
} token_type_t;

typedef struct {
    token_type_t type;
    char *value;
} token_t;

void token_print(const token_t *);