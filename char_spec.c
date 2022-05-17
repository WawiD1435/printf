#include "main.h"

/**
 * char_spec - prints a character
 * @p: argument pointer
 * Return: 1
 */

int char_spec(va_list p)
{
	int container = (char)va_arg(p, int);

	_putchar(container);

	return (1);
}
