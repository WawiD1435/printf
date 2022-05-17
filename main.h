#ifndef _MAIN_H_
#define _MAIN_H_

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
	char *spec;
	int (*f)(va_list p);
} base_t;

int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list list);

int char_spec(va_list p);
int string_spec(va_list p);
int mod_spec(va_list __attribute__((unused)) p);

int _putchar(char c);

#endif
