#include "main.h"

/**
 * selector - selects the correct function invoked
 * by the user that calls it
 * @format: dimension of the parameters passed
 * @i: pointer to the format position
 * @list: variable to print
 * Return: total number of characters
 */

int selector(int *i, const char *format, va_list list)
{
	int count = 0;
	int k = *i, l = 0;

	base_t ops[] = {
		{"c", char_spec},
		{"s", string_spec},
		{"%", mod_spec},
		{NULL, NULL}
	};

	int c = 0;

	while (c < 10)
	{
		if (*(ops[c].op) == format[k + 1])
		{
			count += ops[c].f(list);
			*i += 1;
		}
		else
		{
			l++;
		}
		c++;
	}
	if (l == 10)
	{
		_putchar(format[k]);
		count++;
	}

	return (count);
}
