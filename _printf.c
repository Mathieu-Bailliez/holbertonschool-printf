#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list list;

	if (!format)
		return (-1);

	va_start(list, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += handle_print(format, &i, list);
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(list);
	return (count);
}
