#include <stdio.h>
#include "token.h"

void token_print(const token_t *t) {
    printf("Token{%d, %s}", t->type, t->value);
}