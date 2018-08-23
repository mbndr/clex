#pragma once

// TODO split to h and c file

#include <stdbool.h>

bool is_whitespace(int);

bool is_whitespace(int c) {
    return c == ' ' || c == '\t' || c == '\n';
}