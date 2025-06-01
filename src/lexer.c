#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexer.h"

lexer_t *lexer_create(char *src)
{
    lexer_t *l = malloc(sizeof(lexer_t));
    l->src = strdup(src);
    return l;
}
