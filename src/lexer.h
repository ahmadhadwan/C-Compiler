#ifndef __LEXER_H__
#define __LEXER_H__

typedef struct {
    char *src;
} lexer_t;

lexer_t *lexer_create(char *src);

#endif /* __LEXER_H__ */
