#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct base - struct token
 * @spec: the identifier argument
 * @f: base function
 */
typedef struct base
{
	char *op;
	int (*f)(va_list p);
} base_t;

int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list list);

int op_char(va_list p);
int op_string(va_list p);
int op_percent(va_list __attribute__((unused)) p);
int op_numbers(va_list arg);

int _putchar(char c);

#endif
