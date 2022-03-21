/*
** EPITECH PROJECT, 2021
** Bistromatic Header File
** File description:
** Xavier VINCENT - Max PEIXOTO - Hugo DUBOIS
*/

#ifndef BISTRO_H_
    #define BISTRO_H_

    #define OP_OPEN_PARENT_IDX 0
    #define OP_CLOSE_PARENT_IDX 1
    #define OP_PLUS_IDX 2
    #define OP_SUB_IDX 3
    #define OP_NEG_IDX 3
    #define OP_MULT_IDX 4
    #define OP_DIV_IDX 5
    #define OP_MOD_IDX 6

    #define EXIT_USAGE 84
    #define EXIT_BASE 84
    #define EXIT_SIZE_NEG 84
    #define EXIT_MALLOC 84
    #define EXIT_READ 84
    #define EXIT_OPS 84
    #define EXIT_DUPLICATE 84
    #define EXIT_EXPR 84
    #define EXIT_DIVBY0 84

    #define SYNTAX_ERROR_MSG "syntax error"
    #define ERROR_MSG "error"
    #define DIVBY0_ERROR_MSG "div by 0 error"

int go_next_number(char **str_ptr);
int my_strtol(char *str, char **endptdr);
int summands(char **str_ptr);
int factors(char **str_ptr);
void check_char(char const *str1, char const *str2, int i, int j);
void check_duplicate_char(char const *str);
void check_ops(char const *ops);
void check_base(char const *b, char const *o);
void check_expr(char const const *expr, int size);
void check_parentheses(char const *expr);
void check_invalid_expr(char const *expr);
void check_empty_expr(char const *expr, int size);
int check_div_by_o(char *expr);

#endif /* !BISTRO_H_ */
