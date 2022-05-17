#include <main.h>

/**
 * _printf - custom printf function that produce
 * output according to format
 * @format: A variable points to a list of arguments
 * @...: The rest of the arguments
 *
 * Return: the length of string printed(excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, count = 0;

	va_start(list, format);

	if (!format || format[i] == '\n' || format[i] == '/0' ||
	  (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			count += selector(&i, format, list);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
