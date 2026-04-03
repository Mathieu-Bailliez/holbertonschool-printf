#include "main.h"

/**
 * handle_print - selects the correct function
 * @format: format string
 * @i: index
 * @list: argument list
 *
 * Return: number of characters printed
 */
int handle_print(const char *format, int *i, va_list list)
{
	if (format[*i] == 'c')
		return (print_char(list));

	if (format[*i] == 's')
		return (print_string(list));

	if (format[*i] == '%')
		return (print_percent());

	if (format[*i] == 'd' || format[*i] == 'i')
		return (print_int(list));

	return (_putchar('%') + _putchar(format[*i]));
}
