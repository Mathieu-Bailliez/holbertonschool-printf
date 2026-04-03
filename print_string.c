#include "main.h"

/**
 * print_string - prints a string
 * @list: argument list
 *
 * Return: number of characters printed
 */
int print_string(va_list list)
{
	char *str;
	int i = 0;

	str = va_arg(list, char *);

	if (!str)
		str = "(null)";

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
